/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005eac04; name: FUN_005eac04
 */


void FUN_005eac04(long *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long lVar6;
  long *plVar7;
  size_t sVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  char *__s;
  void *__dest;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = FUN_01cf7e20();
  param_1[3] = lVar6;
  pbVar9 = *(byte **)(param_2 + 0x28);
  if ((*pbVar9 & 1) == 0) {
    pbVar9 = pbVar9 + 1;
  }
  else {
    pbVar9 = *(byte **)(pbVar9 + 0x10);
  }
  plVar7 = (long *)FUN_01cf7e20();
  param_1[7] = (long)plVar7;
  sVar8 = strlen((char *)pbVar9);
  if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 005eafb4 to 005eafbb has its CatchHandler @ 005eafbc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    __dest = (void *)((long)param_1 + 0x21);
    *(byte *)(param_1 + 4) = (byte)((int)sVar8 << 1);
    if (sVar8 == 0) goto LAB_005eacd4;
  }
  else {
    uVar17 = sVar8 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar17,1);
    param_1[4] = uVar17 | 1;
    param_1[5] = sVar8;
    param_1[6] = (long)__dest;
  }
  memcpy(__dest,pbVar9,sVar8);
LAB_005eacd4:
  *(undefined1 *)((long)__dest + sVar8) = 0;
  lVar6 = *param_3;
  lVar12 = param_3[3];
  lVar10 = param_3[2];
  param_1[9] = param_3[1];
  param_1[8] = lVar6;
  param_1[0xb] = lVar12;
  param_1[10] = lVar10;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  FUN_027d3bd4(param_1 + 0xc,param_3 + 4);
  param_1[0xd] = param_3[5];
  lVar6 = param_3[6];
  lVar12 = param_3[9];
  lVar10 = param_3[8];
  param_1[0xf] = param_3[7];
  param_1[0xe] = lVar6;
  param_1[0x11] = lVar12;
  param_1[0x10] = lVar10;
  lVar6 = param_3[10];
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[6] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = lVar6;
  param_1[0x13] = 0;
  param_1[0x16] = param_3[0xe];
  lVar6 = param_3[0xb];
  param_1[0x14] = param_3[0xc];
  param_1[0x13] = lVar6;
  param_1[0x15] = param_3[0xd];
  param_3[0xd] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  *(int *)(param_1 + 0x17) = (int)param_3[0xf];
  puVar18 = (undefined8 *)0x0;
  if (*(long *)(param_2 + 0x20) != 0) {
    puVar18 = (undefined8 *)(*(long *)(param_2 + 0x20) + 8);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    puVar1 = puVar18 + *(int *)(param_2 + 0x18);
    plVar7 = param_1 + 3;
    do {
      uVar17 = param_1[1];
      uVar13 = *puVar18;
      if (uVar17 < (ulong)param_1[2]) {
        FUN_005e1b8c(uVar17,uVar13);
        param_1[1] = uVar17 + 0x88;
      }
      else {
        lVar6 = (long)(uVar17 - *param_1) >> 3;
        uVar17 = lVar6 * -0xf0f0f0f0f0f0f0f + 1;
        if (0x1e1e1e1e1e1e1e1 < uVar17) {
                    /* try { // try from 005eafac to 005eafb3 has its CatchHandler @ 005eafc4 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = param_1[2] - *param_1 >> 3;
        uVar11 = lVar10 * -0x1e1e1e1e1e1e1e1e;
        if (uVar17 <= uVar11) {
          uVar17 = uVar11;
        }
        if (0xf0f0f0f0f0f0ef < (ulong)(lVar10 * -0xf0f0f0f0f0f0f0f)) {
          uVar17 = 0x1e1e1e1e1e1e1e1;
        }
        if (uVar17 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar17 * 0x88,8);
        }
        lVar12 = lVar10 + lVar6 * 8;
        FUN_005e1b8c(lVar12,uVar13);
        lVar14 = *param_1;
        lVar16 = param_1[1];
        lVar6 = lVar12 + 0x88;
        if (lVar16 == lVar14) {
          lVar16 = lVar14;
        }
        else {
          lVar15 = 0;
          do {
            lVar2 = lVar16 + lVar15;
            uVar19 = *(undefined8 *)(lVar2 + -0x80);
            uVar13 = *(undefined8 *)(lVar2 + -0x88);
            uVar20 = *(undefined8 *)(lVar2 + -0x78);
            lVar3 = lVar12 + lVar15;
            *(undefined8 *)(lVar3 + -0x70) = *(undefined8 *)(lVar2 + -0x70);
            *(undefined8 *)(lVar3 + -0x78) = uVar20;
            *(undefined8 *)(lVar3 + -0x80) = uVar19;
            *(undefined8 *)(lVar3 + -0x88) = uVar13;
            *(undefined8 *)(lVar2 + -0x88) = 0;
            *(undefined8 *)(lVar2 + -0x80) = 0;
            *(undefined8 *)(lVar2 + -0x78) = 0;
            FUN_027d3bd4(lVar3 + -0x68,lVar2 + -0x68);
            uVar19 = *(undefined8 *)(lVar2 + -0x58);
            uVar13 = *(undefined8 *)(lVar2 + -0x60);
            lVar15 = lVar15 + -0x88;
            *(undefined2 *)(lVar3 + -0x50) = *(undefined2 *)(lVar2 + -0x50);
            *(undefined8 *)(lVar3 + -0x58) = uVar19;
            *(undefined8 *)(lVar3 + -0x60) = uVar13;
            uVar19 = *(undefined8 *)(lVar2 + -0x40);
            uVar13 = *(undefined8 *)(lVar2 + -0x48);
            uVar20 = *(undefined8 *)(lVar2 + -0x38);
            *(undefined8 *)(lVar3 + -0x30) = *(undefined8 *)(lVar2 + -0x30);
            *(undefined8 *)(lVar3 + -0x38) = uVar20;
            *(undefined8 *)(lVar3 + -0x40) = uVar19;
            *(undefined8 *)(lVar3 + -0x48) = uVar13;
            uVar5 = *(undefined2 *)(lVar2 + -0x28);
            uVar4 = *(undefined1 *)(lVar2 + -0x26);
            *(undefined8 *)(lVar2 + -0x48) = 0;
            *(undefined8 *)(lVar2 + -0x40) = 0;
            *(undefined8 *)(lVar2 + -0x38) = 0;
            *(undefined8 *)(lVar3 + -0x18) = 0;
            *(undefined8 *)(lVar3 + -0x10) = 0;
            *(undefined8 *)(lVar3 + -0x20) = 0;
            *(undefined1 *)(lVar3 + -0x26) = uVar4;
            *(undefined2 *)(lVar3 + -0x28) = uVar5;
            *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(lVar2 + -8);
            uVar13 = *(undefined8 *)(lVar2 + -0x20);
            *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
            *(undefined8 *)(lVar3 + -0x20) = uVar13;
            *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar2 + -0x10);
            *(undefined8 *)(lVar2 + -0x20) = 0;
            *(undefined8 *)(lVar2 + -0x18) = 0;
            *(undefined8 *)(lVar2 + -0x10) = 0;
          } while (lVar14 - lVar16 != lVar15);
          lVar12 = lVar12 + lVar15;
          lVar14 = param_1[1];
          lVar16 = *param_1;
        }
        *param_1 = lVar12;
        param_1[1] = lVar6;
        lVar6 = param_1[2];
        param_1[2] = lVar10 + uVar17 * 0x88;
        while (lVar14 != lVar16) {
          lVar14 = lVar14 + -0x88;
          FUN_005d55b8(plVar7,lVar14);
        }
        if (lVar16 != 0) {
          (**(code **)(*(long *)*plVar7 + 0x18))((long *)*plVar7,lVar16,lVar6 - lVar16,8);
        }
      }
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar1);
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    __s = (char *)((long)param_1 + 0x21);
  }
  else {
    __s = (char *)param_1[6];
  }
  sVar8 = strlen(__s);
                    /* try { // try from 005eaf80 to 005eaf8b has its CatchHandler @ 005eb008 */
  FUN_01f77cc0(param_1 + 0xe,__s,sVar8);
  return;
}


