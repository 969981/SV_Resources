/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fb0ed0; name: FUN_02fb0ed0
 */


void FUN_02fb0ed0(byte *param_1,uint param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  byte *pbVar6;
  ulong uVar7;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  byte *pbVar14;
  uint auStack_880 [256];
  int local_480;
  uint local_470 [255];
  uint local_74;
  
  memset(local_470,0,0x410);
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      pbVar9 = param_1;
      do {
        uVar7 = uVar7 + 2;
        local_470[*pbVar9] = local_470[*pbVar9] + 1;
        pbVar11 = pbVar9 + 0xc;
        pbVar9 = pbVar9 + 0x18;
        local_470[*pbVar11] = local_470[*pbVar11] + 1;
      } while (((ulong)param_2 & 0xfffffffe) != uVar7);
    }
    if ((param_2 & 1) != 0) {
      local_470[param_1[uVar7 * 0xc]] = local_470[param_1[uVar7 * 0xc]] + 1;
    }
  }
  memset(auStack_880,0,0x410);
  pbVar9 = param_1;
  if (param_2 == 0) {
    pbVar11 = param_3;
    if ((local_470[0] != 0) && (local_74 != 0)) {
      local_480 = 0;
      uVar7 = 0xfffffffffffffffc;
      piVar5 = (int *)((ulong)auStack_880 | 8);
      piVar8 = (int *)((ulong)local_470 | 8);
      do {
        iVar1 = piVar8[-2];
        iVar2 = piVar8[-1];
        piVar5[-2] = local_480;
        piVar5[-1] = iVar1 + local_480;
        iVar2 = iVar2 + iVar1 + local_480;
        uVar7 = uVar7 + 4;
        local_480 = piVar8[1];
        iVar1 = *piVar8 + iVar2;
        *piVar5 = iVar2;
        piVar5[1] = iVar1;
        local_480 = local_480 + iVar1;
        piVar5 = piVar5 + 4;
        piVar8 = piVar8 + 4;
      } while (uVar7 < 0xfc);
      pbVar11 = param_1;
      pbVar9 = param_3;
    }
    memset(local_470,0,0x400);
    memset(local_470,0,0x400);
    local_74 = 0;
    local_470[0] = 0;
  }
  else {
    pbVar11 = param_1 + 1;
    if ((local_470[0] == param_2) || (local_74 == param_2)) {
      memset(local_470,0,0x400);
      if (param_2 == 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        pbVar12 = pbVar11;
        do {
          uVar7 = uVar7 + 2;
          local_470[*pbVar12] = local_470[*pbVar12] + 1;
          pbVar10 = pbVar12 + 0xc;
          pbVar12 = pbVar12 + 0x18;
          local_470[*pbVar10] = local_470[*pbVar10] + 1;
        } while (((ulong)param_2 & 0xfffffffe) != uVar7);
      }
      if ((param_2 & 1) != 0) {
        local_470[pbVar11[uVar7 * 0xc]] = local_470[pbVar11[uVar7 * 0xc]] + 1;
      }
    }
    else {
      local_480 = 0;
      uVar7 = 0xfffffffffffffffc;
      piVar5 = (int *)((ulong)auStack_880 | 8);
      piVar8 = (int *)((ulong)local_470 | 8);
      do {
        iVar1 = piVar8[-2];
        iVar2 = piVar8[-1];
        piVar5[-2] = local_480;
        piVar5[-1] = iVar1 + local_480;
        iVar2 = iVar2 + iVar1 + local_480;
        uVar7 = uVar7 + 4;
        local_480 = piVar8[1];
        iVar1 = *piVar8 + iVar2;
        *piVar5 = iVar2;
        piVar5[1] = iVar1;
        local_480 = local_480 + iVar1;
        piVar5 = piVar5 + 4;
        piVar8 = piVar8 + 4;
      } while (uVar7 < 0xfc);
      memset(local_470,0,0x400);
      uVar7 = (ulong)param_2;
      do {
        uVar7 = uVar7 - 1;
        bVar4 = *pbVar11;
        uVar3 = auStack_880[*pbVar9];
        auStack_880[*pbVar9] = uVar3 + 1;
        uVar13 = *(undefined8 *)pbVar9;
        *(undefined4 *)(param_3 + (ulong)uVar3 * 0xc + 8) = *(undefined4 *)(pbVar9 + 8);
        *(undefined8 *)(param_3 + (ulong)uVar3 * 0xc) = uVar13;
        pbVar9 = pbVar9 + 0xc;
        local_470[bVar4] = local_470[bVar4] + 1;
        pbVar11 = pbVar11 + 0xc;
      } while (uVar7 != 0);
      pbVar11 = param_3 + 1;
      pbVar9 = param_3;
      param_3 = param_1;
    }
    pbVar12 = pbVar9 + 2;
    if ((local_470[0] == param_2) || (local_74 == param_2)) {
      memset(local_470,0,0x400);
      if (param_2 == 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        pbVar11 = pbVar12;
        do {
          uVar7 = uVar7 + 2;
          local_470[*pbVar11] = local_470[*pbVar11] + 1;
          pbVar10 = pbVar11 + 0xc;
          pbVar11 = pbVar11 + 0x18;
          local_470[*pbVar10] = local_470[*pbVar10] + 1;
        } while (((ulong)param_2 & 0xfffffffe) != uVar7);
      }
      if ((param_2 & 1) != 0) {
        local_470[pbVar12[uVar7 * 0xc]] = local_470[pbVar12[uVar7 * 0xc]] + 1;
      }
      pbVar10 = param_3;
    }
    else {
      local_480 = 0;
      uVar7 = 0xfffffffffffffffc;
      piVar5 = (int *)((ulong)auStack_880 | 8);
      piVar8 = (int *)((ulong)local_470 | 8);
      do {
        iVar1 = piVar8[-2];
        iVar2 = piVar8[-1];
        piVar5[-2] = local_480;
        piVar5[-1] = iVar1 + local_480;
        iVar2 = iVar2 + iVar1 + local_480;
        uVar7 = uVar7 + 4;
        local_480 = piVar8[1];
        iVar1 = *piVar8 + iVar2;
        *piVar5 = iVar2;
        piVar5[1] = iVar1;
        local_480 = local_480 + iVar1;
        piVar5 = piVar5 + 4;
        piVar8 = piVar8 + 4;
      } while (uVar7 < 0xfc);
      memset(local_470,0,0x400);
      uVar7 = (ulong)param_2;
      pbVar10 = pbVar9;
      do {
        uVar7 = uVar7 - 1;
        bVar4 = *pbVar12;
        uVar3 = auStack_880[*pbVar11];
        auStack_880[*pbVar11] = uVar3 + 1;
        uVar13 = *(undefined8 *)pbVar10;
        *(undefined4 *)(param_3 + (ulong)uVar3 * 0xc + 8) = *(undefined4 *)(pbVar10 + 8);
        *(undefined8 *)(param_3 + (ulong)uVar3 * 0xc) = uVar13;
        pbVar10 = pbVar10 + 0xc;
        local_470[bVar4] = local_470[bVar4] + 1;
        pbVar12 = pbVar12 + 0xc;
        pbVar11 = pbVar11 + 0xc;
      } while (uVar7 != 0);
      pbVar12 = param_3 + 2;
      pbVar10 = pbVar9;
      pbVar9 = param_3;
    }
    pbVar11 = pbVar9 + 3;
    if ((local_470[0] == param_2) || (local_74 == param_2)) {
      memset(local_470,0,0x400);
      if (param_2 == 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        pbVar12 = pbVar11;
        do {
          uVar7 = uVar7 + 2;
          local_470[*pbVar12] = local_470[*pbVar12] + 1;
          pbVar14 = pbVar12 + 0xc;
          pbVar12 = pbVar12 + 0x18;
          local_470[*pbVar14] = local_470[*pbVar14] + 1;
        } while (((ulong)param_2 & 0xfffffffe) != uVar7);
      }
      if ((param_2 & 1) != 0) {
        local_470[pbVar11[uVar7 * 0xc]] = local_470[pbVar11[uVar7 * 0xc]] + 1;
      }
      pbVar11 = pbVar10;
    }
    else {
      local_480 = 0;
      uVar7 = 0xfffffffffffffffc;
      piVar5 = (int *)((ulong)auStack_880 | 8);
      piVar8 = (int *)((ulong)local_470 | 8);
      do {
        iVar1 = piVar8[-2];
        iVar2 = piVar8[-1];
        piVar5[-2] = local_480;
        piVar5[-1] = iVar1 + local_480;
        iVar2 = iVar2 + iVar1 + local_480;
        uVar7 = uVar7 + 4;
        local_480 = piVar8[1];
        iVar1 = *piVar8 + iVar2;
        *piVar5 = iVar2;
        piVar5[1] = iVar1;
        local_480 = local_480 + iVar1;
        piVar5 = piVar5 + 4;
        piVar8 = piVar8 + 4;
      } while (uVar7 < 0xfc);
      memset(local_470,0,0x400);
      uVar7 = (ulong)param_2;
      pbVar14 = pbVar9;
      do {
        uVar7 = uVar7 - 1;
        bVar4 = *pbVar11;
        uVar3 = auStack_880[*pbVar12];
        auStack_880[*pbVar12] = uVar3 + 1;
        uVar13 = *(undefined8 *)pbVar14;
        *(undefined4 *)(pbVar10 + (ulong)uVar3 * 0xc + 8) = *(undefined4 *)(pbVar14 + 8);
        *(undefined8 *)(pbVar10 + (ulong)uVar3 * 0xc) = uVar13;
        pbVar14 = pbVar14 + 0xc;
        local_470[bVar4] = local_470[bVar4] + 1;
        pbVar12 = pbVar12 + 0xc;
        pbVar11 = pbVar11 + 0xc;
      } while (uVar7 != 0);
      pbVar11 = pbVar9;
      pbVar9 = pbVar10;
    }
  }
  pbVar12 = pbVar11;
  pbVar10 = pbVar9;
  if ((local_470[0] != param_2) && (local_74 != param_2)) {
    local_480 = 0;
    uVar7 = 0xfffffffffffffffc;
    piVar5 = (int *)((ulong)auStack_880 | 8);
    piVar8 = (int *)((ulong)local_470 | 8);
    do {
      iVar1 = piVar8[-2];
      iVar2 = piVar8[-1];
      piVar5[-2] = local_480;
      piVar5[-1] = iVar1 + local_480;
      iVar2 = iVar2 + iVar1 + local_480;
      uVar7 = uVar7 + 4;
      local_480 = piVar8[1];
      iVar1 = *piVar8 + iVar2;
      *piVar5 = iVar2;
      piVar5[1] = iVar1;
      local_480 = local_480 + iVar1;
      piVar5 = piVar5 + 4;
      piVar8 = piVar8 + 4;
    } while (uVar7 < 0xfc);
    if (param_2 == 0) {
      return;
    }
    uVar7 = (ulong)param_2;
    pbVar6 = pbVar9 + 3;
    pbVar14 = pbVar9;
    do {
      uVar7 = uVar7 - 1;
      uVar3 = auStack_880[*pbVar6];
      auStack_880[*pbVar6] = uVar3 + 1;
      uVar13 = *(undefined8 *)pbVar14;
      pbVar12 = pbVar14 + 8;
      pbVar14 = pbVar14 + 0xc;
      *(undefined4 *)(pbVar11 + (ulong)uVar3 * 0xc + 8) = *(undefined4 *)pbVar12;
      *(undefined8 *)(pbVar11 + (ulong)uVar3 * 0xc) = uVar13;
      pbVar6 = pbVar6 + 0xc;
      pbVar12 = pbVar9;
      pbVar10 = pbVar11;
    } while (uVar7 != 0);
  }
  if ((param_2 != 0) && (pbVar12 == param_1)) {
    if (param_2 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      pbVar11 = param_1;
      pbVar9 = pbVar10;
      do {
        uVar13 = *(undefined8 *)pbVar9;
        uVar7 = uVar7 + 2;
        *(undefined4 *)(pbVar11 + 8) = *(undefined4 *)(pbVar9 + 8);
        *(undefined8 *)pbVar11 = uVar13;
        uVar13 = *(undefined8 *)(pbVar9 + 0xc);
        *(undefined4 *)(pbVar11 + 0x14) = *(undefined4 *)(pbVar9 + 0x14);
        *(undefined8 *)(pbVar11 + 0xc) = uVar13;
        pbVar9 = pbVar9 + 0x18;
        pbVar11 = pbVar11 + 0x18;
      } while (((ulong)param_2 & 0xfffffffe) != uVar7);
    }
    if ((param_2 & 1) != 0) {
      uVar13 = *(undefined8 *)(pbVar10 + uVar7 * 0xc);
      *(undefined4 *)(param_1 + uVar7 * 0xc + 8) = *(undefined4 *)(pbVar10 + uVar7 * 0xc + 8);
      *(undefined8 *)(param_1 + uVar7 * 0xc) = uVar13;
    }
  }
  return;
}


