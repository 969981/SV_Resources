/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c8388; name: FUN_008c8388
 */


undefined8 FUN_008c8388(char *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong *puVar2;
  void *pvVar3;
  uint uVar4;
  size_t __n;
  char cVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  void *__s;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  size_t __n_00;
  ulong uVar21;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar12 = *(long *)(param_1 + 0xa0);
  if (*(char *)(lVar12 + 0x752) == '\0') {
    if ((((*(int *)(lVar12 + 0x960) < 1) || (*(long *)(param_1 + 0x3e0) == 0)) ||
        (*(long *)(*(long *)(param_1 + 0x3e0) + 0x48) == 0)) &&
       (((*(int *)(lVar12 + 0x924) == 0 || (*(long *)(param_1 + 1000) == 0)) ||
        (*(long *)(*(long *)(param_1 + 1000) + 0x48) == 0)))) {
      if (*(int *)(*(long *)(param_1 + 0x238) + 0x330) < 1) goto LAB_008c83bc;
      bVar8 = false;
      if (*(long *)(param_1 + 0x3f0) != 0) {
        bVar8 = *(long *)(*(long *)(param_1 + 0x3f0) + 0x48) != 0;
      }
    }
    else {
      bVar8 = true;
    }
  }
  else {
LAB_008c83bc:
    bVar8 = false;
  }
  uVar9 = *(uint *)(param_1 + 0x24);
  param_1[0x5e0] = bVar8;
  if ((uVar9 == 0) && (uVar9 = FUN_008c8ed0(param_1,param_3), uVar9 == 0)) {
    FUN_008d43d0(param_1,2);
    return 0;
  }
  if (*(uint *)(param_1 + 0x230) == uVar9) goto LAB_008c8a8c;
  FUN_008c7ed0(param_1);
  if (*(long *)(param_1 + 0x228) != 0) {
    *(int *)(param_1 + 0x838) = *(int *)(param_1 + 0x838) + -1;
    FUN_008d4410(*(long *)(param_1 + 0x228),1);
    param_1[0x228] = '\0';
    param_1[0x229] = '\0';
    param_1[0x22a] = '\0';
    param_1[0x22b] = '\0';
    param_1[0x22c] = '\0';
    param_1[0x22d] = '\0';
    param_1[0x22e] = '\0';
    param_1[0x22f] = '\0';
  }
  if (*(long *)(param_1 + 0x6e0) != 0) {
    FUN_008c9b4c(*(undefined8 *)(param_1 + 0x6f0),*(long *)(param_1 + 0x6e0),0);
    param_1[0x6e0] = '\0';
    param_1[0x6e1] = '\0';
    param_1[0x6e2] = '\0';
    param_1[0x6e3] = '\0';
    param_1[0x6e4] = '\0';
    param_1[0x6e5] = '\0';
    param_1[0x6e6] = '\0';
    param_1[0x6e7] = '\0';
  }
  cVar5 = *(char *)(*(long *)(*(long *)(param_1 + 0x78) + 0x20) + 0x36);
  cVar6 = *(char *)(*(long *)(param_1 + 0xa0) + 0x752);
  local_70 = 0;
  uStack_68 = 0;
  uVar11 = uVar9;
  if ((int)uVar9 % 2 == 1) {
    uVar11 = uVar9 + 1;
  }
  uVar4 = uVar11 + 0x1f & 0xffffffe0;
  if (cVar6 != '\x02') {
    uVar4 = uVar11;
  }
  FUN_008f0470(&local_70);
  local_70 = CONCAT44(0x44,(undefined4)local_70);
  lVar12 = FUN_008f06e0(param_2,&local_70);
  uVar21 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4;
  lVar20 = uVar21 - 1;
  uVar13 = lVar12 + lVar20 & -lVar12;
  if (cVar6 == '\0') {
    lVar12 = 10;
    if (cVar5 != '\0') {
      lVar12 = 0xf;
    }
    cVar7 = *param_1;
    lVar14 = uVar13 + uVar13 * lVar12;
    lVar12 = 0;
    if (cVar5 != '\0') {
      lVar12 = uVar13 << 1;
    }
    lVar12 = lVar14 + uVar13 * 4 + lVar12;
  }
  else {
    cVar7 = *param_1;
    lVar14 = uVar13 * 6;
    lVar12 = uVar13 << 3;
  }
  if (cVar7 != '\0') {
    lVar14 = lVar12;
  }
  cVar7 = *(char *)(*(long *)(param_1 + 0xa0) + 0x753);
  lVar10 = *(long *)(param_1 + 0x700);
  *(long *)(param_1 + 0x6f0) = lVar10;
  lVar12 = 0;
  if (cVar7 != '\0') {
    lVar12 = uVar13 * 3;
  }
  *(long *)(param_1 + 0x6f8) = lVar14 + lVar12;
  lVar12 = FUN_008c9960(lVar10,lVar14 + lVar12,*(undefined8 *)(lVar10 + 0x1c8));
  *(long *)(param_1 + 0x6e0) = lVar12;
  if (lVar12 == 0) {
    return 0;
  }
  param_1[0x6e8] = '\0';
  param_1[0x6e9] = '\0';
  param_1[0x6ea] = '\0';
  param_1[0x6eb] = '\0';
  param_1[0x6ec] = '\0';
  param_1[0x6ed] = '\0';
  param_1[0x6ee] = '\0';
  param_1[0x6ef] = '\0';
  plVar1 = (long *)(*(long *)(param_1 + 0x6f0) + 0x1c8);
  lVar14 = *(long *)(*(long *)(param_1 + 0x6f0) + 0x1c8);
  uVar15 = lVar14 + lVar20 & -lVar14;
  uVar13 = *(ulong *)(param_1 + 0x6f8);
  puVar2 = (ulong *)(param_1 + 0x6e8);
  if (uVar13 < uVar15) {
    uVar15 = 0;
    lVar14 = 0;
  }
  else {
    *puVar2 = uVar15;
    lVar14 = lVar12;
  }
  *(long *)(param_1 + 200) = lVar14;
  uVar16 = (*plVar1 + lVar20 & -*plVar1) + uVar15;
  if (uVar13 < uVar16) {
    lVar10 = 0;
    uVar16 = uVar15;
  }
  else {
    lVar10 = lVar12 + uVar15;
    *puVar2 = uVar16;
  }
  *(long *)(param_1 + 0xd0) = lVar10;
  uVar15 = (*plVar1 + lVar20 & -*plVar1) + uVar16;
  if (uVar13 < uVar15) {
    lVar19 = 0;
    param_1[0xd8] = '\0';
    param_1[0xd9] = '\0';
    param_1[0xda] = '\0';
    param_1[0xdb] = '\0';
    param_1[0xdc] = '\0';
    param_1[0xdd] = '\0';
    param_1[0xde] = '\0';
    param_1[0xdf] = '\0';
    uVar15 = uVar16;
    if (cVar6 != '\0') goto LAB_008c8634;
LAB_008c867c:
    uVar16 = (*plVar1 + lVar20 & -*plVar1) + uVar15;
    if (uVar13 < uVar16) {
      lVar14 = 0;
      uVar16 = uVar15;
    }
    else {
      lVar14 = lVar12 + uVar15;
      *puVar2 = uVar16;
    }
    *(long *)(param_1 + 0x120) = lVar14;
    uVar18 = (*plVar1 + lVar20 & -*plVar1) + uVar16;
    if (uVar13 < uVar18) {
      lVar14 = 0;
      uVar18 = uVar16;
    }
    else {
      lVar14 = lVar12 + uVar16;
      *puVar2 = uVar18;
    }
    *(long *)(param_1 + 0x128) = lVar14;
    uVar15 = (*plVar1 + lVar20 & -*plVar1) + uVar18;
    if (uVar13 < uVar15) {
      lVar14 = 0;
      uVar15 = uVar18;
    }
    else {
      lVar14 = lVar12 + uVar18;
      *puVar2 = uVar15;
    }
    *(long *)(param_1 + 0x130) = lVar14;
    if (cVar5 != '\0') {
      uVar16 = (*plVar1 + lVar20 & -*plVar1) + uVar15;
      if (uVar13 < uVar16) {
        lVar14 = 0;
        uVar16 = uVar15;
      }
      else {
        lVar14 = lVar12 + uVar15;
        *puVar2 = uVar16;
      }
      *(long *)(param_1 + 0x178) = lVar14;
      uVar18 = (*plVar1 + lVar20 & -*plVar1) + uVar16;
      if (uVar13 < uVar18) {
        lVar14 = 0;
        uVar18 = uVar16;
      }
      else {
        lVar14 = lVar12 + uVar16;
        *puVar2 = uVar18;
      }
      *(long *)(param_1 + 0x180) = lVar14;
      uVar15 = (*plVar1 + lVar20 & -*plVar1) + uVar18;
      if (uVar13 < uVar15) {
        param_1[0x188] = '\0';
        param_1[0x189] = '\0';
        param_1[0x18a] = '\0';
        param_1[0x18b] = '\0';
        param_1[0x18c] = '\0';
        param_1[0x18d] = '\0';
        param_1[0x18e] = '\0';
        param_1[399] = '\0';
        uVar15 = uVar18;
      }
      else {
        *puVar2 = uVar15;
        *(ulong *)(param_1 + 0x188) = lVar12 + uVar18;
      }
    }
  }
  else {
    lVar19 = lVar12 + uVar16;
    *puVar2 = uVar15;
    *(long *)(param_1 + 0xd8) = lVar19;
    if (cVar6 == '\0') goto LAB_008c867c;
LAB_008c8634:
    *(long *)(param_1 + 0x120) = lVar14;
    *(long *)(param_1 + 0x128) = lVar10;
    *(long *)(param_1 + 0x130) = lVar19;
    *(long *)(param_1 + 0x188) = lVar19;
    *(long *)(param_1 + 0x178) = lVar14;
    *(long *)(param_1 + 0x180) = lVar10;
  }
  uVar16 = (*plVar1 + lVar20 & -*plVar1) + uVar15;
  if (uVar13 < uVar16) {
    lVar14 = 0;
    uVar16 = uVar15;
  }
  else {
    lVar14 = lVar12 + uVar15;
    *puVar2 = uVar16;
  }
  *(long *)(param_1 + 0xe0) = lVar14;
  uVar15 = (*plVar1 + lVar20 & -*plVar1) + uVar16;
  if (uVar13 < uVar15) {
    lVar10 = 0;
    param_1[0xf0] = '\0';
    param_1[0xf1] = '\0';
    param_1[0xf2] = '\0';
    param_1[0xf3] = '\0';
    param_1[0xf4] = '\0';
    param_1[0xf5] = '\0';
    param_1[0xf6] = '\0';
    param_1[0xf7] = '\0';
    uVar15 = uVar16;
    if (cVar6 != '\0') goto LAB_008c86d8;
LAB_008c8720:
    uVar16 = (*plVar1 + lVar20 & -*plVar1) + uVar15;
    if (uVar13 < uVar16) {
      lVar14 = 0;
      uVar16 = uVar15;
    }
    else {
      lVar14 = lVar12 + uVar15;
      *puVar2 = uVar16;
    }
    *(long *)(param_1 + 0x138) = lVar14;
    uVar15 = (*plVar1 + lVar20 & -*plVar1) + uVar16;
    if (uVar13 < uVar15) {
      lVar14 = 0;
      uVar15 = uVar16;
    }
    else {
      lVar14 = lVar12 + uVar16;
      *puVar2 = uVar15;
    }
    *(long *)(param_1 + 0x148) = lVar14;
    if (cVar5 != '\0') {
      uVar16 = (*plVar1 + lVar20 & -*plVar1) + uVar15;
      if (uVar13 < uVar16) {
        lVar14 = 0;
        uVar16 = uVar15;
      }
      else {
        lVar14 = lVar12 + uVar15;
        *puVar2 = uVar16;
      }
      *(long *)(param_1 + 400) = lVar14;
      uVar15 = (*plVar1 + lVar20 & -*plVar1) + uVar16;
      if (uVar13 < uVar15) {
        param_1[0x1a0] = '\0';
        param_1[0x1a1] = '\0';
        param_1[0x1a2] = '\0';
        param_1[0x1a3] = '\0';
        param_1[0x1a4] = '\0';
        param_1[0x1a5] = '\0';
        param_1[0x1a6] = '\0';
        param_1[0x1a7] = '\0';
        uVar15 = uVar16;
      }
      else {
        *puVar2 = uVar15;
        *(ulong *)(param_1 + 0x1a0) = lVar12 + uVar16;
      }
    }
  }
  else {
    lVar10 = lVar12 + uVar16;
    *puVar2 = uVar15;
    *(long *)(param_1 + 0xf0) = lVar10;
    if (cVar6 == '\0') goto LAB_008c8720;
LAB_008c86d8:
    *(long *)(param_1 + 0x138) = lVar14;
    *(long *)(param_1 + 0x148) = lVar10;
    *(long *)(param_1 + 400) = lVar14;
    *(long *)(param_1 + 0x1a0) = lVar10;
  }
  uVar16 = (*plVar1 + lVar20 & -*plVar1) + uVar15;
  if (uVar13 < uVar16) {
    lVar14 = 0;
    uVar16 = uVar15;
  }
  else {
    lVar14 = lVar12 + uVar15;
    *puVar2 = uVar16;
  }
  *(long *)(param_1 + 0xe8) = lVar14;
  *(long *)(param_1 + 0x140) = lVar14;
  *(long *)(param_1 + 0x198) = lVar14;
  if (*param_1 == '\0') {
    param_1[0xf8] = '\0';
    param_1[0xf9] = '\0';
    param_1[0xfa] = '\0';
    param_1[0xfb] = '\0';
    param_1[0xfc] = '\0';
    param_1[0xfd] = '\0';
    param_1[0xfe] = '\0';
    param_1[0xff] = '\0';
    param_1[0x100] = '\0';
    param_1[0x101] = '\0';
    param_1[0x102] = '\0';
    param_1[0x103] = '\0';
    param_1[0x104] = '\0';
    param_1[0x105] = '\0';
    param_1[0x106] = '\0';
    param_1[0x107] = '\0';
    param_1[0x150] = '\0';
    param_1[0x151] = '\0';
    param_1[0x152] = '\0';
    param_1[0x153] = '\0';
    param_1[0x154] = '\0';
    param_1[0x155] = '\0';
    param_1[0x156] = '\0';
    param_1[0x157] = '\0';
    param_1[0x158] = '\0';
    param_1[0x159] = '\0';
    param_1[0x15a] = '\0';
    param_1[0x15b] = '\0';
    param_1[0x15c] = '\0';
    param_1[0x15d] = '\0';
    param_1[0x15e] = '\0';
    param_1[0x15f] = '\0';
  }
  else {
    uVar15 = (*plVar1 + lVar20 & -*plVar1) + uVar16;
    if (uVar13 < uVar15) {
      lVar14 = 0;
      uVar15 = uVar16;
    }
    else {
      lVar14 = lVar12 + uVar16;
      *puVar2 = uVar15;
    }
    *(long *)(param_1 + 0xf8) = lVar14;
    uVar16 = (*plVar1 + lVar20 & -*plVar1) + uVar15;
    if (uVar13 < uVar16) {
      lVar10 = 0;
      param_1[0x100] = '\0';
      param_1[0x101] = '\0';
      param_1[0x102] = '\0';
      param_1[0x103] = '\0';
      param_1[0x104] = '\0';
      param_1[0x105] = '\0';
      param_1[0x106] = '\0';
      param_1[0x107] = '\0';
    }
    else {
      lVar10 = lVar12 + uVar15;
      *puVar2 = uVar16;
      *(long *)(param_1 + 0x100) = lVar10;
      uVar15 = uVar16;
    }
    if (cVar6 == '\0') {
      uVar18 = (*plVar1 + lVar20 & -*plVar1) + uVar15;
      if (uVar13 < uVar18) {
        lVar14 = 0;
        uVar18 = uVar15;
      }
      else {
        lVar14 = lVar12 + uVar15;
        *puVar2 = uVar18;
      }
      *(long *)(param_1 + 0x150) = lVar14;
      uVar16 = (*plVar1 + lVar20 & -*plVar1) + uVar18;
      if (uVar13 < uVar16) {
        lVar14 = 0;
        uVar16 = uVar18;
      }
      else {
        lVar14 = lVar12 + uVar18;
        *puVar2 = uVar16;
      }
      *(long *)(param_1 + 0x158) = lVar14;
      if (cVar5 != '\0') {
        uVar15 = (*plVar1 + lVar20 & -*plVar1) + uVar16;
        if (uVar13 < uVar15) {
          lVar14 = 0;
          uVar15 = uVar16;
        }
        else {
          lVar14 = lVar12 + uVar16;
          *puVar2 = uVar15;
        }
        *(long *)(param_1 + 0x1a8) = lVar14;
        uVar16 = (*plVar1 + lVar20 & -*plVar1) + uVar15;
        if (uVar13 < uVar16) {
          param_1[0x1b0] = '\0';
          param_1[0x1b1] = '\0';
          param_1[0x1b2] = '\0';
          param_1[0x1b3] = '\0';
          param_1[0x1b4] = '\0';
          param_1[0x1b5] = '\0';
          param_1[0x1b6] = '\0';
          param_1[0x1b7] = '\0';
          uVar16 = uVar15;
        }
        else {
          *puVar2 = uVar16;
          *(ulong *)(param_1 + 0x1b0) = lVar12 + uVar15;
        }
      }
    }
    else {
      *(long *)(param_1 + 0x150) = lVar14;
      *(long *)(param_1 + 0x158) = lVar10;
      *(long *)(param_1 + 0x1a8) = lVar14;
      *(long *)(param_1 + 0x1b0) = lVar10;
      uVar16 = uVar15;
    }
  }
  lVar14 = (long)(int)uVar4;
  if (*(char *)(*(long *)(param_1 + 0xa0) + 0x753) == '\0') {
    param_1[0x110] = '\0';
    param_1[0x111] = '\0';
    param_1[0x112] = '\0';
    param_1[0x113] = '\0';
    param_1[0x114] = '\0';
    param_1[0x115] = '\0';
    param_1[0x116] = '\0';
    param_1[0x117] = '\0';
    param_1[0x118] = '\0';
    param_1[0x119] = '\0';
    param_1[0x11a] = '\0';
    param_1[0x11b] = '\0';
    param_1[0x11c] = '\0';
    param_1[0x11d] = '\0';
    param_1[0x11e] = '\0';
    param_1[0x11f] = '\0';
    param_1[0x108] = '\0';
    param_1[0x109] = '\0';
    param_1[0x10a] = '\0';
    param_1[0x10b] = '\0';
    param_1[0x10c] = '\0';
    param_1[0x10d] = '\0';
    param_1[0x10e] = '\0';
    param_1[0x10f] = '\0';
    param_1[0x170] = '\0';
    param_1[0x171] = '\0';
    param_1[0x172] = '\0';
    param_1[0x173] = '\0';
    param_1[0x174] = '\0';
    param_1[0x175] = '\0';
    param_1[0x176] = '\0';
    param_1[0x177] = '\0';
    param_1[0x1c8] = '\0';
    param_1[0x1c9] = '\0';
    param_1[0x1ca] = '\0';
    param_1[0x1cb] = '\0';
    param_1[0x1cc] = '\0';
    param_1[0x1cd] = '\0';
    param_1[0x1ce] = '\0';
    param_1[0x1cf] = '\0';
    param_1[0x160] = '\0';
    param_1[0x161] = '\0';
    param_1[0x162] = '\0';
    param_1[0x163] = '\0';
    param_1[0x164] = '\0';
    param_1[0x165] = '\0';
    param_1[0x166] = '\0';
    param_1[0x167] = '\0';
    param_1[0x168] = '\0';
    param_1[0x169] = '\0';
    param_1[0x16a] = '\0';
    param_1[0x16b] = '\0';
    param_1[0x16c] = '\0';
    param_1[0x16d] = '\0';
    param_1[0x16e] = '\0';
    param_1[0x16f] = '\0';
    param_1[0x1b8] = '\0';
    param_1[0x1b9] = '\0';
    param_1[0x1ba] = '\0';
    param_1[0x1bb] = '\0';
    param_1[0x1bc] = '\0';
    param_1[0x1bd] = '\0';
    param_1[0x1be] = '\0';
    param_1[0x1bf] = '\0';
    param_1[0x1c0] = '\0';
    param_1[0x1c1] = '\0';
    param_1[0x1c2] = '\0';
    param_1[0x1c3] = '\0';
    param_1[0x1c4] = '\0';
    param_1[0x1c5] = '\0';
    param_1[0x1c6] = '\0';
    param_1[0x1c7] = '\0';
  }
  else {
    uVar15 = (*plVar1 + lVar20 & -*plVar1) + uVar16;
    if (uVar13 < uVar15) {
      lVar10 = 0;
      uVar15 = uVar16;
    }
    else {
      lVar10 = lVar12 + uVar16;
      *puVar2 = uVar15;
    }
    *(long *)(param_1 + 0x108) = lVar10;
    uVar16 = (*plVar1 + lVar20 & -*plVar1) + uVar15;
    if (uVar13 < uVar16) {
      lVar19 = 0;
      uVar16 = uVar15;
    }
    else {
      lVar19 = lVar12 + uVar15;
      *puVar2 = uVar16;
    }
    *(long *)(param_1 + 0x110) = lVar19;
    uVar15 = (*plVar1 + lVar20 & -*plVar1) + uVar16;
    lVar20 = 0;
    if (uVar15 <= uVar13) {
      lVar20 = lVar12 + uVar16;
      *puVar2 = uVar15;
    }
    *(long *)(param_1 + 0x118) = lVar20;
    *(long *)(param_1 + 0x170) = lVar20;
    *(long *)(param_1 + 0x1c8) = lVar20;
    *(long *)(param_1 + 0x160) = lVar10;
    *(long *)(param_1 + 0x168) = lVar19;
    *(long *)(param_1 + 0x1b8) = lVar10;
    *(long *)(param_1 + 0x1c0) = lVar19;
  }
  *(char **)(param_1 + 0xc0) = param_1 + (ulong)*(uint *)(param_1 + 0x30) * 0x58 + 200;
  uVar13 = 0;
  __n_00 = lVar14 * 0x20;
  __n = 0;
  if (*(int *)(*(long *)(param_1 + 0x238) + 0x88) != 0) {
    __n = lVar14 * 0x158;
  }
  if (cVar6 == '\0') {
    uVar11 = 6;
    if (*param_1 != '\0') {
      uVar11 = 8;
    }
    if (*(char *)(*(long *)(param_1 + 0xa0) + 0x753) != '\0') {
      uVar11 = uVar11 + 6;
    }
    uVar13 = (ulong)uVar11;
  }
  lVar12 = __n + __n_00 + uVar13 * uVar21;
  __s = (void *)FUN_008d43a0(lVar12,0x20,0x100);
  if (__s == (void *)0x0) {
    param_1[0x228] = '\0';
    param_1[0x229] = '\0';
    param_1[0x22a] = '\0';
    param_1[0x22b] = '\0';
    param_1[0x22c] = '\0';
    param_1[0x22d] = '\0';
    param_1[0x22e] = '\0';
    param_1[0x22f] = '\0';
    return 0;
  }
  *(ulong *)(param_1 + 0x830) = *(long *)(param_1 + 0x830) + (lVar12 + 0xffU & 0xffffffffffffff00);
  *(void **)(param_1 + 0xb0) = __s;
  *(int *)(param_1 + 0x838) = *(int *)(param_1 + 0x838) + 1;
  *(void **)(param_1 + 0x228) = __s;
  memset(__s,0,__n_00);
  if (cVar6 == '\0') {
    pvVar3 = (void *)((long)__s + __n_00);
    __n_00 = lVar14 * 0x80;
    *(void **)(param_1 + 0x1d0) = pvVar3;
    *(void **)(param_1 + 0x1d8) = (void *)((long)__s + lVar14 * 0x30);
    *(void **)(param_1 + 0x1e0) = (void *)((long)__s + lVar14 * 0x40);
    *(void **)(param_1 + 0x1e8) = (void *)((long)__s + lVar14 * 0x50);
    *(void **)(param_1 + 0x1f0) = (void *)((long)__s + lVar14 * 0x60);
    *(void **)(param_1 + 0x1f8) = (void *)((long)__s + lVar14 * 0x70);
    if (*param_1 != '\0') {
      *(void **)(param_1 + 0x200) = (void *)((long)__s + __n_00);
      __n_00 = lVar14 * 0xa0;
      *(void **)(param_1 + 0x208) = (void *)((long)__s + lVar14 * 0x90);
    }
    if (*(char *)(*(long *)(param_1 + 0xa0) + 0x753) != '\0') {
      *(size_t *)(param_1 + 0x210) = (long)__s + __n_00;
      lVar12 = __n_00 + uVar21 + uVar21;
      *(size_t *)(param_1 + 0x218) = (long)__s + __n_00 + uVar21;
      lVar20 = (long)__s + lVar12;
      __n_00 = lVar12 + uVar21;
      goto LAB_008c8a54;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_1 + 0x108);
    lVar20 = *(long *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 0x110);
LAB_008c8a54:
    *(long *)(param_1 + 0x220) = lVar20;
  }
  if (*(int *)(*(long *)(param_1 + 0x238) + 0x88) == 0) {
    param_1[0xb8] = '\0';
    param_1[0xb9] = '\0';
    param_1[0xba] = '\0';
    param_1[0xbb] = '\0';
    param_1[0xbc] = '\0';
    param_1[0xbd] = '\0';
    param_1[0xbe] = '\0';
    param_1[0xbf] = '\0';
  }
  else {
    *(void **)(param_1 + 0xb8) = (void *)((long)__s + __n_00);
    memset((void *)((long)__s + __n_00),0,__n);
  }
  *(uint *)(param_1 + 0x230) = uVar9;
  param_1[0x234] = '\0';
  param_1[0x235] = '\0';
  param_1[0x236] = '\0';
  param_1[0x237] = '\0';
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
LAB_008c8a8c:
  FUN_008c90fc(param_1);
  lVar12 = *(long *)(param_1 + 0x238);
  uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x7a0);
  *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(*(long *)(lVar12 + 0x10) + 0x7a8);
  *(undefined8 *)(param_1 + 0x600) = uVar17;
  uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x788);
  *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(*(long *)(lVar12 + 0x10) + 0x790);
  *(undefined8 *)(param_1 + 0x60c) = uVar17;
  uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x770);
  *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(*(long *)(lVar12 + 0x10) + 0x778);
  *(undefined8 *)(param_1 + 0x618) = uVar17;
  lVar20 = *(long *)(lVar12 + 0x10);
  *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(lVar20 + 0x7ac);
  *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)(lVar20 + 0x7b0);
  *(undefined4 *)(param_1 + 0x62c) = *(undefined4 *)(lVar20 + 0x7b4);
  lVar20 = *(long *)(lVar12 + 0x10);
  *(undefined4 *)(param_1 + 0x630) = *(undefined4 *)(lVar20 + 0x7bc);
  *(undefined4 *)(param_1 + 0x634) = *(undefined4 *)(lVar20 + 0x7c0);
  *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(lVar20 + 0x7c4);
  uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x9c0);
  *(undefined4 *)(param_1 + 0x68c) = *(undefined4 *)(*(long *)(lVar12 + 0x10) + 0x9c8);
  *(undefined8 *)(param_1 + 0x684) = uVar17;
  uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x868);
  *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(*(long *)(lVar12 + 0x10) + 0x870);
  *(undefined8 *)(param_1 + 0x690) = uVar17;
  *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(*(long *)(lVar12 + 0x10) + 0x800);
  *(float *)(param_1 + 0x648) = (float)*(int *)(*(long *)(lVar12 + 0x10) + 0x8b8);
  *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(*(long *)(lVar12 + 0x10) + 0x7b8);
  *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(*(long *)(lVar12 + 0x10) + 0x7c8);
  *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(*(long *)(lVar12 + 0x10) + 0x964);
  *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(*(long *)(lVar12 + 0x10) + 0x968);
  *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(*(long *)(lVar12 + 0x10) + 0x814);
  return 1;
}


