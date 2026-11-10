/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f6060; name: FUN_034f6060
 */


undefined4 FUN_034f6060(undefined8 *param_1,undefined4 *param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  byte bVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  undefined4 uVar18;
  float fVar19;
  
  puVar5 = PTR_DAT_047e2fd0;
  bVar2 = *(byte *)(param_2 + 1);
  uVar17 = (ulong)bVar2;
  uVar3 = *(ushort *)(param_2 + 2);
  if (bVar2 < 9) {
    param_1[3] = 0;
    param_1[4] = param_1;
    param_1[10] = param_1 + 9;
    *(undefined1 *)(param_1 + 0xb) = 0;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
LAB_034f6230:
    uVar4 = 0;
    if (param_3 != 0) {
      uVar4 = 48000 / param_3;
    }
    *(uint *)(param_1 + 8) = uVar4;
    uVar18 = *param_2;
    *(byte *)((long)param_1 + 0x6d) = bVar2;
    fVar19 = (float)NEON_ucvtf(uVar18);
    *(float *)((long)param_1 + 100) = fVar19 / (float)param_3;
    if ((*(ushort *)(param_2 + 2) & 0x3f) == 0x20) {
      bVar11 = 4;
      if (bVar2 != 2) {
        bVar11 = 5;
      }
      bVar12 = 3;
      if (bVar2 != 1) {
        bVar12 = bVar11;
      }
    }
    else if ((*(ushort *)(param_2 + 2) & 0x3f) == 0x10) {
      bVar11 = 1;
      if (bVar2 != 2) {
        bVar11 = 2;
      }
      bVar12 = 0;
      if (bVar2 != 1) {
        bVar12 = bVar11;
      }
    }
    else {
      bVar12 = 0xff;
    }
    *(byte *)((long)param_1 + 0x6c) = bVar12;
    pbVar16 = (byte *)(param_2 + 1);
    pcVar1 = (code *)PTR_FUN_047e7448;
    if ((uVar3 & 0x3f) != 0x20) {
      pcVar1 = (code *)PTR_FUN_047e7440;
    }
    if (*pbVar16 != 0) {
      uVar17 = 0;
      do {
        uVar7 = (*pcVar1)(pbVar16,uVar17 & 0xffffffff);
        *(undefined1 *)(param_1[10] + uVar17) = uVar7;
        uVar17 = uVar17 + 1;
      } while (uVar17 < *pbVar16);
      bVar12 = *(byte *)((long)param_1 + 0x6c);
    }
    uVar18 = 1;
    if (5 < bVar12) {
      uVar18 = 2;
    }
  }
  else {
    if ((uVar3 & 0x3f) == 0x20) {
      puVar8 = (undefined4 *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(5,uVar17 << 2,0x10);
      param_1[4] = puVar8;
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
        uVar13 = uVar17 - 1 & 3;
        if (uVar17 - 2 < 3) {
          lVar14 = 1;
        }
        else {
          uVar6 = 0;
          do {
            uVar15 = uVar6;
            *(undefined4 *)(param_1[4] + uVar15 * 4 + 4) = 0;
            *(undefined4 *)(param_1[4] + uVar15 * 4 + 8) = 0;
            *(undefined4 *)(param_1[4] + uVar15 * 4 + 0xc) = 0;
            *(undefined4 *)(param_1[4] + uVar15 * 4 + 0x10) = 0;
            uVar6 = uVar15 + 4;
          } while ((uVar17 - 1 & 0xfffffffffffffffc) != uVar15 + 4);
          lVar14 = uVar15 + 5;
        }
        if (uVar13 != 0) {
          lVar14 = lVar14 << 2;
          do {
            *(undefined4 *)(param_1[4] + lVar14) = 0;
            uVar13 = uVar13 - 1;
            lVar14 = lVar14 + 4;
          } while (uVar13 != 0);
        }
        goto LAB_034f6214;
      }
    }
    else {
      puVar9 = (undefined2 *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(5,uVar17 << 1,0x10);
      param_1[4] = puVar9;
      if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = 0;
        uVar13 = uVar17 - 1 & 3;
        if (uVar17 - 2 < 3) {
          lVar14 = 1;
        }
        else {
          uVar6 = 0;
          do {
            uVar15 = uVar6;
            *(undefined2 *)(param_1[4] + uVar15 * 2 + 2) = 0;
            *(undefined2 *)(param_1[4] + uVar15 * 2 + 4) = 0;
            *(undefined2 *)(param_1[4] + uVar15 * 2 + 6) = 0;
            *(undefined2 *)(param_1[4] + uVar15 * 2 + 8) = 0;
            uVar6 = uVar15 + 4;
          } while ((uVar17 - 1 & 0xfffffffffffffffc) != uVar15 + 4);
          lVar14 = uVar15 + 5;
        }
        if (uVar13 != 0) {
          lVar14 = lVar14 << 1;
          do {
            *(undefined2 *)(param_1[4] + lVar14) = 0;
            uVar13 = uVar13 - 1;
            lVar14 = lVar14 + 2;
          } while (uVar13 != 0);
        }
LAB_034f6214:
        uVar10 = (**(code **)(puVar5 + 0x10))(5,uVar17);
        param_1[10] = uVar10;
        *(undefined1 *)(param_1 + 0xb) = 1;
        goto LAB_034f6230;
      }
    }
    uVar18 = 2;
  }
  return uVar18;
}


