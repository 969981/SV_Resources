/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0333a3dc; name: FUN_0333a3dc
 */


undefined8 FUN_0333a3dc(long *param_1,long *param_2,uint param_3)

{
  undefined8 **ppuVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  size_t sVar7;
  void *pvVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  ThreadType *pTVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  ulong *puVar18;
  ulong uVar19;
  uint *puVar20;
  FILE *__stream;
  uint uVar21;
  byte *pbVar22;
  short *psVar23;
  uint *puVar24;
  byte *pbVar25;
  short *psVar26;
  long lVar27;
  long *plVar28;
  undefined8 uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long *plVar32;
  char *__s;
  ulong *puVar33;
  ulong uVar34;
  long local_450;
  long *local_448;
  char *local_410;
  undefined8 uStack_408;
  undefined8 *local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  char *local_3e8;
  undefined8 local_3e0;
  char *local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  char local_3c0 [256];
  undefined8 local_2c0;
  undefined8 **local_2b8;
  undefined *local_2b0;
  undefined8 *local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 **local_290;
  undefined8 local_288;
  char *local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 auStack_250 [40];
  int local_228;
  byte *local_1d0;
  ulong local_1c8;
  uint *local_1c0;
  undefined8 local_1b8;
  ulong local_180;
  ulong local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [24];
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  byte *local_98;
  void *local_90;
  undefined8 local_88;
  void *local_78;
  undefined8 local_70;
  
  if ((*(uint *)(param_1 + 0xd) & 0xfffffffe) == 2) {
    uVar29 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xd) = 2;
    iVar4 = (int)param_1[7];
    if (0 < iVar4) {
      lVar27 = 0;
      do {
        plVar32 = *(long **)(param_1[6] + lVar27 * 8);
        if (plVar32 != (long *)0x0) {
          iVar4 = FUN_0333a3dc(plVar32,param_2,param_3 & 1);
          if (iVar4 < 0) {
            return 0x80040200;
          }
          pbVar15 = (byte *)*plVar32;
          pbVar22 = pbVar15;
          if ((*pbVar15 & 1) == 0) {
            do {
              pbVar22 = *(byte **)(pbVar22 + 8);
            } while ((*pbVar22 & 1) == 0);
          }
          if ((*(ulong *)(pbVar22 + 0x10) & 0x1f) != 7) {
            pbVar15 = (byte *)0x0;
          }
          if ((int)plVar32[0xd] != 2) {
            iVar4 = (int)plVar32[9];
            lVar16 = (long)iVar4;
            if ((int)(*(uint *)((long)plVar32 + 0x4c) & 0x7fffffff) <= iVar4) {
              FUN_03340784(plVar32 + 8,PTR_PTR_047d1a50,lVar16 + 1);
              iVar4 = (int)plVar32[9];
            }
            *(long **)(plVar32[8] + (long)iVar4 * 8) = param_1;
            *(int *)(plVar32 + 9) = (int)(lVar16 + 1);
          }
          if ((param_3 & 1) != 0) {
            plVar28 = (long *)0x0;
            plVar32 = (long *)0x0;
            uVar14 = 0;
            pbVar22 = (byte *)0x0;
LAB_0333a504:
            plVar32 = plVar32 + 1;
            pbVar17 = pbVar22;
            if (plVar28 <= plVar32) {
              if (pbVar15 == pbVar22) goto LAB_0333a994;
              psVar23 = (short *)0x0;
              pbVar17 = (byte *)0x0;
              pbVar25 = pbVar15;
              do {
                if (((uint)*(undefined8 *)pbVar25 >> 0x17 & 1) != 0) {
                  uVar21 = (uint)*(undefined8 *)pbVar25 & 0x7fffff;
                  psVar26 = *(short **)
                             (pbVar25 +
                             (ulong)(byte)(POPCOUNT((char)uVar21) + POPCOUNT((char)(uVar21 >> 8)) +
                                          POPCOUNT((char)(uVar21 >> 0x10))) * 8 + 0x10);
                  if (psVar26 != (short *)0x0) {
                    if ((int)psVar26[1] + (int)*psVar26 != 0) {
                      psVar23 = psVar26;
                      pbVar17 = pbVar25;
                    }
                  }
                }
                pbVar25 = *(byte **)(pbVar25 + 8);
              } while (pbVar25 != pbVar22);
              if (pbVar17 == (byte *)0x0) goto LAB_0333a994;
              plVar32 = (long *)(psVar23 + 4);
              plVar28 = plVar32 + (long)psVar23[1] + (long)*psVar23;
            }
            uVar21 = (uint)*(undefined8 *)*plVar32;
            if ((uVar21 >> 0x11 & 1) == 0) {
              uVar12 = 0;
            }
            else {
              uVar21 = uVar21 & 0x1ffff;
              uVar12 = *(ushort *)
                        (*plVar32 +
                        (ulong)(byte)(POPCOUNT((char)uVar21) + POPCOUNT((char)(uVar21 >> 8)) +
                                     POPCOUNT((char)(uVar21 >> 0x10))) * 8 + 0x12);
            }
            pbVar22 = pbVar17;
            if ((uVar12 & 0x30) != 0) {
              puVar33 = (ulong *)*plVar32;
              if ((((uint)*puVar33 >> 0x11 & 1) == 0) ||
                 (uVar21 = (uint)*puVar33 & 0x1ffff,
                 ((uint)puVar33[(ulong)(byte)(POPCOUNT((char)uVar21) + POPCOUNT((char)(uVar21 >> 8))
                                             + POPCOUNT((char)(uVar21 >> 0x10))) + 2] >> 0x10 & 1)
                 == 0)) {
                local_2b8 = (undefined8 **)&DAT_00000018;
                puVar6 = (ulong *)(**(code **)(*(long *)param_1[3] + 0x10))
                                            ((long *)param_1[3],0x18,&local_2b8);
                puVar6[1] = 0;
                puVar6[2] = 0;
                *puVar6 = 0;
                iVar4 = (int)param_1[5];
                if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x7fffffff) <= iVar4) {
                  FUN_03340894(param_1 + 4,(long)iVar4 + 1);
                }
                puVar10 = (undefined8 *)(param_1[4] + (ulong)uVar14 * 8);
                if (0 < (int)(iVar4 - uVar14)) {
                  FUN_031d0240(puVar10 + 1,puVar10,(ulong)(iVar4 - uVar14) << 3);
                }
                *puVar10 = puVar6;
                *(int *)(param_1 + 5) = (int)((long)iVar4 + 1);
                if (lVar27 < (long)(int)param_1[7] + -1) {
                  uVar21 = (uint)*puVar33;
                  puVar18 = puVar33;
                  if ((uVar21 >> 0x10 & 1) == 0) {
                    do {
                      puVar18 = (ulong *)puVar18[1];
                      uVar21 = (uint)*puVar18;
                    } while ((uVar21 >> 0x10 & 1) == 0);
                  }
                  if (*(char *)puVar18[(ulong)(byte)(POPCOUNT((char)(uVar21 & 0xffff)) +
                                                    POPCOUNT((char)((uVar21 & 0xffff) >> 8))) + 2]
                      == '#') goto LAB_0333a6f0;
                  local_228 = 1;
                  local_2b0 = (undefined *)0x8000008000000002;
                  local_2a8 = (undefined8 *)CONCAT62(local_2a8._2_6_,0x23);
                  local_2b8 = &local_2a8;
                  if (puVar33 != (ulong *)0x0) {
                    puVar18 = puVar33;
                    while( true ) {
                      uVar21 = (uint)*puVar18;
                      if ((uVar21 >> 0x10 & 1) != 0) break;
                      if (((*puVar18 & 1) != 0) ||
                         (puVar18 = (ulong *)puVar18[1], puVar18 == (ulong *)0x0))
                      goto LAB_0333a7ec;
                    }
                    uVar21 = uVar21 & 0xffff;
                    __s = (char *)puVar18[(ulong)(byte)(POPCOUNT((char)uVar21) +
                                                       POPCOUNT((char)(uVar21 >> 8))) + 2];
                    if (__s != (char *)0x0) {
                      sVar7 = strlen(__s);
                      iVar5 = (int)sVar7;
                      iVar4 = 0x7f;
                      if (iVar5 + 1 < 0x7f) {
                        iVar4 = iVar5 + 1;
                      }
                      if (local_228 != 0) {
                        iVar4 = iVar5 + 1;
                      }
                      iVar5 = iVar4 + 1;
                      if (iVar4 < 0x80) {
                        iVar13 = 2;
                      }
                      else {
                        FUN_030b4a20(&local_2b8,PTR_PTR_047d1a50 + 0x20,(long)iVar5);
                        iVar13 = (int)local_2b0;
                      }
                      if (iVar13 <= iVar4 || iVar5 < iVar13) {
                        local_2b0 = (undefined *)CONCAT44(local_2b0._4_4_,iVar5);
                      }
                      *(char *)((long)local_2b8 + (long)iVar4) = '\0';
                      memmove((char *)((long)local_2b8 + 1),__s,(long)((int)local_2b0 + -2));
                      local_450 = param_1[3];
                      local_448 = (long *)(local_450 + 0x68);
                      if (local_2b8 != (undefined8 **)0x0) goto LAB_0333a800;
                      uVar19 = 0;
                      goto LAB_0333a844;
                    }
                  }
LAB_0333a7ec:
                  local_450 = param_1[3];
                  local_448 = (long *)(local_450 + 0x68);
LAB_0333a800:
                  ppuVar1 = local_2b8;
                  sVar7 = strlen((char *)local_2b8);
                  sVar7 = (size_t)((int)sVar7 + 1);
                  pvVar8 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                             (PTR_PTR_047d1a50,sVar7);
                  memcpy(pvVar8,ppuVar1,sVar7);
                  uVar19 = (ulong)pvVar8 | 1;
LAB_0333a844:
                  iVar4 = *(int *)(local_450 + 0x70);
                  lVar16 = (long)iVar4;
                  if ((int)(*(uint *)(local_450 + 0x74) & 0x7fffffff) <= iVar4) {
                    FUN_03055ddc(local_448,PTR_PTR_047d1a50,lVar16 + 1);
                    iVar4 = *(int *)(local_450 + 0x70);
                  }
                  puVar2 = local_2b0;
                  *(ulong *)(*local_448 + (long)iVar4 * 8) = uVar19;
                  *(int *)(local_450 + 0x70) = (int)(lVar16 + 1);
                  *puVar6 = *(ulong *)(*(long *)(param_1[3] + 0x68) +
                                       (long)*(int *)(param_1[3] + 0x70) * 8 + -8) &
                            0xfffffffffffffffe;
                  local_2b0 = (undefined *)((ulong)local_2b0 & 0xffffffff00000000);
                  if ((-1 < (long)puVar2) && (local_2b8 != (undefined8 **)0x0)) {
                    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
                  }
                }
                else {
LAB_0333a6f0:
                  if (puVar33 == (ulong *)0x0) {
LAB_0333a710:
                    uVar19 = 0;
                  }
                  else {
                    puVar18 = puVar33;
                    do {
                      uVar21 = (uint)*puVar18;
                      if ((uVar21 >> 0x10 & 1) != 0) {
                        uVar21 = uVar21 & 0xffff;
                        uVar19 = puVar18[(ulong)(byte)(POPCOUNT((char)uVar21) +
                                                      POPCOUNT((char)(uVar21 >> 8))) + 2];
                        goto LAB_0333a788;
                      }
                      if ((*puVar18 & 1) != 0) goto LAB_0333a710;
                      puVar18 = (ulong *)puVar18[1];
                    } while (puVar18 != (ulong *)0x0);
                    uVar19 = 0;
                  }
LAB_0333a788:
                  *puVar6 = uVar19;
                }
                if (((uint)*puVar33 >> 0x11 & 1) == 0) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = (uint)*puVar33 & 0x1ffff;
                  uVar21 = (uint)*(ushort *)
                                  ((long)puVar33 +
                                  (ulong)(byte)(POPCOUNT((char)uVar21) +
                                                POPCOUNT((char)(uVar21 >> 8)) +
                                               POPCOUNT((char)(uVar21 >> 0x10))) * 8 + 0x12);
                }
                *(uint *)(puVar6 + 1) = uVar21;
                uVar14 = uVar14 + 1;
                puVar6[2] = (ulong)puVar33;
                *(undefined2 *)((long)puVar6 + 0xc) = 0;
              }
            }
            goto LAB_0333a504;
          }
        }
LAB_0333a994:
        iVar4 = (int)param_1[7];
        lVar27 = lVar27 + 1;
      } while (lVar27 < iVar4);
    }
    if ((*(byte *)(param_1[3] + 0x158) >> 1 & 1) != 0) {
      *(int *)((long)param_1 + 0x14) = iVar4 + -1;
    }
    puVar20 = (uint *)*param_1;
    puVar24 = puVar20;
    if ((*puVar20 & 1) == 0) {
      do {
        puVar24 = *(uint **)(puVar24 + 2);
      } while ((*puVar24 & 1) == 0);
    }
    if ((*(ulong *)(puVar24 + 4) & 0x1f) != 7) {
      puVar20 = (uint *)0x0;
    }
    local_78 = (void *)0x0;
    local_70 = -0x8000000000000000;
    local_90 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,0x180);
    memset(local_90,0xff,0x180);
    local_88 = 0xf00000000;
    if (0 < (int)param_1[5]) {
      __stream = *(FILE **)PTR_stdout_047cb860;
      ppuVar1 = (undefined8 **)(PTR_DAT_047e5b58 + 0x10);
      puVar2 = PTR_DAT_047e5b60 + 0x10;
      lVar27 = 0;
      puVar10 = (undefined8 *)(PTR_PTR_047d1a50 + 0x20);
      do {
        pvVar8 = local_90;
        puVar31 = *(undefined8 **)(param_1[4] + lVar27 * 8);
        pbVar15 = (byte *)*puVar31;
        local_98 = pbVar15;
        if (pbVar15 != (byte *)0x0) {
          bVar3 = *pbVar15;
          uVar21 = (uint)bVar3;
          uVar14 = 0x811c9dc5;
          if (bVar3 != 0) {
            if (bVar3 == 0x23) goto LAB_0333abe4;
            pbVar22 = pbVar15;
            do {
              pbVar22 = pbVar22 + 1;
              uVar14 = (uVar14 ^ uVar21) * 0x1000193;
              uVar21 = (uint)*pbVar22;
            } while (uVar21 != 0);
          }
          uVar21 = local_88._4_4_;
          uVar34 = (ulong)(int)local_88._4_4_;
          uVar30 = (ulong)(local_88._4_4_ & uVar14);
          uVar19 = *(ulong *)((long)local_90 + uVar30 * 0x18);
          if (uVar19 != 0xffffffffffffffff) {
            do {
              if ((uVar19 == uVar14) &&
                 (iVar4 = strcmp((char *)pbVar15,*(char **)((long)pvVar8 + uVar30 * 0x18 + 8)),
                 iVar4 == 0)) goto LAB_0333ab60;
              uVar30 = uVar30 + 1 & uVar34;
              uVar19 = *(ulong *)((long)pvVar8 + uVar30 * 0x18);
            } while (uVar19 != 0xffffffffffffffff);
          }
          uVar30 = (ulong)(uVar21 + 1);
LAB_0333ab60:
          if ((int)uVar21 < (int)uVar30) {
            FUN_0324e488(&local_90,pbVar15,1);
          }
          else {
            sVar7 = strlen((char *)pbVar15);
            iVar4 = (int)sVar7;
            pbVar15 = (byte *)(**(code **)(*param_2 + 0x18))(param_2,(long)(iVar4 + 2));
            *pbVar15 = 0x23;
            if (-1 < iVar4) {
              strncpy((char *)(pbVar15 + 1),(char *)local_98,(ulong)(iVar4 + 1));
            }
            local_98 = pbVar15;
          }
        }
LAB_0333abe4:
        if (puVar31[2] == 0) {
          if (DAT_0488d698 < 2) {
            if (DAT_046aaf68 != '\0') goto LAB_0333ae8c;
          }
          else {
            if (DAT_046aaf68 == '\0') {
              local_2b8 = (undefined8 **)0x0;
              local_2a8 = &DAT_0488d648;
              uStack_2a0 = 2;
              pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
              local_298 = nn::os::GetThreadId(pTVar11);
              local_270 = 0;
              local_290 = (undefined8 **)0x0;
              local_288 = 0;
              local_280 = (char *)0x0;
              local_278 = 0;
              FUN_0322c554(&local_2b8,"Dropping field {} as it has a null type",&DAT_044e9758,
                           &local_98);
              local_280 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkModifiableTypeSet.cpp"
              ;
              local_278 = 0x1c2;
              uStack_2a0 = CONCAT44(0x2dba8010,(undefined4)uStack_2a0);
              FUN_0322c8e0(&local_2b8);
            }
            else {
LAB_0333ae8c:
              local_2b8 = (undefined8 **)0x0;
              local_2a8 = &DAT_0488d648;
              uStack_2a0 = 2;
              pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
              local_298 = nn::os::GetThreadId(pTVar11);
              local_288 = 0;
              local_280 = (char *)0x0;
              local_278 = 0;
              local_270 = 0;
              local_268._0_4_ = (uint)local_268 & 0xffffff00;
              local_2b0 = (undefined *)0x10000000000;
              local_2b8 = &local_268;
              local_290 = &local_268;
              FUN_0322c554(&local_2b8,"Dropping field {} as it has a null type",&DAT_044e9758,
                           &local_98);
              local_280 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkModifiableTypeSet.cpp"
              ;
              local_278 = 0x1c2;
              uStack_2a0 = CONCAT44(0x2dba8010,(undefined4)uStack_2a0);
              if ((char)local_268 != '\0') {
                sVar7 = strlen((char *)&local_268);
                *(undefined2 *)
                 ((long)&local_268 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff))) = 10;
                printf("%s",&local_268);
                fflush(__stream);
              }
            }
            if (((ulong)local_290 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_290 + -1),0);
            }
          }
          if ((*(byte *)(param_1[3] + 0x158) & 1) == 0) {
            uVar29 = 0x80040200;
            goto LAB_0333b104;
          }
        }
        else {
          uStack_2a0 = 0x4000;
          local_298 = CONCAT44(local_298._4_4_,0xffffffff);
          local_290 = (undefined8 **)0x0;
          local_288 = 0;
          local_280 = (char *)0x8000000000000000;
          local_278 = 0;
          local_270 = 0x8000000000000000;
          local_268._0_4_ = 0;
          local_260 = 0;
          local_258 = 0;
          local_140 = 0;
          local_150 = 0;
          uStack_148 = 0;
          local_11c = 0x80000002;
          local_e0 = 0x8000000300000000;
          local_13c = 0x80000000;
          local_138 = 0;
          local_130 = 0x8000000000000000;
          local_120 = 0;
          local_f8 = 0;
          local_f0 = 0x8000000000000000;
          local_c0 = 0;
          local_b8 = 0;
          local_b0 = 0x8000000000000000;
          local_a8 = 0;
          local_9e = 0;
          local_a0 = 1;
          local_2b8 = ppuVar1;
          local_2b0 = puVar2;
          local_2a8 = puVar10;
          local_128 = auStack_118;
          local_e8 = auStack_d8;
          memset(auStack_250,0,0x100);
          puVar33 = (ulong *)puVar31[2];
          while( true ) {
            uVar14 = (uint)*puVar33;
            if ((uVar14 >> 0x1a & 1) != 0) break;
            if (((*puVar33 & 1) != 0) || (puVar33 = (ulong *)puVar33[1], puVar33 == (ulong *)0x0))
            goto LAB_0333adbc;
          }
          if (puVar33 != (ulong *)0x0) {
            uVar14 = uVar14 & 0x3ffffff;
            local_150 = puVar33[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8))
                                             + POPCOUNT((char)(uVar14 >> 0x10)) +
                                               POPCOUNT((char)(uVar14 >> 0x18))) + 2];
            if (local_150 == 0) goto LAB_0333adc0;
            local_258 = 0x40f0000;
            local_180 = local_150;
            goto LAB_0333adc8;
          }
LAB_0333adbc:
          local_150 = 0;
LAB_0333adc0:
          local_258 = 0xf0000;
LAB_0333adc8:
          local_260 = puVar31[2];
          local_1d0 = local_98;
          uVar21 = *(uint *)(puVar31 + 1) << 0x10;
          local_1b8 = 0;
          uVar14 = uVar21 | 0x200000;
          if ((*(uint *)(puVar31 + 1) & 0x30) != 0) {
            uVar14 = uVar21;
          }
          local_1c8 = (ulong)uVar14 | (ulong)*(ushort *)((long)puVar31 + 0xc);
          local_1c0 = puVar20;
          iVar4 = FUN_031d8d9c(&local_2b8,param_2,&local_2c0);
          uVar29 = local_2c0;
          if (iVar4 < 0) {
            if (DAT_0488d698 == 0) {
              if (DAT_046aaf68 != '\0') goto LAB_0333b178;
            }
            else {
              if (DAT_046aaf68 == '\0') {
                local_410 = (char *)0x0;
                local_400 = &DAT_0488d648;
                uStack_3f8 = 1;
                pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
                local_3f0 = nn::os::GetThreadId(pTVar11);
                local_3e8 = (char *)0x0;
                local_3e0 = 0;
                local_3d8 = (char *)0x0;
                local_3d0 = 0;
                uStack_3c8 = 0;
                FUN_0322c554(&local_410,"Failed to allocate type from builder",PTR_DAT_047d1b38);
                local_3d8 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkModifiableTypeSet.cpp"
                ;
                local_3d0 = 0x1b8;
                FUN_0322c8e0(&local_410);
              }
              else {
LAB_0333b178:
                local_400 = &DAT_0488d648;
                uStack_3f8 = 1;
                pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
                local_3f0 = nn::os::GetThreadId(pTVar11);
                local_3e0 = 0;
                local_3d8 = (char *)0x0;
                local_3d0 = 0;
                uStack_3c8 = 0;
                local_3c0[0] = '\0';
                uStack_408 = 0x10000000000;
                local_410 = local_3c0;
                local_3e8 = local_3c0;
                FUN_0322c554(&local_410,"Failed to allocate type from builder",PTR_DAT_047d1b38);
                local_3d8 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkModifiableTypeSet.cpp"
                ;
                local_3d0 = 0x1b8;
                if (local_3c0[0] != '\0') {
                  sVar7 = strlen(local_3c0);
                  (local_3c0 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[0] = '\n';
                  (local_3c0 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[1] = '\0';
                  printf("%s",local_3c0);
                  fflush(__stream);
                }
              }
              if (((ulong)local_3e8 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_3e8 + -1,0);
              }
            }
            uVar29 = 0x80040200;
            FUN_031d798c(&local_2b8);
            goto LAB_0333b104;
          }
          lVar16 = (long)(int)local_70;
          if ((int)(local_70._4_4_ & 0x7fffffff) <= (int)local_70) {
            FUN_033409a8(&local_78,PTR_PTR_047d1a50,lVar16 + 1);
          }
          *(undefined8 *)((long)local_78 + (long)(int)local_70 * 8) = uVar29;
          local_70 = CONCAT44(local_70._4_4_,(int)(lVar16 + 1));
          FUN_031d798c(&local_2b8);
        }
        lVar27 = lVar27 + 1;
      } while (lVar27 < (int)param_1[5]);
    }
    lVar27 = local_70;
    pvVar8 = local_78;
    uVar19 = (ulong)((int)local_70 << 3);
    puVar9 = (undefined2 *)(**(code **)(*param_2 + 0x18))(param_2,uVar19 + 8);
    *puVar9 = (short)lVar27;
    puVar9[1] = 0;
    puVar9[2] = (short)lVar27;
    if (pvVar8 == (void *)0x0) {
      memset(puVar9 + 4,0,uVar19 & 0xfffffff8);
    }
    else {
      memcpy(puVar9 + 4,pvVar8,uVar19);
    }
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar19 = CONCAT44(uVar14,uVar14) & 0x7fffff007fffff;
    *(undefined2 **)
     (puVar20 +
     (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                  POPCOUNT((char)(uVar19 >> 0x10))) * 2 + 4) = puVar9;
    if ((uVar14 >> 0xf & 1) != 0) {
      lVar27 = param_1[0xb];
      puVar10 = (undefined8 *)
                (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                          (PTR_PTR_047d1a50,(long)(int)lVar27 * 0x10 + 0x10);
      *puVar10 = 0;
      puVar10[1] = (long)(int)lVar27;
      param_1[0xc] = (long)puVar10;
      memcpy(puVar10 + 2,(void *)param_1[10],(long)(int)param_1[0xb] << 4);
      *(long *)(puVar20 +
               (ulong)(byte)(POPCOUNT((char)(*puVar20 & 0x7fff)) +
                            POPCOUNT((char)((*puVar20 & 0x7fff) >> 8))) * 2 + 4) = param_1[0xc];
    }
    uVar29 = 0;
    *(undefined4 *)(param_1 + 0xd) = 3;
LAB_0333b104:
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_90,0);
    lVar27 = local_70;
    uVar19 = (ulong)local_70._4_4_;
    local_70 = (ulong)local_70._4_4_ << 0x20;
    if ((-1 < lVar27) && (local_78 != (void *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_78,uVar19 << 3);
    }
  }
  return uVar29;
}


