/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c7a54; name: FUN_034c7a54
 */


undefined4 FUN_034c7a54(undefined8 param_1,long param_2,int param_3,uint param_4)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  ulong *puVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  
  puVar4 = PTR_DAT_047e2fd0;
  if (param_2 == 0) {
    return 2;
  }
  plVar13 = *(long **)(param_2 + 0x50);
  if (plVar13 == (long *)0x0) {
    plVar13 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x30);
    if (plVar13 == (long *)0x0) {
      return 2;
    }
    *plVar13 = (long)&PTR_LAB_047c4c28;
    plVar13[1] = 0;
    puVar5 = PTR_DAT_047e6968;
    lVar10 = *(long *)(PTR_DAT_047e6968 + 8);
    plVar13[2] = 0;
    plVar13[3] = lVar10;
    plVar2 = (long *)(puVar5 + 0x10);
    if (*(long *)(puVar5 + 0x10) != 0) {
      plVar2 = (long *)(lVar10 + 0x10);
    }
    *plVar2 = (long)plVar13;
    *(long **)(puVar5 + 8) = plVar13;
    *(int *)puVar5 = *(int *)puVar5 + 1;
    *plVar13 = (long)&PTR_FUN_047c4c00;
    plVar13[4] = 0;
    plVar13[5] = 0;
    *(long **)(param_2 + 0x50) = plVar13;
    plVar13[1] = param_2;
    iVar6 = (**(code **)(*plVar13 + 0x10))(plVar13,*(undefined8 *)(param_2 + 0x78));
    if (iVar6 != 1) {
      (**(code **)*plVar13)(plVar13);
      (**(code **)(puVar4 + 0x30))(4,plVar13);
      *(undefined8 *)(param_2 + 0x50) = 0;
      return 2;
    }
  }
  piVar7 = (int *)plVar13[4];
  uVar3 = *(uint *)(plVar13 + 5);
  uVar14 = (ulong)uVar3;
  piVar11 = piVar7;
  if ((uVar3 != 0) && (*piVar7 != param_3)) {
    lVar10 = uVar14 * 0xc;
    piVar12 = piVar7;
    do {
      lVar10 = lVar10 + -0xc;
      if (lVar10 == 0) goto LAB_034c7bc8;
      piVar11 = piVar12 + 3;
      piVar1 = piVar12 + 3;
      piVar12 = piVar11;
    } while (*piVar1 != param_3);
  }
  if (piVar11 != piVar7 + uVar14 * 3) {
    if (piVar11[1] == param_4) {
      piVar11[2] = piVar11[2] + 1;
      return 1;
    }
    piVar11[1] = param_4;
    piVar11[2] = 1;
    return 1;
  }
LAB_034c7bc8:
  piVar11 = piVar7;
  if ((uVar3 != 0) && (*piVar7 != param_3)) {
    lVar10 = uVar14 * 0xc;
    piVar12 = piVar7;
    do {
      lVar10 = lVar10 + -0xc;
      if (lVar10 == 0) goto LAB_034c7c34;
      piVar11 = piVar12 + 3;
      piVar1 = piVar12 + 3;
      piVar12 = piVar11;
    } while (*piVar1 != param_3);
  }
  if (piVar11 != piVar7 + uVar14 * 3) {
    puVar9 = (ulong *)(piVar11 + 1);
    *puVar9 = (ulong)param_4;
    goto LAB_034c7cb4;
  }
LAB_034c7c34:
  uVar15 = *(uint *)((long)plVar13 + 0x2c);
  if (uVar3 < uVar15) {
LAB_034c7c7c:
    if (uVar3 < uVar15) {
      uVar3 = *(uint *)(plVar13 + 5);
      *(uint *)(plVar13 + 5) = uVar3 + 1;
      if (piVar7 != (int *)0x0) {
        piVar7[(ulong)uVar3 * 3] = param_3;
        puVar9 = (ulong *)(piVar7 + (ulong)uVar3 * 3 + 1);
        *puVar9 = (ulong)param_4;
        goto LAB_034c7cb4;
      }
    }
  }
  else {
    iVar6 = uVar15 + (uVar15 >> 1);
    if (uVar15 == 0) {
      iVar6 = 1;
    }
    uVar15 = iVar6 + uVar15;
    piVar7 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,piVar7,(ulong)uVar15 * 0xc);
    if (piVar7 != (int *)0x0) {
      plVar13[4] = (long)piVar7;
      *(uint *)((long)plVar13 + 0x2c) = uVar15;
      goto LAB_034c7c7c;
    }
  }
  puVar9 = (ulong *)0x0;
LAB_034c7cb4:
  uVar8 = 1;
  if (puVar9 == (ulong *)0x0) {
    uVar8 = 2;
  }
  return uVar8;
}


