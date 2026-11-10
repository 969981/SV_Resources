/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031bf4f0; name: FUN_031bf4f0
 */


void FUN_031bf4f0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong local_68;
  ulong local_48;
  
  uVar16 = param_2 & 0xffffffff;
  lVar17 = tpidr_el0;
  lVar8 = *(long *)(lVar17 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar17 + 0x1000b8) = lVar8;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0x3d0) + 0x10);
  iVar15 = (int)param_2;
  if (*(long *)(lVar8 + 8) == 0) {
    uVar14 = -(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3;
    local_68 = uVar14;
    if (lVar8 == 0) goto LAB_031bf5c4;
    local_48 = uVar14 + 0x3f & 0xffffffffffffffc0;
    if (*(ulong *)(lVar8 + 0x28) < local_48) {
LAB_031bf57c:
      lVar4 = FUN_031cf3b4(lVar8,&local_48);
    }
    else {
      lVar4 = *(long *)(lVar8 + 0x38);
      if (*(ulong *)(lVar8 + 0x40) < local_48 + lVar4) goto LAB_031bf57c;
      *(ulong *)(lVar8 + 0x38) = local_48 + lVar4;
    }
  }
  else {
    local_68 = -(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3;
LAB_031bf5c4:
    uVar14 = local_68;
    lVar4 = (**(code **)PTR_DAT_047d1a08)(1,&local_68,0x40);
    lVar8 = 0;
  }
  lVar18 = (long)iVar15;
  if (0 < iVar15) {
    if (iVar15 == 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      puVar6 = param_1 + 4;
      puVar13 = (undefined4 *)(lVar4 + 8);
      do {
        iVar7 = (int)uVar9;
        puVar13[-2] = *(undefined4 *)(puVar6 + -4);
        puVar13[-1] = iVar7;
        uVar9 = uVar9 + 2;
        *puVar13 = *(undefined4 *)puVar6;
        puVar13[1] = iVar7 + 1;
        puVar6 = puVar6 + 8;
        puVar13 = puVar13 + 4;
      } while ((param_2 & 0xfffffffe) != uVar9);
    }
    if ((param_2 & 1) != 0) {
      puVar13 = (undefined4 *)(lVar4 + uVar9 * 8);
      *puVar13 = *(undefined4 *)(param_1 + uVar9 * 4);
      puVar13[1] = (int)uVar9;
    }
  }
  lVar10 = *(long *)(lVar17 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar17 + 0x1000b8) = lVar10;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0x3d0) + 0x10);
  local_68 = uVar14;
  if ((*(long *)(lVar10 + 8) == 0) && (lVar10 != 0)) {
    local_48 = uVar14 + 0x3f & 0xffffffffffffffc0;
    if (local_48 <= *(ulong *)(lVar10 + 0x28)) {
      lVar5 = *(long *)(lVar10 + 0x38);
      if (local_48 + lVar5 <= *(ulong *)(lVar10 + 0x40)) {
        *(ulong *)(lVar10 + 0x38) = local_48 + lVar5;
        goto LAB_031bf704;
      }
    }
    lVar5 = FUN_031cf3b4(lVar10,&local_48);
  }
  else {
    lVar5 = (**(code **)PTR_DAT_047d1a08)(1,&local_68,0x40);
    lVar10 = 0;
  }
LAB_031bf704:
  FUN_031c0430(lVar4,lVar4 + lVar18 * 8,lVar5,lVar5 + lVar18 * 8,0);
  if (lVar10 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar5,uVar14);
  }
  else {
    uVar9 = uVar14 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(lVar10 + 0x28) < uVar9) || (*(long *)(lVar10 + 0x38) != uVar9 + lVar5)) {
      if (lVar5 != 0) {
        if (*(ulong *)(lVar10 + 0x28) < uVar9 + 0x40) {
          *(int *)(*(long *)(lVar10 + 0x30) + 0x20) = *(int *)(*(long *)(lVar10 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar10 + 0x10) + 0x18))
                    (*(long **)(lVar10 + 0x10),lVar5 - *(int *)(lVar5 + -4),uVar9 + 0x44);
        }
        else {
          if (*(long *)(lVar10 + 0x38) == uVar9 + lVar5) {
            *(long *)(lVar10 + 0x38) = lVar5;
            goto LAB_031bf7dc;
          }
          FUN_031cf778(lVar10,lVar5);
        }
      }
    }
    else {
      *(long *)(lVar10 + 0x38) = lVar5;
      if (*(long *)(lVar10 + 0x48) == lVar5) {
LAB_031bf7dc:
        FUN_031cf578(lVar10);
      }
    }
  }
  lVar10 = *(long *)(lVar17 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar17 + 0x1000b8) = lVar10;
  }
  uVar9 = lVar18 * 0x20;
  lVar17 = *(long *)(*(long *)(lVar10 + 0x3d0) + 0x10);
  local_68 = uVar9;
  if ((*(long *)(lVar17 + 8) == 0) && (lVar17 != 0)) {
    local_48 = uVar9 + 0x3f & 0xffffffffffffffc0;
    if (local_48 <= *(ulong *)(lVar17 + 0x28)) {
      puVar6 = *(undefined8 **)(lVar17 + 0x38);
      if (local_48 + (long)puVar6 <= *(ulong *)(lVar17 + 0x40)) {
        *(ulong *)(lVar17 + 0x38) = local_48 + (long)puVar6;
        goto LAB_031bf8a4;
      }
    }
    puVar6 = (undefined8 *)FUN_031cf3b4(lVar17,&local_48);
  }
  else {
    puVar6 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(1,&local_68,0x40);
    lVar17 = 0;
  }
LAB_031bf8a4:
  if (0 < iVar15) {
    puVar11 = puVar6 + 2;
    puVar12 = (uint *)(lVar4 + 4);
    do {
      puVar1 = param_1 + (ulong)*puVar12 * 4;
      uVar19 = *puVar1;
      uVar21 = puVar1[3];
      uVar20 = puVar1[2];
      puVar11[-1] = puVar1[1];
      puVar11[-2] = uVar19;
      puVar11[1] = uVar21;
      *puVar11 = uVar20;
      uVar16 = uVar16 - 1;
      puVar11 = puVar11 + 4;
      puVar12 = puVar12 + 2;
    } while (uVar16 != 0);
  }
  iVar15 = iVar15 * 2;
  if (0 < iVar15) {
    puVar11 = puVar6;
    do {
      iVar15 = iVar15 + -1;
      uVar2 = *(undefined4 *)(puVar11 + 1);
      uVar3 = *(undefined4 *)((long)puVar11 + 0xc);
      *param_1 = *puVar11;
      *(undefined4 *)(param_1 + 1) = uVar2;
      *(undefined4 *)((long)param_1 + 0xc) = uVar3;
      puVar11 = puVar11 + 2;
      param_1 = param_1 + 2;
    } while (iVar15 != 0);
  }
  if (lVar17 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar6,uVar9);
    goto joined_r0x031bf968;
  }
  uVar16 = uVar9 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar17 + 0x28) < uVar16) || (*(long *)(lVar17 + 0x38) != uVar16 + (long)puVar6)) {
    if (puVar6 == (undefined8 *)0x0) goto joined_r0x031bf968;
    if (*(ulong *)(lVar17 + 0x28) < uVar16 + 0x40) {
      *(int *)(*(long *)(lVar17 + 0x30) + 0x20) = *(int *)(*(long *)(lVar17 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar17 + 0x10) + 0x18))
                (*(long **)(lVar17 + 0x10),(long)puVar6 - (long)*(int *)((long)puVar6 + -4),
                 uVar16 + 0x44);
      goto joined_r0x031bf968;
    }
    if (*(long *)(lVar17 + 0x38) != uVar16 + (long)puVar6) {
      FUN_031cf778(lVar17);
      goto joined_r0x031bf968;
    }
    *(undefined8 **)(lVar17 + 0x38) = puVar6;
  }
  else {
    *(undefined8 **)(lVar17 + 0x38) = puVar6;
    if (*(undefined8 **)(lVar17 + 0x48) != puVar6) goto joined_r0x031bf968;
  }
  FUN_031cf578(lVar17);
joined_r0x031bf968:
  if (lVar8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar4,uVar14);
    return;
  }
  uVar16 = uVar14 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar8 + 0x28) < uVar16) || (*(long *)(lVar8 + 0x38) != uVar16 + lVar4)) {
    if (lVar4 == 0) {
      return;
    }
    if (*(ulong *)(lVar8 + 0x28) < uVar16 + 0x40) {
      *(int *)(*(long *)(lVar8 + 0x30) + 0x20) = *(int *)(*(long *)(lVar8 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar8 + 0x10) + 0x18))
                (*(long **)(lVar8 + 0x10),lVar4 - *(int *)(lVar4 + -4),uVar16 + 0x44);
      return;
    }
    if (*(long *)(lVar8 + 0x38) != uVar16 + lVar4) {
      FUN_031cf778(lVar8,lVar4);
      return;
    }
    *(long *)(lVar8 + 0x38) = lVar4;
  }
  else {
    *(long *)(lVar8 + 0x38) = lVar4;
    if (*(long *)(lVar8 + 0x48) != lVar4) {
      return;
    }
  }
  FUN_031cf578(lVar8);
  return;
}


