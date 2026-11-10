/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01282cd0; name: FUN_01282cd0
 */


void FUN_01282cd0(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  
LAB_01282cf8:
  plVar13 = param_2 + -1;
  plVar4 = param_1;
LAB_01282d00:
  param_1 = plVar4;
  lVar12 = (long)param_2 - (long)param_1;
  uVar11 = lVar12 >> 3;
  switch(uVar11) {
  case 0:
  case 1:
    goto switchD_01282d28_caseD_0;
  case 2:
    iVar1 = (**(code **)(*(long *)*plVar13 + 0x70))();
    iVar2 = (**(code **)(*(long *)*param_1 + 0x70))();
    if (iVar2 <= iVar1) {
      return;
    }
    lVar14 = *param_1;
    *param_1 = 0;
    lVar12 = *plVar13;
    *plVar13 = 0;
    *param_1 = lVar12;
    plVar4 = (long *)*plVar13;
    *plVar13 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    *plVar13 = lVar14;
    return;
  case 3:
    FUN_01283440(param_1,param_1 + 1,plVar13);
    return;
  case 4:
    FUN_01283650(param_1,param_1 + 1,param_1 + 2,plVar13);
    return;
  case 5:
    FUN_012837d0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar13);
    return;
  default:
    if (0x37 < lVar12) {
      uVar9 = uVar11;
      if ((long)uVar11 < 0) {
        uVar9 = uVar11 + 1;
      }
      plVar4 = (long *)((long)param_1 + (uVar9 & 0x3ffffffffffffffe) * 4);
      if (lVar12 < 0x1f39) {
        iVar1 = FUN_01283440(param_1,plVar4,plVar13);
      }
      else {
        uVar9 = uVar11 + 3;
        if (-1 < (long)uVar11) {
          uVar9 = uVar11;
        }
        lVar12 = (uVar9 & 0x7ffffffffffffffc) * 2;
        iVar1 = FUN_012837d0(param_1,(long)param_1 + lVar12,plVar4,(long)plVar4 + lVar12,plVar13);
      }
      iVar2 = (**(code **)(*(long *)*param_1 + 0x70))();
      iVar3 = (**(code **)(*(long *)*plVar4 + 0x70))();
      if (iVar3 <= iVar2) break;
      plVar7 = plVar13;
      goto LAB_01282f90;
    }
    FUN_01283440(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar12 = 0;
    plVar4 = param_1 + 3;
    plVar13 = param_1 + 2;
    goto LAB_01282e58;
  }
  plVar7 = param_2;
  while (plVar5 = plVar7, param_1 + 2 != plVar5) {
    iVar2 = (**(code **)(*(long *)plVar5[-2] + 0x70))();
    iVar3 = (**(code **)(*(long *)*plVar4 + 0x70))();
    plVar7 = plVar5 + -1;
    if (iVar2 < iVar3) goto code_r0x01283214;
  }
  plVar7 = param_1 + 1;
  iVar1 = (**(code **)(*(long *)*param_1 + 0x70))();
  iVar2 = (**(code **)(*(long *)*plVar13 + 0x70))();
  if (iVar2 <= iVar1) {
    if (plVar7 == plVar13) {
      return;
    }
    plVar7 = param_1 + 2;
    while( true ) {
      iVar1 = (**(code **)(*(long *)*param_1 + 0x70))();
      iVar2 = (**(code **)(*(long *)plVar7[-1] + 0x70))();
      if (iVar1 < iVar2) break;
      plVar7 = plVar7 + 1;
      if (param_2 == plVar7) {
        return;
      }
    }
    lVar14 = plVar7[-1];
    plVar7[-1] = 0;
    lVar12 = *plVar13;
    *plVar13 = 0;
    plVar7[-1] = lVar12;
    plVar4 = (long *)*plVar13;
    *plVar13 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    *plVar13 = lVar14;
  }
  if (plVar7 == plVar13) {
    return;
  }
  plVar5 = plVar13;
  while( true ) {
    plVar4 = plVar7 + -1;
    do {
      plVar7 = plVar4;
      iVar1 = (**(code **)(*(long *)*param_1 + 0x70))();
      plVar4 = plVar7 + 1;
      iVar2 = (**(code **)(*(long *)*plVar4 + 0x70))();
    } while (iVar2 <= iVar1);
    plVar7 = plVar7 + 2;
    do {
      iVar1 = (**(code **)(*(long *)*param_1 + 0x70))();
      plVar5 = plVar5 + -1;
      iVar2 = (**(code **)(*(long *)*plVar5 + 0x70))();
    } while (iVar1 < iVar2);
    if (plVar5 <= plVar4) break;
    lVar14 = *plVar4;
    *plVar4 = 0;
    lVar12 = *plVar5;
    *plVar5 = 0;
    *plVar4 = lVar12;
    plVar4 = (long *)*plVar5;
    *plVar5 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    *plVar5 = lVar14;
  }
  goto LAB_01282d00;
code_r0x01283214:
  lVar14 = *param_1;
  *param_1 = 0;
  plVar7 = plVar5 + -2;
  lVar12 = *plVar7;
  *plVar7 = 0;
  *param_1 = lVar12;
  plVar8 = (long *)*plVar7;
  *plVar7 = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  iVar1 = iVar1 + 1;
  plVar5[-2] = lVar14;
LAB_01282f90:
  plVar5 = param_1 + 1;
  if (plVar5 < plVar7) {
    do {
      plVar8 = plVar5 + 1;
      iVar2 = (**(code **)(*(long *)*plVar5 + 0x70))();
      iVar3 = (**(code **)(*(long *)*plVar4 + 0x70))();
      if (iVar2 < iVar3) {
        iVar2 = (**(code **)(*(long *)plVar5[1] + 0x70))();
        iVar3 = (**(code **)(*(long *)*plVar4 + 0x70))();
        plVar6 = plVar5 + 2;
        if (iVar2 < iVar3) {
          do {
            plVar5 = plVar6;
            plVar8 = plVar5 + 1;
            iVar2 = (**(code **)(*(long *)*plVar5 + 0x70))();
            iVar3 = (**(code **)(*(long *)*plVar4 + 0x70))();
            plVar6 = plVar8;
          } while (iVar2 < iVar3);
        }
        else {
          plVar5 = plVar8;
          plVar8 = plVar6;
        }
      }
      iVar2 = (**(code **)(*(long *)plVar7[-1] + 0x70))();
      iVar3 = (**(code **)(*(long *)*plVar4 + 0x70))();
      plVar6 = plVar7 + -1;
      if (iVar2 < iVar3) {
LAB_0128306c:
        plVar7 = plVar6;
      }
      else {
        iVar2 = (**(code **)(*(long *)plVar7[-2] + 0x70))();
        iVar3 = (**(code **)(*(long *)*plVar4 + 0x70))();
        plVar6 = plVar7 + -2;
        if (iVar2 < iVar3) goto LAB_0128306c;
        plVar6 = plVar7 + -3;
        do {
          plVar7 = plVar6;
          iVar2 = (**(code **)(*(long *)*plVar7 + 0x70))();
          iVar3 = (**(code **)(*(long *)*plVar4 + 0x70))();
          plVar6 = plVar7 + -1;
        } while (iVar3 <= iVar2);
      }
      if (plVar7 < plVar5) break;
      lVar14 = *plVar5;
      *plVar5 = 0;
      lVar12 = *plVar7;
      *plVar7 = 0;
      *plVar5 = lVar12;
      plVar6 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
      *plVar7 = lVar14;
      iVar1 = iVar1 + 1;
      plVar6 = plVar7;
      if (plVar4 != plVar5) {
        plVar6 = plVar4;
      }
      plVar4 = plVar6;
      plVar5 = plVar8;
    } while( true );
  }
  if (plVar5 != plVar4) {
    iVar2 = (**(code **)(*(long *)*plVar4 + 0x70))();
    iVar3 = (**(code **)(*(long *)*plVar5 + 0x70))();
    if (iVar2 < iVar3) {
      lVar14 = *plVar5;
      *plVar5 = 0;
      lVar12 = *plVar4;
      *plVar4 = 0;
      *plVar5 = lVar12;
      plVar7 = (long *)*plVar4;
      *plVar4 = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))();
      }
      iVar1 = iVar1 + 1;
      *plVar4 = lVar14;
    }
  }
  if (iVar1 == 0) {
    uVar11 = FUN_029e5720(param_1,plVar5);
    uVar9 = FUN_029e5720(plVar5 + 1,param_2);
    if ((uVar9 & 1) != 0) goto LAB_01283430;
    plVar4 = plVar5 + 1;
    if ((uVar11 & 1) != 0) goto LAB_01282d00;
  }
  if ((long)param_2 - (long)plVar5 <= (long)plVar5 - (long)param_1) {
    FUN_01282cd0(plVar5 + 1,param_2);
    param_2 = plVar5;
    goto LAB_01282cf8;
  }
  FUN_01282cd0(param_1,plVar5);
  plVar4 = plVar5 + 1;
  goto LAB_01282d00;
LAB_01283430:
  param_2 = plVar5;
  if ((uVar11 & 1) != 0) {
    return;
  }
  goto LAB_01282cf8;
LAB_01282e58:
  plVar7 = plVar4;
  iVar1 = (**(code **)(*(long *)*plVar7 + 0x70))();
  iVar2 = (**(code **)(*(long *)*plVar13 + 0x70))();
  if (iVar1 < iVar2) {
    plVar13 = (long *)*plVar7;
    plVar4 = (long *)0x0;
    *plVar7 = 0;
    lVar14 = lVar12;
    while( true ) {
      *(undefined8 *)((long)param_1 + lVar14 + 0x18) = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      uVar10 = *(undefined8 *)((long)param_1 + lVar14 + 0x10);
      *(undefined8 *)((long)param_1 + lVar14 + 0x10) = 0;
      *(undefined8 *)((long)param_1 + lVar14 + 0x18) = uVar10;
      if (lVar14 == -0x10) {
        plVar4 = param_1;
        goto LAB_01282efc;
      }
      iVar1 = (**(code **)(*plVar13 + 0x70))(plVar13);
      iVar2 = (**(code **)(**(long **)((long)param_1 + lVar14 + 8) + 0x70))();
      if (iVar2 <= iVar1) break;
      plVar4 = *(long **)((long)param_1 + lVar14 + 0x10);
      lVar14 = lVar14 + -8;
    }
    plVar4 = (long *)((long)param_1 + lVar14 + 0x10);
LAB_01282efc:
    plVar5 = (long *)*plVar4;
    *plVar4 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *plVar4 = (long)plVar13;
  }
  lVar12 = lVar12 + 8;
  plVar4 = plVar7 + 1;
  plVar13 = plVar7;
  if (plVar7 + 1 == param_2) {
switchD_01282d28_caseD_0:
    return;
  }
  goto LAB_01282e58;
}


