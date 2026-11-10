/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024ab220; name: FUN_024ab220
 */


ulong FUN_024ab220(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auStack_f0 [160];
  undefined8 local_50;
  undefined1 *local_48;
  undefined8 local_40;
  pthread_mutex_t *local_38;
  undefined1 auStack_18 [8];
  
  local_48 = auStack_f0;
  local_38 = *(pthread_mutex_t **)(param_2 + 0x18);
  local_50 = 10;
  local_40 = 0;
  pthread_mutex_lock(local_38);
  FUN_024aca7c(param_1,param_2,auStack_f0,param_3);
  uVar1 = pthread_mutex_unlock(local_38);
  uVar2 = (ulong)uVar1;
  if (local_48 != (undefined1 *)0x0) {
    uVar2 = FUN_024a5ff8(auStack_f0,auStack_18);
  }
  return uVar2;
}


