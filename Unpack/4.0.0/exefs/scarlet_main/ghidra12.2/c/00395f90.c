/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00395f90; name: FUN_00395f90
 */


void FUN_00395f90(undefined8 *param_1,byte *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  byte *pbVar7;
  size_t sVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  byte *pbVar13;
  byte *pbVar12;
  char cVar14;
  byte *pbVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  byte *pbVar26;
  undefined1 uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  byte *pbVar31;
  byte *pbVar32;
  char *pcVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  ulong local_f0;
  ulong local_e8;
  byte *local_e0;
  char local_d8 [12];
  undefined1 local_cc;
  char local_cb;
  char local_ca;
  undefined1 local_c9;
  char local_c8;
  char local_c7;
  char local_c6;
  char local_c5;
  char local_c4 [4];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_80;
  char local_78;
  char local_77;
  char local_76;
  char local_75;
  char local_74;
  uint local_70;
  byte local_6c;
  char *local_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar28 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar28 = *(ulong *)(param_2 + 8);
  }
                    /* try { // try from 00395fdc to 00395fe3 has its CatchHandler @ 00398180 */
  FUN_002cdbb0(param_1,uVar28);
                    /* try { // try from 00395fe4 to 00395ff3 has its CatchHandler @ 0039817c */
  FUN_00398e90(&local_80,param_5,param_3);
  local_90 = 0;
  local_c0 = CONCAT44((int)local_75,(int)local_74);
  uStack_b8 = CONCAT44((int)local_77,(int)local_76);
  iVar17 = (int)local_78;
  uStack_98 = 0;
  if ((long)local_80 < -0x7ffff894) {
    iVar23 = -0x80000000;
  }
  else if ((long)local_80 < 0x8000076c) {
    iVar23 = (int)local_80 + -0x76c;
  }
  else {
    iVar23 = 0x7fffffff;
  }
  lVar16 = 0x95f;
  if (2 < iVar17) {
    lVar16 = 0x960;
  }
  lVar16 = (long)local_80 % 400 + lVar16;
  lVar29 = SUB168(SEXT816(lVar16) * SEXT816(0x5c28f5c28f5c28f5),8) - lVar16;
  lVar20 = lVar16 + 3;
  if (-1 < lVar16) {
    lVar20 = lVar16;
  }
  lVar16 = lVar16 + (lVar20 >> 2) + ((lVar29 >> 6) - (lVar29 >> 0x3f)) + lVar16 / 400 +
           (long)*(int *)(&DAT_03cdc174 + (long)iVar17 * 4) + (long)(int)local_77;
  uVar28 = SUB168(SEXT816(lVar16) * SEXT816(0x4924924924924925),8);
  uVar25 = 0;
  local_b0 = CONCAT44(iVar23,iVar17 + -1);
  if ((2 < iVar17) && ((local_80 & 3) == 0)) {
    if ((local_80 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
        local_80 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
      uVar25 = (uint)((long)local_80 % 400 == 0);
    }
    else {
      uVar25 = 1;
    }
  }
  uStack_a8 = CONCAT44((int)local_77 + uVar25 + *(int *)(&DAT_03cdc1a8 + (long)iVar17 * 4) + -1,
                       *(undefined4 *)
                        (&DAT_03cb1e9c +
                        (long)*(int *)(&DAT_03cdc158 +
                                      (lVar16 + ((uVar28 >> 1) - ((long)uVar28 >> 0x3f)) * -7) * 4)
                        * 4));
  local_a0 = (ulong)local_6c;
  uVar28 = *(ulong *)(param_2 + 8);
  pbVar13 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar13 = param_2 + 1;
    uVar28 = (ulong)(*param_2 >> 1);
  }
  pbVar2 = pbVar13 + uVar28;
  pbVar12 = pbVar13;
  if (uVar28 != 0) {
    pcVar1 = local_c4 + 1;
    pbVar15 = (byte *)((ulong)&local_f0 | 1);
    pbVar31 = pbVar13;
    do {
      pbVar7 = pbVar2;
      if (pbVar31 != pbVar2) {
        pbVar7 = pbVar31;
        do {
          if (*pbVar7 == 0x25) goto LAB_003962d0;
          pbVar7 = pbVar7 + 1;
        } while (pbVar2 != pbVar7);
        pbVar7 = pbVar2;
      }
LAB_003962d0:
      if (pbVar12 == pbVar31) {
        if ((long)pbVar7 - (long)pbVar31 != 0) {
                    /* try { // try from 003962e0 to 003962eb has its CatchHandler @ 003981c0 */
          FUN_0021d540(param_1,pbVar31,(long)pbVar7 - (long)pbVar31);
          pbVar31 = pbVar7;
          pbVar12 = pbVar7;
        }
      }
      if (pbVar7 != pbVar2) {
        pbVar26 = pbVar7;
        do {
          if (*pbVar26 != 0x25) {
            bVar5 = false;
            goto joined_r0x00396334;
          }
          pbVar26 = pbVar26 + 1;
        } while (pbVar2 != pbVar26);
      }
      bVar5 = true;
      pbVar26 = pbVar2;
joined_r0x00396334:
      if ((pbVar12 == pbVar31) && (pbVar26 != pbVar31)) {
                    /* try { // try from 00396348 to 0039637b has its CatchHandler @ 003981c4 */
        FUN_0021d540(param_1,pbVar12,(ulong)((long)pbVar26 - (long)pbVar12) >> 1);
        pbVar31 = pbVar12 + ((long)pbVar26 - (long)pbVar12 & 0xfffffffffffffffe);
        pbVar12 = pbVar31;
        if (!(bool)(bVar5 ^ 1) && pbVar31 != pbVar26) {
          pbVar12 = pbVar31 + 1;
          FUN_002cdcec(param_1,*pbVar31);
        }
      }
      pbVar31 = pbVar26;
      if ((bVar5) || (((int)pbVar26 - (int)pbVar7 & 1U) == 0)) goto LAB_00396298;
      bVar3 = *pbVar26;
      pvVar6 = memchr("YmdeHMSzZs%",(uint)bVar3,0xc);
      if (pvVar6 == (void *)0x0) {
        if (bVar3 != 0x45) {
          if ((bVar3 != 0x3a) || (pbVar26 + 1 == pbVar2)) goto LAB_00396298;
          bVar3 = pbVar26[1];
          if (bVar3 == 0x3a) {
            if (pbVar26 + 2 == pbVar2) goto LAB_00396298;
            bVar3 = pbVar26[2];
            if (bVar3 != 0x3a) {
              if (bVar3 != 0x7a) goto LAB_00396298;
              pbVar31 = pbVar26 + -1;
              uVar18 = (long)pbVar31 - (long)pbVar12;
              if (uVar18 != 0) {
                if (0xffffffffffffffef < uVar18) {
                    /* try { // try from 003980e8 to 003980ef has its CatchHandler @ 00398144 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                if (uVar18 < 0x17) {
                  local_f0 = CONCAT71(local_f0._1_7_,(char)((int)uVar18 << 1));
                  pbVar7 = pbVar15;
                }
                else {
                  uVar30 = uVar18 + 0x10 & 0xfffffffffffffff0;
                  pbVar7 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar30);
                  local_f0 = uVar30 | 1;
                  local_e8 = uVar18;
                  local_e0 = pbVar7;
                }
                pbVar32 = pbVar7;
                pbVar21 = pbVar12;
                if ((uVar18 < 0x40) ||
                   ((pbVar7 < pbVar31 && (pbVar12 < pbVar7 + (long)pbVar26 + ~(ulong)pbVar12)))) {
LAB_003977c8:
                  pbVar12 = pbVar32;
                  do {
                    pbVar7 = pbVar21 + 1;
                    pbVar32 = pbVar12 + 1;
                    *pbVar12 = *pbVar21;
                    pbVar12 = pbVar32;
                    pbVar21 = pbVar7;
                  } while (pbVar31 != pbVar7);
                }
                else {
                  uVar11 = uVar18 & 0xffffffffffffffc0;
                  uVar30 = (uVar11 - 0x40 >> 6) + 1;
                  lVar16 = 0;
                  if (uVar11 - 0x40 != 0) {
                    lVar20 = -(uVar30 & 0x7fffffffffffffe);
                    do {
                      pbVar21 = pbVar12 + lVar16 + 0x40;
                      pbVar32 = pbVar7 + lVar16 + 0x70;
                      lVar16 = lVar16 + 0x80;
                      uVar34 = *(undefined8 *)(pbVar21 + -0x40);
                      uVar36 = *(undefined8 *)(pbVar21 + -0x28);
                      uVar35 = *(undefined8 *)(pbVar21 + -0x30);
                      uVar38 = *(undefined8 *)(pbVar21 + -0x18);
                      uVar37 = *(undefined8 *)(pbVar21 + -0x20);
                      uVar40 = *(undefined8 *)(pbVar21 + -8);
                      uVar39 = *(undefined8 *)(pbVar21 + -0x10);
                      *(undefined8 *)(pbVar32 + -0x68) = *(undefined8 *)(pbVar21 + -0x38);
                      *(undefined8 *)(pbVar32 + -0x70) = uVar34;
                      *(undefined8 *)(pbVar32 + -0x58) = uVar36;
                      *(undefined8 *)(pbVar32 + -0x60) = uVar35;
                      lVar20 = lVar20 + 2;
                      *(undefined8 *)(pbVar32 + -0x48) = uVar38;
                      *(undefined8 *)(pbVar32 + -0x50) = uVar37;
                      *(undefined8 *)(pbVar32 + -0x38) = uVar40;
                      *(undefined8 *)(pbVar32 + -0x40) = uVar39;
                      uVar34 = *(undefined8 *)pbVar21;
                      uVar36 = *(undefined8 *)(pbVar21 + 0x18);
                      uVar35 = *(undefined8 *)(pbVar21 + 0x10);
                      uVar38 = *(undefined8 *)(pbVar21 + 0x28);
                      uVar37 = *(undefined8 *)(pbVar21 + 0x20);
                      uVar40 = *(undefined8 *)(pbVar21 + 0x38);
                      uVar39 = *(undefined8 *)(pbVar21 + 0x30);
                      *(undefined8 *)(pbVar32 + -0x28) = *(undefined8 *)(pbVar21 + 8);
                      *(undefined8 *)(pbVar32 + -0x30) = uVar34;
                      *(undefined8 *)(pbVar32 + -0x18) = uVar36;
                      *(undefined8 *)(pbVar32 + -0x20) = uVar35;
                      *(undefined8 *)(pbVar32 + -8) = uVar38;
                      *(undefined8 *)(pbVar32 + -0x10) = uVar37;
                      *(undefined8 *)(pbVar32 + 8) = uVar40;
                      *(undefined8 *)pbVar32 = uVar39;
                    } while (lVar20 != 0);
                  }
                  pbVar21 = pbVar12 + uVar11;
                  pbVar32 = pbVar7 + uVar11;
                  if ((uVar30 & 1) != 0) {
                    pbVar12 = pbVar12 + lVar16;
                    pbVar7 = pbVar7 + lVar16;
                    uVar34 = *(undefined8 *)pbVar12;
                    uVar36 = *(undefined8 *)(pbVar12 + 0x18);
                    uVar35 = *(undefined8 *)(pbVar12 + 0x10);
                    uVar38 = *(undefined8 *)(pbVar12 + 0x28);
                    uVar37 = *(undefined8 *)(pbVar12 + 0x20);
                    uVar40 = *(undefined8 *)(pbVar12 + 0x38);
                    uVar39 = *(undefined8 *)(pbVar12 + 0x30);
                    *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar12 + 8);
                    *(undefined8 *)pbVar7 = uVar34;
                    *(undefined8 *)(pbVar7 + 0x18) = uVar36;
                    *(undefined8 *)(pbVar7 + 0x10) = uVar35;
                    *(undefined8 *)(pbVar7 + 0x28) = uVar38;
                    *(undefined8 *)(pbVar7 + 0x20) = uVar37;
                    *(undefined8 *)(pbVar7 + 0x38) = uVar40;
                    *(undefined8 *)(pbVar7 + 0x30) = uVar39;
                  }
                  if (uVar11 != uVar18) goto LAB_003977c8;
                }
                *pbVar32 = 0;
                    /* try { // try from 003977e0 to 003977ef has its CatchHandler @ 0039815c */
                FUN_003981f0(param_1,&local_f0,&local_c0);
                if ((local_f0 & 1) != 0) {
                  FUN_0049e790(PTR_LAB_047cba48,local_e0);
                }
              }
              uVar25 = -local_70;
              if (-1 < (int)local_70) {
                uVar25 = local_70;
              }
              uVar24 = uVar25 / 0x3c + (uVar25 / 0xe10) * -0x3c;
              local_ca = "0123456789"[uVar25 / 0xe10 + (uVar25 / 36000) * -10];
              local_cb = "0123456789"[uVar25 / 36000 + (uVar25 / 360000) * -10];
              local_c4[0] = "0123456789"[(uVar25 % 0x3c) % 10];
              uVar19 = uVar24 & 0xff;
              local_c5 = "0123456789"[(uVar25 % 0x3c) / 10];
              uVar25 = uVar19 / 10;
              local_c7 = "0123456789"[(ulong)(uVar24 + uVar25 * -10) & 0xff];
              local_c8 = "0123456789"[uVar25 + (uVar19 / 100) * -10];
              local_c6 = ':';
              local_c9 = 0x3a;
              local_cc = 0x2d;
              if (-1 < (int)local_70) {
                local_cc = 0x2b;
              }
                    /* try { // try from 0039790c to 0039791b has its CatchHandler @ 003981bc */
              FUN_0021d540(param_1,&local_cc,9);
              goto LAB_00397a6c;
            }
            if ((pbVar26 + 3 == pbVar2) || (pbVar26[3] != 0x7a)) goto LAB_00396298;
            pbVar31 = pbVar26 + -1;
            uVar18 = (long)pbVar31 - (long)pbVar12;
            if (uVar18 != 0) {
              if (0xffffffffffffffef < uVar18) {
                    /* try { // try from 003980f0 to 003980f7 has its CatchHandler @ 00398140 */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              if (uVar18 < 0x17) {
                local_f0 = CONCAT71(local_f0._1_7_,(char)((int)uVar18 << 1));
                pbVar7 = pbVar15;
              }
              else {
                uVar30 = uVar18 + 0x10 & 0xfffffffffffffff0;
                pbVar7 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar30);
                local_f0 = uVar30 | 1;
                local_e8 = uVar18;
                local_e0 = pbVar7;
              }
              pbVar32 = pbVar7;
              pbVar21 = pbVar12;
              if ((uVar18 < 0x40) ||
                 ((pbVar7 < pbVar31 && (pbVar12 < pbVar7 + (long)pbVar26 + ~(ulong)pbVar12)))) {
LAB_00397b4c:
                pbVar12 = pbVar32;
                do {
                  pbVar7 = pbVar21 + 1;
                  pbVar32 = pbVar12 + 1;
                  *pbVar12 = *pbVar21;
                  pbVar12 = pbVar32;
                  pbVar21 = pbVar7;
                } while (pbVar31 != pbVar7);
              }
              else {
                uVar11 = uVar18 & 0xffffffffffffffc0;
                uVar30 = (uVar11 - 0x40 >> 6) + 1;
                lVar16 = 0;
                if (uVar11 - 0x40 != 0) {
                  lVar20 = -(uVar30 & 0x7fffffffffffffe);
                  do {
                    pbVar21 = pbVar12 + lVar16 + 0x40;
                    pbVar32 = pbVar7 + lVar16 + 0x70;
                    lVar16 = lVar16 + 0x80;
                    uVar34 = *(undefined8 *)(pbVar21 + -0x40);
                    uVar36 = *(undefined8 *)(pbVar21 + -0x28);
                    uVar35 = *(undefined8 *)(pbVar21 + -0x30);
                    uVar38 = *(undefined8 *)(pbVar21 + -0x18);
                    uVar37 = *(undefined8 *)(pbVar21 + -0x20);
                    uVar40 = *(undefined8 *)(pbVar21 + -8);
                    uVar39 = *(undefined8 *)(pbVar21 + -0x10);
                    *(undefined8 *)(pbVar32 + -0x68) = *(undefined8 *)(pbVar21 + -0x38);
                    *(undefined8 *)(pbVar32 + -0x70) = uVar34;
                    *(undefined8 *)(pbVar32 + -0x58) = uVar36;
                    *(undefined8 *)(pbVar32 + -0x60) = uVar35;
                    lVar20 = lVar20 + 2;
                    *(undefined8 *)(pbVar32 + -0x48) = uVar38;
                    *(undefined8 *)(pbVar32 + -0x50) = uVar37;
                    *(undefined8 *)(pbVar32 + -0x38) = uVar40;
                    *(undefined8 *)(pbVar32 + -0x40) = uVar39;
                    uVar34 = *(undefined8 *)pbVar21;
                    uVar36 = *(undefined8 *)(pbVar21 + 0x18);
                    uVar35 = *(undefined8 *)(pbVar21 + 0x10);
                    uVar38 = *(undefined8 *)(pbVar21 + 0x28);
                    uVar37 = *(undefined8 *)(pbVar21 + 0x20);
                    uVar40 = *(undefined8 *)(pbVar21 + 0x38);
                    uVar39 = *(undefined8 *)(pbVar21 + 0x30);
                    *(undefined8 *)(pbVar32 + -0x28) = *(undefined8 *)(pbVar21 + 8);
                    *(undefined8 *)(pbVar32 + -0x30) = uVar34;
                    *(undefined8 *)(pbVar32 + -0x18) = uVar36;
                    *(undefined8 *)(pbVar32 + -0x20) = uVar35;
                    *(undefined8 *)(pbVar32 + -8) = uVar38;
                    *(undefined8 *)(pbVar32 + -0x10) = uVar37;
                    *(undefined8 *)(pbVar32 + 8) = uVar40;
                    *(undefined8 *)pbVar32 = uVar39;
                  } while (lVar20 != 0);
                }
                pbVar21 = pbVar12 + uVar11;
                pbVar32 = pbVar7 + uVar11;
                if ((uVar30 & 1) != 0) {
                  pbVar12 = pbVar12 + lVar16;
                  pbVar7 = pbVar7 + lVar16;
                  uVar34 = *(undefined8 *)pbVar12;
                  uVar36 = *(undefined8 *)(pbVar12 + 0x18);
                  uVar35 = *(undefined8 *)(pbVar12 + 0x10);
                  uVar38 = *(undefined8 *)(pbVar12 + 0x28);
                  uVar37 = *(undefined8 *)(pbVar12 + 0x20);
                  uVar40 = *(undefined8 *)(pbVar12 + 0x38);
                  uVar39 = *(undefined8 *)(pbVar12 + 0x30);
                  *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar12 + 8);
                  *(undefined8 *)pbVar7 = uVar34;
                  *(undefined8 *)(pbVar7 + 0x18) = uVar36;
                  *(undefined8 *)(pbVar7 + 0x10) = uVar35;
                  *(undefined8 *)(pbVar7 + 0x28) = uVar38;
                  *(undefined8 *)(pbVar7 + 0x20) = uVar37;
                  *(undefined8 *)(pbVar7 + 0x38) = uVar40;
                  *(undefined8 *)(pbVar7 + 0x30) = uVar39;
                }
                if (uVar11 != uVar18) goto LAB_00397b4c;
              }
              *pbVar32 = 0;
                    /* try { // try from 00397b64 to 00397b73 has its CatchHandler @ 00398154 */
              FUN_003981f0(param_1,&local_f0,&local_c0);
              if ((local_f0 & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,local_e0);
              }
            }
            uVar25 = -local_70;
            if (-1 < (int)local_70) {
              uVar25 = local_70;
            }
            uVar19 = uVar25 % 0x3c;
            cVar14 = '-';
            if (-1 < (int)local_70) {
              cVar14 = '+';
            }
            uVar24 = uVar25 / 0x3c + (uVar25 / 0xe10) * -0x3c;
            if (uVar19 == 0) {
              cVar4 = '+';
              if (uVar24 != 0 || 0xe0f < uVar25) {
                cVar4 = cVar14;
              }
              cVar14 = cVar4;
              pcVar10 = pcVar1;
            }
            else {
              local_c4[0] = "0123456789"[uVar19 % 10];
              local_c5 = "0123456789"[uVar19 / 10];
              local_c6 = ':';
              pcVar10 = &local_c6;
            }
            pcVar9 = pcVar10;
            if (uVar24 != 0 || uVar19 != 0) {
              uVar19 = (uVar24 & 0xff) / 10;
              cVar4 = "0123456789"[(ulong)(uVar24 + uVar19 * -10) & 0xff];
              pcVar9 = pcVar10 + -3;
              *pcVar9 = ':';
              pcVar10[-1] = cVar4;
              pcVar10[-2] = "0123456789"[uVar19 + ((uVar24 & 0xff) / 100) * -10];
            }
            pcVar10 = pcVar9 + -3;
            *pcVar10 = cVar14;
            cVar14 = "0123456789"[uVar25 / 0xe10 + (uVar25 / 36000) * -10];
            pcVar9[-2] = "0123456789"[uVar25 / 36000 + (uVar25 / 360000) * -10];
            pcVar9[-1] = cVar14;
                    /* try { // try from 00397cc8 to 00397ccf has its CatchHandler @ 003981bc */
            FUN_0021d540(param_1,pcVar10,(long)pcVar1 - (long)pcVar10);
            pbVar12 = pbVar26 + 4;
            goto LAB_00396294;
          }
          if (bVar3 != 0x7a) goto LAB_00396298;
          pbVar31 = pbVar26 + -1;
          uVar18 = (long)pbVar31 - (long)pbVar12;
          if (uVar18 != 0) {
            if (0xffffffffffffffef < uVar18) {
                    /* try { // try from 003980e0 to 003980e7 has its CatchHandler @ 00398148 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            if (uVar18 < 0x17) {
              local_f0 = CONCAT71(local_f0._1_7_,(char)((int)uVar18 << 1));
              pbVar7 = pbVar15;
              if (0x3f < uVar18) goto LAB_00396f14;
LAB_00396fc0:
              do {
                pbVar32 = pbVar12 + 1;
                pbVar21 = pbVar7 + 1;
                *pbVar7 = *pbVar12;
                pbVar7 = pbVar21;
                pbVar12 = pbVar32;
              } while (pbVar31 != pbVar32);
            }
            else {
              uVar30 = uVar18 + 0x10 & 0xfffffffffffffff0;
              pbVar7 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar30);
              local_f0 = uVar30 | 1;
              local_e8 = uVar18;
              local_e0 = pbVar7;
              if (uVar18 < 0x40) goto LAB_00396fc0;
LAB_00396f14:
              if (pbVar7 < pbVar31) {
                if (pbVar12 < pbVar7 + (long)pbVar26 + ~(ulong)pbVar12) goto LAB_00396fc0;
              }
              uVar11 = uVar18 & 0xffffffffffffffc0;
              uVar30 = (uVar11 - 0x40 >> 6) + 1;
              lVar16 = 0;
              if (uVar11 - 0x40 != 0) {
                lVar20 = -(uVar30 & 0x7fffffffffffffe);
                do {
                  pbVar21 = pbVar12 + lVar16 + 0x40;
                  pbVar32 = pbVar7 + lVar16 + 0x70;
                  lVar16 = lVar16 + 0x80;
                  uVar34 = *(undefined8 *)(pbVar21 + -0x40);
                  uVar36 = *(undefined8 *)(pbVar21 + -0x28);
                  uVar35 = *(undefined8 *)(pbVar21 + -0x30);
                  uVar38 = *(undefined8 *)(pbVar21 + -0x18);
                  uVar37 = *(undefined8 *)(pbVar21 + -0x20);
                  uVar40 = *(undefined8 *)(pbVar21 + -8);
                  uVar39 = *(undefined8 *)(pbVar21 + -0x10);
                  *(undefined8 *)(pbVar32 + -0x68) = *(undefined8 *)(pbVar21 + -0x38);
                  *(undefined8 *)(pbVar32 + -0x70) = uVar34;
                  *(undefined8 *)(pbVar32 + -0x58) = uVar36;
                  *(undefined8 *)(pbVar32 + -0x60) = uVar35;
                  lVar20 = lVar20 + 2;
                  *(undefined8 *)(pbVar32 + -0x48) = uVar38;
                  *(undefined8 *)(pbVar32 + -0x50) = uVar37;
                  *(undefined8 *)(pbVar32 + -0x38) = uVar40;
                  *(undefined8 *)(pbVar32 + -0x40) = uVar39;
                  uVar34 = *(undefined8 *)pbVar21;
                  uVar36 = *(undefined8 *)(pbVar21 + 0x18);
                  uVar35 = *(undefined8 *)(pbVar21 + 0x10);
                  uVar38 = *(undefined8 *)(pbVar21 + 0x28);
                  uVar37 = *(undefined8 *)(pbVar21 + 0x20);
                  uVar40 = *(undefined8 *)(pbVar21 + 0x38);
                  uVar39 = *(undefined8 *)(pbVar21 + 0x30);
                  *(undefined8 *)(pbVar32 + -0x28) = *(undefined8 *)(pbVar21 + 8);
                  *(undefined8 *)(pbVar32 + -0x30) = uVar34;
                  *(undefined8 *)(pbVar32 + -0x18) = uVar36;
                  *(undefined8 *)(pbVar32 + -0x20) = uVar35;
                  *(undefined8 *)(pbVar32 + -8) = uVar38;
                  *(undefined8 *)(pbVar32 + -0x10) = uVar37;
                  *(undefined8 *)(pbVar32 + 8) = uVar40;
                  *(undefined8 *)pbVar32 = uVar39;
                } while (lVar20 != 0);
              }
              pbVar21 = pbVar7 + uVar11;
              if ((uVar30 & 1) != 0) {
                pbVar32 = pbVar12 + lVar16;
                pbVar7 = pbVar7 + lVar16;
                uVar34 = *(undefined8 *)pbVar32;
                uVar36 = *(undefined8 *)(pbVar32 + 0x18);
                uVar35 = *(undefined8 *)(pbVar32 + 0x10);
                uVar38 = *(undefined8 *)(pbVar32 + 0x28);
                uVar37 = *(undefined8 *)(pbVar32 + 0x20);
                uVar40 = *(undefined8 *)(pbVar32 + 0x38);
                uVar39 = *(undefined8 *)(pbVar32 + 0x30);
                *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar32 + 8);
                *(undefined8 *)pbVar7 = uVar34;
                *(undefined8 *)(pbVar7 + 0x18) = uVar36;
                *(undefined8 *)(pbVar7 + 0x10) = uVar35;
                *(undefined8 *)(pbVar7 + 0x28) = uVar38;
                *(undefined8 *)(pbVar7 + 0x20) = uVar37;
                *(undefined8 *)(pbVar7 + 0x38) = uVar40;
                *(undefined8 *)(pbVar7 + 0x30) = uVar39;
              }
              pbVar7 = pbVar21;
              pbVar12 = pbVar12 + uVar11;
              if (uVar11 != uVar18) goto LAB_00396fc0;
            }
            *pbVar21 = 0;
                    /* try { // try from 00396fd8 to 00396fe7 has its CatchHandler @ 00398170 */
            FUN_003981f0(param_1,&local_f0,&local_c0);
            if ((local_f0 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_e0);
            }
          }
          uVar25 = -local_70;
          if (-1 < (int)local_70) {
            uVar25 = local_70;
          }
          uVar19 = uVar25 / 0x3c + (uVar25 / 0xe10) * -0x3c;
          local_c7 = "0123456789"[uVar25 / 0xe10 + (uVar25 / 36000) * -10];
          uVar27 = 0x2d;
          if (-1 < (int)local_70) {
            uVar27 = 0x2b;
          }
          uVar24 = (uVar19 & 0xff) / 10;
          local_c4[0] = "0123456789"[(ulong)(uVar19 + uVar24 * -10) & 0xff];
          local_c5 = "0123456789"[uVar24 + ((uVar19 & 0xff) / 100) * -10];
          local_c8 = "0123456789"[uVar25 / 36000 + (uVar25 / 360000) * -10];
          local_c9 = 0x2b;
          if (uVar19 != 0 || 0xe0f < uVar25) {
            local_c9 = uVar27;
          }
          local_c6 = ':';
                    /* try { // try from 003970dc to 003970eb has its CatchHandler @ 003981bc */
          FUN_0021d540(param_1,&local_c9,6);
LAB_003970ec:
          pbVar12 = pbVar26 + 2;
          goto LAB_00396294;
        }
        pbVar31 = pbVar26 + 1;
        if (pbVar31 == pbVar2) break;
        bVar3 = *pbVar31;
        uVar25 = (uint)bVar3;
        if (bVar3 == 0x2a) {
          pbVar7 = pbVar26 + 2;
          if (pbVar7 == pbVar2) goto LAB_00396ba8;
          if (*pbVar7 == 0x7a) {
            pbVar31 = pbVar26 + -1;
            uVar18 = (long)pbVar31 - (long)pbVar12;
            if (uVar18 != 0) {
              if (0xffffffffffffffef < uVar18) {
                    /* try { // try from 00398110 to 00398117 has its CatchHandler @ 00398130 */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              if (uVar18 < 0x17) {
                local_f0 = CONCAT71(local_f0._1_7_,(char)((int)uVar18 << 1));
                pbVar7 = pbVar15;
              }
              else {
                uVar30 = uVar18 + 0x10 & 0xfffffffffffffff0;
                pbVar7 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar30);
                local_f0 = uVar30 | 1;
                local_e8 = uVar18;
                local_e0 = pbVar7;
              }
              pbVar32 = pbVar7;
              pbVar21 = pbVar12;
              if ((uVar18 < 0x40) ||
                 ((pbVar7 < pbVar31 && (pbVar12 < pbVar7 + (long)pbVar26 + ~(ulong)pbVar12)))) {
LAB_0039737c:
                pbVar12 = pbVar32;
                do {
                  pbVar7 = pbVar21 + 1;
                  pbVar32 = pbVar12 + 1;
                  *pbVar12 = *pbVar21;
                  pbVar12 = pbVar32;
                  pbVar21 = pbVar7;
                } while (pbVar31 != pbVar7);
              }
              else {
                uVar11 = uVar18 & 0xffffffffffffffc0;
                uVar30 = (uVar11 - 0x40 >> 6) + 1;
                lVar16 = 0;
                if (uVar11 - 0x40 != 0) {
                  lVar20 = -(uVar30 & 0x7fffffffffffffe);
                  do {
                    pbVar21 = pbVar12 + lVar16 + 0x40;
                    pbVar32 = pbVar7 + lVar16 + 0x70;
                    lVar16 = lVar16 + 0x80;
                    uVar34 = *(undefined8 *)(pbVar21 + -0x40);
                    uVar36 = *(undefined8 *)(pbVar21 + -0x28);
                    uVar35 = *(undefined8 *)(pbVar21 + -0x30);
                    uVar38 = *(undefined8 *)(pbVar21 + -0x18);
                    uVar37 = *(undefined8 *)(pbVar21 + -0x20);
                    uVar40 = *(undefined8 *)(pbVar21 + -8);
                    uVar39 = *(undefined8 *)(pbVar21 + -0x10);
                    *(undefined8 *)(pbVar32 + -0x68) = *(undefined8 *)(pbVar21 + -0x38);
                    *(undefined8 *)(pbVar32 + -0x70) = uVar34;
                    *(undefined8 *)(pbVar32 + -0x58) = uVar36;
                    *(undefined8 *)(pbVar32 + -0x60) = uVar35;
                    lVar20 = lVar20 + 2;
                    *(undefined8 *)(pbVar32 + -0x48) = uVar38;
                    *(undefined8 *)(pbVar32 + -0x50) = uVar37;
                    *(undefined8 *)(pbVar32 + -0x38) = uVar40;
                    *(undefined8 *)(pbVar32 + -0x40) = uVar39;
                    uVar34 = *(undefined8 *)pbVar21;
                    uVar36 = *(undefined8 *)(pbVar21 + 0x18);
                    uVar35 = *(undefined8 *)(pbVar21 + 0x10);
                    uVar38 = *(undefined8 *)(pbVar21 + 0x28);
                    uVar37 = *(undefined8 *)(pbVar21 + 0x20);
                    uVar40 = *(undefined8 *)(pbVar21 + 0x38);
                    uVar39 = *(undefined8 *)(pbVar21 + 0x30);
                    *(undefined8 *)(pbVar32 + -0x28) = *(undefined8 *)(pbVar21 + 8);
                    *(undefined8 *)(pbVar32 + -0x30) = uVar34;
                    *(undefined8 *)(pbVar32 + -0x18) = uVar36;
                    *(undefined8 *)(pbVar32 + -0x20) = uVar35;
                    *(undefined8 *)(pbVar32 + -8) = uVar38;
                    *(undefined8 *)(pbVar32 + -0x10) = uVar37;
                    *(undefined8 *)(pbVar32 + 8) = uVar40;
                    *(undefined8 *)pbVar32 = uVar39;
                  } while (lVar20 != 0);
                }
                pbVar21 = pbVar12 + uVar11;
                pbVar32 = pbVar7 + uVar11;
                if ((uVar30 & 1) != 0) {
                  pbVar12 = pbVar12 + lVar16;
                  pbVar7 = pbVar7 + lVar16;
                  uVar34 = *(undefined8 *)pbVar12;
                  uVar36 = *(undefined8 *)(pbVar12 + 0x18);
                  uVar35 = *(undefined8 *)(pbVar12 + 0x10);
                  uVar38 = *(undefined8 *)(pbVar12 + 0x28);
                  uVar37 = *(undefined8 *)(pbVar12 + 0x20);
                  uVar40 = *(undefined8 *)(pbVar12 + 0x38);
                  uVar39 = *(undefined8 *)(pbVar12 + 0x30);
                  *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar12 + 8);
                  *(undefined8 *)pbVar7 = uVar34;
                  *(undefined8 *)(pbVar7 + 0x18) = uVar36;
                  *(undefined8 *)(pbVar7 + 0x10) = uVar35;
                  *(undefined8 *)(pbVar7 + 0x28) = uVar38;
                  *(undefined8 *)(pbVar7 + 0x20) = uVar37;
                  *(undefined8 *)(pbVar7 + 0x38) = uVar40;
                  *(undefined8 *)(pbVar7 + 0x30) = uVar39;
                }
                if (uVar11 != uVar18) goto LAB_0039737c;
              }
              *pbVar32 = 0;
                    /* try { // try from 00397394 to 003973a3 has its CatchHandler @ 00398164 */
              FUN_003981f0(param_1,&local_f0,&local_c0);
              if ((local_f0 & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,local_e0);
              }
            }
            uVar25 = -local_70;
            if (-1 < (int)local_70) {
              uVar25 = local_70;
            }
            uVar24 = uVar25 / 0x3c + (uVar25 / 0xe10) * -0x3c;
            local_ca = "0123456789"[uVar25 / 0xe10 + (uVar25 / 36000) * -10];
            local_cb = "0123456789"[uVar25 / 36000 + (uVar25 / 360000) * -10];
            local_c4[0] = "0123456789"[(uVar25 % 0x3c) % 10];
            uVar19 = uVar24 & 0xff;
            local_c5 = "0123456789"[(uVar25 % 0x3c) / 10];
            uVar25 = uVar19 / 10;
            local_c7 = "0123456789"[(ulong)(uVar24 + uVar25 * -10) & 0xff];
            local_c8 = "0123456789"[uVar25 + (uVar19 / 100) * -10];
            local_c6 = ':';
            local_c9 = 0x3a;
            local_cc = 0x2d;
            if (-1 < (int)local_70) {
              local_cc = 0x2b;
            }
                    /* try { // try from 003974c0 to 003974cf has its CatchHandler @ 003981bc */
            FUN_0021d540(param_1,&local_cc,9);
          }
          else {
            if ((*pbVar7 != 0x66) && (*pbVar7 != 0x53)) goto LAB_00396ba8;
            pbVar31 = pbVar26 + -1;
            uVar18 = (long)pbVar31 - (long)pbVar12;
            if (uVar18 != 0) {
              if (0xffffffffffffffef < uVar18) {
                    /* try { // try from 00398108 to 0039810f has its CatchHandler @ 00398134 */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              if (uVar18 < 0x17) {
                local_f0 = CONCAT71(local_f0._1_7_,(char)((int)uVar18 << 1));
                pbVar21 = pbVar15;
              }
              else {
                uVar30 = uVar18 + 0x10 & 0xfffffffffffffff0;
                pbVar21 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar30);
                local_f0 = uVar30 | 1;
                local_e8 = uVar18;
                local_e0 = pbVar21;
              }
              pbVar22 = pbVar21;
              pbVar32 = pbVar12;
              if ((uVar18 < 0x40) ||
                 ((pbVar21 < pbVar31 && (pbVar12 < pbVar21 + (long)pbVar26 + ~(ulong)pbVar12)))) {
LAB_003975ac:
                pbVar12 = pbVar22;
                do {
                  pbVar21 = pbVar32 + 1;
                  pbVar22 = pbVar12 + 1;
                  *pbVar12 = *pbVar32;
                  pbVar12 = pbVar22;
                  pbVar32 = pbVar21;
                } while (pbVar31 != pbVar21);
              }
              else {
                uVar11 = uVar18 & 0xffffffffffffffc0;
                uVar30 = (uVar11 - 0x40 >> 6) + 1;
                lVar16 = 0;
                if (uVar11 - 0x40 != 0) {
                  lVar20 = -(uVar30 & 0x7fffffffffffffe);
                  do {
                    pbVar32 = pbVar12 + lVar16 + 0x40;
                    pbVar22 = pbVar21 + lVar16 + 0x70;
                    lVar16 = lVar16 + 0x80;
                    uVar34 = *(undefined8 *)(pbVar32 + -0x40);
                    uVar36 = *(undefined8 *)(pbVar32 + -0x28);
                    uVar35 = *(undefined8 *)(pbVar32 + -0x30);
                    uVar38 = *(undefined8 *)(pbVar32 + -0x18);
                    uVar37 = *(undefined8 *)(pbVar32 + -0x20);
                    uVar40 = *(undefined8 *)(pbVar32 + -8);
                    uVar39 = *(undefined8 *)(pbVar32 + -0x10);
                    *(undefined8 *)(pbVar22 + -0x68) = *(undefined8 *)(pbVar32 + -0x38);
                    *(undefined8 *)(pbVar22 + -0x70) = uVar34;
                    *(undefined8 *)(pbVar22 + -0x58) = uVar36;
                    *(undefined8 *)(pbVar22 + -0x60) = uVar35;
                    lVar20 = lVar20 + 2;
                    *(undefined8 *)(pbVar22 + -0x48) = uVar38;
                    *(undefined8 *)(pbVar22 + -0x50) = uVar37;
                    *(undefined8 *)(pbVar22 + -0x38) = uVar40;
                    *(undefined8 *)(pbVar22 + -0x40) = uVar39;
                    uVar34 = *(undefined8 *)pbVar32;
                    uVar36 = *(undefined8 *)(pbVar32 + 0x18);
                    uVar35 = *(undefined8 *)(pbVar32 + 0x10);
                    uVar38 = *(undefined8 *)(pbVar32 + 0x28);
                    uVar37 = *(undefined8 *)(pbVar32 + 0x20);
                    uVar40 = *(undefined8 *)(pbVar32 + 0x38);
                    uVar39 = *(undefined8 *)(pbVar32 + 0x30);
                    *(undefined8 *)(pbVar22 + -0x28) = *(undefined8 *)(pbVar32 + 8);
                    *(undefined8 *)(pbVar22 + -0x30) = uVar34;
                    *(undefined8 *)(pbVar22 + -0x18) = uVar36;
                    *(undefined8 *)(pbVar22 + -0x20) = uVar35;
                    *(undefined8 *)(pbVar22 + -8) = uVar38;
                    *(undefined8 *)(pbVar22 + -0x10) = uVar37;
                    *(undefined8 *)(pbVar22 + 8) = uVar40;
                    *(undefined8 *)pbVar22 = uVar39;
                  } while (lVar20 != 0);
                }
                pbVar32 = pbVar12 + uVar11;
                pbVar22 = pbVar21 + uVar11;
                if ((uVar30 & 1) != 0) {
                  pbVar12 = pbVar12 + lVar16;
                  pbVar21 = pbVar21 + lVar16;
                  uVar34 = *(undefined8 *)pbVar12;
                  uVar36 = *(undefined8 *)(pbVar12 + 0x18);
                  uVar35 = *(undefined8 *)(pbVar12 + 0x10);
                  uVar38 = *(undefined8 *)(pbVar12 + 0x28);
                  uVar37 = *(undefined8 *)(pbVar12 + 0x20);
                  uVar40 = *(undefined8 *)(pbVar12 + 0x38);
                  uVar39 = *(undefined8 *)(pbVar12 + 0x30);
                  *(undefined8 *)(pbVar21 + 8) = *(undefined8 *)(pbVar12 + 8);
                  *(undefined8 *)pbVar21 = uVar34;
                  *(undefined8 *)(pbVar21 + 0x18) = uVar36;
                  *(undefined8 *)(pbVar21 + 0x10) = uVar35;
                  *(undefined8 *)(pbVar21 + 0x28) = uVar38;
                  *(undefined8 *)(pbVar21 + 0x20) = uVar37;
                  *(undefined8 *)(pbVar21 + 0x38) = uVar40;
                  *(undefined8 *)(pbVar21 + 0x30) = uVar39;
                }
                if (uVar11 != uVar18) goto LAB_003975ac;
              }
              *pbVar22 = 0;
                    /* try { // try from 003975c4 to 003975d3 has its CatchHandler @ 00398160 */
              FUN_003981f0(param_1,&local_f0,&local_c0);
              if ((local_f0 & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,local_e0);
              }
            }
            lVar16 = *param_4;
            pcVar10 = pcVar1;
            if (lVar16 < 0) {
              if (lVar16 == -0x8000000000000000) {
                local_c4[0] = '8';
                iVar17 = 0xd;
                lVar16 = -0xccccccccccccccc;
                pcVar10 = local_c4;
              }
              else {
                iVar17 = 0xe;
              }
              lVar16 = -lVar16;
              bVar5 = true;
            }
            else {
              bVar5 = false;
              iVar17 = 0xf;
            }
            uVar25 = iVar17 - 1;
            lVar20 = 0;
            do {
              uVar18 = lVar16 + 9;
              uVar25 = uVar25 - 1;
              lVar29 = lVar20 + -1;
              pcVar10[lVar20 + -1] = "0123456789"[lVar16 % 10];
              lVar16 = lVar16 / 10;
              lVar20 = lVar29;
            } while (0x12 < uVar18);
            if (iVar17 + (int)lVar29 + 1 < 2) {
              pcVar10 = pcVar10 + lVar29;
            }
            else {
              pcVar10 = pcVar10 + (lVar29 - (ulong)uVar25) + -1;
              memset(pcVar10,0x30,(ulong)((iVar17 + (int)lVar29) - 1) + 1);
            }
            if (bVar5) {
              pcVar10 = pcVar10 + -1;
              *pcVar10 = '-';
            }
            pcVar9 = local_d8;
            do {
              pcVar33 = pcVar9;
              if (pcVar10 + -0x15 == pcVar33) {
                bVar5 = true;
                pcVar9 = pcVar10;
                goto LAB_003979e8;
              }
              pcVar9 = pcVar33 + -1;
            } while (pcVar33[0x14] == '0');
            bVar5 = false;
            pcVar9 = pcVar33 + 0x15;
LAB_003979e8:
            if (*pbVar7 == 0x66) {
              if (bVar5) {
                pcVar10 = pcVar10 + -1;
                *pcVar10 = '0';
              }
            }
            else if (*pbVar7 == 0x53) {
              pcVar33 = pcVar10;
              if (!bVar5) {
                pcVar33 = pcVar10 + -1;
                *pcVar33 = '.';
              }
              cVar14 = "0123456789"[(int)local_74 % 10];
              pcVar10 = pcVar33 + -2;
              *pcVar10 = "0123456789"[((int)local_74 / 10) % 10];
              pcVar33[-1] = cVar14;
            }
                    /* try { // try from 00397a60 to 00397a6b has its CatchHandler @ 0039816c */
            FUN_0021d540(param_1,pcVar10,(long)pcVar9 - (long)pcVar10);
          }
LAB_00397a6c:
          pbVar12 = pbVar26 + 3;
          goto LAB_00396294;
        }
        if (bVar3 != 0x34) {
          if (uVar25 != 0x7a) goto LAB_00396ba8;
          pbVar31 = pbVar26 + -1;
          uVar18 = (long)pbVar31 - (long)pbVar12;
          if (uVar18 != 0) {
            if (0xffffffffffffffef < uVar18) {
                    /* try { // try from 003980f8 to 003980ff has its CatchHandler @ 0039813c */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            if (uVar18 < 0x17) {
              local_f0 = CONCAT71(local_f0._1_7_,(char)((int)uVar18 << 1));
              pbVar7 = pbVar15;
              if (0x3f < uVar18) goto LAB_00396d0c;
LAB_00396db8:
              do {
                pbVar32 = pbVar12 + 1;
                pbVar21 = pbVar7 + 1;
                *pbVar7 = *pbVar12;
                pbVar7 = pbVar21;
                pbVar12 = pbVar32;
              } while (pbVar31 != pbVar32);
            }
            else {
              uVar30 = uVar18 + 0x10 & 0xfffffffffffffff0;
              pbVar7 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar30);
              local_f0 = uVar30 | 1;
              local_e8 = uVar18;
              local_e0 = pbVar7;
              if (uVar18 < 0x40) goto LAB_00396db8;
LAB_00396d0c:
              if (pbVar7 < pbVar31) {
                if (pbVar12 < pbVar7 + (long)pbVar26 + ~(ulong)pbVar12) goto LAB_00396db8;
              }
              uVar11 = uVar18 & 0xffffffffffffffc0;
              uVar30 = (uVar11 - 0x40 >> 6) + 1;
              lVar16 = 0;
              if (uVar11 - 0x40 != 0) {
                lVar20 = -(uVar30 & 0x7fffffffffffffe);
                do {
                  pbVar21 = pbVar12 + lVar16 + 0x40;
                  pbVar32 = pbVar7 + lVar16 + 0x70;
                  lVar16 = lVar16 + 0x80;
                  uVar34 = *(undefined8 *)(pbVar21 + -0x40);
                  uVar36 = *(undefined8 *)(pbVar21 + -0x28);
                  uVar35 = *(undefined8 *)(pbVar21 + -0x30);
                  uVar38 = *(undefined8 *)(pbVar21 + -0x18);
                  uVar37 = *(undefined8 *)(pbVar21 + -0x20);
                  uVar40 = *(undefined8 *)(pbVar21 + -8);
                  uVar39 = *(undefined8 *)(pbVar21 + -0x10);
                  *(undefined8 *)(pbVar32 + -0x68) = *(undefined8 *)(pbVar21 + -0x38);
                  *(undefined8 *)(pbVar32 + -0x70) = uVar34;
                  *(undefined8 *)(pbVar32 + -0x58) = uVar36;
                  *(undefined8 *)(pbVar32 + -0x60) = uVar35;
                  lVar20 = lVar20 + 2;
                  *(undefined8 *)(pbVar32 + -0x48) = uVar38;
                  *(undefined8 *)(pbVar32 + -0x50) = uVar37;
                  *(undefined8 *)(pbVar32 + -0x38) = uVar40;
                  *(undefined8 *)(pbVar32 + -0x40) = uVar39;
                  uVar34 = *(undefined8 *)pbVar21;
                  uVar36 = *(undefined8 *)(pbVar21 + 0x18);
                  uVar35 = *(undefined8 *)(pbVar21 + 0x10);
                  uVar38 = *(undefined8 *)(pbVar21 + 0x28);
                  uVar37 = *(undefined8 *)(pbVar21 + 0x20);
                  uVar40 = *(undefined8 *)(pbVar21 + 0x38);
                  uVar39 = *(undefined8 *)(pbVar21 + 0x30);
                  *(undefined8 *)(pbVar32 + -0x28) = *(undefined8 *)(pbVar21 + 8);
                  *(undefined8 *)(pbVar32 + -0x30) = uVar34;
                  *(undefined8 *)(pbVar32 + -0x18) = uVar36;
                  *(undefined8 *)(pbVar32 + -0x20) = uVar35;
                  *(undefined8 *)(pbVar32 + -8) = uVar38;
                  *(undefined8 *)(pbVar32 + -0x10) = uVar37;
                  *(undefined8 *)(pbVar32 + 8) = uVar40;
                  *(undefined8 *)pbVar32 = uVar39;
                } while (lVar20 != 0);
              }
              pbVar21 = pbVar7 + uVar11;
              if ((uVar30 & 1) != 0) {
                pbVar32 = pbVar12 + lVar16;
                pbVar7 = pbVar7 + lVar16;
                uVar34 = *(undefined8 *)pbVar32;
                uVar36 = *(undefined8 *)(pbVar32 + 0x18);
                uVar35 = *(undefined8 *)(pbVar32 + 0x10);
                uVar38 = *(undefined8 *)(pbVar32 + 0x28);
                uVar37 = *(undefined8 *)(pbVar32 + 0x20);
                uVar40 = *(undefined8 *)(pbVar32 + 0x38);
                uVar39 = *(undefined8 *)(pbVar32 + 0x30);
                *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar32 + 8);
                *(undefined8 *)pbVar7 = uVar34;
                *(undefined8 *)(pbVar7 + 0x18) = uVar36;
                *(undefined8 *)(pbVar7 + 0x10) = uVar35;
                *(undefined8 *)(pbVar7 + 0x28) = uVar38;
                *(undefined8 *)(pbVar7 + 0x20) = uVar37;
                *(undefined8 *)(pbVar7 + 0x38) = uVar40;
                *(undefined8 *)(pbVar7 + 0x30) = uVar39;
              }
              pbVar7 = pbVar21;
              pbVar12 = pbVar12 + uVar11;
              if (uVar11 != uVar18) goto LAB_00396db8;
            }
            *pbVar21 = 0;
                    /* try { // try from 00396dd0 to 00396ddf has its CatchHandler @ 00398174 */
            FUN_003981f0(param_1,&local_f0,&local_c0);
            if ((local_f0 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_e0);
            }
          }
          uVar25 = -local_70;
          if (-1 < (int)local_70) {
            uVar25 = local_70;
          }
          uVar19 = uVar25 / 0x3c + (uVar25 / 0xe10) * -0x3c;
          local_c7 = "0123456789"[uVar25 / 0xe10 + (uVar25 / 36000) * -10];
          uVar27 = 0x2d;
          if (-1 < (int)local_70) {
            uVar27 = 0x2b;
          }
          uVar24 = (uVar19 & 0xff) / 10;
          local_c4[0] = "0123456789"[(ulong)(uVar19 + uVar24 * -10) & 0xff];
          local_c5 = "0123456789"[uVar24 + ((uVar19 & 0xff) / 100) * -10];
          local_c8 = "0123456789"[uVar25 / 36000 + (uVar25 / 360000) * -10];
          local_c9 = 0x2b;
          if (uVar19 != 0 || 0xe0f < uVar25) {
            local_c9 = uVar27;
          }
          local_c6 = ':';
                    /* try { // try from 00396ed4 to 00396ee3 has its CatchHandler @ 003981bc */
          FUN_0021d540(param_1,&local_c9,6);
          goto LAB_003970ec;
        }
        if ((pbVar26 + 2 != pbVar2) && (pbVar26[2] == 0x59)) {
          pbVar31 = pbVar26 + -1;
          uVar18 = (long)pbVar31 - (long)pbVar12;
          if (uVar18 != 0) {
            if (0xffffffffffffffef < uVar18) {
                    /* try { // try from 00398100 to 00398107 has its CatchHandler @ 00398138 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            if (uVar18 < 0x17) {
              local_f0 = CONCAT71(local_f0._1_7_,(char)((int)uVar18 << 1));
              pbVar7 = pbVar15;
            }
            else {
              uVar30 = uVar18 + 0x10 & 0xfffffffffffffff0;
              pbVar7 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar30);
              local_f0 = uVar30 | 1;
              local_e8 = uVar18;
              local_e0 = pbVar7;
            }
            pbVar32 = pbVar7;
            pbVar21 = pbVar12;
            if ((uVar18 < 0x40) ||
               ((pbVar7 < pbVar31 && (pbVar12 < pbVar7 + (long)pbVar26 + ~(ulong)pbVar12)))) {
LAB_00397210:
              pbVar12 = pbVar32;
              do {
                pbVar7 = pbVar21 + 1;
                pbVar32 = pbVar12 + 1;
                *pbVar12 = *pbVar21;
                pbVar12 = pbVar32;
                pbVar21 = pbVar7;
              } while (pbVar31 != pbVar7);
            }
            else {
              uVar11 = uVar18 & 0xffffffffffffffc0;
              uVar30 = (uVar11 - 0x40 >> 6) + 1;
              lVar16 = 0;
              if (uVar11 - 0x40 != 0) {
                lVar20 = -(uVar30 & 0x7fffffffffffffe);
                do {
                  pbVar21 = pbVar12 + lVar16 + 0x40;
                  pbVar32 = pbVar7 + lVar16 + 0x70;
                  lVar16 = lVar16 + 0x80;
                  uVar34 = *(undefined8 *)(pbVar21 + -0x40);
                  uVar36 = *(undefined8 *)(pbVar21 + -0x28);
                  uVar35 = *(undefined8 *)(pbVar21 + -0x30);
                  uVar38 = *(undefined8 *)(pbVar21 + -0x18);
                  uVar37 = *(undefined8 *)(pbVar21 + -0x20);
                  uVar40 = *(undefined8 *)(pbVar21 + -8);
                  uVar39 = *(undefined8 *)(pbVar21 + -0x10);
                  *(undefined8 *)(pbVar32 + -0x68) = *(undefined8 *)(pbVar21 + -0x38);
                  *(undefined8 *)(pbVar32 + -0x70) = uVar34;
                  *(undefined8 *)(pbVar32 + -0x58) = uVar36;
                  *(undefined8 *)(pbVar32 + -0x60) = uVar35;
                  lVar20 = lVar20 + 2;
                  *(undefined8 *)(pbVar32 + -0x48) = uVar38;
                  *(undefined8 *)(pbVar32 + -0x50) = uVar37;
                  *(undefined8 *)(pbVar32 + -0x38) = uVar40;
                  *(undefined8 *)(pbVar32 + -0x40) = uVar39;
                  uVar34 = *(undefined8 *)pbVar21;
                  uVar36 = *(undefined8 *)(pbVar21 + 0x18);
                  uVar35 = *(undefined8 *)(pbVar21 + 0x10);
                  uVar38 = *(undefined8 *)(pbVar21 + 0x28);
                  uVar37 = *(undefined8 *)(pbVar21 + 0x20);
                  uVar40 = *(undefined8 *)(pbVar21 + 0x38);
                  uVar39 = *(undefined8 *)(pbVar21 + 0x30);
                  *(undefined8 *)(pbVar32 + -0x28) = *(undefined8 *)(pbVar21 + 8);
                  *(undefined8 *)(pbVar32 + -0x30) = uVar34;
                  *(undefined8 *)(pbVar32 + -0x18) = uVar36;
                  *(undefined8 *)(pbVar32 + -0x20) = uVar35;
                  *(undefined8 *)(pbVar32 + -8) = uVar38;
                  *(undefined8 *)(pbVar32 + -0x10) = uVar37;
                  *(undefined8 *)(pbVar32 + 8) = uVar40;
                  *(undefined8 *)pbVar32 = uVar39;
                } while (lVar20 != 0);
              }
              pbVar21 = pbVar12 + uVar11;
              pbVar32 = pbVar7 + uVar11;
              if ((uVar30 & 1) != 0) {
                pbVar12 = pbVar12 + lVar16;
                pbVar7 = pbVar7 + lVar16;
                uVar34 = *(undefined8 *)pbVar12;
                uVar36 = *(undefined8 *)(pbVar12 + 0x18);
                uVar35 = *(undefined8 *)(pbVar12 + 0x10);
                uVar38 = *(undefined8 *)(pbVar12 + 0x28);
                uVar37 = *(undefined8 *)(pbVar12 + 0x20);
                uVar40 = *(undefined8 *)(pbVar12 + 0x38);
                uVar39 = *(undefined8 *)(pbVar12 + 0x30);
                *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar12 + 8);
                *(undefined8 *)pbVar7 = uVar34;
                *(undefined8 *)(pbVar7 + 0x18) = uVar36;
                *(undefined8 *)(pbVar7 + 0x10) = uVar35;
                *(undefined8 *)(pbVar7 + 0x28) = uVar38;
                *(undefined8 *)(pbVar7 + 0x20) = uVar37;
                *(undefined8 *)(pbVar7 + 0x38) = uVar40;
                *(undefined8 *)(pbVar7 + 0x30) = uVar39;
              }
              if (uVar11 != uVar18) goto LAB_00397210;
            }
            *pbVar32 = 0;
                    /* try { // try from 00397228 to 00397237 has its CatchHandler @ 00398168 */
            FUN_003981f0(param_1,&local_f0,&local_c0);
            if ((local_f0 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_e0);
            }
          }
          pcVar10 = pcVar1;
          if ((long)local_80 < 0) {
            if (local_80 == 0x8000000000000000) {
              local_c4[0] = '8';
              iVar17 = 2;
              pcVar10 = local_c4;
              uVar18 = 0xf333333333333334;
            }
            else {
              iVar17 = 3;
              uVar18 = local_80;
            }
            uVar18 = -uVar18;
            bVar5 = true;
          }
          else {
            bVar5 = false;
            iVar17 = 4;
            uVar18 = local_80;
          }
          uVar25 = iVar17 - 1;
          lVar16 = 0;
          do {
            uVar30 = uVar18 + 9;
            uVar25 = uVar25 - 1;
            lVar20 = lVar16 + -1;
            pcVar10[lVar16 + -1] = "0123456789"[(long)uVar18 % 10];
            uVar18 = (long)uVar18 / 10;
            lVar16 = lVar20;
          } while (0x12 < uVar30);
          if (iVar17 + (int)lVar20 + 1 < 2) {
            pcVar10 = pcVar10 + lVar20;
          }
          else {
            pcVar10 = pcVar10 + (lVar20 - (ulong)uVar25) + -1;
            memset(pcVar10,0x30,(ulong)((iVar17 + (int)lVar20) - 1) + 1);
          }
          if (bVar5) {
            pcVar10 = pcVar10 + -1;
            *pcVar10 = '-';
          }
                    /* try { // try from 003976e0 to 003976eb has its CatchHandler @ 003981bc */
          FUN_0021d540(param_1,pcVar10,(long)pcVar1 - (long)pcVar10);
          goto LAB_00397a6c;
        }
LAB_00396ba8:
        if (uVar25 - 0x30 < 10) {
          if (uVar25 != 0x2d) {
            pbVar7 = pbVar31;
          }
          else {
            bVar3 = pbVar26[2];
            pbVar7 = pbVar26 + 2;
          }
          bVar5 = uVar25 == 0x2d;
          uVar25 = (uint)bVar3;
          pvVar6 = memchr("0123456789",(uint)bVar3,0xb);
          if (pvVar6 != (void *)0x0) {
            uVar19 = (int)pvVar6 + 0xfc323e24;
            pbVar21 = pbVar7;
            if ((int)uVar19 < 10) {
              uVar24 = 0;
              do {
                pbVar21 = pbVar21 + 1;
                if (((int)uVar24 < -0xccccccc) || ((int)(uVar24 * 10) < (int)(uVar19 | 0x80000000)))
                goto LAB_00396298;
                uVar25 = (uint)*pbVar21;
                uVar24 = uVar24 * 10 - uVar19;
                pvVar6 = memchr("0123456789",uVar25,0xb);
              } while ((pvVar6 != (void *)0x0) &&
                      (uVar19 = (int)pvVar6 + 0xfc323e24, (int)uVar19 < 10));
            }
            else {
              uVar24 = 0;
            }
            if (((pbVar21 != pbVar7) && (bVar5 || uVar24 != 0x80000000)) &&
               ((uVar24 != 0 || (!bVar5)))) {
              uVar19 = -uVar24;
              if (bVar5) {
                uVar19 = uVar24;
              }
              if ((uVar19 < 0x401) && ((uVar25 == 0x66 || (uVar25 == 0x53)))) {
                pbVar31 = pbVar26 + -1;
                uVar18 = (long)pbVar31 - (long)pbVar12;
                if (uVar18 != 0) {
                  if (0xffffffffffffffef < uVar18) {
                    /* try { // try from 00398118 to 0039811f has its CatchHandler @ 0039812c */
                    /* WARNING: Subroutine does not return */
                    std::__basic_string_common<true>::__throw_length_error();
                  }
                  if (uVar18 < 0x17) {
                    local_f0 = CONCAT71(local_f0._1_7_,(char)((int)uVar18 << 1));
                    pbVar7 = pbVar15;
                  }
                  else {
                    uVar30 = uVar18 + 0x10 & 0xfffffffffffffff0;
                    pbVar7 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar30);
                    local_f0 = uVar30 | 1;
                    local_e8 = uVar18;
                    local_e0 = pbVar7;
                  }
                  pbVar22 = pbVar7;
                  pbVar32 = pbVar12;
                  if ((uVar18 < 0x40) ||
                     ((pbVar7 < pbVar31 && (pbVar12 < pbVar7 + (long)pbVar26 + ~(ulong)pbVar12)))) {
LAB_00397db0:
                    pbVar12 = pbVar22;
                    do {
                      pbVar7 = pbVar32 + 1;
                      pbVar22 = pbVar12 + 1;
                      *pbVar12 = *pbVar32;
                      pbVar12 = pbVar22;
                      pbVar32 = pbVar7;
                    } while (pbVar31 != pbVar7);
                  }
                  else {
                    uVar11 = uVar18 & 0xffffffffffffffc0;
                    uVar30 = (uVar11 - 0x40 >> 6) + 1;
                    lVar16 = 0;
                    if (uVar11 - 0x40 != 0) {
                      lVar20 = -(uVar30 & 0x7fffffffffffffe);
                      do {
                        pbVar26 = pbVar12 + lVar16 + 0x40;
                        pbVar32 = pbVar7 + lVar16 + 0x70;
                        lVar16 = lVar16 + 0x80;
                        uVar34 = *(undefined8 *)(pbVar26 + -0x40);
                        uVar36 = *(undefined8 *)(pbVar26 + -0x28);
                        uVar35 = *(undefined8 *)(pbVar26 + -0x30);
                        uVar38 = *(undefined8 *)(pbVar26 + -0x18);
                        uVar37 = *(undefined8 *)(pbVar26 + -0x20);
                        uVar40 = *(undefined8 *)(pbVar26 + -8);
                        uVar39 = *(undefined8 *)(pbVar26 + -0x10);
                        *(undefined8 *)(pbVar32 + -0x68) = *(undefined8 *)(pbVar26 + -0x38);
                        *(undefined8 *)(pbVar32 + -0x70) = uVar34;
                        *(undefined8 *)(pbVar32 + -0x58) = uVar36;
                        *(undefined8 *)(pbVar32 + -0x60) = uVar35;
                        lVar20 = lVar20 + 2;
                        *(undefined8 *)(pbVar32 + -0x48) = uVar38;
                        *(undefined8 *)(pbVar32 + -0x50) = uVar37;
                        *(undefined8 *)(pbVar32 + -0x38) = uVar40;
                        *(undefined8 *)(pbVar32 + -0x40) = uVar39;
                        uVar34 = *(undefined8 *)pbVar26;
                        uVar36 = *(undefined8 *)(pbVar26 + 0x18);
                        uVar35 = *(undefined8 *)(pbVar26 + 0x10);
                        uVar38 = *(undefined8 *)(pbVar26 + 0x28);
                        uVar37 = *(undefined8 *)(pbVar26 + 0x20);
                        uVar40 = *(undefined8 *)(pbVar26 + 0x38);
                        uVar39 = *(undefined8 *)(pbVar26 + 0x30);
                        *(undefined8 *)(pbVar32 + -0x28) = *(undefined8 *)(pbVar26 + 8);
                        *(undefined8 *)(pbVar32 + -0x30) = uVar34;
                        *(undefined8 *)(pbVar32 + -0x18) = uVar36;
                        *(undefined8 *)(pbVar32 + -0x20) = uVar35;
                        *(undefined8 *)(pbVar32 + -8) = uVar38;
                        *(undefined8 *)(pbVar32 + -0x10) = uVar37;
                        *(undefined8 *)(pbVar32 + 8) = uVar40;
                        *(undefined8 *)pbVar32 = uVar39;
                      } while (lVar20 != 0);
                    }
                    pbVar32 = pbVar12 + uVar11;
                    pbVar22 = pbVar7 + uVar11;
                    if ((uVar30 & 1) != 0) {
                      pbVar12 = pbVar12 + lVar16;
                      pbVar7 = pbVar7 + lVar16;
                      uVar34 = *(undefined8 *)pbVar12;
                      uVar36 = *(undefined8 *)(pbVar12 + 0x18);
                      uVar35 = *(undefined8 *)(pbVar12 + 0x10);
                      uVar38 = *(undefined8 *)(pbVar12 + 0x28);
                      uVar37 = *(undefined8 *)(pbVar12 + 0x20);
                      uVar40 = *(undefined8 *)(pbVar12 + 0x38);
                      uVar39 = *(undefined8 *)(pbVar12 + 0x30);
                      *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar12 + 8);
                      *(undefined8 *)pbVar7 = uVar34;
                      *(undefined8 *)(pbVar7 + 0x18) = uVar36;
                      *(undefined8 *)(pbVar7 + 0x10) = uVar35;
                      *(undefined8 *)(pbVar7 + 0x28) = uVar38;
                      *(undefined8 *)(pbVar7 + 0x20) = uVar37;
                      *(undefined8 *)(pbVar7 + 0x38) = uVar40;
                      *(undefined8 *)(pbVar7 + 0x30) = uVar39;
                    }
                    if (uVar11 != uVar18) goto LAB_00397db0;
                  }
                  *pbVar22 = 0;
                    /* try { // try from 00397dc8 to 00397dd7 has its CatchHandler @ 00398150 */
                  FUN_003981f0(param_1,&local_f0,&local_c0);
                  if ((local_f0 & 1) != 0) {
                    FUN_0049e790(PTR_LAB_047cba48,local_e0);
                  }
                }
                pcVar10 = pcVar1;
                if ((int)uVar19 < 1) {
LAB_00397f48:
                  pcVar9 = pcVar10;
                  if (*pbVar21 == 0x53) {
                    cVar14 = "0123456789"[(int)local_74 % 10];
                    pcVar9 = pcVar10 + -2;
                    *pcVar9 = "0123456789"[((int)local_74 / 10) % 10];
                    pcVar10[-1] = cVar14;
                  }
                }
                else {
                  if ((int)uVar19 < 0x13) {
                    lVar16 = *param_4;
                    if (0xf < (int)uVar19) goto LAB_00397e34;
                    lVar20 = 0;
                    if (*(long *)(&DAT_03cdc0a8 + (0xf - (long)(int)uVar19) * 8) != 0) {
                      lVar20 = lVar16 / *(long *)(&DAT_03cdc0a8 + (0xf - (long)(int)uVar19) * 8);
                    }
                  }
                  else {
                    uVar19 = 0x12;
                    lVar16 = *param_4;
LAB_00397e34:
                    lVar20 = *(long *)(&USHORT_03cdc030 + (long)(int)uVar19 * 4) * lVar16;
                  }
                  pcVar9 = pcVar1;
                  if (lVar20 < 0) {
                    if (lVar20 == -0x8000000000000000) {
                      local_c4[0] = '8';
                      uVar19 = uVar19 - 2;
                      lVar20 = -0xccccccccccccccc;
                      pcVar9 = local_c4;
                    }
                    else {
                      uVar19 = uVar19 - 1;
                    }
                    lVar20 = -lVar20;
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  lVar16 = 0;
                  uVar25 = uVar19 - 1;
                  do {
                    uVar18 = lVar20 + 9;
                    uVar25 = uVar25 - 1;
                    lVar29 = lVar16 + -1;
                    pcVar9[lVar16 + -1] = "0123456789"[lVar20 % 10];
                    lVar20 = lVar20 / 10;
                    lVar16 = lVar29;
                  } while (0x12 < uVar18);
                  if ((int)(uVar19 + (int)lVar29 + 1) < 2) {
                    pcVar9 = pcVar9 + lVar29;
                  }
                  else {
                    pcVar9 = pcVar9 + (lVar29 - (ulong)uVar25) + -1;
                    memset(pcVar9,0x30,(ulong)((uVar19 - 1) + (int)lVar29) + 1);
                  }
                  if (bVar5) {
                    pcVar9 = pcVar9 + -1;
                    *pcVar9 = '-';
                  }
                  if (*pbVar21 == 0x53) {
                    pcVar10 = pcVar9 + -1;
                    *pcVar10 = '.';
                    goto LAB_00397f48;
                  }
                }
                    /* try { // try from 00397fa0 to 00397fab has its CatchHandler @ 00398158 */
                FUN_0021d540(param_1,pcVar9,(long)pcVar1 - (long)pcVar9);
                pbVar12 = pbVar21 + 1;
                goto LAB_00396294;
              }
            }
          }
        }
      }
      else {
        pbVar31 = pbVar26 + -1;
        uVar18 = (long)pbVar31 - (long)pbVar12;
        if (uVar18 != 0) {
          if (0xffffffffffffffef < uVar18) {
                    /* try { // try from 003980d8 to 003980df has its CatchHandler @ 0039814c */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar18 < 0x17) {
            local_f0 = CONCAT71(local_f0._1_7_,(char)((int)uVar18 << 1));
            pbVar7 = pbVar15;
            if (0x3f < uVar18) goto LAB_00396468;
LAB_00396514:
            do {
              pbVar32 = pbVar12 + 1;
              pbVar21 = pbVar7 + 1;
              *pbVar7 = *pbVar12;
              pbVar7 = pbVar21;
              pbVar12 = pbVar32;
            } while (pbVar31 != pbVar32);
          }
          else {
            uVar30 = uVar18 + 0x10 & 0xfffffffffffffff0;
            pbVar7 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar30);
            local_f0 = uVar30 | 1;
            local_e8 = uVar18;
            local_e0 = pbVar7;
            if (uVar18 < 0x40) goto LAB_00396514;
LAB_00396468:
            if (pbVar7 < pbVar31) {
              if (pbVar12 < pbVar7 + (long)pbVar26 + ~(ulong)pbVar12) goto LAB_00396514;
            }
            uVar11 = uVar18 & 0xffffffffffffffc0;
            uVar30 = (uVar11 - 0x40 >> 6) + 1;
            lVar16 = 0;
            if (uVar11 - 0x40 != 0) {
              lVar20 = -(uVar30 & 0x7fffffffffffffe);
              do {
                pbVar21 = pbVar12 + lVar16 + 0x40;
                pbVar32 = pbVar7 + lVar16 + 0x70;
                lVar16 = lVar16 + 0x80;
                uVar34 = *(undefined8 *)(pbVar21 + -0x40);
                uVar36 = *(undefined8 *)(pbVar21 + -0x28);
                uVar35 = *(undefined8 *)(pbVar21 + -0x30);
                uVar38 = *(undefined8 *)(pbVar21 + -0x18);
                uVar37 = *(undefined8 *)(pbVar21 + -0x20);
                uVar40 = *(undefined8 *)(pbVar21 + -8);
                uVar39 = *(undefined8 *)(pbVar21 + -0x10);
                *(undefined8 *)(pbVar32 + -0x68) = *(undefined8 *)(pbVar21 + -0x38);
                *(undefined8 *)(pbVar32 + -0x70) = uVar34;
                *(undefined8 *)(pbVar32 + -0x58) = uVar36;
                *(undefined8 *)(pbVar32 + -0x60) = uVar35;
                lVar20 = lVar20 + 2;
                *(undefined8 *)(pbVar32 + -0x48) = uVar38;
                *(undefined8 *)(pbVar32 + -0x50) = uVar37;
                *(undefined8 *)(pbVar32 + -0x38) = uVar40;
                *(undefined8 *)(pbVar32 + -0x40) = uVar39;
                uVar34 = *(undefined8 *)pbVar21;
                uVar36 = *(undefined8 *)(pbVar21 + 0x18);
                uVar35 = *(undefined8 *)(pbVar21 + 0x10);
                uVar38 = *(undefined8 *)(pbVar21 + 0x28);
                uVar37 = *(undefined8 *)(pbVar21 + 0x20);
                uVar40 = *(undefined8 *)(pbVar21 + 0x38);
                uVar39 = *(undefined8 *)(pbVar21 + 0x30);
                *(undefined8 *)(pbVar32 + -0x28) = *(undefined8 *)(pbVar21 + 8);
                *(undefined8 *)(pbVar32 + -0x30) = uVar34;
                *(undefined8 *)(pbVar32 + -0x18) = uVar36;
                *(undefined8 *)(pbVar32 + -0x20) = uVar35;
                *(undefined8 *)(pbVar32 + -8) = uVar38;
                *(undefined8 *)(pbVar32 + -0x10) = uVar37;
                *(undefined8 *)(pbVar32 + 8) = uVar40;
                *(undefined8 *)pbVar32 = uVar39;
              } while (lVar20 != 0);
            }
            pbVar21 = pbVar7 + uVar11;
            if ((uVar30 & 1) != 0) {
              pbVar32 = pbVar12 + lVar16;
              pbVar7 = pbVar7 + lVar16;
              uVar34 = *(undefined8 *)pbVar32;
              uVar36 = *(undefined8 *)(pbVar32 + 0x18);
              uVar35 = *(undefined8 *)(pbVar32 + 0x10);
              uVar38 = *(undefined8 *)(pbVar32 + 0x28);
              uVar37 = *(undefined8 *)(pbVar32 + 0x20);
              uVar40 = *(undefined8 *)(pbVar32 + 0x38);
              uVar39 = *(undefined8 *)(pbVar32 + 0x30);
              *(undefined8 *)(pbVar7 + 8) = *(undefined8 *)(pbVar32 + 8);
              *(undefined8 *)pbVar7 = uVar34;
              *(undefined8 *)(pbVar7 + 0x18) = uVar36;
              *(undefined8 *)(pbVar7 + 0x10) = uVar35;
              *(undefined8 *)(pbVar7 + 0x28) = uVar38;
              *(undefined8 *)(pbVar7 + 0x20) = uVar37;
              *(undefined8 *)(pbVar7 + 0x38) = uVar40;
              *(undefined8 *)(pbVar7 + 0x30) = uVar39;
            }
            pbVar7 = pbVar21;
            pbVar12 = pbVar12 + uVar11;
            if (uVar11 != uVar18) goto LAB_00396514;
          }
          *pbVar21 = 0;
                    /* try { // try from 0039652c to 0039653b has its CatchHandler @ 00398184 */
          FUN_003981f0(param_1,&local_f0,&local_c0);
          if ((local_f0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_e0);
          }
          bVar3 = *pbVar26;
        }
        pcVar10 = local_68;
        switch(bVar3) {
        case 0x25:
          FUN_002cdcec(param_1,0x25);
          break;
        case 0x48:
          local_c4[0] = "0123456789"[(int)local_76 % 10];
          local_c5 = "0123456789"[((int)local_76 / 10) % 10];
          FUN_0021d540(param_1,&local_c5,2);
          break;
        case 0x4d:
          local_c4[0] = "0123456789"[(int)local_75 % 10];
          local_c5 = "0123456789"[((int)local_75 / 10) % 10];
          FUN_0021d540(param_1,&local_c5,2);
          break;
        case 0x53:
          local_c4[0] = "0123456789"[(int)local_74 % 10];
          local_c5 = "0123456789"[((int)local_74 / 10) % 10];
          FUN_0021d540(param_1,&local_c5,2);
          break;
        case 0x59:
          pcVar10 = pcVar1;
          if ((long)local_80 < 0) {
            iVar17 = -1;
            uVar18 = local_80;
            if (local_80 == 0x8000000000000000) {
              local_c4[0] = '8';
              iVar17 = -2;
              uVar18 = 0xf333333333333334;
              pcVar10 = local_c4;
            }
            uVar18 = -uVar18;
            bVar5 = true;
          }
          else {
            iVar17 = 0;
            bVar5 = false;
            uVar18 = local_80;
          }
          uVar25 = iVar17 - 1;
          lVar16 = 0;
          do {
            uVar30 = uVar18 + 9;
            uVar25 = uVar25 - 1;
            lVar20 = lVar16 + -1;
            pcVar10[lVar16 + -1] = "0123456789"[(long)uVar18 % 10];
            uVar18 = (long)uVar18 / 10;
            lVar16 = lVar20;
          } while (0x12 < uVar30);
          if (iVar17 + (int)lVar20 + 1 < 2) {
            pcVar10 = pcVar10 + lVar20;
          }
          else {
            pcVar10 = pcVar10 + (lVar20 - (ulong)uVar25) + -1;
            memset(pcVar10,0x30,(ulong)((iVar17 + (int)lVar20) - 1) + 1);
          }
          if (bVar5) {
            pcVar10 = pcVar10 + -1;
            *pcVar10 = '-';
          }
                    /* try { // try from 00396a78 to 00396a83 has its CatchHandler @ 003981bc */
          FUN_0021d540(param_1,pcVar10,(long)pcVar1 - (long)pcVar10);
          break;
        case 0x5a:
          sVar8 = strlen(local_68);
          FUN_0021d540(param_1,pcVar10,sVar8);
          break;
        case 100:
        case 0x65:
          local_c4[0] = "0123456789"[(int)local_77 % 10];
          iVar17 = ((int)local_77 / 10) % 10;
          local_c5 = ' ';
          if (*pbVar26 != 0x65 || iVar17 != 0) {
            local_c5 = "0123456789"[iVar17];
          }
                    /* try { // try from 003965d8 to 00396883 has its CatchHandler @ 003981bc */
          FUN_0021d540(param_1,&local_c5,2);
          break;
        case 0x6d:
          local_c4[0] = "0123456789"[(int)local_78 % 10];
          local_c5 = "0123456789"[((int)local_78 / 10) % 10];
                    /* try { // try from 00396280 to 0039628f has its CatchHandler @ 003981bc */
          FUN_0021d540(param_1,&local_c5,2);
          break;
        case 0x73:
          lVar16 = std::chrono::system_clock::from_time_t(0);
          lVar16 = SUB168(SEXT816(lVar16) * SEXT816(-0x431bde82d7b634db),8);
          lVar16 = ((lVar16 >> 0x12) - (lVar16 >> 0x3f)) + *param_3;
          pcVar10 = pcVar1;
          if (lVar16 < 0) {
            iVar17 = -1;
            if (lVar16 == -0x8000000000000000) {
              local_c4[0] = '8';
              iVar17 = -2;
              lVar16 = -0xccccccccccccccc;
              pcVar10 = local_c4;
            }
            lVar16 = -lVar16;
            bVar5 = true;
          }
          else {
            iVar17 = 0;
            bVar5 = false;
          }
          uVar25 = iVar17 - 1;
          lVar20 = 0;
          do {
            uVar18 = lVar16 + 9;
            uVar25 = uVar25 - 1;
            lVar29 = lVar20 + -1;
            pcVar10[lVar20 + -1] = "0123456789"[lVar16 % 10];
            lVar16 = lVar16 / 10;
            lVar20 = lVar29;
          } while (0x12 < uVar18);
          if (iVar17 + (int)lVar29 + 1 < 2) {
            pcVar10 = pcVar10 + lVar29;
          }
          else {
            pcVar10 = pcVar10 + (lVar29 - (ulong)uVar25) + -1;
            memset(pcVar10,0x30,(ulong)((iVar17 + (int)lVar29) - 1) + 1);
          }
          if (bVar5) {
            pcVar10 = pcVar10 + -1;
            *pcVar10 = '-';
          }
                    /* try { // try from 00396b58 to 00396b63 has its CatchHandler @ 003981bc */
          FUN_0021d540(param_1,pcVar10,(long)pcVar1 - (long)pcVar10);
          break;
        case 0x7a:
          uVar25 = -local_70;
          if (-1 < (int)local_70) {
            uVar25 = local_70;
          }
          uVar19 = uVar25 / 0x3c + (uVar25 / 0xe10) * -0x3c;
          local_c6 = "0123456789"[uVar25 / 0xe10 + (uVar25 / 36000) * -10];
          local_c7 = "0123456789"[uVar25 / 36000 + (uVar25 / 360000) * -10];
          uVar24 = (uVar19 & 0xff) / 10;
          local_c5 = "0123456789"[uVar24 + ((uVar19 & 0xff) / 100) * -10];
          local_c4[0] = "0123456789"[(ulong)(uVar19 + uVar24 * -10) & 0xff];
          cVar14 = '-';
          if (-1 < (int)local_70) {
            cVar14 = '+';
          }
          local_c8 = '+';
          if (uVar19 != 0 || 0xe0f < uVar25) {
            local_c8 = cVar14;
          }
          FUN_0021d540(param_1,&local_c8,5);
        }
        pbVar12 = pbVar26 + 1;
LAB_00396294:
        pbVar31 = pbVar12;
      }
LAB_00396298:
    } while (pbVar31 != pbVar2);
  }
  uVar18 = (long)pbVar2 - (long)pbVar12;
  if (uVar18 == 0) {
    return;
  }
  if (0xffffffffffffffef < uVar18) {
                    /* try { // try from 00398120 to 00398127 has its CatchHandler @ 00398128 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar18 < 0x17) {
    local_f0 = CONCAT71(local_f0._1_7_,(char)((int)uVar18 << 1));
    pbVar31 = (byte *)((ulong)&local_f0 | 1);
  }
  else {
    uVar30 = uVar18 + 0x10 & 0xfffffffffffffff0;
    pbVar31 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar30);
    local_f0 = uVar30 | 1;
    local_e8 = uVar18;
    local_e0 = pbVar31;
  }
  pbVar15 = pbVar13 + (uVar28 - (long)pbVar12);
  if ((pbVar15 < &DAT_00000040) ||
     ((pbVar31 < pbVar2 && (pbVar12 < pbVar13 + (long)(pbVar31 + (uVar28 - (long)pbVar12)))))) {
    pbVar13 = pbVar12;
    pbVar7 = pbVar31;
  }
  else {
    pbVar21 = (byte *)((ulong)pbVar15 & 0xffffffffffffffc0);
    pbVar13 = pbVar12 + (long)pbVar21;
    pbVar7 = pbVar31 + (long)pbVar21;
    pbVar31 = pbVar31 + 0x20;
    pbVar26 = pbVar12 + 0x20;
    pbVar12 = pbVar21;
    do {
      uVar34 = *(undefined8 *)(pbVar26 + -0x20);
      uVar36 = *(undefined8 *)(pbVar26 + -8);
      uVar35 = *(undefined8 *)(pbVar26 + -0x10);
      pbVar12 = pbVar12 + -0x40;
      uVar38 = *(undefined8 *)(pbVar26 + 8);
      uVar37 = *(undefined8 *)pbVar26;
      uVar40 = *(undefined8 *)(pbVar26 + 0x18);
      uVar39 = *(undefined8 *)(pbVar26 + 0x10);
      *(undefined8 *)(pbVar31 + -0x18) = *(undefined8 *)(pbVar26 + -0x18);
      *(undefined8 *)(pbVar31 + -0x20) = uVar34;
      *(undefined8 *)(pbVar31 + -8) = uVar36;
      *(undefined8 *)(pbVar31 + -0x10) = uVar35;
      *(undefined8 *)(pbVar31 + 8) = uVar38;
      *(undefined8 *)pbVar31 = uVar37;
      *(undefined8 *)(pbVar31 + 0x18) = uVar40;
      *(undefined8 *)(pbVar31 + 0x10) = uVar39;
      pbVar31 = pbVar31 + 0x40;
      pbVar26 = pbVar26 + 0x40;
    } while (pbVar12 != (byte *)0x0);
    if (pbVar21 == pbVar15) goto LAB_00398050;
  }
  do {
    pbVar12 = pbVar13 + 1;
    pbVar31 = pbVar7 + 1;
    *pbVar7 = *pbVar13;
    pbVar13 = pbVar12;
    pbVar7 = pbVar31;
  } while (pbVar2 != pbVar12);
LAB_00398050:
  *pbVar7 = 0;
                    /* try { // try from 00398054 to 00398063 has its CatchHandler @ 00398178 */
  FUN_003981f0(param_1,&local_f0,&local_c0);
  if ((local_f0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_e0);
  }
  return;
}


