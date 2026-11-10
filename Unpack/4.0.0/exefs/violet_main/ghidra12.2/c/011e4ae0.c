/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e4ae0; name: FUN_011e4ae0
 */


void FUN_011e4ae0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
LAB_011e4b0c:
  puVar11 = param_2 + -1;
  puVar7 = param_1;
LAB_011e4b18:
  param_1 = puVar7;
  lVar10 = (long)param_2 - (long)param_1;
  uVar9 = lVar10 >> 3;
  switch(uVar9) {
  case 0:
  case 1:
    return;
  case 2:
    plVar12 = (long *)*param_1;
    iVar3 = (**(code **)(*(long *)*puVar11 + 0x20))();
    iVar4 = (**(code **)(*plVar12 + 0x20))(plVar12);
    if (iVar3 < iVar4) {
      uVar8 = *param_1;
      *param_1 = *puVar11;
      *puVar11 = uVar8;
      return;
    }
    return;
  case 3:
    FUN_011e5340(param_1,param_1 + 1,puVar11);
    return;
  case 4:
    FUN_011e5210(param_1,param_1 + 1,param_1 + 2,puVar11);
    return;
  case 5:
    FUN_011e50a0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar11);
    return;
  }
  if (0xf7 < lVar10) {
    uVar6 = uVar9;
    if ((long)uVar9 < 0) {
      uVar6 = uVar9 + 1;
    }
    puVar7 = (undefined8 *)((long)param_1 + (uVar6 & 0x3ffffffffffffffe) * 4);
    if (lVar10 < 0x1f39) {
      iVar3 = FUN_011e5340(param_1,puVar7,puVar11);
    }
    else {
      uVar6 = uVar9 + 3;
      if (-1 < (long)uVar9) {
        uVar6 = uVar9;
      }
      lVar10 = (uVar6 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_011e50a0(param_1,(long)param_1 + lVar10,puVar7,(long)puVar7 + lVar10,puVar11);
    }
    plVar12 = (long *)*puVar7;
    iVar4 = (**(code **)(*(long *)*param_1 + 0x20))();
    iVar5 = (**(code **)(*plVar12 + 0x20))(plVar12);
    if (iVar5 <= iVar4) {
      puVar14 = param_2 + -2;
LAB_011e4e50:
      puVar16 = puVar14;
      if (param_1 != puVar16) goto code_r0x011e4e58;
      puVar14 = param_1 + 1;
      plVar12 = (long *)*puVar11;
      iVar3 = (**(code **)(*(long *)*param_1 + 0x20))();
      iVar4 = (**(code **)(*plVar12 + 0x20))(plVar12);
      if (iVar4 <= iVar3) {
        if (puVar14 == puVar11) {
          return;
        }
        puVar14 = param_1 + 2;
        while( true ) {
          plVar12 = (long *)puVar14[-1];
          iVar3 = (**(code **)(*(long *)*param_1 + 0x20))();
          iVar4 = (**(code **)(*plVar12 + 0x20))(plVar12);
          if (iVar3 < iVar4) break;
          puVar14 = puVar14 + 1;
          if (param_2 == puVar14) {
            return;
          }
        }
        uVar8 = puVar14[-1];
        puVar14[-1] = *puVar11;
        *puVar11 = uVar8;
      }
      if (puVar14 == puVar11) {
        return;
      }
      puVar16 = puVar11;
      while( true ) {
        puVar7 = puVar14 + -1;
        do {
          puVar14 = puVar7;
          puVar7 = puVar14 + 1;
          plVar12 = (long *)*puVar7;
          iVar3 = (**(code **)(*(long *)*param_1 + 0x20))();
          iVar4 = (**(code **)(*plVar12 + 0x20))(plVar12);
        } while (iVar4 <= iVar3);
        puVar14 = puVar14 + 2;
        do {
          puVar16 = puVar16 + -1;
          plVar12 = (long *)*puVar16;
          iVar3 = (**(code **)(*(long *)*param_1 + 0x20))();
          iVar4 = (**(code **)(*plVar12 + 0x20))(plVar12);
        } while (iVar3 < iVar4);
        if (puVar16 <= puVar7) break;
        uVar8 = *puVar7;
        *puVar7 = *puVar16;
        *puVar16 = uVar8;
      }
      goto LAB_011e4f14;
    }
    puVar16 = puVar11;
    goto LAB_011e4dac;
  }
  FUN_011e5340(param_1,param_1 + 1,param_1 + 2);
  if (param_1 + 3 == param_2) {
    return;
  }
  lVar10 = 0;
  puVar7 = param_1 + 3;
  puVar11 = param_1 + 2;
  goto LAB_011e4c50;
code_r0x011e4e58:
  plVar12 = (long *)*puVar7;
  iVar4 = (**(code **)(*(long *)*puVar16 + 0x20))();
  iVar5 = (**(code **)(*plVar12 + 0x20))(plVar12);
  puVar14 = puVar16 + -1;
  if (iVar4 < iVar5) goto code_r0x011e4e88;
  goto LAB_011e4e50;
code_r0x011e4e88:
  uVar8 = *param_1;
  iVar3 = iVar3 + 1;
  *param_1 = *puVar16;
  *puVar16 = uVar8;
LAB_011e4dac:
  puVar14 = param_1 + 1;
  puVar17 = puVar14;
  if (puVar14 < puVar16) {
    while( true ) {
      puVar14 = puVar17 + -1;
      do {
        puVar17 = puVar14;
        puVar14 = puVar17 + 1;
        plVar12 = (long *)*puVar7;
        iVar4 = (**(code **)(*(long *)*puVar14 + 0x20))();
        iVar5 = (**(code **)(*plVar12 + 0x20))(plVar12);
      } while (iVar4 < iVar5);
      puVar17 = puVar17 + 2;
      do {
        puVar16 = puVar16 + -1;
        plVar12 = (long *)*puVar7;
        iVar4 = (**(code **)(*(long *)*puVar16 + 0x20))();
        iVar5 = (**(code **)(*plVar12 + 0x20))(plVar12);
      } while (iVar5 <= iVar4);
      if (puVar16 < puVar14) break;
      uVar8 = *puVar14;
      iVar3 = iVar3 + 1;
      *puVar14 = *puVar16;
      *puVar16 = uVar8;
      puVar1 = puVar16;
      if (puVar7 != puVar14) {
        puVar1 = puVar7;
      }
      puVar7 = puVar1;
    }
  }
  if (puVar14 != puVar7) {
    plVar12 = (long *)*puVar14;
    iVar4 = (**(code **)(*(long *)*puVar7 + 0x20))();
    iVar5 = (**(code **)(*plVar12 + 0x20))(plVar12);
    if (iVar4 < iVar5) {
      uVar8 = *puVar14;
      iVar3 = iVar3 + 1;
      *puVar14 = *puVar7;
      *puVar7 = uVar8;
    }
  }
  if (iVar3 == 0) {
    uVar9 = FUN_02712830(param_1,puVar14);
    uVar6 = FUN_02712830(puVar14 + 1,param_2);
    if ((uVar6 & 1) != 0) goto LAB_011e508c;
    puVar7 = puVar14 + 1;
    if ((uVar9 & 1) != 0) goto LAB_011e4b18;
  }
  if ((long)param_2 - (long)puVar14 <= (long)puVar14 - (long)param_1) {
    FUN_011e4ae0(puVar14 + 1,param_2);
    param_2 = puVar14;
    goto LAB_011e4b0c;
  }
  FUN_011e4ae0(param_1,puVar14);
  puVar7 = puVar14 + 1;
LAB_011e4f14:
  goto LAB_011e4b18;
LAB_011e508c:
  param_2 = puVar14;
  if ((uVar9 & 1) != 0) {
    return;
  }
  goto LAB_011e4b0c;
LAB_011e4c50:
  puVar14 = puVar7;
  plVar12 = (long *)*puVar11;
  iVar3 = (**(code **)(*(long *)*puVar14 + 0x20))();
  iVar4 = (**(code **)(*plVar12 + 0x20))(plVar12);
  if (iVar3 < iVar4) {
    plVar12 = (long *)*puVar14;
    lVar2 = lVar10;
    do {
      lVar15 = lVar2;
      *(undefined8 *)((long)param_1 + lVar15 + 0x18) =
           *(undefined8 *)((long)param_1 + lVar15 + 0x10);
      if (lVar15 == -0x10) {
        puVar7 = param_1;
        goto LAB_011e4cf0;
      }
      plVar13 = *(long **)((long)param_1 + lVar15 + 8);
      iVar3 = (**(code **)(*plVar12 + 0x20))(plVar12);
      iVar4 = (**(code **)(*plVar13 + 0x20))(plVar13);
      lVar2 = lVar15 + -8;
    } while (iVar3 < iVar4);
    puVar7 = (undefined8 *)((long)param_1 + lVar15 + 0x10);
LAB_011e4cf0:
    *puVar7 = plVar12;
  }
  lVar10 = lVar10 + 8;
  puVar7 = puVar14 + 1;
  puVar11 = puVar14;
  if (puVar14 + 1 == param_2) {
    return;
  }
  goto LAB_011e4c50;
}


