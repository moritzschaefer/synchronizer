#ifndef RECORDER_H
#define RECORDER_H

#include <QObject>
#include <portaudio.h>
/**
  * Class recording and giving PCM samples
  */
class Recorder : public QObject{
    Q_OBJECT
    private:
        PaStream *stream;
    
    public:
        Recorder(int sampleRate, int framesPerBuffer, int numChannels = 1, QObject *parent = 0);
        ~Recorder();
        static void inputStreamCallback(const void *input, 
                      void *output, 
                      unsigned long frameCount, 
                      const PaStreamCallbackTimeInfo* timeInfo,
                      PaStreamCallbackFlags statusFlags,
                      void *recorderObject);
        void emitDataAvailable(unsigned char*);

    signals:
        void dataAvailable(unsigned char *);
}

#endif
