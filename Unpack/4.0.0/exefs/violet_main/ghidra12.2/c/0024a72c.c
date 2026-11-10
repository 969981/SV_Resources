/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0024a72c; name: FUN_0024a72c
 */


void FUN_0024a72c(undefined4 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  (**(code **)(*param_2 + 0x18))();
  nn::os::LockMutex((MutexType *)(param_2 + 7));
  *param_1 = (int)param_2[0xb];
  lVar3 = param_2[0xd];
  lVar2 = param_2[0xc];
  lVar4 = param_2[0xe];
  *(long *)(param_1 + 8) = param_2[0xf];
  *(long *)(param_1 + 6) = lVar4;
  *(long *)(param_1 + 4) = lVar3;
  *(long *)(param_1 + 2) = lVar2;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if ((char)param_2[0x10] != '\0') {
    *(long *)(param_1 + 0xc) = param_2[0x11];
    lVar2 = param_2[0x12];
    *(long *)(param_1 + 0x10) = param_2[0x13];
    *(long *)(param_1 + 0xe) = lVar2;
    lVar2 = param_2[0x14];
    plVar1 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = lVar2;
    if (lVar2 == 0) {
      *(long **)(param_1 + 0xc) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      param_2[0x11] = (long)(param_2 + 0x12);
      param_2[0x12] = 0;
      param_2[0x14] = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 7));
  return;
}


