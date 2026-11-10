/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0352ebf8; name: FUN_0352ebf8
 */


undefined8 FUN_0352ebf8(long *param_1,long param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  long *plVar9;
  undefined1 uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  short sVar14;
  uint uVar15;
  uint uVar16;
  undefined4 local_58;
  undefined1 local_54;
  
  sVar14 = *(short *)(param_2 + 0x14);
  uVar10 = 3;
  if (sVar14 == 0) {
    sVar14 = 0;
  }
  else {
    uVar10 = 1;
    if (*(short *)(param_2 + 0x18) != 0 || *(short *)(param_2 + 0x16) != 0) {
      iVar3 = (int)*(short *)(param_2 + 0x16) + (int)sVar14;
      iVar5 = (int)(short)iVar3;
      if (iVar3 < 1) {
        iVar5 = 1;
      }
      sVar1 = *(short *)(param_2 + 0x18) + sVar14;
      if (iVar5 != sVar1) {
        lVar12 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
        iVar3 = (sVar1 - iVar5) + 1;
        *(long *)PTR_DAT_047e7068 = lVar12;
        sVar14 = 0;
        uVar6 = (ulong)lVar12 >> 0x21;
        if (iVar3 != 0) {
          sVar14 = (short)((int)(uint)uVar6 / iVar3);
        }
        sVar14 = ((short)uVar6 - sVar14 * (short)iVar3) + (short)iVar5;
      }
    }
  }
  if ((*(uint *)(param_2 + 0x30) & 0xfffffffd) == 1) {
    iVar3 = *(int *)(param_2 + 0x10);
    piVar8 = (int *)param_1[6];
    uVar15 = *(uint *)(param_1 + 7);
    if ((uVar15 == 0) || (*piVar8 == iVar3)) {
      piVar7 = piVar8;
    }
    else {
      lVar12 = (ulong)uVar15 * 0x18;
      piVar11 = piVar8;
      do {
        lVar12 = lVar12 + -0x18;
        if (lVar12 == 0) goto LAB_0352edf8;
        piVar7 = piVar11 + 6;
        piVar2 = piVar11 + 6;
        piVar11 = piVar7;
      } while (*piVar2 != iVar3);
    }
    if (piVar7 == piVar8 + (ulong)uVar15 * 6) {
LAB_0352edf8:
      piVar8 = *(int **)(*param_1 + 0x180);
      uVar15 = *(uint *)(*param_1 + 0x188);
      if ((uVar15 == 0) || (*piVar8 == iVar3)) {
        piVar7 = piVar8;
      }
      else {
        lVar12 = (ulong)uVar15 * 0x10;
        piVar11 = piVar8;
        do {
          lVar12 = lVar12 + -0x10;
          if (lVar12 == 0) goto LAB_0352ee6c;
          piVar7 = piVar11 + 4;
          piVar2 = piVar11 + 4;
          piVar11 = piVar7;
        } while (*piVar2 != iVar3);
      }
      if ((piVar7 == piVar8 + (ulong)uVar15 * 4) ||
         (plVar13 = *(long **)(piVar7 + 2), plVar13 == (long *)0x0)) {
LAB_0352ee6c:
        plVar13 = (long *)FUN_0352e6b8(param_2);
      }
      else {
        plVar13 = (long *)(**(code **)(*plVar13 + 0x20))(plVar13,*(undefined4 *)(param_2 + 0x28));
      }
      if (plVar13 == (long *)0x0) {
        return 2;
      }
      piVar7 = (int *)param_1[6];
      uVar15 = *(uint *)(param_1 + 7);
      uVar4 = (undefined2)*(undefined4 *)(param_2 + 0x28);
      piVar8 = piVar7;
      if ((uVar15 != 0) && (*piVar7 != iVar3)) {
        lVar12 = (ulong)uVar15 * 0x18;
        piVar11 = piVar7;
        do {
          lVar12 = lVar12 + -0x18;
          if (lVar12 == 0) goto LAB_0352ef10;
          piVar8 = piVar11 + 6;
          piVar2 = piVar11 + 6;
          piVar11 = piVar8;
        } while (*piVar2 != iVar3);
      }
      if (piVar8 == piVar7 + (ulong)uVar15 * 6) {
LAB_0352ef10:
        uVar16 = *(uint *)((long)param_1 + 0x3c);
        if (uVar16 <= uVar15) {
          iVar5 = uVar16 + (uVar16 >> 1);
          if (uVar16 == 0) {
            iVar5 = 1;
          }
          uVar16 = iVar5 + uVar16;
          piVar7 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,piVar7,(ulong)uVar16 * 0x18);
          if (piVar7 == (int *)0x0) goto LAB_0352edb4;
          param_1[6] = (long)piVar7;
          *(uint *)((long)param_1 + 0x3c) = uVar16;
        }
        if (uVar16 <= uVar15) goto LAB_0352edb4;
        uVar15 = *(uint *)(param_1 + 7);
        *(uint *)(param_1 + 7) = uVar15 + 1;
        if (piVar7 == (int *)0x0) goto LAB_0352edb4;
        piVar7 = piVar7 + (ulong)uVar15 * 6;
        *piVar7 = iVar3;
        *(long **)(piVar7 + 2) = plVar13;
        *(undefined2 *)(piVar7 + 4) = uVar4;
      }
      else {
        *(long **)(piVar8 + 2) = plVar13;
        *(undefined2 *)(piVar8 + 4) = uVar4;
      }
    }
    else {
      plVar13 = *(long **)(piVar7 + 2);
    }
    uVar10 = 3;
  }
  else {
    plVar13 = (long *)FUN_0352e6b8(param_2);
  }
  if (plVar13 == (long *)0x0) {
    return 2;
  }
  uVar16 = *(uint *)(param_1 + 3);
  uVar15 = *(uint *)((long)param_1 + 0x1c);
  if (uVar16 < uVar15) {
LAB_0352ed58:
    if (uVar16 < uVar15) {
      uVar15 = *(uint *)(param_1 + 3);
      *(uint *)(param_1 + 3) = uVar15 + 1;
      if (param_1[2] != 0) {
        plVar9 = (long *)(param_1[2] + (ulong)uVar15 * 0x18);
        *plVar9 = param_2;
        *(short *)(plVar9 + 1) = sVar14;
        *(undefined1 *)((long)plVar9 + 10) = uVar10;
        *(undefined1 *)((long)plVar9 + 0xf) = local_54;
        *(undefined4 *)((long)plVar9 + 0xb) = local_58;
        plVar9[2] = (long)plVar13;
        return 1;
      }
    }
  }
  else {
    iVar3 = uVar15 + (uVar15 >> 1);
    if (uVar15 == 0) {
      iVar3 = 1;
    }
    uVar15 = iVar3 + uVar15;
    lVar12 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,param_1[2],(ulong)uVar15 * 0x18);
    if (lVar12 != 0) {
      param_1[2] = lVar12;
      *(uint *)((long)param_1 + 0x1c) = uVar15;
      goto LAB_0352ed58;
    }
  }
  if ((*(uint *)(param_2 + 0x30) & 0xfffffffd) == 1) {
    return 2;
  }
LAB_0352edb4:
  (**(code **)(*plVar13 + 0x10))(plVar13);
  return 2;
}


