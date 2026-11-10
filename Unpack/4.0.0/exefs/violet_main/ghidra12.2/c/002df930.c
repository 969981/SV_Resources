/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002df930; name: FUN_002df930
 */


undefined4 FUN_002df930(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ostream *poVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  undefined8 local_198;
  undefined8 local_190 [33];
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  local_78 = 0;
  local_88 = 0;
  local_80 = 0;
                    /* try { // try from 002df960 to 002df96f has its CatchHandler @ 002dfdc0 */
  local_6c = param_2;
  local_68 = param_1;
  FUN_002dfe48(&local_88,&local_68,&local_6c);
LAB_002df9b0:
  while( true ) {
    lVar2 = local_80;
    puVar16 = (undefined8 *)(local_80 + -0x20);
    puVar15 = (undefined8 *)*puVar16;
    if (puVar15 == *(undefined8 **)(local_80 + -0x18)) break;
    iVar18 = *(int *)(local_80 + -8);
    if ((int)((ulong)((long)*(undefined8 **)(local_80 + -0x18) - (long)puVar15) >> 3) * -0x55555555
        <= iVar18) {
      if (*(int *)(local_80 + -0x28) < 1) {
        uVar17 = 0;
      }
      else {
        uVar21 = 0;
        uVar19 = 0;
        do {
          lVar6 = *(long *)(lVar2 + -0x30);
          puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar21 * 8);
          puVar3 = (undefined8 *)puVar15[1];
          if (puVar7 < puVar3) {
            uVar9 = -(uVar19 >> 0x1f & 1) & 0xfffffff800000000 | (uVar19 & 0xffffffff) << 3;
            lVar11 = (long)(int)uVar21 << 3;
            do {
              *(undefined8 *)(lVar6 + uVar9) = *puVar7;
              lVar6 = *(long *)(lVar2 + -0x30);
              puVar3 = (undefined8 *)puVar15[1];
              lVar13 = lVar6 + lVar11;
              lVar11 = lVar11 + 8;
              puVar7 = (undefined8 *)(lVar13 + 8);
              uVar9 = uVar9 + 8;
              uVar19 = (ulong)((int)uVar19 + 1);
              uVar21 = (ulong)((int)uVar21 + 1);
            } while ((undefined8 *)(lVar6 + lVar11) < puVar3);
          }
          iVar18 = (int)uVar19;
          if (*(int *)(lVar2 + -0x24) - 1U < 2) {
            local_198 = *puVar15;
                    /* try { // try from 002dfa70 to 002dfa8b has its CatchHandler @ 002dfde4 */
            local_190[0] = FUN_002e5320(puVar3,*(undefined4 *)((long)puVar15 + 0x14),param_3);
            uVar4 = FUN_002e5308(&local_198,2,param_3);
            *(undefined8 *)(*(long *)(lVar2 + -0x30) + (long)iVar18 * 8) = uVar4;
LAB_002dfaa8:
            uVar19 = (ulong)(iVar18 + 1);
            uVar21 = (ulong)(uint)(*(int *)(puVar15 + 2) + (int)uVar21);
          }
          else {
            if (*(int *)(lVar2 + -0x24) == 3) {
              *(undefined8 *)(lVar6 + (long)iVar18 * 8) = *puVar15;
              goto LAB_002dfaa8;
            }
                    /* try { // try from 002dfabc to 002dfacb has its CatchHandler @ 002dfdd0 */
            FUN_002cc810(&local_198,"external/com_github_google_re2/re2/parse.cc",0x3d1);
                    /* try { // try from 002dfacc to 002dfae3 has its CatchHandler @ 002dfdd4 */
            poVar5 = std::__put_character_sequence<char,std::char_traits<char>>
                               ((ostream *)local_190,"unknown round: ",0xf);
            std::ostream::operator<<(poVar5,*(int *)(lVar2 + -0x24));
            FUN_002cc97c(&local_198);
          }
          puVar15 = puVar15 + 3;
          iVar18 = *(int *)(lVar2 + -0x28);
          if ((puVar15 == *(undefined8 **)(lVar2 + -0x18)) &&
             (iVar20 = (int)uVar21, iVar20 < iVar18)) {
            uVar9 = (ulong)iVar20;
            uVar19 = (ulong)(int)uVar19;
            uVar8 = ~uVar9;
            uVar21 = (ulong)(uint)(iVar18 - iVar20) & 3;
            uVar10 = uVar19;
            uVar12 = uVar9;
            if ((iVar18 - iVar20 & 3U) != 0) {
              do {
                uVar9 = uVar12 + 1;
                uVar19 = uVar10 + 1;
                uVar21 = uVar21 - 1;
                *(undefined8 *)(*(long *)(lVar2 + -0x30) + uVar10 * 8) =
                     *(undefined8 *)(*(long *)(lVar2 + -0x30) + uVar12 * 8);
                uVar10 = uVar19;
                uVar12 = uVar9;
              } while (uVar21 != 0);
            }
            uVar21 = uVar9;
            if (2 < uVar8 + (long)iVar18) {
              lVar6 = 0;
              lVar11 = uVar19 * 8;
              lVar13 = uVar9 * 8;
              do {
                lVar14 = lVar6 * 8;
                lVar6 = lVar6 + 4;
                *(undefined8 *)(*(long *)(lVar2 + -0x30) + lVar11 + lVar14) =
                     *(undefined8 *)(*(long *)(lVar2 + -0x30) + lVar13 + lVar14);
                *(undefined8 *)(*(long *)(lVar2 + -0x30) + lVar11 + lVar14 + 8) =
                     *(undefined8 *)(*(long *)(lVar2 + -0x30) + lVar13 + lVar14 + 8);
                *(undefined8 *)(*(long *)(lVar2 + -0x30) + lVar11 + lVar14 + 0x10) =
                     *(undefined8 *)(*(long *)(lVar2 + -0x30) + lVar13 + lVar14 + 0x10);
                *(undefined8 *)(*(long *)(lVar2 + -0x30) + lVar11 + lVar14 + 0x18) =
                     *(undefined8 *)(*(long *)(lVar2 + -0x30) + lVar13 + lVar14 + 0x18);
                uVar21 = uVar9 + lVar6;
              } while ((long)uVar21 < (long)iVar18);
              uVar19 = uVar19 + lVar6;
            }
          }
          uVar17 = (undefined4)uVar19;
        } while ((int)uVar21 < iVar18);
        puVar15 = (undefined8 *)*puVar16;
      }
      *(undefined8 **)(lVar2 + -0x18) = puVar15;
      *(undefined4 *)(lVar2 + -0x28) = uVar17;
      break;
    }
                    /* try { // try from 002df9a8 to 002df9af has its CatchHandler @ 002dfdcc */
    FUN_002dfe48(&local_88,puVar15 + (long)iVar18 * 3 + 1,puVar15 + (long)iVar18 * 3 + 2);
  }
  lVar11 = local_80;
  lVar6 = local_88;
  iVar18 = *(int *)(lVar2 + -0x24);
  *(int *)(lVar2 + -0x24) = iVar18 + 1;
  puVar1 = PTR_LAB_047cba48;
  switch(iVar18) {
  case 0:
                    /* try { // try from 002dfc48 to 002dfc9b has its CatchHandler @ 002dfdcc */
    FUN_002e0030(*(undefined8 *)(lVar2 + -0x30),*(undefined4 *)(lVar2 + -0x28));
    break;
  case 1:
    FUN_002e032c(*(undefined8 *)(lVar2 + -0x30),*(undefined4 *)(lVar2 + -0x28));
    break;
  case 2:
    FUN_002e05e0(*(undefined8 *)(lVar2 + -0x30),*(undefined4 *)(lVar2 + -0x28),param_3,puVar16);
    break;
  case 3:
    uVar17 = *(undefined4 *)(lVar2 + -0x28);
    if (local_80 - local_88 == 0x30) {
      lVar2 = local_80;
      if (local_88 != 0) {
        while (lVar11 = lVar2, lVar11 != lVar6) {
          lVar2 = lVar11 + -0x30;
          if (*(long *)(lVar11 + -0x20) != 0) {
            *(long *)(lVar11 + -0x18) = *(long *)(lVar11 + -0x20);
            FUN_0049e790(puVar1);
          }
        }
        local_80 = lVar6;
        FUN_0049e790(PTR_LAB_047cba48,local_88);
      }
      return uVar17;
    }
    if (*(long *)(local_80 + -0x20) != 0) {
      *(long *)(local_80 + -0x18) = *(long *)(local_80 + -0x20);
      FUN_0049e790(PTR_LAB_047cba48);
    }
    local_80 = lVar11 + -0x30;
    iVar18 = *(int *)(lVar11 + -0x38);
    *(undefined4 *)(*(long *)(lVar11 + -0x50) + (long)iVar18 * 0x18 + 0x14) = uVar17;
    *(int *)(lVar11 + -0x38) = iVar18 + 1;
    goto LAB_002df9b0;
  default:
                    /* try { // try from 002dfcf0 to 002dfcff has its CatchHandler @ 002dfdc4 */
    FUN_002cc810(&local_198,"external/com_github_google_re2/re2/parse.cc",0x3f8);
                    /* try { // try from 002dfd00 to 002dfd17 has its CatchHandler @ 002dfdc8 */
    poVar5 = std::__put_character_sequence<char,std::char_traits<char>>
                       ((ostream *)local_190,"unknown round: ",0xf);
    std::ostream::operator<<(poVar5,*(int *)(lVar2 + -0x24));
    FUN_002cc97c(&local_198);
    lVar6 = *(long *)(lVar2 + -0x20);
    lVar11 = *(long *)(lVar2 + -0x18);
    if (lVar6 != lVar11) goto LAB_002dfc5c;
    goto LAB_002dfd2c;
  }
  lVar6 = *(long *)(lVar2 + -0x20);
  lVar11 = *(long *)(lVar2 + -0x18);
  if (lVar6 != lVar11) {
LAB_002dfc5c:
    if (*(int *)(lVar2 + -0x24) != 3) {
      *(undefined4 *)(lVar2 + -8) = 0;
      goto LAB_002df9b0;
    }
  }
LAB_002dfd2c:
  *(int *)(lVar2 + -8) = (int)((ulong)(lVar11 - lVar6) >> 3) * -0x55555555;
  goto LAB_002df9b0;
}


