/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0172de20; name: FUN_0172de20
 */


undefined8 FUN_0172de20(long param_1,long *param_2)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  code *pcVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  long *plVar27;
  undefined1 auVar28 [16];
  undefined *local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *puStack_130;
  undefined1 local_128;
  undefined **local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100 [4];
  uint local_fc;
  char local_f8 [8];
  undefined **local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined1 local_c0;
  undefined *local_b8;
  undefined *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  long lStack_90;
  long local_88;
  undefined **local_80;
  undefined *local_78;
  uint local_70;
  uint uStack_6c;
  
  pMVar1 = (MutexType *)(param_1 + 0x80);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    plVar27 = param_2 + 4;
    plVar9 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
    plVar10 = (long *)(**(code **)(*plVar9 + 0x28))();
    uVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,1,plVar9[1]);
    if ((uVar11 & 1) != 0) {
      plVar9 = param_2 + 7;
      pcVar18 = *(code **)(PTR_DAT_047dcc70 + 0x20);
      puVar2 = PTR_DAT_047dcc78 + 0x10;
      ppuVar3 = (undefined **)(PTR_DAT_047dcc88 + 0x10);
      ppuVar4 = (undefined **)(PTR_DAT_047dcc80 + 0x10);
      do {
        plVar10 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
        plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
        uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,4,plVar10[1]);
        if ((uVar11 & 1) == 0) {
          uVar8 = 1;
        }
        else {
          uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_f0,4,0);
          uVar8 = uVar8 ^ 1;
        }
        lVar13 = (**(code **)(*param_2 + 0x10))(param_2);
        ppuVar23 = local_f0;
        *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 4;
        uVar19 = (uint)local_f0;
        uVar11 = (ulong)local_f0 & 0xffffffff;
        local_100[0] = 0;
        if ((uVar8 & 1) != 0) goto LAB_0172f2d8;
        local_100[0] = 1;
        local_fc = (uint)local_f0;
        local_f0 = &PTR_LAB_045a7998;
        local_148 = (long)ppuVar23 << 0x20;
        puVar24 = PTR_DAT_047dcc70 + 0x10;
        local_150 = (undefined *)0x0;
        uVar8 = 0;
        local_158 = puVar24;
        if (uVar19 == 0) {
LAB_0172e05c:
        }
        else {
          uVar11 = uVar11 - ((ulong)(uVar19 >> 1) & 0x5555555555555555);
          uVar19 = uVar19 ^ uVar19 << 2;
          uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
          uVar19 = uVar19 ^ uVar19 >> 0xf;
          uVar8 = uVar19 ^ uVar19 << 0xd;
          local_148 = (ulong)uVar8 << 0x20;
          uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar11 == 1) goto LAB_0172e05c;
          uVar8 = uVar8 ^ uVar8 << 2;
          uVar8 = uVar8 ^ uVar8 >> 0xf;
          uVar8 = uVar8 ^ uVar8 << 0xd;
          local_148 = (ulong)uVar8 << 0x20;
          if (uVar11 == 2) goto LAB_0172e05c;
          uVar8 = uVar8 ^ uVar8 << 2;
          uVar8 = uVar8 ^ uVar8 >> 0xf;
          uVar8 = uVar8 ^ uVar8 << 0xd;
          local_148 = (ulong)uVar8 << 0x20;
          if (uVar11 == 3) goto LAB_0172e05c;
          (*pcVar18)(&local_158);
          for (lVar13 = uVar11 - 4; lVar13 != 0; lVar13 = lVar13 + -1) {
            (**(code **)(local_158 + 0x10))(&local_158);
          }
          local_148._4_4_ = (uint)((ulong)local_148 >> 0x20);
          uVar8 = local_148._4_4_;
        }
        local_148 = CONCAT44(local_148._4_4_,uVar8);
        local_e0 = param_2[2];
        local_c0 = (undefined1)param_2[6];
        local_d0 = (undefined *)*plVar27;
        puStack_c8 = (undefined *)param_2[5];
        local_b8 = (undefined *)*plVar9;
        local_b0 = (undefined *)param_2[8];
        local_a8 = param_2[9];
        local_e8 = &PTR_LAB_045a79c8;
        lStack_90 = local_148;
        local_d8 = puVar2;
        local_a0 = puVar24;
        local_98 = local_150;
        local_88 = local_e0;
        uVar14 = FUN_015d1064(&local_f0);
        uVar8 = (uint)uVar14;
        iVar17 = (int)((ulong)uVar14 >> 0x20);
        if ((uVar8 & 0xff) == 5) {
          uVar20 = (uint)((ulong)uVar14 >> 8);
          uVar19 = uVar20 - 8;
          if (((uVar20 & 0xff) != 3) && (9 < (uVar19 & 0xff))) goto LAB_0172f2d8;
          if ((uVar8 >> 8 & 0xff) == 3) {
            if (((uVar8 >> 0x10 & 0xff) != 0) && (iVar17 != 0)) goto LAB_0172f2d8;
            auVar28 = FUN_021e411c(&local_f0);
          }
          else if (((uVar8 >> 8 & 0xff) == 8) && ((uVar19 & 0xff) < 10)) {
            if (((uVar8 >> 0x10 & 0xff) != 0) && (iVar17 != 0)) goto LAB_0172f2d8;
            auVar28 = FUN_01877e00(&local_f0);
          }
          else if (((uVar8 >> 8 & 0xff) == 9) && ((uVar19 & 0xff) < 10)) {
            if (((uVar8 >> 0x10 & 0xff) != 0) && (iVar17 != 0)) goto LAB_0172f2d8;
            plVar10 = (long *)(*(code *)local_f0[3])(&local_f0);
            plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
            uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,1,plVar10[1]);
            if ((uVar11 & 1) == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_158,1,0);
              uVar11 = uVar11 & 0xffffffff;
            }
            lVar13 = (*(code *)local_f0[2])(&local_f0);
            *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
            if (((uVar11 & 1) == 0) || ((char)local_158 != '\x05')) goto LAB_0172f2d8;
            plVar10 = (long *)(*(code *)local_f0[3])(&local_f0);
            plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
            uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,4,plVar10[1]);
            if ((uVar11 & 1) == 0) {
              uVar8 = 1;
            }
            else {
              uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_158,4,0);
              uVar8 = uVar8 ^ 1;
            }
            lVar13 = (*(code *)local_f0[2])(&local_f0);
            *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 4;
            if ((uVar8 & 1) != 0) goto LAB_0172f2d8;
            uVar21 = (ulong)local_158 & 0xffffffff;
            plVar10 = (long *)(*(code *)local_f0[3])(&local_f0);
            plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
            uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,1,plVar10[1]);
            if ((uVar11 & 1) == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_158,1,0);
            }
            lVar13 = (*(code *)local_f0[2])(&local_f0);
            *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
            uVar8 = uVar8 & (char)local_158 == '\t';
            lVar13 = uVar21 << 1;
LAB_0172ef3c:
            auVar28._4_4_ = 0;
            auVar28._0_4_ = uVar8;
            auVar28._8_8_ = lVar13 + 6;
          }
          else if (((uVar8 >> 8 & 0xff) == 10) && ((uVar19 & 0xff) < 10)) {
            if (((uVar8 >> 0x10 & 0xff) != 0) && (iVar17 != 0)) goto LAB_0172f2d8;
            auVar28 = FUN_021e43e4(&local_f0);
          }
          else if (((uVar8 >> 8 & 0xff) == 0xb) && ((uVar19 & 0xff) < 10)) {
            if (((uVar8 >> 0x10 & 0xff) != 0) && (iVar17 != 0)) goto LAB_0172f2d8;
            auVar28 = FUN_021e45f4(&local_f0);
          }
          else if (((uVar8 >> 8 & 0xff) == 0xc) && ((uVar19 & 0xff) < 10)) {
            if (((uVar8 >> 0x10 & 0xff) != 0) && (iVar17 != 0)) goto LAB_0172f2d8;
            plVar10 = (long *)(*(code *)local_f0[3])(&local_f0);
            plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
            uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,1,plVar10[1]);
            if ((uVar11 & 1) == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_158,1,0);
              uVar11 = uVar11 & 0xffffffff;
            }
            lVar13 = (*(code *)local_f0[2])(&local_f0);
            *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
            if (((uVar11 & 1) == 0) || ((char)local_158 != '\x05')) goto LAB_0172f2d8;
            plVar10 = (long *)(*(code *)local_f0[3])(&local_f0);
            plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
            uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,4,plVar10[1]);
            if ((uVar11 & 1) == 0) {
              uVar8 = 1;
            }
            else {
              uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_158,4,0);
              uVar8 = uVar8 ^ 1;
            }
            lVar13 = (*(code *)local_f0[2])(&local_f0);
            *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 4;
            if ((uVar8 & 1) != 0) goto LAB_0172f2d8;
            uVar21 = (ulong)local_158 & 0xffffffff;
            plVar10 = (long *)(*(code *)local_f0[3])(&local_f0);
            plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
            uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,1,plVar10[1]);
            if ((uVar11 & 1) == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_158,1,0);
            }
            lVar13 = (*(code *)local_f0[2])(&local_f0);
            *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
            auVar28._4_4_ = 0;
            auVar28._0_4_ = uVar8 & (char)local_158 == '\f';
            auVar28._8_8_ = uVar21 + 6;
          }
          else if (((uVar8 >> 8 & 0xff) == 0xd) && ((uVar19 & 0xff) < 10)) {
            if (((uVar8 >> 0x10 & 0xff) != 0) && (iVar17 != 0)) goto LAB_0172f2d8;
            auVar28 = FUN_021e4804(&local_f0);
          }
          else if (((uVar8 >> 8 & 0xff) == 0xe) && ((uVar19 & 0xff) < 10)) {
            if (((uVar8 >> 0x10 & 0xff) != 0) && (iVar17 != 0)) goto LAB_0172f2d8;
            auVar28 = FUN_021e4a14(&local_f0);
          }
          else if (((uVar8 >> 8 & 0xff) == 0xf) && ((uVar19 & 0xff) < 10)) {
            if (((uVar8 >> 0x10 & 0xff) != 0) && (iVar17 != 0)) goto LAB_0172f2d8;
            auVar28 = FUN_021e4c24(&local_f0);
          }
          else {
            if (((uVar8 >> 8 & 0xff) == 0x10) && ((uVar19 & 0xff) < 10)) {
              if (((uVar8 >> 0x10 & 0xff) == 0) || (iVar17 == 0)) {
                plVar10 = (long *)(*(code *)local_f0[3])(&local_f0);
                plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
                uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,1,plVar10[1]);
                if ((uVar11 & 1) == 0) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_158,1,0);
                  uVar11 = uVar11 & 0xffffffff;
                }
                lVar13 = (*(code *)local_f0[2])(&local_f0);
                *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
                if (((uVar11 & 1) != 0) && ((char)local_158 == '\x05')) {
                  plVar10 = (long *)(*(code *)local_f0[3])(&local_f0);
                  plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
                  uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,4,plVar10[1]);
                  if ((uVar11 & 1) == 0) {
                    uVar8 = 1;
                  }
                  else {
                    uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_158,4,0);
                    uVar8 = uVar8 ^ 1;
                  }
                  lVar13 = (*(code *)local_f0[2])(&local_f0);
                  *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 4;
                  if ((uVar8 & 1) == 0) {
                    uVar21 = (ulong)local_158 & 0xffffffff;
                    plVar10 = (long *)(*(code *)local_f0[3])(&local_f0);
                    plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
                    uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,1,plVar10[1]);
                    if ((uVar11 & 1) == 0) {
                      uVar8 = 0;
                    }
                    else {
                      uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_158,1,0);
                    }
                    lVar13 = (*(code *)local_f0[2])(&local_f0);
                    *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
                    uVar8 = uVar8 & (char)local_158 == '\x10';
                    lVar13 = uVar21 << 2;
                    goto LAB_0172ef3c;
                  }
                }
              }
              goto LAB_0172f2d8;
            }
            if ((((uVar8 >> 8 & 0xff) != 0x11) || (9 < (uVar19 & 0xff))) ||
               (((uVar8 >> 0x10 & 0xff) != 0 && (iVar17 != 0)))) goto LAB_0172f2d8;
            auVar28 = FUN_021e4e34(&local_f0);
          }
LAB_0172e46c:
          puVar24 = auVar28._8_8_;
          if ((auVar28._0_8_ & 0xff) == 0) goto LAB_0172f2d8;
        }
        else {
          uVar19 = uVar8 - 8 & 0xff;
          if (uVar19 < 10) {
            if (uVar19 < 9) {
              puVar24 = *(undefined **)(&DAT_03d62758 + (long)(char)(uVar8 - 8) * 8);
            }
            else {
              puVar24 = (undefined *)0x9;
            }
          }
          else {
            if (1 < (uVar8 - 3 & 0xff)) goto LAB_0172f2d8;
            if ((uVar8 & 0xff) != 3) {
              if (((uVar8 >> 0x10 & 0xff) == 0) || (iVar17 == 0)) {
                plVar10 = (long *)(*(code *)local_f0[3])(&local_f0);
                plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
                uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,1,plVar10[1]);
                if ((uVar11 & 1) == 0) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_158,1,0);
                  uVar11 = uVar11 & 0xffffffff;
                }
                lVar13 = (*(code *)local_f0[2])(&local_f0);
                *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
                if (((uVar11 & 1) != 0) && ((char)local_158 == '\x04')) {
                  plVar10 = (long *)(*(code *)local_f0[3])(&local_f0);
                  plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
                  uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,4,plVar10[1]);
                  if ((uVar11 & 1) == 0) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,&local_158,4,0);
                    uVar11 = uVar11 & 1;
                  }
                  lVar13 = (*(code *)local_f0[2])(&local_f0);
                  *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 4;
                  auVar28._8_8_ = ((ulong)local_158 & 0xffffffff) + 5;
                  auVar28._0_8_ = uVar11;
                  goto LAB_0172e46c;
                }
              }
              goto LAB_0172f2d8;
            }
            puVar24 = (undefined *)0x1;
          }
        }
        plVar10 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
        plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
        uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,puVar24,plVar10[1]);
        if ((uVar11 & 1) == 0) goto LAB_0172f2d8;
        ppuVar23 = *(undefined ***)(param_1 + 8);
        ppuVar6 = *(undefined ***)(param_1 + 0x10);
        if ((ppuVar23 != ppuVar6) && (*(uint *)ppuVar23 != local_fc)) {
          do {
            ppuVar23 = ppuVar23 + 6;
            if (ppuVar6 == ppuVar23) {
              ppuVar23 = ppuVar6;
              goto LAB_0172e4ec;
            }
          } while (*(uint *)ppuVar23 != local_fc);
        }
LAB_0172e4ec:
        if (ppuVar6 == ppuVar23) {
          FUN_015d0cb8(&local_f0,param_1,(ulong)local_100 | 4,puVar24);
          ppuVar23 = local_f0;
          if (local_f0 == (undefined **)0x0) {
            lVar13 = *(long *)(param_1 + 0x10);
            if (*(char *)(lVar13 + -0x10) != '\0') {
              *(undefined1 *)(lVar13 + -0x10) = 0;
            }
            uVar14 = 0;
            *(long *)(param_1 + 0x10) = lVar13 + -0x30;
            goto LAB_0172f2dc;
          }
          puVar22 = local_f0[1];
          plVar10 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
          if (puVar22 != (undefined *)0x0) {
            plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
            uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,puVar24,plVar10[1]);
            if ((uVar11 & 1) != 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10,puVar22,puVar24,0);
            }
          }
          lVar13 = (**(code **)(*param_2 + 0x10))(param_2);
          *(undefined **)(lVar13 + 8) = puVar24 + *(long *)(lVar13 + 8);
          puVar25 = ppuVar23[1];
          puVar22 = ppuVar23[3];
          local_148._4_4_ = *(uint *)ppuVar23;
          puVar24 = PTR_DAT_047dcc70 + 0x10;
          local_150 = (undefined *)0x0;
          local_158 = puVar24;
          local_f0 = ppuVar3;
          if (local_148._4_4_ != 0) {
            uVar11 = (ulong)local_148._4_4_ - ((ulong)(local_148._4_4_ >> 1) & 0x5555555555555555);
            local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ << 2;
            uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
            local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ >> 0xf;
            local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ << 0xd;
            uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if ((uVar11 != 1) &&
               (local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ << 2,
               local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ >> 0xf,
               local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ << 0xd, uVar11 != 2)) {
              local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ << 2;
              local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ >> 0xf;
              local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ << 0xd;
              local_148._0_4_ = 0;
              if (uVar11 != 3) {
                (*pcVar18)(&local_158);
                for (lVar13 = uVar11 - 4; lVar13 != 0; lVar13 = lVar13 + -1) {
                  (**(code **)(local_158 + 0x10))(&local_158);
                }
              }
            }
          }
          local_148 = CONCAT44(local_148._4_4_,local_148._4_4_);
          local_d8 = PTR_DAT_047dcc78 + 0x10;
          local_e0 = 0;
          local_c0 = 0;
          local_a8 = local_148;
          local_a0 = (undefined *)0x0;
          local_e8 = ppuVar4;
          local_d0 = puVar25;
          puStack_c8 = puVar22;
          local_b8 = puVar24;
          local_b0 = local_150;
          uVar14 = FUN_015d1064(&local_f0);
          if (*(char *)(ppuVar23 + 4) == '\0') {
            *(undefined8 *)((long)ppuVar23 + 0x24) = uVar14;
            *(undefined1 *)(ppuVar23 + 4) = 1;
          }
          else {
            *(undefined8 *)((long)ppuVar23 + 0x24) = uVar14;
          }
        }
        else {
          puVar25 = ppuVar23[1];
          puVar22 = ppuVar23[3];
          local_158 = PTR_DAT_047dcc88 + 0x10;
          local_e0._4_4_ = *(uint *)ppuVar23;
          ppuVar6 = (undefined **)(PTR_DAT_047dcc70 + 0x10);
          local_e8 = (undefined **)0x0;
          if (local_e0._4_4_ == 0) {
LAB_0172e748:
            local_f0 = ppuVar6;
          }
          else {
            uVar11 = (ulong)local_e0._4_4_ - ((ulong)(local_e0._4_4_ >> 1) & 0x5555555555555555);
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ << 2;
            uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ >> 0xf;
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ << 0xd;
            uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if ((uVar11 == 1) ||
               (local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ << 2,
               local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ >> 0xf,
               local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ << 0xd, uVar11 == 2))
            goto LAB_0172e748;
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ << 2;
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ >> 0xf;
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ << 0xd;
            local_e0._0_4_ = 0;
            if (uVar11 == 3) goto LAB_0172e748;
            local_f0 = ppuVar6;
            (*pcVar18)(&local_f0);
            for (lVar13 = uVar11 - 4; lVar13 != 0; lVar13 = lVar13 + -1) {
              (*(code *)local_f0[2])(&local_f0);
            }
          }
          local_e0 = CONCAT44(local_e0._4_4_,local_e0._4_4_);
          puVar26 = PTR_DAT_047dcc78 + 0x10;
          local_128 = 0;
          local_110 = local_e0;
          uStack_108 = 0;
          local_150 = PTR_DAT_047dcc80 + 0x10;
          local_148 = 0;
          local_140 = puVar26;
          local_138 = puVar25;
          puStack_130 = puVar22;
          local_120 = ppuVar6;
          uStack_118 = local_e8;
          uVar14 = FUN_015d1064(&local_158);
          local_f0 = &PTR_LAB_045a7998;
          local_70 = 0;
          uStack_6c = local_fc;
          local_78 = (undefined *)0x0;
          local_80 = ppuVar6;
          if (local_fc == 0) {
            uVar8 = 0;
          }
          else {
            uVar11 = (ulong)local_fc - ((ulong)(local_fc >> 1) & 0x5555555555555555);
            uVar8 = local_fc ^ local_fc << 2;
            uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
            uVar8 = uVar8 ^ uVar8 >> 0xf;
            uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            uVar8 = uVar8 ^ uVar8 << 0xd;
            uStack_6c = uVar8;
            if (uVar11 != 1) {
              uVar8 = uVar8 ^ uVar8 << 2;
              uVar8 = uVar8 ^ uVar8 >> 0xf;
              uVar8 = uVar8 ^ uVar8 << 0xd;
              uStack_6c = uVar8;
              if (uVar11 != 2) {
                FUN_00f83090(&local_80);
                uVar8 = uStack_6c;
                for (lVar13 = uVar11 - 3; uStack_6c = uVar8, lVar13 != 0; lVar13 = lVar13 + -1) {
                  (*(code *)local_80[2])(&local_80);
                  uVar8 = uStack_6c;
                }
              }
            }
          }
          local_e0 = param_2[2];
          local_c0 = (undefined1)param_2[6];
          local_d0 = (undefined *)*plVar27;
          puStack_c8 = (undefined *)param_2[5];
          local_b8 = (undefined *)*plVar9;
          local_b0 = (undefined *)param_2[8];
          local_a8 = param_2[9];
          lStack_90 = CONCAT44(uStack_6c,uVar8);
          local_a0 = PTR_DAT_047dcc70 + 0x10;
          local_e8 = &PTR_LAB_045a79c8;
          local_d8 = puVar26;
          local_98 = local_78;
          local_88 = local_e0;
          local_70 = uVar8;
          uVar15 = FUN_015d1064(&local_f0);
          uVar8 = (uint)uVar14;
          if ((uVar8 & 0xff) == ((uint)uVar15 & 0xff)) {
            if ((uVar8 & 0xff) == 5) {
              uVar8 = (uint)((ulong)uVar14 >> 8);
              if (((uVar8 & 0xff) == 3) || ((uVar8 - 8 & 0xff) < 10)) {
                uVar19 = (uint)((ulong)uVar15 >> 8);
                uVar20 = uVar19 & 0xff;
                if ((uVar20 == (uVar8 & 0xff)) && (uVar20 == 3 || (uVar19 - 8 & 0xff) < 10))
                goto LAB_0172ed90;
              }
              goto LAB_0172e8ac;
            }
            if ((9 < (uVar8 - 8 & 0xff)) && (1 < (uVar8 - 3 & 0xff))) goto LAB_0172e8ac;
            if ((uVar8 & 0xff) == 4) {
LAB_0172ed90:
              if (((((uint)((ulong)uVar15 >> 0x10) | (uint)((ulong)uVar14 >> 0x10)) & 0xff) != 0) &&
                 ((int)((ulong)uVar14 >> 0x20) != (int)((ulong)uVar15 >> 0x20))) goto LAB_0172e8ac;
            }
          }
          else {
LAB_0172e8ac:
            plVar10 = *(long **)(param_1 + 0x60);
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x58))(plVar10,(ulong)local_100 | 4);
            }
            puVar26 = ppuVar23[1];
            puVar25 = ppuVar23[3];
            local_f0 = (undefined **)(PTR_DAT_047dcc88 + 0x10);
            local_148._4_4_ = *(uint *)ppuVar23;
            puVar22 = PTR_DAT_047dcc70 + 0x10;
            local_150 = (undefined *)0x0;
            local_158 = puVar22;
            if (local_148._4_4_ != 0) {
              uVar11 = (ulong)local_148._4_4_ - ((ulong)(local_148._4_4_ >> 1) & 0x5555555555555555)
              ;
              local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ << 2;
              uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
              local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ >> 0xf;
              local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ << 0xd;
              uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if ((uVar11 != 1) &&
                 (local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ << 2,
                 local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ >> 0xf,
                 local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ << 0xd, uVar11 != 2)) {
                local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ << 2;
                local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ >> 0xf;
                local_148._4_4_ = local_148._4_4_ ^ local_148._4_4_ << 0xd;
                local_148._0_4_ = 0;
                if (uVar11 != 3) {
                  (*pcVar18)(&local_158);
                  for (lVar13 = uVar11 - 4; lVar13 != 0; lVar13 = lVar13 + -1) {
                    (**(code **)(local_158 + 0x10))(&local_158);
                  }
                }
              }
            }
            local_148 = CONCAT44(local_148._4_4_,local_148._4_4_);
            puVar5 = PTR_DAT_047dcc78 + 0x10;
            local_c0 = 0;
            local_a8 = local_148;
            local_a0 = (undefined *)0x0;
            local_e8 = (undefined **)(PTR_DAT_047dcc80 + 0x10);
            local_e0 = 0;
            local_d8 = puVar5;
            local_d0 = puVar26;
            puStack_c8 = puVar25;
            local_b8 = puVar22;
            local_b0 = local_150;
            FUN_015d1064(&local_f0);
            local_f0 = &PTR_LAB_045a7998;
            local_150 = (undefined *)0x0;
            local_148 = (ulong)local_fc << 0x20;
            if (local_fc == 0) {
              uVar8 = 0;
              local_158 = puVar22;
            }
            else {
              uVar11 = (ulong)local_fc - ((ulong)(local_fc >> 1) & 0x5555555555555555);
              uVar8 = local_fc ^ local_fc << 2;
              uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
              uVar8 = uVar8 ^ uVar8 >> 0xf;
              uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              uVar8 = uVar8 ^ uVar8 << 0xd;
              local_148 = (ulong)uVar8 << 0x20;
              local_158 = puVar22;
              if (uVar11 != 1) {
                uVar8 = uVar8 ^ uVar8 << 2;
                uVar8 = uVar8 ^ uVar8 >> 0xf;
                uVar8 = uVar8 ^ uVar8 << 0xd;
                local_148 = (ulong)uVar8 << 0x20;
                if (uVar11 != 2) {
                  FUN_00f83090(&local_158);
                  for (lVar13 = uVar11 - 3; lVar13 != 0; lVar13 = lVar13 + -1) {
                    (**(code **)(local_158 + 0x10))(&local_158);
                  }
                  local_148._4_4_ = (uint)((ulong)local_148 >> 0x20);
                  uVar8 = local_148._4_4_;
                }
              }
            }
            local_148 = CONCAT44(local_148._4_4_,uVar8);
            local_e0 = param_2[2];
            local_c0 = (undefined1)param_2[6];
            local_d0 = (undefined *)*plVar27;
            puStack_c8 = (undefined *)param_2[5];
            local_b8 = (undefined *)*plVar9;
            local_b0 = (undefined *)param_2[8];
            local_a8 = param_2[9];
            lStack_90 = local_148;
            local_a0 = PTR_DAT_047dcc70 + 0x10;
            local_e8 = &PTR_LAB_045a79c8;
            local_d8 = puVar5;
            local_98 = local_150;
            local_88 = local_e0;
            FUN_015d1064(&local_f0);
          }
          if (ppuVar23[2] < puVar24) {
            plVar10 = *(long **)(param_1 + 0x60);
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x18))(plVar10,ppuVar23);
            }
            puVar22 = (undefined *)
                      (**(code **)(**(long **)(param_1 + 0x40) + 0x10))
                                (*(long **)(param_1 + 0x40),puVar24);
            if (puVar22 == (undefined *)0x0) {
              lVar16 = FUN_02b6a170(ppuVar23 + 6,*(undefined8 *)(param_1 + 0x10),ppuVar23);
              lVar13 = *(long *)(param_1 + 0x10);
              while (lVar7 = lVar13, lVar7 != lVar16) {
                lVar13 = lVar7 + -0x30;
                if (*(char *)(lVar7 + -0x10) != '\0') {
                  *(undefined1 *)(lVar7 + -0x10) = 0;
                }
              }
              uVar14 = 0;
              *(long *)(param_1 + 0x10) = lVar16;
              goto LAB_0172f2dc;
            }
            memcpy(puVar22,ppuVar23[1],(size_t)ppuVar23[3]);
            (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
                      (*(long **)(param_1 + 0x40),ppuVar23[1],ppuVar23[2]);
            ppuVar23[1] = puVar22;
            ppuVar23[2] = puVar24;
            ppuVar23[3] = puVar24;
          }
          else {
            if ((ppuVar23[2] != puVar24) && (ppuVar23[3] != puVar24)) {
              plVar10 = *(long **)(param_1 + 0x60);
              if (plVar10 != (long *)0x0) {
                (**(code **)(*plVar10 + 0x20))(plVar10,ppuVar23);
              }
              ppuVar23[3] = puVar24;
            }
            puVar22 = ppuVar23[1];
          }
          plVar10 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
          if (puVar22 != (undefined *)0x0) {
            plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
            uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,puVar24,plVar10[1]);
            if ((uVar11 & 1) != 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10,puVar22,puVar24,0);
            }
          }
          lVar13 = (**(code **)(*param_2 + 0x10))(param_2);
          *(undefined **)(lVar13 + 8) = puVar24 + *(long *)(lVar13 + 8);
          uVar11 = FUN_015d0a70(param_1,ppuVar23);
          if ((uVar11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("ValidateElement(*element)","Load",
                       "../../include\\pe/savedata/./hashdb/basic_storage.hpp",0x1ca);
          }
        }
        plVar10 = *(long **)(param_1 + 0x60);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x48))(plVar10,ppuVar23);
        }
        plVar10 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
        plVar12 = (long *)(**(code **)(*plVar10 + 0x28))();
        uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,1,plVar10[1]);
      } while ((uVar11 & 1) != 0);
    }
    nn::os::LockMutex(pMVar1);
    FUN_015d1340(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_f0);
    nn::os::UnlockMutex(pMVar1);
    uVar14 = 1;
  }
  else {
    plVar9 = *(long **)(param_1 + 0x60);
    if (plVar9 != (long *)0x0) {
      local_f8[0] = '\0';
      (**(code **)(*plVar9 + 0x60))(plVar9,local_f8);
      if (local_f8[0] != '\0') {
        uVar14 = 0;
        local_f8[0] = '\0';
        goto LAB_0172f2dc;
      }
    }
LAB_0172f2d8:
    uVar14 = 0;
  }
LAB_0172f2dc:
  nn::os::UnlockMutex(pMVar1);
  return uVar14;
}


