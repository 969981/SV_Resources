/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0010a550; name: FUN_0010a550
 */


void FUN_0010a550(uint *param_1,undefined8 *param_2,uint *param_3,undefined1 *param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  char cVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  byte local_80 [20];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  
  uVar7 = param_1[4];
  uVar8 = (ulong)uVar7;
  puVar16 = *(uint **)(param_1 + 2);
  uVar6 = (ulong)*param_1;
  puVar18 = puVar16;
  if (uVar7 < 4) {
    puVar18 = puVar16 + 1;
    Hint_Prefetch(puVar16 + 0x100,0,0,0);
    uVar7 = uVar7 + 0x20;
    uVar6 = (ulong)*puVar16 << (uVar8 & 0x3f) | uVar6;
  }
  uVar8 = uVar6 & 0xf;
  uVar7 = uVar7 - 4;
  *param_2 = &UNK_03cb2300 + *(uint *)(&DAT_03cb26e0 + uVar8 * 4);
  uVar6 = uVar6 >> 4;
  uVar11 = (uint)uVar6;
  *param_3 = (uint)(byte)(&DAT_03cab6e0)[uVar8];
  if ((int)uVar8 == 0) {
    lVar9 = 0;
    do {
      param_4[lVar9] = (char)lVar9;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x10);
    goto LAB_0010ac04;
  }
  puVar16 = puVar18;
  if (uVar7 == 0) {
    puVar16 = puVar18 + 1;
    uVar6 = (ulong)*puVar18;
    uVar7 = 0x20;
  }
  uVar8 = uVar6 >> 1 & 0x7fffffff;
  uVar11 = uVar7 - 1;
  if ((uVar6 & 1) != 0) {
    puVar17 = puVar16;
    if (uVar11 < 3) {
      puVar17 = puVar16 + 1;
      Hint_Prefetch(puVar16 + 0x100,0,0,0);
      uVar8 = (ulong)*puVar16 << ((ulong)uVar11 & 0x3f) | uVar8;
      uVar11 = uVar7 + 0x1f;
    }
    uVar15 = uVar8 >> 3;
    uVar2 = (uint)uVar8 & 7;
    uVar7 = uVar11 - 3;
    uVar6 = (ulong)(uVar2 + 1);
    uVar4 = 0xffff;
    puVar13 = param_4;
    do {
      uVar14 = (ulong)uVar7;
      uVar8 = uVar15 & 0xffffffff;
      puVar18 = puVar17;
      if (uVar7 < 4) {
        puVar18 = puVar17 + 1;
        Hint_Prefetch(puVar17 + 0x100,0,0,0);
        uVar7 = uVar7 + 0x20;
        uVar8 = (ulong)*puVar17 << (uVar14 & 0x3f) | uVar8;
      }
      uVar15 = uVar8 >> 4;
      uVar11 = (uint)uVar15;
      uVar3 = (uint)uVar8 & 0xf;
      uVar7 = uVar7 - 4;
      uVar6 = uVar6 - 1;
      uVar4 = uVar4 & (1 << (ulong)uVar3 ^ 0xffffffffU);
      *puVar13 = (char)uVar3;
      cVar12 = '\0';
      puVar13 = puVar13 + 1;
      puVar17 = puVar18;
    } while (uVar6 != 0);
    do {
      if ((uVar4 & 1) != 0) {
        uVar2 = uVar2 + 1;
        param_4[uVar2] = cVar12;
        if (uVar2 == 0xf) break;
      }
      cVar12 = cVar12 + '\x01';
      uVar4 = uVar4 >> 1;
    } while (uVar4 != 0);
    goto LAB_0010ac04;
  }
  puVar18 = puVar16;
  if (uVar11 < 2) {
    puVar18 = puVar16 + 1;
    Hint_Prefetch(puVar16 + 0x100,0,0,0);
    uVar8 = (ulong)*puVar16 << ((ulong)uVar11 & 0x3f) | uVar8;
    uVar11 = uVar7 + 0x1f;
  }
  uVar7 = uVar11 - 2;
  uVar2 = (uint)uVar8 & 3;
  if ((uVar8 & 3) == 0) {
    uVar6 = uVar8 >> 2;
    uVar8 = 0;
    puVar16 = puVar18;
    do {
      puVar18 = puVar16;
      if (uVar7 == 0) {
        puVar18 = puVar16 + 1;
        uVar6 = (ulong)*puVar16;
        uVar7 = 0x20;
      }
      uVar15 = uVar6 >> 1 & 0x7fffffff;
      uVar11 = (uint)uVar15;
      uVar7 = uVar7 - 1;
      bVar5 = (byte)uVar8;
      if ((uVar6 & 1) == 0) {
        bVar10 = bVar5 | 1;
        param_4[uVar8] = bVar5;
      }
      else {
        param_4[uVar8] = bVar5 | 1;
        bVar10 = bVar5;
      }
      uVar14 = uVar8 + 2;
      param_4[uVar8 + 1] = bVar10;
      uVar6 = uVar15;
      uVar8 = uVar14;
      puVar16 = puVar18;
    } while (uVar14 < 0x10);
    goto LAB_0010ac04;
  }
  uVar6 = uVar8 >> 2;
  uVar8 = 0;
  do {
    uVar4 = uVar7;
    if (uVar4 == 0) {
      uVar6 = (ulong)*puVar18;
      uVar4 = 0x20;
      puVar18 = puVar18 + 1;
    }
    uVar15 = uVar6 >> 1 & 0x7fffffff;
    uVar11 = (uint)uVar15;
    uVar7 = uVar4 - 1;
    bVar5 = (byte)uVar8;
    if ((uVar6 & 1) == 0) {
      bVar10 = bVar5 | 1;
      local_80[uVar8] = bVar5;
    }
    else {
      local_80[uVar8] = bVar5 | 1;
      bVar10 = bVar5;
    }
    uVar14 = uVar8 + 2;
    local_80[uVar8 + 1] = bVar10;
    uVar6 = uVar15;
    uVar8 = uVar14;
  } while (uVar14 < 0x10);
  if (uVar2 == 1) {
    uVar2 = uVar11;
    if (uVar7 < 3) {
      uVar2 = *puVar18 << (ulong)(uVar7 & 0x1f) | uVar11;
    }
    uVar2 = FUN_0010ac30(uVar2 & 7,param_4,local_80,(ulong)local_80 | 2,2);
    if (uVar2 < uVar7 || uVar2 - uVar7 == 0) {
      uVar11 = uVar11 >> (ulong)(uVar2 & 0x1f);
    }
    else {
      uVar11 = *puVar18 >> (ulong)(uVar2 - uVar7 & 0x1f);
      uVar7 = uVar4 + 0x1f;
      puVar18 = puVar18 + 1;
    }
    uVar7 = uVar7 - uVar2;
    uVar2 = uVar11;
    if (uVar7 < 3) {
      uVar2 = *puVar18 << (ulong)(uVar7 & 0x1f) | uVar11;
    }
    uVar2 = FUN_0010ac30(uVar2 & 7,param_4 + 4,local_80 + 4,local_80 + 6,2);
    if (uVar2 < uVar7 || uVar2 - uVar7 == 0) {
      uVar11 = uVar11 >> (ulong)(uVar2 & 0x1f);
    }
    else {
      uVar11 = *puVar18 >> (ulong)(uVar2 - uVar7 & 0x1f);
      uVar7 = uVar7 + 0x20;
      puVar18 = puVar18 + 1;
    }
    uVar7 = uVar7 - uVar2;
    uVar2 = uVar11;
    if (uVar7 < 3) {
      uVar2 = *puVar18 << (ulong)(uVar7 & 0x1f) | uVar11;
    }
    uVar2 = FUN_0010ac30(uVar2 & 7,param_4 + 8,local_80 + 8,local_80 + 10,2);
    if (uVar2 < uVar7 || uVar2 - uVar7 == 0) {
      uVar11 = uVar11 >> (ulong)(uVar2 & 0x1f);
    }
    else {
      uVar11 = *puVar18 >> (ulong)(uVar2 - uVar7 & 0x1f);
      uVar7 = uVar7 + 0x20;
      puVar18 = puVar18 + 1;
    }
    uVar7 = uVar7 - uVar2;
    uVar2 = uVar11;
    if (uVar7 < 3) {
      uVar2 = *puVar18 << (ulong)(uVar7 & 0x1f) | uVar11;
    }
    uVar4 = FUN_0010ac30(uVar2 & 7,param_4 + 0xc,local_80 + 0xc,local_80 + 0xe,2);
    uVar2 = uVar4 - uVar7;
    if (uVar4 < uVar7 || uVar2 == 0) {
      uVar11 = uVar11 >> (ulong)(uVar4 & 0x1f);
    }
    else {
LAB_0010abec:
      uVar7 = uVar7 + 0x20;
      uVar11 = *puVar18 >> (ulong)(uVar2 & 0x1f);
      puVar18 = puVar18 + 1;
    }
  }
  else {
    uVar3 = uVar11;
    if (uVar7 < 3) {
      uVar3 = *puVar18 << (ulong)(uVar7 & 0x1f) | uVar11;
    }
    uVar3 = FUN_0010ac30(uVar3 & 7,local_80 + 0x10,local_80,(ulong)local_80 | 2,2);
    if (uVar3 < uVar7 || uVar3 - uVar7 == 0) {
      uVar11 = uVar11 >> (ulong)(uVar3 & 0x1f);
    }
    else {
      uVar11 = *puVar18 >> (ulong)(uVar3 - uVar7 & 0x1f);
      uVar7 = uVar4 + 0x1f;
      puVar18 = puVar18 + 1;
    }
    uVar7 = uVar7 - uVar3;
    uVar4 = uVar11;
    if (uVar7 < 3) {
      uVar4 = *puVar18 << (ulong)(uVar7 & 0x1f) | uVar11;
    }
    uVar4 = FUN_0010ac30(uVar4 & 7,auStack_6c,local_80 + 4,local_80 + 6,2);
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar11 = uVar11 >> (ulong)(uVar4 & 0x1f);
    }
    else {
      uVar11 = *puVar18 >> (ulong)(uVar4 - uVar7 & 0x1f);
      uVar7 = uVar7 + 0x20;
      puVar18 = puVar18 + 1;
    }
    uVar7 = uVar7 - uVar4;
    uVar4 = uVar11;
    if (uVar7 < 3) {
      uVar4 = *puVar18 << (ulong)(uVar7 & 0x1f) | uVar11;
    }
    pbVar1 = local_80 + 8;
    uVar4 = FUN_0010ac30(uVar4 & 7,auStack_68,pbVar1,local_80 + 10,2);
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar11 = uVar11 >> (ulong)(uVar4 & 0x1f);
    }
    else {
      uVar11 = *puVar18 >> (ulong)(uVar4 - uVar7 & 0x1f);
      uVar7 = uVar7 + 0x20;
      puVar18 = puVar18 + 1;
    }
    uVar7 = uVar7 - uVar4;
    uVar4 = uVar11;
    if (uVar7 < 3) {
      uVar4 = *puVar18 << (ulong)(uVar7 & 0x1f) | uVar11;
    }
    uVar4 = FUN_0010ac30(uVar4 & 7,auStack_64,local_80 + 0xc,local_80 + 0xe,2);
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar11 = uVar11 >> (ulong)(uVar4 & 0x1f);
    }
    else {
      uVar11 = *puVar18 >> (ulong)(uVar4 - uVar7 & 0x1f);
      uVar7 = uVar7 + 0x20;
      puVar18 = puVar18 + 1;
    }
    uVar7 = uVar7 - uVar4;
    if (uVar2 == 2) {
      uVar2 = uVar11;
      if (uVar7 < 7) {
        uVar2 = *puVar18 << (ulong)(uVar7 & 0x1f) | uVar11;
      }
      uVar2 = FUN_0010ac30(uVar2 & 0x7f,param_4,local_80 + 0x10,auStack_6c,4);
      if (uVar2 < uVar7 || uVar2 - uVar7 == 0) {
        uVar11 = uVar11 >> (ulong)(uVar2 & 0x1f);
      }
      else {
        uVar11 = *puVar18 >> (ulong)(uVar2 - uVar7 & 0x1f);
        uVar7 = uVar7 + 0x20;
        puVar18 = puVar18 + 1;
      }
      uVar7 = uVar7 - uVar2;
      uVar2 = uVar11;
      if (uVar7 < 7) {
        uVar2 = *puVar18 << (ulong)(uVar7 & 0x1f) | uVar11;
      }
      uVar2 = FUN_0010ac30(uVar2 & 0x7f,param_4 + 8,auStack_68,auStack_64,4);
      if (uVar2 < uVar7 || uVar2 - uVar7 == 0) {
        uVar11 = uVar11 >> (ulong)(uVar2 & 0x1f);
        uVar7 = uVar7 - uVar2;
      }
      else {
        uVar11 = *puVar18 >> (ulong)(uVar2 - uVar7 & 0x1f);
        uVar7 = (uVar7 + 0x20) - uVar2;
        puVar18 = puVar18 + 1;
      }
      goto LAB_0010ac04;
    }
    uVar2 = uVar11;
    if (uVar7 < 7) {
      uVar2 = *puVar18 << (ulong)(uVar7 & 0x1f) | uVar11;
    }
    uVar2 = FUN_0010ac30(uVar2 & 0x7f,local_80,local_80 + 0x10,auStack_6c,4);
    if (uVar2 < uVar7 || uVar2 - uVar7 == 0) {
      uVar11 = uVar11 >> (ulong)(uVar2 & 0x1f);
    }
    else {
      uVar11 = *puVar18 >> (ulong)(uVar2 - uVar7 & 0x1f);
      uVar7 = uVar7 + 0x20;
      puVar18 = puVar18 + 1;
    }
    uVar7 = uVar7 - uVar2;
    uVar2 = uVar11;
    if (uVar7 < 7) {
      uVar2 = *puVar18 << (ulong)(uVar7 & 0x1f) | uVar11;
    }
    uVar2 = FUN_0010ac30(uVar2 & 0x7f,pbVar1,auStack_68,auStack_64,4);
    if (uVar2 < uVar7 || uVar2 - uVar7 == 0) {
      uVar11 = uVar11 >> (ulong)(uVar2 & 0x1f);
    }
    else {
      uVar11 = *puVar18 >> (ulong)(uVar2 - uVar7 & 0x1f);
      uVar7 = uVar7 + 0x20;
      puVar18 = puVar18 + 1;
    }
    uVar7 = uVar7 - uVar2;
    uVar2 = uVar11;
    if (uVar7 < 0xf) {
      uVar2 = *puVar18 << (ulong)(uVar7 & 0x1f) | uVar11;
    }
    uVar4 = FUN_0010ac30(uVar2 & 0x7fff,param_4,local_80,pbVar1,8);
    uVar2 = uVar4 - uVar7;
    if (uVar7 <= uVar4 && uVar2 != 0) goto LAB_0010abec;
    uVar11 = uVar11 >> (ulong)(uVar4 & 0x1f);
  }
  uVar7 = uVar7 - uVar4;
LAB_0010ac04:
  *(uint **)(param_1 + 2) = puVar18;
  *param_1 = uVar11;
  param_1[4] = uVar7;
  return;
}


