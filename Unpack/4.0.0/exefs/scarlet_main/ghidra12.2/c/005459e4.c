/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005459e4; name: FUN_005459e4
 */


void FUN_005459e4(undefined4 *param_1,long *param_2)

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
  *(char *)(param_1 + 0x14) = (char)param_2[0x15];
  lVar3 = param_2[0x17];
  lVar2 = param_2[0x16];
  lVar4 = param_2[0x18];
  *(long *)(param_1 + 0x1c) = param_2[0x19];
  *(long *)(param_1 + 0x1a) = lVar4;
  *(long *)(param_1 + 0x18) = lVar3;
  *(long *)(param_1 + 0x16) = lVar2;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_1[0x1e] = (int)param_2[0x1a];
  lVar2 = param_2[0x1b];
  lVar4 = param_2[0x1e];
  lVar3 = param_2[0x1d];
  *(long *)(param_1 + 0x22) = param_2[0x1c];
  *(long *)(param_1 + 0x20) = lVar2;
  *(long *)(param_1 + 0x26) = lVar4;
  *(long *)(param_1 + 0x24) = lVar3;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  FUN_027d3bd4(param_1 + 0x28,param_2 + 0x1f);
  lVar3 = param_2[0x21];
  lVar2 = param_2[0x20];
  lVar4 = param_2[0x22];
  *(long *)(param_1 + 0x30) = param_2[0x23];
  *(long *)(param_1 + 0x2e) = lVar4;
  *(long *)(param_1 + 0x2c) = lVar3;
  *(long *)(param_1 + 0x2a) = lVar2;
  param_2[0x22] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  lVar3 = param_2[0x25];
  lVar2 = param_2[0x24];
  lVar4 = param_2[0x26];
  *(long *)(param_1 + 0x38) = param_2[0x27];
  *(long *)(param_1 + 0x36) = lVar4;
  *(long *)(param_1 + 0x34) = lVar3;
  *(long *)(param_1 + 0x32) = lVar2;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  *(long *)(param_1 + 0x3a) = param_2[0x28];
  nn::os::UnlockMutex((MutexType *)(param_2 + 7));
  return;
}


