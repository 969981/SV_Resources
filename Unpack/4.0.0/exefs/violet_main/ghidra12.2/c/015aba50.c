/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015aba50; name: FUN_015aba50
 */


void FUN_015aba50(void)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x441cf3bc8b0e1c7a;
  pcStack_28 = "pe_AudioComponent";
  local_20 = 0x11;
  local_18 = (long *)0x0;
  FUN_015abc44(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0x6842b0d135e0456c;
  pcStack_28 = "pe_AudioJointComponent";
  local_20 = 0x16;
  local_18 = (long *)0x0;
  FUN_015abf50(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0xedcf59e1ac6db268;
  pcStack_28 = "pe_AudioBankComponent";
  local_20 = 0x15;
  local_18 = (long *)0x0;
  FUN_015ac050(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0xb51a2f97816377ab;
  pcStack_28 = "pe_AudioGeneratorComponent";
  local_20 = 0x1a;
  local_18 = (long *)0x0;
  FUN_015ac150(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0xa4a336546e57f4ea;
  pcStack_28 = "pe_AudioListenerComponent";
  local_20 = 0x19;
  local_18 = (long *)0x0;
  FUN_015ac250(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0x13f5b15cbf61070d;
  pcStack_28 = "pe_AudioPlayerComponent";
  local_20 = 0x17;
  local_18 = (long *)0x0;
  FUN_015ac350(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0x2518c24b6c173ac;
  pcStack_28 = "pe_ParticleAudioComponent";
  local_20 = 0x19;
  local_18 = (long *)0x0;
  FUN_015ac450(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


