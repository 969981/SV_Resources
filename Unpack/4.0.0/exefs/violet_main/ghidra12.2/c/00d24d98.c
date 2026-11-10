/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d24d98; name: FUN_00d24d98
 */


void FUN_00d24d98(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar5 = param_1[1];
  lVar2 = param_1[2];
  if (lVar2 == lVar5) {
LAB_00d24dbc:
    lVar5 = *param_1;
    if (lVar5 == 0) {
      return;
    }
    lVar2 = param_1[3];
    plVar6 = *(long **)param_1[4];
    uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar1 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00d24e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar2 - lVar5,8);
      return;
    }
    FUN_00c48fe8(plVar6,lVar5,lVar2 - lVar5,8);
    return;
  }
  param_1[2] = lVar2 + -0x88;
  if (*(long *)(lVar2 + -0x38) == 0) goto LAB_00d24e78;
  FUN_00d24be4();
  lVar3 = *(long *)(lVar2 + -0x38);
  plVar6 = *(long **)(lVar2 + -0x20);
  lVar7 = *(long *)(lVar2 + -0x28) - lVar3;
  uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar1 & 1) != 0) && (lVar4 = FUN_00c4e600(), 0 < *(int *)(lVar4 + 0x12c8)))
  goto LAB_00d24f10;
  do {
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar3,lVar7,8);
LAB_00d24e78:
    while( true ) {
      do {
        if (*(long **)(lVar2 + -0x48) != (long *)0x0) {
          (**(code **)(**(long **)(lVar2 + -0x48) + 0x20))();
        }
        if (*(long **)(lVar2 + -0x68) != (long *)0x0) {
          (**(code **)(**(long **)(lVar2 + -0x68) + 0x20))();
        }
        lVar2 = param_1[2];
        if (lVar2 == lVar5) goto LAB_00d24dbc;
        param_1[2] = lVar2 + -0x88;
      } while (*(long *)(lVar2 + -0x38) == 0);
      FUN_00d24be4();
      plVar6 = *(long **)(lVar2 + -0x20);
      lVar3 = *(long *)(lVar2 + -0x38);
      lVar7 = *(long *)(lVar2 + -0x28) - lVar3;
      uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) break;
LAB_00d24f10:
      FUN_00c48fe8(plVar6,lVar3,lVar7,8);
    }
  } while( true );
}


