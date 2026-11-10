/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0114c638; name: FUN_0114c638
 */


void FUN_0114c638(long *param_1)

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
LAB_0114c65c:
    lVar4 = *param_1;
    if (lVar4 == 0) {
      return;
    }
    lVar5 = param_1[3];
    plVar6 = *(long **)param_1[4];
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0114c75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,lVar5 - lVar4,8);
      return;
    }
    FUN_00c48fe8(plVar6,lVar4,lVar5 - lVar4,8);
    return;
  }
  param_1[2] = lVar5 + -0x40;
  lVar3 = *(long *)(lVar5 + -0x40);
  if (lVar3 == 0) goto LAB_0114c6c4;
  plVar6 = *(long **)(lVar5 + -0x28);
  *(long *)(lVar5 + -0x38) = lVar3;
  lVar5 = *(long *)(lVar5 + -0x30) - lVar3;
  uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar2 & 1) != 0) && (lVar1 = FUN_00c4e600(), 0 < *(int *)(lVar1 + 0x12c8)))
  goto LAB_0114c7a4;
  do {
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar3,lVar5,4);
LAB_0114c6c4:
    while( true ) {
      do {
        lVar5 = param_1[2];
        if (lVar5 == lVar4) goto LAB_0114c65c;
        param_1[2] = lVar5 + -0x40;
        lVar3 = *(long *)(lVar5 + -0x40);
      } while (lVar3 == 0);
      plVar6 = *(long **)(lVar5 + -0x28);
      *(long *)(lVar5 + -0x38) = lVar3;
      lVar5 = *(long *)(lVar5 + -0x30) - lVar3;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar1 = FUN_00c4e600(), *(int *)(lVar1 + 0x12c8) < 1)) break;
LAB_0114c7a4:
      FUN_00c48fe8(plVar6,lVar3,lVar5,4);
    }
  } while( true );
}


