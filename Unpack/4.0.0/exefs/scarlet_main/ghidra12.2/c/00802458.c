/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00802458; name: FUN_00802458
 */


undefined8 FUN_00802458(long param_1,ulong param_2)

{
  ulong *puVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  ulong uStack_1c8;
  ulong local_1c0 [48];
  __less a_Stack_38 [8];
  
  puVar14 = local_1c0;
  puVar9 = local_1c0;
  lVar13 = *(long *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
  if (lVar13 == 0) {
    lVar13 = FUN_008127c0();
    pbVar3 = (byte *)(lVar13 + 1);
  }
  else {
    lVar15 = *(long *)(*(long *)PTR_DAT_047d0a08 + 0xc0);
    pbVar3 = (byte *)FUN_008127c0();
    if (lVar13 != lVar15) {
      pbVar3 = pbVar3 + 1;
    }
  }
  bVar2 = *pbVar3;
  uVar4 = FUN_007c7184(&DAT_047fb4a0);
  if ((uint)((uVar4 & 0xffffffff) * 100 >> 0x20) < (uint)bVar2) {
LAB_00802664:
    uVar6 = 1;
  }
  else {
    uVar4 = (ulong)*(uint *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0xc0) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = 0;
      puVar5 = (ulong *)(*(long *)(param_1 + 0xb8) + 0x10);
      do {
        if (*puVar5 != 0xffffffffffffffff) {
          local_1c0[iVar10] = *puVar5;
          iVar10 = iVar10 + 1;
        }
        puVar5 = puVar5 + 0x10;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar11 = *(ushort **)(*(long *)(param_1 + 0xb0) + 0x1308);
    if (*puVar11 != 0) {
      uVar12 = 0;
      do {
        puVar5 = (ulong *)FUN_00801414(puVar11,uVar12);
        if (puVar5 != (ulong *)0x0) {
          local_1c0[iVar10] = *puVar5;
          iVar10 = iVar10 + 1;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *puVar11);
    }
    puVar5 = local_1c0 + iVar10;
    std::__sort<std::__less<unsigned_long,unsigned_long>&,unsigned_long*>
              (local_1c0,puVar5,a_Stack_38);
    if (iVar10 != 0) {
      lVar13 = (long)iVar10 * 8;
      puVar7 = &uStack_1c8;
      do {
        lVar13 = lVar13 + -8;
        if (lVar13 == 0) goto LAB_008025f0;
        puVar14 = puVar7 + 1;
        puVar1 = puVar7 + 2;
        puVar7 = puVar14;
      } while (*puVar14 != *puVar1);
    }
    if (puVar14 != puVar5) {
      puVar7 = puVar14 + 2;
      if (puVar7 != puVar5) {
        uVar4 = *puVar14;
        do {
          uVar8 = *puVar7;
          if (uVar4 != uVar8) {
            puVar14 = puVar14 + 1;
            *puVar14 = uVar8;
          }
          puVar7 = puVar7 + 1;
          uVar4 = uVar8;
        } while (local_1c0 + iVar10 != puVar7);
      }
      puVar5 = puVar14 + 1;
    }
LAB_008025f0:
    iVar10 = (int)((ulong)((long)puVar5 - (long)local_1c0) >> 3);
    if (iVar10 == 0) {
      iVar10 = 0;
LAB_00802654:
      lVar13 = FUN_008127c0();
      if (*(char *)(lVar13 + iVar10 + 8) != '\0') goto LAB_00802664;
    }
    else {
      lVar13 = (((long)puVar5 - (long)local_1c0) * 0x20000000 >> 0x20) << 3;
      do {
        if (*puVar9 == param_2) goto LAB_0080262c;
        puVar9 = puVar9 + 1;
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
      puVar9 = local_1c0 + iVar10;
LAB_0080262c:
      iVar10 = (int)((ulong)((long)puVar9 - (long)local_1c0) >> 3);
      if (iVar10 < 0x18) goto LAB_00802654;
    }
    uVar6 = 0;
  }
  return uVar6;
}


