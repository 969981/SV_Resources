/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a2981c; name: FUN_02a2981c
 */


void FUN_02a2981c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1[0x1f];
  *param_1 = &PTR_FUN_045681d8;
  param_1[4] = &PTR_LAB_04568210;
  if (lVar5 != 0) {
    lVar1 = param_1[0x21];
    plVar2 = (long *)param_1[0x22];
    param_1[0x20] = lVar5;
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,8);
        goto LAB_02a29888;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,8);
  }
LAB_02a29888:
  lVar5 = param_1[0x18];
  if (lVar5 != 0) {
    lVar1 = param_1[0x1a];
    plVar2 = (long *)param_1[0x1b];
    param_1[0x19] = lVar5;
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,1);
        goto LAB_02a298cc;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,1);
  }
LAB_02a298cc:
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 0x20))();
  }
  if ((long *)param_1[0xf] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02a29910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0xf] + 0x20))();
  return;
}


