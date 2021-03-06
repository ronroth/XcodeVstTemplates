/*
 *  «PROJECTNAME» - «PROJECTNAME».h
 *  Created by «FULLUSERNAME» on «DATE»
 *  Copyright (c) «YEAR» «ORGANIZATIONNAME», All rights reserved
 */

#ifndef __«PROJECTNAMEASIDENTIFIER»_H
#define __«PROJECTNAMEASIDENTIFIER»_H

#include <stdio.h>

#ifndef __audioeffectx__
#include "audioeffectx.h"
#endif

// TODO: Add your parameters to this list
enum {
  // kFirstParameter = 0,
  kNumParameters
};

// TODO: Change these values to reflect your plugin's configuration
const int kNumPrograms = 0;
const int kNumInputs = 0;
const int kNumOutputs = 2;
const unsigned long kUniqueId = 'XXXX';

class «PROJECTNAMEASIDENTIFIER» : public AudioEffectX {
public:
  «PROJECTNAMEASIDENTIFIER»(audioMasterCallback audioMaster);
  ~«PROJECTNAMEASIDENTIFIER»();
  
  virtual VstInt32 canDo(char *text);
  virtual bool copyProgram(long destination);
  
  virtual VstInt32 getCurrentMidiProgram(VstInt32 channel, MidiProgramName *currentProgram);
  virtual bool getEffectName(char *name);
  virtual bool getMidiKeyName(VstInt32 channel, MidiKeyName *keyName);
  virtual VstInt32 getMidiProgramCategory(VstInt32 channel, MidiProgramCategory *category);
  virtual VstInt32 getMidiProgramName(VstInt32 channel, MidiProgramName *midiProgramName);
  virtual VstInt32 getNumMidiInputChannels();
  virtual VstInt32 getNumMidiOutputChannels();
  virtual bool getOutputProperties(VstInt32 index, VstPinProperties *properties);
  virtual float getParameter(VstInt32 index);
  virtual void getParameterDisplay(VstInt32 index, char *text);
  virtual void getParameterLabel(VstInt32 index, char *label);
  virtual void getParameterName(VstInt32 index, char *text);
  virtual VstPlugCategory getPlugCategory();
  virtual void getProgramName(char *name);
  virtual bool getProgramNameIndexed(VstInt32 category, VstInt32 index, char *text);
  virtual bool getProductString(char *text);
  virtual bool getVendorString(char *text);
  virtual VstInt32 getVendorVersion();
  
  virtual bool hasMidiProgramsChanged(VstInt32 channel);
  
  virtual VstInt32 processEvents(VstEvents *events);
  virtual void processReplacing(float **inputs, float **outputs, VstInt32 sampleFrames);
  
  virtual void setSampleRate(float sampleRate);
  virtual void setParameter(VstInt32 index, float value);
  virtual void setProgram(VstInt32 index);
  virtual void setProgramName(char *name);  
  virtual void setBlockSize(VstInt32 blockSize);
  
private:
};

#endif
