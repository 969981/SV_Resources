/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b9def4; name: FUN_00b9def4
 */


void FUN_00b9def4(long *param_1,byte *param_2,void *param_3)

{
  bool bVar1;
  ulong uVar2;
  char cVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  size_t sVar8;
  char *pcVar9;
  ulong uVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  undefined8 uVar14;
  char *pcVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  byte *pbVar20;
  long *plVar21;
  int *piVar22;
  byte *pbVar23;
  long *plVar24;
  undefined8 uVar25;
  long *plVar26;
  undefined8 uVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_170;
  undefined4 local_168;
  byte *local_140;
  uint local_138;
  long local_130;
  byte *local_110;
  undefined8 local_108;
  long local_100;
  byte *local_e0;
  byte *local_d8;
  undefined8 local_d0;
  byte local_b0;
  undefined7 uStack_af;
  uint local_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  char cStack_a0;
  undefined1 auStack_9f [4];
  char acStack_9b [27];
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  
  puVar4 = PTR_DAT_047dac58;
  if (*(long *)(param_2 + 0x78) == 0) {
    lVar17 = *(long *)PTR_DAT_047dac58;
    if (lVar17 == 0) {
      FUN_00bb5d70();
      lVar17 = *(long *)puVar4;
    }
    *(long *)(param_2 + 0x78) = lVar17;
  }
  if ((*(byte *)((long)param_3 + 0x10) >> 5 & 1) == 0) {
LAB_00b9e258:
    if ((*(long *)(param_2 + 0x58) != 0) && (*(int *)(param_2 + 0x40) != 1)) {
      FUN_00b8a120(param_1,*(undefined8 *)(param_2 + 8),param_3,0,
                   "Fields of oneofs must themselves have label LABEL_OPTIONAL.");
    }
    if ((*(uint *)((long)param_3 + 0x10) >> 4 & 1) == 0) {
      if ((*(uint *)(&DAT_03d5c718 + (ulong)*(uint *)(param_2 + 0x3c) * 4) | 2) == 10) {
        uVar27 = *(undefined8 *)(param_2 + 8);
        pcVar15 = "Field with message or enum type missing type_name.";
LAB_00b9e440:
        uVar14 = 2;
LAB_00b9e44c:
        FUN_00b8a120(param_1,uVar27,param_3,uVar14,pcVar15);
      }
LAB_00b9e450:
      plVar30 = (long *)param_1[0xb];
      plVar26 = plVar30 + 0xf;
      lVar17 = *(long *)(param_2 + 0x50);
      iVar5 = *(int *)(param_2 + 0x38);
      uVar12 = (ulong)iVar5;
      plVar29 = (long *)plVar30[0x10];
      plVar18 = (long *)(lVar17 * 0xffff + uVar12);
      plVar28 = param_1;
      if (plVar29 == (long *)0x0) {
LAB_00b9e574:
        lVar13 = tpidr_el0;
        plVar24 = *(long **)(lVar13 + 0x30);
        if (plVar24 == (long *)0x0) {
          if ((DAT_04859438 & 1) == 0) goto LAB_00b9fa44;
          goto LAB_00b9f758;
        }
LAB_00b9e594:
        plVar24 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x28,8);
        plVar24[1] = (long)plVar18;
        plVar24[2] = lVar17;
        *(int *)(plVar24 + 3) = (int)uVar12;
        plVar24[4] = (long)param_2;
        *plVar24 = 0;
        if ((plVar29 == (long *)0x0) ||
           (*(float *)(plVar30 + 0x13) * (float)plVar29 < (float)(plVar30[0x12] + 1))) {
          plVar28 = (long *)((ulong)(plVar29 < (long *)0x3 ||
                                    ((ulong)plVar29 & (long)plVar29 - 1U) != 0) | (long)plVar29 << 1
                            );
          plVar21 = (long *)(long)((float)(plVar30[0x12] + 1) / *(float *)(plVar30 + 0x13));
          if (plVar21 <= plVar28) {
            plVar21 = plVar28;
          }
          if ((long)plVar21 - 1U == 0) {
            plVar21 = (long *)0x2;
          }
          else if (((ulong)plVar21 & (long)plVar21 - 1U) != 0) {
            plVar21 = (long *)std::__next_prime((ulong)plVar21);
            plVar29 = (long *)plVar30[0x10];
          }
          if (plVar29 < plVar21) {
            plVar28 = plVar21;
LAB_00b9e648:
            FUN_00bac7c0(plVar26,plVar28);
          }
          else if (plVar21 < plVar29) {
            plVar28 = (long *)(long)((float)(ulong)plVar30[0x12] / *(float *)(plVar30 + 0x13));
            if ((plVar29 < (long *)0x3) ||
               (uVar12 = (long)plVar29 - ((ulong)plVar29 >> 1 & 0x5555555555555555),
               uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333),
               1 < (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              plVar28 = (long *)std::__next_prime((ulong)plVar28);
            }
            else if ((long *)0x1 < plVar28) {
              plVar28 = (long *)(1L << (-LZCOUNT((long)plVar28 - 1) & 0x3fU));
            }
            if (plVar28 <= plVar21) {
              plVar28 = plVar21;
            }
            if (plVar28 < plVar29) goto LAB_00b9e648;
          }
          plVar29 = (long *)plVar30[0x10];
          if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
            plVar28 = (long *)((long)plVar29 - 1U & (ulong)plVar18);
          }
          else if (plVar18 < plVar29) {
            plVar28 = plVar18;
          }
          else {
            uVar12 = 0;
            if (plVar29 != (long *)0x0) {
              uVar12 = (ulong)plVar18 / (ulong)plVar29;
            }
            plVar28 = (long *)((long)plVar18 - uVar12 * (long)plVar29);
          }
        }
        lVar17 = *plVar26;
        plVar18 = *(long **)(lVar17 + (long)plVar28 * 8);
        if (plVar18 == (long *)0x0) {
          plVar18 = plVar30 + 0x11;
          *plVar24 = *plVar18;
          *plVar18 = (long)plVar24;
          *(long **)(lVar17 + (long)plVar28 * 8) = plVar18;
          if (*plVar24 != 0) {
            plVar18 = *(long **)(*plVar24 + 8);
            if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
              plVar18 = (long *)((ulong)plVar18 & (long)plVar29 - 1U);
            }
            else if (plVar29 <= plVar18) {
              uVar12 = 0;
              if (plVar29 != (long *)0x0) {
                uVar12 = (ulong)plVar18 / (ulong)plVar29;
              }
              plVar18 = (long *)((long)plVar18 - uVar12 * (long)plVar29);
            }
            plVar18 = (long *)(*plVar26 + (long)plVar18 * 8);
            goto LAB_00b9e990;
          }
        }
        else {
          *plVar24 = *plVar18;
LAB_00b9e990:
          *plVar18 = (long)plVar24;
        }
        plVar30[0x12] = plVar30[0x12] + 1;
        if (param_2[0x44] != 0) {
          lVar17 = param_1[1];
          plVar26 = (long *)(lVar17 + 0x148);
          plVar28 = *(long **)(param_2 + 0x50);
          uVar16 = *(uint *)(param_2 + 0x38);
          uVar12 = (ulong)uVar16;
          plVar29 = *(long **)(lVar17 + 0x148);
          plVar18 = plVar26;
          if (plVar29 != (long *)0x0) {
            plVar30 = plVar29;
            do {
              if (plVar28 < (long *)plVar30[4]) {
LAB_00b9e9d8:
                plVar24 = (long *)*plVar30;
                plVar18 = plVar30;
              }
              else {
                if (plVar28 <= (long *)plVar30[4]) {
                  if ((int)uVar16 < (int)plVar30[5]) goto LAB_00b9e9d8;
                  if ((int)uVar16 <= (int)plVar30[5]) goto LAB_00b9ea18;
                }
                plVar24 = (long *)plVar30[1];
                plVar18 = plVar30 + 1;
              }
              if (plVar24 == (long *)0x0) goto LAB_00b9ea18;
              plVar30 = plVar24;
            } while( true );
          }
          goto LAB_00b9ea7c;
        }
        goto LAB_00b9f238;
      }
      uVar10 = (long)plVar29 - ((ulong)plVar29 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        lVar13 = *plVar26;
        plVar28 = (long *)((long)plVar29 - 1U & (ulong)plVar18);
        plVar24 = *(long **)(lVar13 + (long)plVar28 * 8);
        if (plVar24 == (long *)0x0) goto LAB_00b9e574;
        do {
          plVar24 = (long *)*plVar24;
          if ((plVar24 == (long *)0x0) ||
             ((long *)plVar24[1] != plVar18 &&
              (long *)((ulong)plVar24[1] & (long)plVar29 - 1U) != plVar28)) goto LAB_00b9e574;
        } while (plVar24[2] != lVar17 || *(int *)(plVar24 + 3) != iVar5);
      }
      else {
        plVar28 = plVar18;
        if (plVar29 <= plVar18) {
          uVar2 = 0;
          if (plVar29 != (long *)0x0) {
            uVar2 = (ulong)plVar18 / (ulong)plVar29;
          }
          plVar28 = (long *)((long)plVar18 - uVar2 * (long)plVar29);
        }
        lVar13 = *plVar26;
        plVar24 = *(long **)(lVar13 + (long)plVar28 * 8);
        if (plVar24 == (long *)0x0) goto LAB_00b9e574;
        do {
          plVar24 = (long *)*plVar24;
          if (plVar24 == (long *)0x0) goto LAB_00b9e574;
          plVar21 = (long *)plVar24[1];
          if (plVar21 != plVar18) {
            if (plVar29 <= plVar21) {
              uVar2 = 0;
              if (plVar29 != (long *)0x0) {
                uVar2 = (ulong)plVar21 / (ulong)plVar29;
              }
              plVar21 = (long *)((long)plVar21 - uVar2 * (long)plVar29);
            }
            if (plVar21 != plVar28) goto LAB_00b9e574;
          }
        } while (plVar24[2] != lVar17 || *(int *)(plVar24 + 3) != iVar5);
      }
      if (uVar10 < 2) {
        plVar26 = (long *)((long)plVar29 - 1U & (ulong)plVar18);
      }
      else {
        plVar26 = plVar18;
        if (plVar29 <= plVar18) {
          uVar2 = 0;
          if (plVar29 != (long *)0x0) {
            uVar2 = (ulong)plVar18 / (ulong)plVar29;
          }
          plVar26 = (long *)((long)plVar18 - uVar2 * (long)plVar29);
        }
      }
      plVar28 = *(long **)(lVar13 + (long)plVar26 * 8);
      if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar18 == (long *)plVar28[1]) {
              if ((plVar28[2] == lVar17) && ((int)plVar28[3] == iVar5)) goto LAB_00b9f09c;
            }
            else if ((long *)((ulong)plVar28[1] & (long)plVar29 - 1U) != plVar26) break;
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
        }
        else {
          do {
            plVar30 = (long *)plVar28[1];
            if (plVar18 == plVar30) {
              if ((plVar28[2] == lVar17) && ((int)plVar28[3] == iVar5)) goto LAB_00b9f09c;
            }
            else {
              if (plVar29 <= plVar30) {
                uVar10 = 0;
                if (plVar29 != (long *)0x0) {
                  uVar10 = (ulong)plVar30 / (ulong)plVar29;
                }
                plVar30 = (long *)((long)plVar30 - uVar10 * (long)plVar29);
              }
              if (plVar30 != plVar26) break;
            }
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
        }
      }
      puVar7 = (undefined8 *)0x0;
      goto LAB_00b9e7a8;
    }
    iVar5 = FUN_00b9fce0(param_1,*(undefined8 *)((long)param_3 + 0x28),*(undefined8 *)(param_2 + 8),
                         *(uint *)((long)param_3 + 0x10) >> 6 & 1 |
                         (uint)(*(int *)((long)param_3 + 0x38) == 0xe),1);
    if (iVar5 == 0) {
      if (*(char *)(*param_1 + 0x2a) != '\0') {
LAB_00b9e31c:
        FUN_00b8a36c(param_1,*(undefined8 *)(param_2 + 8),param_3,2,
                     *(undefined8 *)((long)param_3 + 0x28));
        return;
      }
      lVar17 = *(long *)((long)param_3 + 0x50);
      if (lVar17 == 0) {
        lVar17 = *(long *)(*(long *)PTR_DAT_047dacc0 + 0x50);
      }
      if (*(char *)(lVar17 + 0x5b) == '\0') goto LAB_00b9e31c;
      local_b0 = 0x2a;
      uStack_af = s_google_protobuf_Empty_03c3a6de._0_7_;
      local_a8._0_1_ = s_google_protobuf_Empty_03c3a6de[7];
      local_a8._1_3_ = s_google_protobuf_Empty_03c3a6de._8_3_;
      uStack_a4 = s_google_protobuf_Empty_03c3a6de._11_2_;
      uStack_a2 = s_google_protobuf_Empty_03c3a6de._13_2_;
      cStack_a0 = s_google_protobuf_Empty_03c3a6de[0xf];
      auStack_9f[0] = s_google_protobuf_Empty_03c3a6de[0x10];
      auStack_9f[1] = s_google_protobuf_Empty_03c3a6de[0x11];
      auStack_9f[2] = s_google_protobuf_Empty_03c3a6de[0x12];
      auStack_9f[3] = s_google_protobuf_Empty_03c3a6de[0x13];
      acStack_9b[0] = s_google_protobuf_Empty_03c3a6de[0x14];
      acStack_9b[1] = '\0';
      iVar5 = FUN_00ba09a8(param_1,&local_b0);
      if (((local_b0 & 1) != 0) &&
         (lVar17 = CONCAT17(acStack_9b[2],CONCAT16(acStack_9b[1],CONCAT51(_auStack_9f,cStack_a0))),
         lVar17 != 0)) {
        lVar13 = tpidr_el0;
        plVar26 = *(long **)(lVar13 + 0x30);
        if (plVar26 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar26 = DAT_04859430;
          *(long **)(lVar13 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar26 + 0xf8))(plVar26);
        if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*plVar26 + 0x18))(plVar26,lVar17,0,8);
        }
        else {
          FUN_00c48fe8(plVar26,lVar17,0,8);
        }
      }
      lVar17 = extraout_x1_01;
      if (iVar5 == 0) goto LAB_00b9e31c;
    }
    else {
      lVar17 = extraout_x1_00;
    }
    if ((*(byte *)((long)param_3 + 0x10) >> 3 & 1) == 0) {
      if (iVar5 == 4) {
        uVar16 = 0xe;
LAB_00b9e3b4:
        *(uint *)(param_2 + 0x3c) = uVar16;
        goto LAB_00b9e3b8;
      }
      if (iVar5 == 1) {
        uVar16 = 0xb;
        goto LAB_00b9e3b4;
      }
      uVar27 = *(undefined8 *)(param_2 + 8);
      std::operator+("\"",*(string **)((long)param_3 + 0x28));
    }
    else {
      uVar16 = *(uint *)(param_2 + 0x3c);
LAB_00b9e3b8:
      if (*(int *)(&DAT_03d5c718 + (ulong)uVar16 * 4) == 8) {
        if (iVar5 == 4) {
          *(long *)(param_2 + 0x70) = lVar17;
          if (*(char *)(lVar17 + 0x28) == '\0') {
            if (param_2[0x80] != 0) {
              uVar12 = FUN_00c30eac(*(undefined8 *)((long)param_3 + 0x40));
              if ((uVar12 & 1) == 0) {
                uVar27 = *(undefined8 *)(param_2 + 8);
                pcVar15 = "Default value for an enum field must be an identifier.";
                goto LAB_00b9e3f4;
              }
              iVar5 = FUN_00ba0e0c(param_1,*(undefined8 *)((long)param_3 + 0x40),
                                   *(undefined8 *)(*(long *)(param_2 + 0x70) + 8),0);
              if (iVar5 == 5) {
                lVar17 = *(long *)(param_2 + 0x70);
                if (*(long *)(extraout_x1_02 + 0x18) == lVar17) {
                  *(long *)(param_2 + 0x88) = extraout_x1_02;
                  goto LAB_00b9e450;
                }
              }
              else {
                lVar17 = *(long *)(param_2 + 0x70);
              }
              uVar27 = *(undefined8 *)(param_2 + 8);
              std::operator+("Enum type \"",*(string **)(lVar17 + 8));
              puVar7 = (undefined8 *)std::string::append((char *)&local_140);
              local_108 = puVar7[1];
              local_100 = puVar7[2];
              local_110 = (byte *)*puVar7;
              puVar7[1] = 0;
              puVar7[2] = 0;
              *puVar7 = 0;
              pbVar20 = *(byte **)((long)param_3 + 0x40);
              pbVar23 = *(byte **)(pbVar20 + 0x10);
              if ((*pbVar20 & 1) == 0) {
                pbVar23 = pbVar20 + 1;
              }
              puVar7 = (undefined8 *)std::string::append((char *)&local_110,(ulong)pbVar23);
              local_d8 = (byte *)puVar7[1];
              local_d0 = puVar7[2];
              local_e0 = (byte *)*puVar7;
              *puVar7 = 0;
              puVar7[1] = 0;
              puVar7[2] = 0;
              puVar7 = (undefined8 *)std::string::append((char *)&local_e0);
              uVar14 = puVar7[1];
              uVar25 = puVar7[2];
              local_b0 = (byte)*puVar7;
              uStack_af = (undefined7)((ulong)*puVar7 >> 8);
              local_a8 = (uint)uVar14;
              uStack_a4 = (undefined2)((ulong)uVar14 >> 0x20);
              uStack_a2 = (undefined2)((ulong)uVar14 >> 0x30);
              cStack_a0 = (char)uVar25;
              _auStack_9f = (undefined5)((ulong)uVar25 >> 8);
              acStack_9b[1] = (char)((ulong)uVar25 >> 0x30);
              acStack_9b[2] = (char)((ulong)uVar25 >> 0x38);
              puVar7[1] = 0;
              puVar7[2] = 0;
              *puVar7 = 0;
              FUN_00b89f94(param_1,uVar27,param_3,4,&local_b0);
              if (((local_b0 & 1) != 0) &&
                 (lVar17 = CONCAT17(acStack_9b[2],
                                    CONCAT16(acStack_9b[1],CONCAT51(_auStack_9f,cStack_a0))),
                 lVar17 != 0)) {
                lVar13 = tpidr_el0;
                plVar26 = *(long **)(lVar13 + 0x30);
                if (plVar26 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar26 = DAT_04859430;
                  *(long **)(lVar13 + 0x30) = DAT_04859430;
                }
                uVar12 = (**(code **)(*plVar26 + 0xf8))(plVar26);
                if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar26 + 0x18))(plVar26,lVar17,0,8);
                }
                else {
                  FUN_00c48fe8(plVar26,lVar17,0,8);
                }
              }
              uVar12 = local_d0;
              if ((((ulong)local_e0 & 1) != 0) && (local_d0 != 0)) {
                lVar17 = tpidr_el0;
                plVar26 = *(long **)(lVar17 + 0x30);
                if (plVar26 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar26 = DAT_04859430;
                  *(long **)(lVar17 + 0x30) = DAT_04859430;
                }
                uVar10 = (**(code **)(*plVar26 + 0xf8))(plVar26);
                if (((uVar10 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar26 + 0x18))(plVar26,uVar12,0,8);
                }
                else {
                  FUN_00c48fe8(plVar26,uVar12,0,8);
                }
              }
              lVar17 = local_100;
              if ((((ulong)local_110 & 1) != 0) && (local_100 != 0)) {
                lVar13 = tpidr_el0;
                plVar26 = *(long **)(lVar13 + 0x30);
                if (plVar26 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar26 = DAT_04859430;
                  *(long **)(lVar13 + 0x30) = DAT_04859430;
                }
                uVar12 = (**(code **)(*plVar26 + 0xf8))(plVar26);
                if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar26 + 0x18))(plVar26,lVar17,0,8);
                }
                else {
                  FUN_00c48fe8(plVar26,lVar17,0,8);
                }
              }
              if ((((ulong)local_140 & 1) != 0) && (local_130 != 0)) {
                lVar17 = tpidr_el0;
                plVar26 = *(long **)(lVar17 + 0x30);
                if (plVar26 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar26 = DAT_04859430;
                  *(long **)(lVar17 + 0x30) = DAT_04859430;
                }
                uVar12 = (**(code **)(*plVar26 + 0xf8))(plVar26);
                if (((uVar12 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar26 + 0x18))(plVar26,local_130,0,8);
                }
                else {
                  FUN_00c48fe8(plVar26,local_130,0,8);
                }
              }
              goto LAB_00b9e450;
            }
          }
          else {
            param_2[0x80] = 0;
          }
          if (0 < *(int *)(lVar17 + 0x2c)) {
            *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(lVar17 + 0x30);
          }
          goto LAB_00b9e450;
        }
        uVar27 = *(undefined8 *)(param_2 + 8);
        std::operator+("\"",*(string **)((long)param_3 + 0x28));
      }
      else {
        if (*(int *)(&DAT_03d5c718 + (ulong)uVar16 * 4) != 10) {
          uVar27 = *(undefined8 *)(param_2 + 8);
          pcVar15 = "Field with primitive type has type_name.";
          goto LAB_00b9e440;
        }
        if (iVar5 == 1) {
          *(long *)(param_2 + 0x68) = lVar17;
          if (param_2[0x80] == 0) goto LAB_00b9e450;
          uVar27 = *(undefined8 *)(param_2 + 8);
          pcVar15 = "Messages can\'t have default values.";
LAB_00b9e3f4:
          uVar14 = 4;
          goto LAB_00b9e44c;
        }
        uVar27 = *(undefined8 *)(param_2 + 8);
        std::operator+("\"",*(string **)((long)param_3 + 0x28));
      }
    }
    puVar7 = (undefined8 *)std::string::append((char *)&local_e0);
    uVar14 = puVar7[1];
    uVar25 = puVar7[2];
    local_b0 = (byte)*puVar7;
    uStack_af = (undefined7)((ulong)*puVar7 >> 8);
    local_a8 = (uint)uVar14;
    uStack_a4 = (undefined2)((ulong)uVar14 >> 0x20);
    uStack_a2 = (undefined2)((ulong)uVar14 >> 0x30);
    cStack_a0 = (char)uVar25;
    _auStack_9f = (undefined5)((ulong)uVar25 >> 8);
    acStack_9b[1] = (char)((ulong)uVar25 >> 0x30);
    acStack_9b[2] = (char)((ulong)uVar25 >> 0x38);
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_00b89f94(param_1,uVar27,param_3,2,&local_b0);
    if (((local_b0 & 1) == 0) ||
       (lVar17 = CONCAT17(acStack_9b[2],CONCAT16(acStack_9b[1],CONCAT51(_auStack_9f,cStack_a0))),
       lVar17 == 0)) goto LAB_00b9e880;
    lVar13 = tpidr_el0;
    plVar26 = *(long **)(lVar13 + 0x30);
    if (plVar26 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      goto LAB_00b9f934;
    }
  }
  else {
    iVar5 = FUN_00b9fce0(param_1,*(undefined8 *)((long)param_3 + 0x30),*(undefined8 *)(param_2 + 8),
                         2,0);
    if (iVar5 == 1) {
      *(long *)(param_2 + 0x50) = extraout_x1;
      uVar12 = (ulong)*(uint *)(extraout_x1 + 0x68);
      iVar5 = *(int *)(param_2 + 0x38);
      if (0 < (int)*(uint *)(extraout_x1 + 0x68)) {
        piVar22 = (int *)(*(long *)(extraout_x1 + 0x70) + 4);
        do {
          if ((piVar22[-1] <= iVar5) && (iVar5 < *piVar22)) goto LAB_00b9e258;
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 2;
        } while (uVar12 != 0);
      }
      pbVar20 = *(byte **)(extraout_x1 + 8);
      pbVar23 = *(byte **)(pbVar20 + 0x10);
      if ((*pbVar20 & 1) == 0) {
        pbVar23 = pbVar20 + 1;
      }
      uVar27 = *(undefined8 *)(param_2 + 8);
      local_b0 = (byte)pbVar23;
      uStack_af = (undefined7)((ulong)pbVar23 >> 8);
      local_d0 = local_d0 & 0xffffffffffffff;
      local_a8 = (uint)(*pbVar20 >> 1);
      if ((*pbVar20 & 1) != 0) {
        local_a8 = (uint)*(undefined8 *)(pbVar20 + 8);
      }
      if (iVar5 < 0) {
        if (iVar5 < -9) {
          iVar5 = iVar5 + 10;
          cVar3 = ((char)((ulong)((long)iVar5 * 0x66666667) >> 0x22) - (char)(iVar5 >> 0x1f)) * '\n'
                  - (char)iVar5;
          iVar5 = (int)((ulong)((long)iVar5 * -0x66666667) >> 0x20);
          pbVar23 = (byte *)((long)&local_d0 + 5);
          iVar5 = ((iVar5 >> 2) - (iVar5 >> 0x1f)) + 1;
          do {
            local_e0 = pbVar23 + -1;
            *pbVar23 = (char)iVar5 + (char)(iVar5 / 10) * -10 + 0x30;
            bVar1 = 9 < iVar5;
            pbVar23 = local_e0;
            iVar5 = iVar5 / 10;
          } while (bVar1);
        }
        else {
          cVar3 = -(char)iVar5;
          local_e0 = (byte *)((long)&local_d0 + 5);
        }
        local_d0 = (ulong)CONCAT16(cVar3 + '0',(undefined6)local_d0);
        *local_e0 = 0x2d;
      }
      else {
        local_e0 = (byte *)((long)&local_d0 + 7);
        do {
          local_e0 = local_e0 + -1;
          *local_e0 = (char)iVar5 + (char)(iVar5 / 10) * -10 + 0x30;
          bVar1 = 9 < iVar5;
          iVar5 = iVar5 / 10;
        } while (bVar1);
      }
      sVar8 = strlen((char *)local_e0);
      local_d8 = (byte *)CONCAT44(local_d8._4_4_,(int)sVar8);
      local_108 = CONCAT44(local_108._4_4_,0xffffffff);
      local_138 = 0xffffffff;
      local_168 = 0xffffffff;
      local_198 = 0xffffffff;
      local_1c8 = 0xffffffff;
      local_1f8 = 0xffffffff;
      local_228 = 0xffffffff;
      local_258 = 0xffffffff;
      local_110 = (byte *)0x0;
      local_140 = (byte *)0x0;
      local_170 = 0;
      local_1a0 = 0;
      local_1d0 = 0;
      local_200 = 0;
      local_230 = 0;
      local_260 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = (void *)0x0;
      FUN_00c2ce10(&local_80,"\"$0\" does not declare $1 as an extension number.",&local_b0,
                   &local_e0,&local_110,&local_140,&local_170,&local_1a0,&local_1d0,&local_200,
                   &local_230,&local_260);
      FUN_00b89f94(param_1,uVar27,param_3,1,&local_80);
      pvVar11 = local_70;
      if (((local_80 & 1) != 0) && (local_70 != (void *)0x0)) {
        lVar17 = tpidr_el0;
        plVar26 = *(long **)(lVar17 + 0x30);
        if (plVar26 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar26 = DAT_04859430;
          *(long **)(lVar17 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar26 + 0xf8))(plVar26);
        if (((uVar12 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
          (**(code **)(*plVar26 + 0x18))(plVar26,pvVar11,0,8);
        }
        else {
          FUN_00c48fe8(plVar26,pvVar11,0,8);
        }
      }
      goto LAB_00b9e258;
    }
    if (iVar5 == 0) {
      FUN_00b8a36c(param_1,*(undefined8 *)(param_2 + 8),param_3,3,
                   *(undefined8 *)((long)param_3 + 0x30));
      return;
    }
    uVar25 = *(undefined8 *)(param_2 + 8);
    std::operator+("\"",*(string **)((long)param_3 + 0x30));
    puVar7 = (undefined8 *)std::string::append((char *)&local_e0);
    uVar27 = puVar7[1];
    uVar14 = puVar7[2];
    local_b0 = (byte)*puVar7;
    uStack_af = (undefined7)((ulong)*puVar7 >> 8);
    local_a8 = (uint)uVar27;
    uStack_a4 = (undefined2)((ulong)uVar27 >> 0x20);
    uStack_a2 = (undefined2)((ulong)uVar27 >> 0x30);
    cStack_a0 = (char)uVar14;
    _auStack_9f = (undefined5)((ulong)uVar14 >> 8);
    acStack_9b[1] = (char)((ulong)uVar14 >> 0x30);
    acStack_9b[2] = (char)((ulong)uVar14 >> 0x38);
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_00b89f94(param_1,uVar25,param_3,3,&local_b0);
    if (((local_b0 & 1) == 0) ||
       (lVar17 = CONCAT17(acStack_9b[2],CONCAT16(acStack_9b[1],CONCAT51(_auStack_9f,cStack_a0))),
       lVar17 == 0)) goto LAB_00b9e880;
    lVar13 = tpidr_el0;
    plVar26 = *(long **)(lVar13 + 0x30);
    if (plVar26 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
LAB_00b9f934:
      plVar26 = DAT_04859430;
      *(long **)(lVar13 + 0x30) = DAT_04859430;
    }
  }
  uVar12 = (**(code **)(*plVar26 + 0xf8))(plVar26);
  if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar17,0,8);
  }
  else {
    FUN_00c48fe8(plVar26,lVar17,0,8);
  }
LAB_00b9e880:
  uVar12 = local_d0;
  if (((ulong)local_e0 & 1) == 0) {
    return;
  }
  if (local_d0 == 0) {
    return;
  }
  lVar17 = tpidr_el0;
  plVar26 = *(long **)(lVar17 + 0x30);
  if (plVar26 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar26 = DAT_04859430;
    *(long **)(lVar17 + 0x30) = DAT_04859430;
  }
  uVar10 = (**(code **)(*plVar26 + 0xf8))(plVar26);
  if (((uVar10 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
    (**(code **)(*plVar26 + 0x18))(plVar26,uVar12,0,8);
    return;
  }
  FUN_00c48fe8(plVar26,uVar12,0,8);
  return;
code_r0x00b9eb60:
  plVar30 = *(long **)(lVar13 + 0x30);
  if (plVar30 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar30 = DAT_04859430;
    *(long **)(lVar13 + 0x30) = DAT_04859430;
  }
  pvVar11 = (void *)(**(code **)(*plVar30 + 0x10))(plVar30,(long)plVar29 << 4,8);
LAB_00b9ec68:
  puVar7 = (undefined8 *)((long)pvVar11 + (long)plVar18 * 0x10);
  *(uint *)(puVar7 + 1) = uVar16;
  *puVar7 = plVar28;
  if (0 < (long)plVar26) {
    memcpy(pvVar11,param_3,(size_t)plVar26);
  }
  *(void **)(lVar17 + 0x1a0) = pvVar11;
  *(undefined8 **)(lVar17 + 0x1a8) = puVar7 + 2;
  *(void **)(lVar17 + 0x1b0) = (void *)((long)pvVar11 + (long)plVar29 * 0x10);
  goto joined_r0x00b9eeb4;
LAB_00b9f09c:
  puVar7 = (undefined8 *)plVar28[4];
LAB_00b9e7a8:
  uVar27 = *(undefined8 *)(param_2 + 8);
  if (param_2[0x44] == 0) {
    acStack_9b[2] = 0;
    if (iVar5 < 0) {
      if (iVar5 < -9) {
        iVar5 = iVar5 + 10;
        acStack_9b[1] =
             ((char)((ulong)((long)iVar5 * 0x66666667) >> 0x22) - (char)(iVar5 >> 0x1f)) * '\n' -
             (char)iVar5;
        iVar5 = (int)((ulong)((long)iVar5 * -0x66666667) >> 0x20);
        pcVar15 = acStack_9b;
        iVar5 = ((iVar5 >> 2) - (iVar5 >> 0x1f)) + 1;
        do {
          pcVar9 = pcVar15 + -1;
          *pcVar15 = (char)iVar5 + (char)(iVar5 / 10) * -10 + '0';
          bVar1 = 9 < iVar5;
          pcVar15 = pcVar9;
          iVar5 = iVar5 / 10;
        } while (bVar1);
      }
      else {
        acStack_9b[1] = -(char)iVar5;
        pcVar9 = acStack_9b;
      }
      acStack_9b[1] = acStack_9b[1] + '0';
      *pcVar9 = '-';
    }
    else {
      pcVar9 = acStack_9b + 2;
      do {
        iVar5 = (int)uVar12;
        uVar16 = iVar5 / 10;
        pcVar9 = pcVar9 + -1;
        *pcVar9 = (char)uVar12 + (char)uVar16 * -10 + '0';
        uVar12 = (ulong)uVar16;
      } while (9 < iVar5);
    }
    local_b0 = (byte)pcVar9;
    uStack_af = (undefined7)((ulong)pcVar9 >> 8);
    sVar8 = strlen(pcVar9);
    local_a8 = (uint)sVar8;
    pbVar23 = *(byte **)(*(long *)(param_2 + 0x50) + 8);
    local_e0 = *(byte **)(pbVar23 + 0x10);
    if ((*pbVar23 & 1) == 0) {
      local_e0 = pbVar23 + 1;
    }
    uVar16 = (uint)(*pbVar23 >> 1);
    if ((*pbVar23 & 1) != 0) {
      uVar16 = (uint)*(undefined8 *)(pbVar23 + 8);
    }
    local_d8 = (byte *)CONCAT44(local_d8._4_4_,uVar16);
    pbVar23 = (byte *)*puVar7;
    local_110 = *(byte **)(pbVar23 + 0x10);
    if ((*pbVar23 & 1) == 0) {
      local_110 = pbVar23 + 1;
    }
    uVar16 = (uint)(*pbVar23 >> 1);
    if ((*pbVar23 & 1) != 0) {
      uVar16 = (uint)*(undefined8 *)(pbVar23 + 8);
    }
    local_108 = CONCAT44(local_108._4_4_,uVar16);
    pcVar15 = "Field number $0 has already been used in \"$1\" by field \"$2\".";
  }
  else {
    acStack_9b[2] = 0;
    if (iVar5 < 0) {
      if (iVar5 < -9) {
        iVar5 = iVar5 + 10;
        acStack_9b[1] =
             ((char)((ulong)((long)iVar5 * 0x66666667) >> 0x22) - (char)(iVar5 >> 0x1f)) * '\n' -
             (char)iVar5;
        iVar5 = (int)((ulong)((long)iVar5 * -0x66666667) >> 0x20);
        pcVar15 = acStack_9b;
        iVar5 = ((iVar5 >> 2) - (iVar5 >> 0x1f)) + 1;
        do {
          pcVar9 = pcVar15 + -1;
          *pcVar15 = (char)iVar5 + (char)(iVar5 / 10) * -10 + '0';
          bVar1 = 9 < iVar5;
          pcVar15 = pcVar9;
          iVar5 = iVar5 / 10;
        } while (bVar1);
      }
      else {
        acStack_9b[1] = -(char)iVar5;
        pcVar9 = acStack_9b;
      }
      acStack_9b[1] = acStack_9b[1] + '0';
      *pcVar9 = '-';
    }
    else {
      pcVar9 = acStack_9b + 2;
      do {
        iVar5 = (int)uVar12;
        uVar16 = iVar5 / 10;
        pcVar9 = pcVar9 + -1;
        *pcVar9 = (char)uVar12 + (char)uVar16 * -10 + '0';
        uVar12 = (ulong)uVar16;
      } while (9 < iVar5);
    }
    local_b0 = (byte)pcVar9;
    uStack_af = (undefined7)((ulong)pcVar9 >> 8);
    sVar8 = strlen(pcVar9);
    local_a8 = (uint)sVar8;
    pbVar23 = *(byte **)(*(long *)(param_2 + 0x50) + 8);
    local_e0 = *(byte **)(pbVar23 + 0x10);
    if ((*pbVar23 & 1) == 0) {
      local_e0 = pbVar23 + 1;
    }
    uVar16 = (uint)(*pbVar23 >> 1);
    if ((*pbVar23 & 1) != 0) {
      uVar16 = (uint)*(undefined8 *)(pbVar23 + 8);
    }
    local_d8 = (byte *)CONCAT44(local_d8._4_4_,uVar16);
    pbVar23 = (byte *)puVar7[1];
    local_110 = *(byte **)(pbVar23 + 0x10);
    if ((*pbVar23 & 1) == 0) {
      local_110 = pbVar23 + 1;
    }
    uVar16 = (uint)(*pbVar23 >> 1);
    if ((*pbVar23 & 1) != 0) {
      uVar16 = (uint)*(undefined8 *)(pbVar23 + 8);
    }
    local_108 = CONCAT44(local_108._4_4_,uVar16);
    pcVar15 = "Extension number $0 has already been used in \"$1\" by extension \"$2\".";
  }
  local_70 = (void *)0x0;
  local_78 = 0;
  local_80 = 0;
  local_138 = 0xffffffff;
  local_140 = (byte *)0x0;
  local_168 = 0xffffffff;
  local_170 = 0;
  local_198 = 0xffffffff;
  local_1a0 = 0;
  local_1c8 = 0xffffffff;
  local_1d0 = 0;
  local_1f8 = 0xffffffff;
  local_200 = 0;
  local_228 = 0xffffffff;
  local_230 = 0;
  local_258 = 0xffffffff;
  local_260 = 0;
  FUN_00c2ce10(&local_80,pcVar15,&local_b0,&local_e0,&local_110,&local_140,&local_170,&local_1a0,
               &local_1d0,&local_200,&local_230,&local_260);
  FUN_00b89f94(param_1,uVar27,param_3,1,&local_80);
  param_3 = local_70;
  if (((local_80 & 1) == 0) || (local_70 == (void *)0x0)) goto LAB_00b9f238;
  lVar17 = tpidr_el0;
  plVar26 = *(long **)(lVar17 + 0x30);
  if (plVar26 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar26 = DAT_04859430;
    *(long **)(lVar17 + 0x30) = DAT_04859430;
  }
  goto LAB_00b9ecbc;
LAB_00b9ea18:
  if (*plVar18 == 0) {
    plVar26 = plVar30;
LAB_00b9ea7c:
    plVar29 = *(long **)(lVar13 + 0x30);
    if (plVar29 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar29 = DAT_04859430;
      *(long **)(lVar13 + 0x30) = DAT_04859430;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar29 + 0x10))(plVar29,0x38,8);
    puVar7[4] = plVar28;
    *(uint *)(puVar7 + 5) = uVar16;
    puVar7[6] = param_2;
    puVar7[2] = plVar26;
    *puVar7 = 0;
    puVar7[1] = 0;
    *plVar18 = (long)puVar7;
    if (**(long **)(lVar17 + 0x140) != 0) {
      *(long *)(lVar17 + 0x140) = **(long **)(lVar17 + 0x140);
      puVar7 = (undefined8 *)*plVar18;
    }
    FUN_010108e0(*(undefined8 *)(lVar17 + 0x148),puVar7);
    *(long *)(lVar17 + 0x150) = *(long *)(lVar17 + 0x150) + 1;
    puVar7 = *(undefined8 **)(lVar17 + 0x1a8);
    if (puVar7 != *(undefined8 **)(lVar17 + 0x1b0)) {
      *puVar7 = plVar28;
      *(uint *)(puVar7 + 1) = uVar16;
      *(undefined8 **)(lVar17 + 0x1a8) = puVar7 + 2;
      goto LAB_00b9f238;
    }
    param_3 = *(void **)(lVar17 + 0x1a0);
    plVar26 = (long *)((long)puVar7 - (long)param_3);
    plVar18 = (long *)((long)plVar26 >> 4);
    plVar29 = (long *)((long)plVar18 + 1);
    if ((ulong)plVar29 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar19 = (long)*(undefined8 **)(lVar17 + 0x1b0) - (long)param_3;
    plVar30 = (long *)(lVar19 >> 3);
    if (plVar29 <= plVar30) {
      plVar29 = plVar30;
    }
    if (0x7fffffffffffffe < (ulong)(lVar19 >> 4)) {
      plVar29 = (long *)0xfffffffffffffff;
    }
    if (plVar29 == (long *)0x0) {
      pvVar11 = (void *)0x0;
      goto LAB_00b9ec68;
    }
    if ((ulong)plVar29 >> 0x3c == 0) goto code_r0x00b9eb60;
    FUN_01f6e360();
    plVar30 = param_1;
LAB_00b9fa44:
    iVar5 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar5 != 0) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_00b9f758:
    plVar24 = DAT_04859430;
    *(long **)(lVar13 + 0x30) = DAT_04859430;
    goto LAB_00b9e594;
  }
  plVar18 = plVar26;
  do {
    if (((long *)plVar29[4] < plVar28) ||
       (((long *)plVar29[4] <= plVar28 && ((int)plVar29[5] < (int)uVar16)))) {
      plVar29 = plVar29 + 1;
    }
    else {
      plVar18 = plVar29;
    }
    plVar29 = (long *)*plVar29;
  } while (plVar29 != (long *)0x0);
  if (((plVar18 == plVar26) || (plVar28 < (long *)plVar18[4])) ||
     ((plVar28 <= (long *)plVar18[4] && ((int)uVar16 < (int)plVar18[5])))) {
    lVar17 = 0;
  }
  else {
    lVar17 = plVar18[6];
  }
  acStack_9b[2] = 0;
  if ((int)uVar16 < 0) {
    if ((int)uVar16 < -9) {
      iVar5 = uVar16 + 10;
      acStack_9b[1] =
           ((char)((ulong)((long)iVar5 * 0x66666667) >> 0x22) - (char)(iVar5 >> 0x1f)) * '\n' -
           (char)iVar5;
      iVar5 = (int)((ulong)((long)iVar5 * -0x66666667) >> 0x20);
      pcVar15 = acStack_9b;
      iVar5 = ((iVar5 >> 2) - (iVar5 >> 0x1f)) + 1;
      do {
        pcVar9 = pcVar15 + -1;
        *pcVar15 = (char)iVar5 + (char)(iVar5 / 10) * -10 + '0';
        bVar1 = 9 < iVar5;
        pcVar15 = pcVar9;
        iVar5 = iVar5 / 10;
      } while (bVar1);
    }
    else {
      acStack_9b[1] = -(char)uVar16;
      pcVar9 = acStack_9b;
    }
    acStack_9b[1] = acStack_9b[1] + '0';
    *pcVar9 = '-';
  }
  else {
    pcVar9 = acStack_9b + 2;
    do {
      iVar5 = (int)uVar12;
      uVar16 = iVar5 / 10;
      pcVar9 = pcVar9 + -1;
      *pcVar9 = (char)uVar12 + (char)uVar16 * -10 + '0';
      uVar12 = (ulong)uVar16;
    } while (9 < iVar5);
  }
  local_b0 = (byte)pcVar9;
  uStack_af = (undefined7)((ulong)pcVar9 >> 8);
  sVar8 = strlen(pcVar9);
  local_a8 = (uint)sVar8;
  pbVar23 = *(byte **)(*(long *)(param_2 + 0x50) + 8);
  local_e0 = *(byte **)(pbVar23 + 0x10);
  if ((*pbVar23 & 1) == 0) {
    local_e0 = pbVar23 + 1;
  }
  uVar16 = (uint)(*pbVar23 >> 1);
  if ((*pbVar23 & 1) != 0) {
    uVar16 = (uint)*(undefined8 *)(pbVar23 + 8);
  }
  local_d8 = (byte *)CONCAT44(local_d8._4_4_,uVar16);
  pbVar23 = *(byte **)(lVar17 + 8);
  local_110 = *(byte **)(pbVar23 + 0x10);
  if ((*pbVar23 & 1) == 0) {
    local_110 = pbVar23 + 1;
  }
  uVar16 = (uint)(*pbVar23 >> 1);
  if ((*pbVar23 & 1) != 0) {
    uVar16 = (uint)*(undefined8 *)(pbVar23 + 8);
  }
  local_108 = CONCAT44(local_108._4_4_,uVar16);
  pbVar23 = (byte *)**(undefined8 **)(lVar17 + 0x30);
  local_140 = *(byte **)(pbVar23 + 0x10);
  if ((*pbVar23 & 1) == 0) {
    local_140 = pbVar23 + 1;
  }
  local_168 = 0xffffffff;
  local_198 = 0xffffffff;
  local_1c8 = 0xffffffff;
  local_1f8 = 0xffffffff;
  local_228 = 0xffffffff;
  local_258 = 0xffffffff;
  local_78 = 0;
  local_70 = (void *)0x0;
  local_138 = (uint)(*pbVar23 >> 1);
  if ((*pbVar23 & 1) != 0) {
    local_138 = (uint)*(undefined8 *)(pbVar23 + 8);
  }
  local_170 = 0;
  local_1a0 = 0;
  local_1d0 = 0;
  local_200 = 0;
  local_230 = 0;
  local_260 = 0;
  local_80 = 0;
  FUN_00c2ce10(&local_80,
               "Extension number $0 has already been used in \"$1\" by extension \"$2\" defined in $3."
               ,&local_b0,&local_e0,&local_110,&local_140,&local_170,&local_1a0,&local_1d0,
               &local_200,&local_230,&local_260);
  FUN_00b8b28c(param_1,*(undefined8 *)(param_2 + 8),param_3,1,&local_80);
  param_3 = local_70;
  if ((local_80 & 1) == 0) goto LAB_00b9f238;
joined_r0x00b9eeb4:
  if (param_3 != (void *)0x0) {
    plVar26 = *(long **)(lVar13 + 0x30);
    if (plVar26 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar26 = DAT_04859430;
      *(long **)(lVar13 + 0x30) = DAT_04859430;
    }
LAB_00b9ecbc:
    uVar12 = (**(code **)(*plVar26 + 0xf8))(plVar26);
    if (((uVar12 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*plVar26 + 0x18))(plVar26,param_3,0,8);
    }
    else {
      FUN_00c48fe8(plVar26,param_3,0,8);
    }
  }
LAB_00b9f238:
  lVar17 = param_1[0xb];
  if (param_2[0x44] == 0) {
    pbVar23 = *(byte **)(param_2 + 0x50);
  }
  else {
    pbVar23 = *(byte **)(param_2 + 0x60);
    if (pbVar23 == (byte *)0x0) {
      pbVar23 = *(byte **)(param_2 + 0x30);
    }
  }
  pbVar20 = *(byte **)(param_2 + 0x10);
  if ((*pbVar20 & 1) == 0) {
    pbVar20 = pbVar20 + 1;
  }
  else {
    pbVar20 = *(byte **)(pbVar20 + 0x10);
  }
  local_b0 = (byte)pbVar23;
  uStack_af = (undefined7)((ulong)pbVar23 >> 8);
  local_a8 = (uint)pbVar20;
  uStack_a4 = (undefined2)((ulong)pbVar20 >> 0x20);
  uStack_a2 = (undefined2)((ulong)pbVar20 >> 0x30);
  local_110 = param_2;
  FUN_00b79ca0(lVar17 + 0x28,&local_b0,&local_110);
  local_d8 = *(byte **)(param_2 + 0x18);
  if ((*local_d8 & 1) == 0) {
    local_d8 = local_d8 + 1;
  }
  else {
    local_d8 = *(byte **)(local_d8 + 0x10);
  }
  local_e0 = pbVar23;
  FUN_00b79ca0(lVar17 + 0x50,&local_e0,&local_110);
  return;
}


