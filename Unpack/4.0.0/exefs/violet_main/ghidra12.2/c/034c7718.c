/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c7718; name: FUN_034c7718
 */


undefined4 FUN_034c7718(undefined8 param_1,long param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  long *plVar12;
  uint uVar13;
  
  puVar4 = PTR_DAT_047e2fd0;
  if (param_2 == 0) {
    return 2;
  }
  plVar12 = *(long **)(param_2 + 0x50);
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x30);
    if (plVar12 == (long *)0x0) {
      return 2;
    }
    *plVar12 = (long)&PTR_LAB_047c4c28;
    plVar12[1] = 0;
    puVar5 = PTR_DAT_047e6968;
    lVar9 = *(long *)(PTR_DAT_047e6968 + 8);
    plVar12[2] = 0;
    plVar12[3] = lVar9;
    plVar2 = (long *)(puVar5 + 0x10);
    if (*(long *)(puVar5 + 0x10) != 0) {
      plVar2 = (long *)(lVar9 + 0x10);
    }
    *plVar2 = (long)plVar12;
    *(long **)(puVar5 + 8) = plVar12;
    *(int *)puVar5 = *(int *)puVar5 + 1;
    *plVar12 = (long)&PTR_FUN_047c4c00;
    plVar12[4] = 0;
    plVar12[5] = 0;
    *(long **)(param_2 + 0x50) = plVar12;
    plVar12[1] = param_2;
    iVar6 = (**(code **)(*plVar12 + 0x10))(plVar12,*(undefined8 *)(param_2 + 0x78));
    if (iVar6 != 1) {
      (**(code **)*plVar12)(plVar12);
      (**(code **)(puVar4 + 0x30))(4,plVar12);
      *(undefined8 *)(param_2 + 0x50) = 0;
      return 2;
    }
  }
  piVar7 = (int *)plVar12[4];
  uVar3 = *(uint *)(plVar12 + 5);
  piVar10 = piVar7;
  if ((uVar3 != 0) && (*piVar7 != param_3)) {
    lVar9 = (ulong)uVar3 * 0xc;
    piVar11 = piVar7;
    do {
      lVar9 = lVar9 + -0xc;
      if (lVar9 == 0) goto LAB_034c7864;
      piVar10 = piVar11 + 3;
      piVar1 = piVar11 + 3;
      piVar11 = piVar10;
    } while (*piVar1 != param_3);
  }
  if (piVar10 == piVar7 + (ulong)uVar3 * 3) {
LAB_034c7864:
    uVar13 = *(uint *)((long)plVar12 + 0x2c);
    if (uVar3 < uVar13) {
LAB_034c78ac:
      if (uVar3 < uVar13) {
        uVar3 = *(uint *)(plVar12 + 5);
        *(uint *)(plVar12 + 5) = uVar3 + 1;
        if (piVar7 != (int *)0x0) {
          piVar10 = piVar7 + (ulong)uVar3 * 3;
          *piVar10 = param_3;
          goto LAB_034c78d0;
        }
      }
    }
    else {
      iVar6 = uVar13 + (uVar13 >> 1);
      if (uVar13 == 0) {
        iVar6 = 1;
      }
      uVar13 = iVar6 + uVar13;
      piVar7 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,piVar7,(ulong)uVar13 * 0xc);
      if (piVar7 != (int *)0x0) {
        plVar12[4] = (long)piVar7;
        *(uint *)((long)plVar12 + 0x2c) = uVar13;
        goto LAB_034c78ac;
      }
    }
    piVar10 = (int *)0x0;
  }
  else {
LAB_034c78d0:
    piVar10 = piVar10 + 1;
    *(undefined8 *)piVar10 = *param_4;
  }
  uVar8 = 1;
  if (piVar10 == (int *)0x0) {
    uVar8 = 2;
  }
  return uVar8;
}


