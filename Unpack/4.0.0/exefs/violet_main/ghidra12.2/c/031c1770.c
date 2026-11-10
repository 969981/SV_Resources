/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c1770; name: FUN_031c1770
 */


void FUN_031c1770(long param_1,uint param_2,long param_3,undefined8 param_4,ulong param_5,
                 int param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  byte *pbVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  uint auStack_890 [256];
  int local_490;
  uint local_480 [255];
  uint local_84;
  
  memset(local_480,0,0x410);
  if (param_2 != 0) {
    lVar21 = param_1 + (int)param_5;
    if (param_2 == 1) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      pbVar9 = (byte *)(lVar21 + 8);
      do {
        uVar15 = uVar15 + 2;
        local_480[pbVar9[-8]] = local_480[pbVar9[-8]] + 1;
        local_480[*pbVar9] = local_480[*pbVar9] + 1;
        pbVar9 = pbVar9 + 0x10;
      } while (((ulong)param_2 & 0xfffffffe) != uVar15);
    }
    if ((param_2 & 1) != 0) {
      bVar5 = *(byte *)(lVar21 + uVar15 * 8);
      local_480[bVar5] = local_480[bVar5] + 1;
    }
  }
  memset(auStack_890,0,0x410);
  iVar20 = (int)((ulong)param_4 >> 0x20);
  lVar21 = param_1;
  if (1 < iVar20) {
    if (param_2 == 0) {
      bVar7 = local_480[0] == 0;
      bVar8 = local_84 == 0;
      iVar19 = 0;
      lVar10 = param_3;
      do {
        if ((bVar8) || (bVar7)) {
          param_3 = lVar10;
        }
        else {
          local_490 = 0;
          uVar15 = 0xfffffffffffffffc;
          piVar11 = (int *)((ulong)local_480 | 8);
          piVar14 = (int *)((ulong)auStack_890 | 8);
          do {
            iVar2 = piVar11[-2];
            iVar3 = piVar11[-1];
            piVar14[-2] = local_490;
            piVar14[-1] = iVar2 + local_490;
            iVar3 = iVar3 + iVar2 + local_490;
            uVar15 = uVar15 + 4;
            local_490 = piVar11[1];
            iVar2 = *piVar11 + iVar3;
            *piVar14 = iVar3;
            piVar14[1] = iVar2;
            local_490 = local_490 + iVar2;
            piVar11 = piVar11 + 4;
            piVar14 = piVar14 + 4;
          } while (uVar15 < 0xfc);
          param_3 = lVar21;
          lVar21 = lVar10;
        }
        memset(local_480,0,0x400);
        iVar19 = iVar19 + 1;
        bVar8 = true;
        bVar7 = true;
        lVar10 = param_3;
      } while (iVar19 != iVar20 + -1);
      param_5 = (ulong)(iVar20 - 2) + (param_5 & 0xffffffff) + 1;
    }
    else {
      uVar13 = (ulong)param_2;
      iVar19 = 0;
      uVar15 = (long)(int)param_5;
      lVar10 = param_1;
      do {
        param_5 = uVar15 + 1;
        lVar21 = lVar10 + param_5;
        if (local_480[0] == param_2 || local_84 == param_2) {
          memset(local_480,0,0x400);
          if (uVar13 - 1 < 3) {
            uVar15 = 0;
          }
          else {
            uVar15 = 0;
            pbVar9 = (byte *)(lVar21 + 0x10);
            do {
              uVar15 = uVar15 + 4;
              local_480[pbVar9[-0x10]] = local_480[pbVar9[-0x10]] + 1;
              local_480[pbVar9[-8]] = local_480[pbVar9[-8]] + 1;
              local_480[*pbVar9] = local_480[*pbVar9] + 1;
              pbVar16 = pbVar9 + 8;
              pbVar9 = pbVar9 + 0x20;
              local_480[*pbVar16] = local_480[*pbVar16] + 1;
            } while ((uVar13 & 0xfffffffc) != uVar15);
          }
          if ((param_2 & 3) != 0) {
            pbVar9 = (byte *)(lVar21 + uVar15 * 8);
            uVar15 = uVar13 & 3;
            do {
              uVar15 = uVar15 - 1;
              local_480[*pbVar9] = local_480[*pbVar9] + 1;
              pbVar9 = pbVar9 + 8;
            } while (uVar15 != 0);
          }
          lVar21 = lVar10;
        }
        else {
          local_490 = 0;
          uVar17 = 0xfffffffffffffffc;
          piVar11 = (int *)((ulong)local_480 | 8);
          piVar14 = (int *)((ulong)auStack_890 | 8);
          do {
            iVar2 = piVar11[-2];
            iVar3 = piVar11[-1];
            piVar14[-2] = local_490;
            piVar14[-1] = iVar2 + local_490;
            iVar3 = iVar3 + iVar2 + local_490;
            uVar17 = uVar17 + 4;
            local_490 = piVar11[1];
            iVar2 = *piVar11 + iVar3;
            *piVar14 = iVar3;
            piVar14[1] = iVar2;
            local_490 = local_490 + iVar2;
            piVar11 = piVar11 + 4;
            piVar14 = piVar14 + 4;
          } while (uVar17 < 0xfc);
          memset(local_480,0,0x400);
          if (param_2 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = 0;
            pbVar9 = (byte *)(lVar10 + uVar15 + 8);
            pbVar16 = (byte *)(lVar21 + 8);
            puVar12 = (undefined8 *)(lVar10 + 8);
            do {
              uVar17 = uVar17 + 2;
              uVar4 = auStack_890[pbVar9[-8]];
              bVar5 = pbVar16[-8];
              auStack_890[pbVar9[-8]] = uVar4 + 1;
              *(undefined8 *)(param_3 + (ulong)uVar4 * 8) = puVar12[-1];
              local_480[bVar5] = local_480[bVar5] + 1;
              bVar5 = *pbVar16;
              uVar4 = auStack_890[*pbVar9];
              auStack_890[*pbVar9] = uVar4 + 1;
              *(undefined8 *)(param_3 + (ulong)uVar4 * 8) = *puVar12;
              local_480[bVar5] = local_480[bVar5] + 1;
              pbVar9 = pbVar9 + 0x10;
              pbVar16 = pbVar16 + 0x10;
              puVar12 = puVar12 + 2;
            } while ((uVar13 & 0xfffffffe) != uVar17);
          }
          if ((param_2 & 1) != 0) {
            bVar5 = *(byte *)(lVar10 + uVar15 + uVar17 * 8);
            bVar6 = *(byte *)(lVar21 + uVar17 * 8);
            uVar4 = auStack_890[bVar5];
            auStack_890[bVar5] = uVar4 + 1;
            *(undefined8 *)(param_3 + (ulong)uVar4 * 8) = *(undefined8 *)(lVar10 + uVar17 * 8);
            local_480[bVar6] = local_480[bVar6] + 1;
          }
          lVar21 = param_3;
          param_3 = lVar10;
        }
        iVar19 = iVar19 + 1;
        uVar15 = param_5;
        lVar10 = lVar21;
      } while (iVar19 != iVar20 + -1);
    }
  }
  if ((local_480[0] == param_2) || (local_84 == param_2)) {
    lVar10 = lVar21;
    lVar21 = param_3;
  }
  else {
    local_490 = 0;
    uVar15 = 0xfffffffffffffffc;
    piVar11 = (int *)((ulong)auStack_890 | 8);
    piVar14 = (int *)((ulong)local_480 | 8);
    do {
      iVar19 = piVar14[-2];
      iVar20 = piVar14[-1];
      piVar11[-2] = local_490;
      piVar11[-1] = iVar19 + local_490;
      iVar20 = iVar20 + iVar19 + local_490;
      uVar15 = uVar15 + 4;
      local_490 = piVar14[1];
      iVar19 = *piVar14 + iVar20;
      *piVar11 = iVar20;
      piVar11[1] = iVar19;
      local_490 = local_490 + iVar19;
      piVar11 = piVar11 + 4;
      piVar14 = piVar14 + 4;
    } while (uVar15 < 0xfc);
    if (param_2 == 0) {
      return;
    }
    lVar10 = lVar21 + (int)param_5;
    if (param_2 == 1) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      pbVar9 = (byte *)(lVar10 + 8);
      do {
        puVar12 = (undefined8 *)(lVar21 + uVar15 * 8);
        uVar15 = uVar15 + 2;
        uVar4 = auStack_890[pbVar9[-8]];
        auStack_890[pbVar9[-8]] = uVar4 + 1;
        *(undefined8 *)(param_3 + (ulong)uVar4 * 8) = *puVar12;
        uVar4 = auStack_890[*pbVar9];
        auStack_890[*pbVar9] = uVar4 + 1;
        *(undefined8 *)(param_3 + (ulong)uVar4 * 8) = puVar12[1];
        pbVar9 = pbVar9 + 0x10;
      } while (((ulong)param_2 & 0xfffffffe) != uVar15);
    }
    if ((param_2 & 1) != 0) {
      bVar5 = *(byte *)(lVar10 + uVar15 * 8);
      uVar4 = auStack_890[bVar5];
      auStack_890[bVar5] = uVar4 + 1;
      *(undefined8 *)(param_3 + (ulong)uVar4 * 8) = *(undefined8 *)(lVar21 + uVar15 * 8);
    }
    lVar10 = param_3;
  }
  if ((param_2 != 0) && ((param_6 == 1) != (lVar21 == param_1))) {
    uVar13 = (ulong)param_2;
    uVar15 = uVar13 & 3;
    if (uVar13 - 1 < 3) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      puVar12 = (undefined8 *)(lVar21 + 0x10);
      puVar18 = (undefined8 *)(lVar10 + 0x10);
      do {
        puVar12[-2] = puVar18[-2];
        puVar12[-1] = puVar18[-1];
        *puVar12 = *puVar18;
        puVar1 = puVar18 + 1;
        uVar17 = uVar17 + 4;
        puVar18 = puVar18 + 4;
        puVar12[1] = *puVar1;
        puVar12 = puVar12 + 4;
      } while ((uVar13 & 0xfffffffc) != uVar17);
    }
    if ((param_2 & 3) != 0) {
      puVar12 = (undefined8 *)(lVar10 + uVar17 * 8);
      puVar18 = (undefined8 *)(lVar21 + uVar17 * 8);
      do {
        uVar15 = uVar15 - 1;
        *puVar18 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar18 = puVar18 + 1;
      } while (uVar15 != 0);
    }
  }
  return;
}


