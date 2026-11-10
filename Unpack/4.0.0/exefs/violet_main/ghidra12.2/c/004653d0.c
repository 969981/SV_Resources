/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004653d0; name: FUN_004653d0
 */


void FUN_004653d0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  ulong local_38;
  pthread_t local_30;
  long local_28;
  timespec local_20;
  
  local_28 = 0;
  uVar1 = getpid();
  local_38 = (ulong)uVar1;
  local_30 = pthread_self();
  iVar2 = clock_gettime(0,&local_20);
  if (iVar2 == 0) {
    local_20.tv_sec = local_20.tv_nsec + (local_20.tv_sec << 0x20);
  }
  else {
    FUN_0049e4c0(&local_20);
  }
  local_28 = local_20.tv_sec;
  FUN_00464a40(param_1,&local_38,0x18,0);
  return;
}


