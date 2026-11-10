/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c546f8; name: FUN_00c546f8
 */


void FUN_00c546f8(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  
  lVar4 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 == lVar4) {
LAB_00c54718:
    lVar4 = *param_1;
    if (lVar4 == 0) {
      return;
    }
    lVar3 = param_1[3];
    plVar7 = *(long **)param_1[4];
    uVar1 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00c54824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar4,lVar3 - lVar4,8);
      return;
    }
    FUN_00c48fe8(plVar7,lVar4,lVar3 - lVar4,8);
    return;
  }
  param_1[2] = lVar3 + -0x20;
  lVar2 = *(long *)(lVar3 + -0x20);
  *(undefined8 *)(lVar3 + -0x20) = 0;
  if (lVar2 == 0) goto LAB_00c54788;
  uVar6 = *(undefined8 *)(lVar3 + -8);
  plVar7 = *(long **)(lVar3 + -0x18);
  uVar5 = *(undefined8 *)(lVar3 + -0x10);
  uVar1 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar1 & 1) != 0) && (lVar3 = FUN_00c4e600(), 0 < *(int *)(lVar3 + 0x12c8)))
  goto LAB_00c5486c;
  do {
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar2,uVar5,uVar6);
LAB_00c54788:
    while( true ) {
      do {
        lVar3 = param_1[2];
        if (lVar3 == lVar4) goto LAB_00c54718;
        param_1[2] = lVar3 + -0x20;
        lVar2 = *(long *)(lVar3 + -0x20);
        *(undefined8 *)(lVar3 + -0x20) = 0;
      } while (lVar2 == 0);
      uVar6 = *(undefined8 *)(lVar3 + -8);
      plVar7 = *(long **)(lVar3 + -0x18);
      uVar5 = *(undefined8 *)(lVar3 + -0x10);
      uVar1 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar1 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) break;
LAB_00c5486c:
      FUN_00c48fe8(plVar7,lVar2,uVar5,uVar6);
    }
  } while( true );
}


