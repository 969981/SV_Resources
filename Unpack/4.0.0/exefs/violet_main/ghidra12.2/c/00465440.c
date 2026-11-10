/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00465440; name: FUN_00465440
 */


void FUN_00465440(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 local_38;
  pthread_t local_30;
  ulong local_28;
  timespec local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uVar1 = FUN_0047e6c0();
  local_38 = CONCAT44(local_38._4_4_,uVar1);
  local_30 = pthread_self();
  uVar2 = FUN_003f6e10();
  if (uVar2 == 0) {
    iVar3 = clock_gettime(7,&local_20);
    if (iVar3 == 0) {
      local_20.tv_sec = local_20.tv_nsec + (local_20.tv_sec << 0x20);
    }
    else {
      FUN_0049e4c0(&local_20);
    }
  }
  else {
    local_20.tv_sec = (__time_t)uVar2;
  }
  local_28 = local_20.tv_sec;
  FUN_00464a40(param_1,&local_38,0x18,0);
  return;
}


