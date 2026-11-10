/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031ce7b0; name: FUN_031ce7b0
 */


undefined8 FUN_031ce7b0(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  ulong local_50;
  ulong local_48;
  
  uVar16 = *(ulong *)(param_2 + 0x18);
  lVar15 = tpidr_el0;
  lVar5 = *(long *)(lVar15 + 0x1000b8);
  if (lVar5 == 0) {
    lVar5 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar5;
  }
  uVar16 = -(uVar16 >> 0x1f & 1) & 0xfffffff800000000 | (uVar16 & 0xffffffff) << 3;
  lVar15 = *(long *)(*(long *)(lVar5 + 0x3d0) + 0x10);
  local_50 = uVar16;
  if ((*(long *)(lVar15 + 8) == 0) && (lVar15 != 0)) {
    local_48 = uVar16 + 0x3f & 0xffffffffffffffc0;
    if (local_48 <= *(ulong *)(lVar15 + 0x28)) {
      plVar4 = *(long **)(lVar15 + 0x38);
      if (local_48 + (long)plVar4 <= *(ulong *)(lVar15 + 0x40)) {
        *(ulong *)(lVar15 + 0x38) = local_48 + (long)plVar4;
        goto LAB_031ce898;
      }
    }
    plVar4 = (long *)FUN_031cf3b4(lVar15,&local_48);
  }
  else {
    plVar4 = (long *)(**(code **)PTR_DAT_047d1a08)(1,&local_50,0x40);
    lVar15 = 0;
  }
LAB_031ce898:
  plVar8 = *(long **)(param_2 + 0x10);
  uVar18 = 0;
  plVar10 = (long *)*param_1;
  plVar7 = (long *)((long)plVar8 + param_1[1] * *(long *)(param_2 + 0x18));
  if (plVar10 != (long *)0x0) {
    plVar12 = param_1;
    do {
      if ((plVar10 < plVar8) || (plVar7 <= plVar10)) {
        plVar12 = plVar10;
      }
      else {
        plVar4[(int)uVar18] = (long)plVar10;
        uVar18 = uVar18 + 1;
        *plVar12 = *plVar10;
      }
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  plVar10 = (long *)param_1[8];
  if ((plVar10 < plVar8) || (plVar7 <= plVar10)) {
    if (uVar18 == *(uint *)(param_2 + 0x18)) {
      uVar17 = 1;
      goto joined_r0x031ce958;
    }
  }
  else {
    iVar3 = 0;
    if (param_1[1] != 0) {
      iVar3 = (int)((ulong)(param_1[9] - (long)plVar10) / (ulong)param_1[1]);
    }
    if (uVar18 + iVar3 == *(int *)(param_2 + 0x18)) {
      uVar17 = 1;
      param_1[8] = 0;
      param_1[9] = 0;
      goto joined_r0x031ce958;
    }
  }
  uVar2 = uVar18 - 1;
  if (0 < (int)uVar18) {
    if (uVar2 == 0) {
      uVar6 = 0;
    }
    else {
      FUN_031cf070(plVar4,0,uVar2);
      plVar8 = (long *)*plVar4;
      uVar13 = (ulong)uVar18 - 1;
      uVar6 = uVar13 & 3;
      if ((ulong)uVar18 - 2 < 3) {
        lVar5 = 1;
      }
      else {
        plVar10 = plVar4 + 2;
        uVar1 = 0;
        do {
          uVar11 = uVar1;
          puVar14 = (undefined8 *)plVar10[-1];
          *plVar8 = (long)puVar14;
          puVar9 = (undefined8 *)*plVar10;
          *puVar14 = puVar9;
          plVar7 = (long *)plVar10[1];
          *puVar9 = plVar7;
          plVar8 = (long *)plVar10[2];
          uVar1 = uVar11 + 4;
          plVar10 = plVar10 + 4;
          *plVar7 = (long)plVar8;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar1);
        lVar5 = uVar11 + 5;
      }
      if (uVar6 != 0) {
        plVar10 = plVar4 + lVar5;
        do {
          plVar7 = (long *)*plVar10;
          *plVar8 = (long)plVar7;
          uVar6 = uVar6 - 1;
          plVar8 = plVar7;
          plVar10 = plVar10 + 1;
        } while (uVar6 != 0);
      }
      uVar6 = (ulong)uVar2;
    }
    *(long *)plVar4[uVar6] = *param_1;
    *param_1 = *plVar4;
  }
  uVar17 = 0;
joined_r0x031ce958:
  if (lVar15 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,plVar4,uVar16);
    return uVar17;
  }
  uVar16 = uVar16 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar15 + 0x28) < uVar16) || (*(long *)(lVar15 + 0x38) != uVar16 + (long)plVar4)) {
    if (plVar4 == (long *)0x0) {
      return uVar17;
    }
    if (*(ulong *)(lVar15 + 0x28) < uVar16 + 0x40) {
      *(int *)(*(long *)(lVar15 + 0x30) + 0x20) = *(int *)(*(long *)(lVar15 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar15 + 0x10) + 0x18))
                (*(long **)(lVar15 + 0x10),(long)plVar4 - (long)*(int *)((long)plVar4 + -4),
                 uVar16 + 0x44);
      return uVar17;
    }
    if (*(long *)(lVar15 + 0x38) != uVar16 + (long)plVar4) {
      FUN_031cf778(lVar15,plVar4);
      return uVar17;
    }
    *(long **)(lVar15 + 0x38) = plVar4;
  }
  else {
    *(long **)(lVar15 + 0x38) = plVar4;
    if (*(long **)(lVar15 + 0x48) != plVar4) {
      return uVar17;
    }
  }
  FUN_031cf578(lVar15);
  return uVar17;
}


