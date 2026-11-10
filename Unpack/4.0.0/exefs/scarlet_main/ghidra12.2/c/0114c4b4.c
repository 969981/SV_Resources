/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0114c4b4; name: FUN_0114c4b4
 */


void FUN_0114c4b4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = param_1[1];
  lVar5 = param_1[2];
  if (lVar5 == lVar4) {
LAB_0114c4d8:
    lVar4 = *param_1;
    if (lVar4 == 0) {
      return;
    }
    lVar5 = param_1[3];
    plVar6 = *(long **)param_1[4];
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0114c5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,lVar5 - lVar4,8);
      return;
    }
    FUN_00c48fe8(plVar6,lVar4,lVar5 - lVar4,8);
    return;
  }
  param_1[2] = lVar5 + -0x58;
  lVar3 = *(long *)(lVar5 + -0x58);
  if (lVar3 == 0) goto LAB_0114c540;
  plVar6 = *(long **)(lVar5 + -0x40);
  *(long *)(lVar5 + -0x50) = lVar3;
  lVar5 = *(long *)(lVar5 + -0x48) - lVar3;
  uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar2 & 1) != 0) && (lVar1 = FUN_00c4e600(), 0 < *(int *)(lVar1 + 0x12c8)))
  goto LAB_0114c620;
  do {
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar3,lVar5,4);
LAB_0114c540:
    while( true ) {
      do {
        lVar5 = param_1[2];
        if (lVar5 == lVar4) goto LAB_0114c4d8;
        param_1[2] = lVar5 + -0x58;
        lVar3 = *(long *)(lVar5 + -0x58);
      } while (lVar3 == 0);
      plVar6 = *(long **)(lVar5 + -0x40);
      *(long *)(lVar5 + -0x50) = lVar3;
      lVar5 = *(long *)(lVar5 + -0x48) - lVar3;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar1 = FUN_00c4e600(), *(int *)(lVar1 + 0x12c8) < 1)) break;
LAB_0114c620:
      FUN_00c48fe8(plVar6,lVar3,lVar5,4);
    }
  } while( true );
}


