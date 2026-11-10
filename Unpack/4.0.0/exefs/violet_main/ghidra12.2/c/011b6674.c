/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b6674; name: FUN_011b6674
 */


void FUN_011b6674(long *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  uint uVar15;
  ushort *puVar16;
  ulong uVar17;
  
  uVar17 = (ulong)param_2;
  if (((*PTR_DAT_047d8c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c98);
  }
  lVar8 = *(long *)PTR_DAT_047d8ca0;
  *(long *)PTR_DAT_047d8ca8 = lVar8;
  bVar5 = 1 < param_4;
  if (*(int *)(lVar8 + 0x2b0) != 3) {
    bVar5 = param_4 != 1;
  }
  *(undefined4 *)(param_1[0x14] + uVar17 * 8) = param_3;
  puVar2 = (undefined4 *)(param_1[0x14] + uVar17 * 8 + 4);
  if (bVar5) {
    *puVar2 = 1;
    lVar8 = (**(code **)(*param_1 + 0x90))(param_1);
    if (lVar8 == 0) {
      uVar7 = 0x60000;
    }
    else {
      uVar7 = FUN_00e388b8(lVar8,param_3,param_1[8]);
      uVar7 = uVar7 & 0xffff | 0x60000;
    }
    if (*(uint *)(param_1 + 0xb) <= param_2) {
      return;
    }
    lVar11 = param_1[8];
    *(ulong *)(param_1[0xc] + uVar17 * 0x18 + 8) = uVar7;
    lVar9 = param_1[0xc];
    lVar8 = *(long *)(lVar9 + uVar17 * 0x18);
    if (*(char *)(lVar8 + 0x54) == '\0') goto LAB_011b6a00;
    uVar10 = (uint)*(ushort *)(lVar8 + 0x50);
    if (*(ushort *)(lVar8 + 0x50) == 0) goto LAB_011b6a2c;
    puVar14 = *(ushort **)(lVar11 + 0x30);
    iVar6 = 0;
    puVar12 = *(ushort **)(lVar8 + 0x30);
    do {
      uVar4 = *puVar14;
      *puVar12 = uVar4;
      if (uVar4 == 0) goto LAB_011b69f8;
      if (uVar4 == 0x10) {
        puVar16 = puVar14 + 1;
        uVar4 = *puVar16;
        uVar1 = uVar4 + 2;
        bVar5 = uVar10 < uVar1;
        uVar10 = uVar10 - uVar1;
        if (bVar5 || uVar10 == 0) goto LAB_011b69f4;
        uVar15 = uVar4 + 1;
        uVar3 = uVar15 & 7;
        puVar13 = puVar12 + 1;
        *puVar13 = uVar4;
        if (uVar3 != 0) {
          lVar9 = 0;
          do {
            lVar11 = lVar9;
            uVar15 = uVar15 - 1;
            uVar3 = uVar3 - 1;
            *(undefined2 *)((long)puVar12 + lVar11 + 4) =
                 *(undefined2 *)((long)puVar14 + lVar11 + 4);
            lVar9 = lVar11 + 2;
          } while (uVar3 != 0);
          puVar12 = (ushort *)((long)puVar12 + lVar11 + 4);
          puVar14 = (ushort *)((long)puVar14 + lVar11 + 2);
          puVar16 = puVar14 + 1;
          puVar13 = puVar12;
        }
        if (6 < uVar4) {
          do {
            puVar13[1] = puVar14[2];
            puVar13[2] = puVar16[2];
            puVar13[3] = puVar16[3];
            puVar13[4] = puVar16[4];
            puVar13[5] = puVar16[5];
            puVar13[6] = puVar16[6];
            puVar14 = puVar16 + 7;
            puVar13[7] = *puVar14;
            puVar16 = puVar16 + 8;
            uVar15 = uVar15 - 8;
            puVar13 = puVar13 + 8;
            *puVar13 = *puVar16;
            puVar12 = puVar13;
          } while (uVar15 != 0);
        }
        puVar14 = puVar16;
        iVar6 = uVar1 + iVar6;
      }
      else {
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
        iVar6 = iVar6 + 1;
        uVar10 = uVar10 - 1;
      }
    } while (uVar10 != 0);
  }
  else {
    *puVar2 = 0;
    lVar8 = (**(code **)(*param_1 + 0x88))(param_1);
    if (lVar8 == 0) {
      uVar7 = 0x20000;
    }
    else {
      uVar7 = FUN_00e388b8(lVar8,param_3,param_1[8]);
      uVar7 = uVar7 & 0xffff | 0x20000;
    }
    if (*(uint *)(param_1 + 0xb) <= param_2) {
      return;
    }
    lVar11 = param_1[8];
    *(ulong *)(param_1[0xc] + uVar17 * 0x18 + 8) = uVar7;
    lVar9 = param_1[0xc];
    lVar8 = *(long *)(lVar9 + uVar17 * 0x18);
    if (*(char *)(lVar8 + 0x54) == '\0') goto LAB_011b6a00;
    uVar10 = (uint)*(ushort *)(lVar8 + 0x50);
    if (*(ushort *)(lVar8 + 0x50) == 0) {
LAB_011b6a2c:
      iVar6 = 0;
      goto LAB_011b69f8;
    }
    puVar14 = *(ushort **)(lVar11 + 0x30);
    iVar6 = 0;
    puVar12 = *(ushort **)(lVar8 + 0x30);
    do {
      uVar4 = *puVar14;
      *puVar12 = uVar4;
      if (uVar4 == 0) goto LAB_011b69f8;
      if (uVar4 == 0x10) {
        puVar16 = puVar14 + 1;
        uVar4 = *puVar16;
        uVar1 = uVar4 + 2;
        bVar5 = uVar10 < uVar1;
        uVar10 = uVar10 - uVar1;
        if (bVar5 || uVar10 == 0) goto LAB_011b69f4;
        uVar15 = uVar4 + 1;
        uVar3 = uVar15 & 7;
        puVar13 = puVar12 + 1;
        *puVar13 = uVar4;
        if (uVar3 != 0) {
          lVar9 = 0;
          do {
            lVar11 = lVar9;
            uVar15 = uVar15 - 1;
            uVar3 = uVar3 - 1;
            *(undefined2 *)((long)puVar12 + lVar11 + 4) =
                 *(undefined2 *)((long)puVar14 + lVar11 + 4);
            lVar9 = lVar11 + 2;
          } while (uVar3 != 0);
          puVar12 = (ushort *)((long)puVar12 + lVar11 + 4);
          puVar14 = (ushort *)((long)puVar14 + lVar11 + 2);
          puVar16 = puVar14 + 1;
          puVar13 = puVar12;
        }
        if (6 < uVar4) {
          do {
            puVar13[1] = puVar14[2];
            puVar13[2] = puVar16[2];
            puVar13[3] = puVar16[3];
            puVar13[4] = puVar16[4];
            puVar13[5] = puVar16[5];
            puVar13[6] = puVar16[6];
            puVar14 = puVar16 + 7;
            puVar13[7] = *puVar14;
            puVar16 = puVar16 + 8;
            uVar15 = uVar15 - 8;
            puVar13 = puVar13 + 8;
            *puVar13 = *puVar16;
            puVar12 = puVar13;
          } while (uVar15 != 0);
        }
        puVar14 = puVar16;
        iVar6 = uVar1 + iVar6;
      }
      else {
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
        iVar6 = iVar6 + 1;
        uVar10 = uVar10 - 1;
      }
    } while (uVar10 != 0);
  }
  if (iVar6 != 0) {
    iVar6 = iVar6 + -1;
    puVar12[-1] = 0;
  }
LAB_011b69f8:
  *(short *)(lVar8 + 0x52) = (short)iVar6;
  lVar9 = param_1[0xc];
LAB_011b6a00:
  *(undefined2 *)(lVar9 + uVar17 * 0x18 + 0x10) = 0;
  lVar8 = param_1[0xc] + uVar17 * 0x18;
  *(ushort *)(lVar8 + 0x12) = *(ushort *)(lVar8 + 0x12) & 0xfffe;
  return;
LAB_011b69f4:
  *puVar12 = 0;
  goto LAB_011b69f8;
}


