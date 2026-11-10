/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029dab98; name: FUN_029dab98
 */


void FUN_029dab98(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1[0x1e];
  *param_1 = (long)(PTR_DAT_047e32a8 + 0x10);
  if (lVar5 != 0) {
    lVar1 = param_1[0x20];
    plVar2 = (long *)param_1[0x21];
    param_1[0x1f] = lVar5;
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,0x10);
        goto LAB_029dabc4;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,0x10);
  }
LAB_029dabc4:
  lVar5 = param_1[0x17];
  if (lVar5 != 0) {
    lVar1 = param_1[0x19];
    plVar2 = (long *)param_1[0x1a];
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar2,lVar5,lVar1 << 3,1);
        goto LAB_029dabcc;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 << 3,1);
  }
LAB_029dabcc:
  lVar5 = param_1[0x10];
  if (lVar5 != 0) {
    lVar1 = param_1[0x12];
    plVar2 = (long *)param_1[0x13];
    param_1[0x11] = lVar5;
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,1);
        goto LAB_029dabd4;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,1);
  }
LAB_029dabd4:
  lVar5 = param_1[9];
  if (lVar5 != 0) {
    lVar1 = param_1[0xb];
    plVar2 = (long *)param_1[0xc];
    param_1[10] = lVar5;
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,0x10);
        goto LAB_029dabdc;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,0x10);
  }
LAB_029dabdc:
  lVar5 = param_1[2];
  if (lVar5 == 0) {
    return;
  }
  lVar1 = param_1[4];
  plVar2 = (long *)param_1[5];
  param_1[3] = lVar5;
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x029dac38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,2);
  return;
}


