/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01452804; name: FUN_01452804
 */


void FUN_01452804(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  lVar2 = FUN_021b9554(param_1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555 + 1);
  lVar8 = *param_1;
  lVar7 = param_1[1];
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar2 * 0x18,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  lVar14 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_01452bc4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar14;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  plVar5 = (long *)*param_2;
  lVar8 = lVar7 - lVar8 >> 3;
  plVar13 = (long *)(lVar3 + lVar8 * 8);
  *plVar13 = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  plVar5 = (long *)param_2[1];
  *(long **)(lVar3 + lVar8 * 8 + 8) = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  plVar5 = (long *)param_2[2];
  *(long **)(lVar3 + lVar8 * 8 + 0x10) = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  plVar5 = (long *)*param_1;
  if ((long *)param_1[1] == plVar5) {
    plVar9 = plVar13;
    plVar11 = plVar5;
  }
  else {
    plVar11 = (long *)param_1[1];
    plVar12 = plVar13;
    do {
      lVar8 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar7 != 0) {
        if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_01452bc4;
        *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar8;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      }
      lVar8 = plVar11[-3];
      plVar11[-3] = 0;
      plVar12[-3] = lVar8;
      lVar8 = plVar11[-2];
      plVar11[-2] = 0;
      plVar12[-2] = lVar8;
      lVar8 = plVar11[-1];
      plVar9 = plVar12 + -3;
      plVar10 = plVar11 + -3;
      plVar11[-1] = 0;
      plVar12[-1] = lVar8;
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      plVar11 = plVar10;
      plVar12 = plVar9;
    } while (plVar5 != plVar10);
    plVar11 = (long *)*param_1;
    plVar5 = (long *)param_1[1];
  }
  lVar8 = param_1[2];
  *param_1 = (long)plVar9;
  param_1[1] = (long)(plVar13 + 3);
  param_1[2] = lVar3 + lVar2 * 0x18;
  if (plVar5 != plVar11) {
    plVar13 = plVar5 + -3;
    if ((long *)plVar5[-1] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[-1] + 0x20))();
    }
    if ((long *)plVar5[-2] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[-2] + 0x20))();
    }
    if ((long *)*plVar13 != (long *)0x0) {
      (**(code **)(*(long *)*plVar13 + 0x20))();
    }
    while (plVar13 != plVar11) {
      if ((long *)plVar13[-1] != (long *)0x0) {
        (**(code **)(*(long *)plVar13[-1] + 0x20))();
      }
      if ((long *)plVar13[-2] != (long *)0x0) {
        (**(code **)(*(long *)plVar13[-2] + 0x20))();
      }
      plVar5 = plVar13 + -3;
      plVar13 = plVar13 + -3;
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 0x20))();
      }
    }
  }
  if (plVar11 == (long *)0x0) {
    return;
  }
  plVar5 = (long *)param_1[3];
  uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01452ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x18))(plVar5,plVar11,lVar8 - (long)plVar11,8);
    return;
  }
  FUN_00c48fe8(plVar5,plVar11,lVar8 - (long)plVar11,8);
  return;
}


