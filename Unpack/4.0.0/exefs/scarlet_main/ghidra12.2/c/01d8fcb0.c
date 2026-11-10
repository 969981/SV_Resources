/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d8fcb0; name: FUN_01d8fcb0
 */


void FUN_01d8fcb0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  *param_1 = &PTR_FUN_045802f8;
  param_1[4] = &PTR_LAB_04580328;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x29));
  plVar2 = (long *)param_1[0x21];
  while (plVar2 != (long *)0x0) {
    plVar7 = (long *)*plVar2;
    FUN_01229ce8(plVar2 + 4);
    plVar6 = (long *)param_1[0x22];
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar2,0xc0,0x10);
      plVar2 = plVar7;
    }
    else {
      FUN_00c48fe8(plVar6,plVar2,0xc0,0x10);
      plVar2 = plVar7;
    }
  }
  lVar5 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar5 != 0) {
    lVar1 = param_1[0x1c];
    plVar2 = (long *)param_1[0x1d];
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 << 3,0x10);
    }
    else {
      FUN_00c48fe8(plVar2,lVar5,lVar1 << 3,0x10);
    }
  }
  FUN_020e3554(param_1 + 0xe);
  FUN_00db239c(param_1 + 6);
  return;
}


