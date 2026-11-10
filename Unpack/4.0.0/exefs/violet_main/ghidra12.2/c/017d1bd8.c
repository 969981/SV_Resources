/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017d1bd8; name: FUN_017d1bd8
 */


undefined8 FUN_017d1bd8(long param_1,long *param_2,uint param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a0));
  if ((*(long **)(param_1 + 0x180) == (long *)0x0) || (**(long **)(param_1 + 0x180) != *param_2)) {
    uVar3 = 0;
  }
  else {
    FUN_017d1ce4();
    uVar3 = 1;
    if ((param_3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x500) = 1;
      lStack_e0 = *param_2;
      local_d8 = param_2[1];
      lStack_d0 = param_2[2];
      plVar2 = (long *)param_2[3];
      local_e8 = param_1;
      local_c8 = plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      FUN_017d1db4(&local_c0,&local_e8);
      FUN_017d1d3c(param_1,&local_c0);
      pcVar1 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        local_b8 = (code *)0x0;
        (*pcVar1)(auStack_a0);
      }
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
      uVar3 = 1;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a0));
  return uVar3;
}


