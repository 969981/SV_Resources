/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0339b2e0; name: FUN_0339b2e0
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0339b2e0(long param_1,long *param_2,int param_3,ulong param_4,long *param_5)

{
  char *pcVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulong *puVar12;
  ThreadType *pTVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  void *pvVar18;
  long lVar19;
  char *pcVar20;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  undefined2 uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong *puVar27;
  int iVar28;
  uint uVar29;
  ulong *puVar30;
  char *pcVar31;
  ulong uVar32;
  bool bVar33;
  long lVar34;
  int *piVar35;
  int iVar36;
  char *pcVar37;
  ulong uVar38;
  size_t sVar39;
  long *plVar40;
  undefined1 auVar41 [16];
  char *local_358;
  ulong *local_350;
  ulong local_348;
  ulong local_340;
  char *local_338 [2];
  undefined8 *local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  ulong local_310;
  undefined8 local_308;
  char *pcStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  code *local_298;
  undefined *local_288;
  undefined *local_280;
  undefined1 *local_248;
  undefined *local_208;
  code *local_1f8;
  undefined *local_1f0;
  undefined *local_1c0;
  undefined *local_1b0;
  code *local_1a8;
  long *local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined1 local_90;
  long local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  
  local_80[0] = 0x80040200;
  if (*param_2 == 0) {
    if (DAT_0488e0e8 == '\0') {
      return 0x80040200;
    }
    local_338[0] = (char *)0x0;
    local_328 = &DAT_0488e098;
    uStack_320 = 1;
    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
    local_318 = nn::os::GetThreadId(pTVar13);
    local_308 = 0;
    pcStack_300 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
    ;
    local_310 = 0;
    local_2f8 = 0x702;
    uStack_2f0 = 0;
    FUN_0322c554(local_338,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_047e5dc0,"!topvar",local_80
                );
    FUN_0322c554(local_338,"Trying to serialize empty Var",PTR_DAT_047d1b38);
LAB_0339b488:
    FUN_0322c8e0(local_338);
    if ((local_310 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_310 - 1,0);
    }
    return local_80[0];
  }
  local_80[0] = 0x80040200;
  puVar12 = (ulong *)param_2[1];
  uVar22 = 0;
  puVar30 = puVar12;
  do {
    uVar10 = (uint)*puVar30;
    if ((uVar10 >> 0x15 & 1) == 0) {
      uVar32 = 0;
    }
    else {
      uVar32 = CONCAT44(uVar10,uVar10) & 0x1fffff001fffff;
      uVar32 = puVar30[(ulong)(byte)(POPCOUNT((char)uVar32) + POPCOUNT((char)(uVar32 >> 8)) +
                                    POPCOUNT((char)(uVar32 >> 0x10))) + 2];
    }
    uVar22 = uVar32 | uVar22;
  } while (((*puVar30 & 1) == 0) && (puVar30 = (ulong *)puVar30[1], puVar30 != (ulong *)0x0));
  if ((uVar22 & 3) != 0) {
    if (DAT_0488e0e8 == '\0') {
      return 0x80040200;
    }
    local_338[0] = (char *)0x0;
    local_328 = &DAT_0488e098;
    uStack_320 = 1;
    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
    local_318 = nn::os::GetThreadId(pTVar13);
    local_308 = 0;
    pcStack_300 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
    ;
    local_310 = 0;
    local_2f8 = 0x703;
    uStack_2f0 = 0;
    FUN_0322c554(local_338,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_047e68a0,
                 "!topvar.getType()->isSerializable()",local_80);
    local_358 = (char *)param_2[1];
    FUN_0322c554(local_338,"Trying to serialize instance of non-serializable type \'{}\'",
                 PTR_DAT_047e5e48,&local_358);
    goto LAB_0339b488;
  }
  if (((puVar12 != (ulong *)0x0) &&
      (uVar22 = FUN_031dd260(puVar12,PTR_DAT_047e5c40), (uVar22 & 1) != 0)) &&
     (puVar30 = (ulong *)*param_2, puVar30 != (ulong *)0x0)) {
    if ((ulong *)0x1 < puVar30) {
      uVar22 = *puVar30;
      uVar10 = (uint)uVar22;
      puVar12 = puVar30;
      if ((uVar10 >> 0x11 & 1) != 0) {
        while ((uVar10 >> 0x12 & 1) == 0) {
          if (((uVar22 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0)) {
            uVar22 = 0;
            goto LAB_0339c598;
          }
          uVar22 = *puVar12;
          uVar10 = (uint)uVar22;
        }
        uVar22 = CONCAT44(uVar10,uVar10) & 0x3ffff0003ffff;
        uVar22 = puVar12[(ulong)(byte)(POPCOUNT((char)uVar22) + POPCOUNT((char)(uVar22 >> 8)) +
                                      POPCOUNT((char)(uVar22 >> 0x10))) + 2];
LAB_0339c598:
        auVar41 = FUN_0339c900(param_1,uVar22,1);
        local_78 = auVar41;
        if (*(char *)(param_1 + 0x290) != '\0') {
          FUN_0336059c(param_1 + 0x2e8,local_78 + 8);
          if ((extraout_x1_03 & 1) != 0) {
            if (*(int *)(param_1 + 0x210) < (int)local_78._8_4_) {
              *(undefined4 *)(param_1 + 0x210) = local_78._8_4_;
            }
            lVar19 = FUN_031e9ec4(param_1 + 0x2a0,local_78._0_8_);
            iVar11 = *(int *)(param_1 + 0x20);
            lVar25 = (long)iVar11;
            uVar22 = local_78._8_8_ & 0xffffffff;
            if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= iVar11) {
              FUN_03394d44(param_1 + 0x18,PTR_PTR_047d1a50,lVar25 + 1);
              iVar11 = *(int *)(param_1 + 0x20);
            }
            *(ulong *)(*(long *)(param_1 + 0x18) + (long)iVar11 * 8) = uVar22 | lVar19 << 0x20;
            *(int *)(param_1 + 0x20) = (int)(lVar25 + 1);
          }
        }
        puVar26 = auVar41._0_8_;
        do {
          if (((uint)*puVar26 >> 0x17 & 1) != 0) {
            uVar10 = (uint)*puVar26 & 0x7fffff;
            lVar19 = puVar26[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                                          POPCOUNT((char)(uVar10 >> 0x10))) + 2];
            goto LAB_0339c670;
          }
          puVar26 = (undefined8 *)puVar26[1];
        } while (puVar26 != (undefined8 *)0x0);
        lVar19 = 0;
LAB_0339c670:
        uVar6 = *(ushort *)(lVar19 + 4);
        if ((short)uVar6 < 1) {
          uVar22 = 0xffffffff;
        }
        else {
          uVar22 = 0;
          do {
            puVar12 = puVar30;
            do {
              uVar10 = (uint)*puVar12;
              if ((uVar10 >> 0x10 & 1) != 0) {
                uVar10 = uVar10 & 0xffff;
                pcVar37 = (char *)puVar12[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                       POPCOUNT((char)(uVar10 >> 8))) + 2];
                goto LAB_0339c6c8;
              }
            } while (((*puVar12 & 1) == 0) &&
                    (puVar12 = (ulong *)puVar12[1], puVar12 != (ulong *)0x0));
            pcVar37 = (char *)0x0;
LAB_0339c6c8:
            puVar12 = *(ulong **)(lVar19 + uVar22 * 8 + 8);
            if (puVar12 != (ulong *)0x0) {
              puVar27 = puVar12;
              do {
                uVar10 = (uint)*puVar27;
                if ((uVar10 >> 0x10 & 1) != 0) {
                  uVar10 = uVar10 & 0xffff;
                  pcVar20 = (char *)puVar27[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                         POPCOUNT((char)(uVar10 >> 8))) + 2];
                  goto LAB_0339c714;
                }
              } while (((*puVar27 & 1) == 0) &&
                      (puVar27 = (ulong *)puVar27[1], puVar27 != (ulong *)0x0));
            }
            pcVar20 = (char *)0x0;
LAB_0339c714:
            iVar11 = strcmp(pcVar20,pcVar37);
            if (iVar11 == 0) {
              if ((((ulong *)0x1 < puVar12) && (uVar10 = (uint)*puVar12, (uVar10 >> 0x11 & 1) != 0))
                 && (uVar32 = CONCAT44(uVar10,uVar10) & 0x1ffff0001ffff,
                    ((uint)puVar12[(ulong)(byte)(POPCOUNT((char)uVar32) +
                                                 POPCOUNT((char)(uVar32 >> 8)) +
                                                POPCOUNT((char)(uVar32 >> 0x10))) + 2] >> 0x14 & 1)
                    != 0)) {
                local_358 = (char *)(auVar41._8_8_ & 0xffffffff | uVar22 << 0x20);
                local_338[0] = (char *)CONCAT44(local_338[0]._4_4_,0xffffffff);
                iVar11 = FUN_033a6558(param_1 + 0x120,&local_358,local_338);
                piVar35 = (int *)(*(long *)(param_1 + 0x120) + (long)iVar11 * 0xc + 8);
                if (*piVar35 < 0) {
                  local_338[0] = pcVar37;
                  lVar19 = FUN_033a53d0(param_1 + 0x80,local_338);
                  *piVar35 = (int)((ulong)(lVar19 - *(long *)(param_1 + 0x80)) >> 3);
                  if (*(char *)(param_1 + 0x290) != '\0') {
                    lVar19 = FUN_031ea078(param_1 + 0x2c8,auVar41._0_8_,local_338);
                    if ((char)local_338[0] != '\0') {
                      iVar11 = *(int *)(param_1 + 0x150);
                      lVar25 = (long)iVar11;
                      if ((int)(*(uint *)(param_1 + 0x154) & 0x7fffffff) <= iVar11) {
                        FUN_03394d44(param_1 + 0x148,PTR_PTR_047d1a50,lVar25 + 1);
                        iVar11 = *(int *)(param_1 + 0x150);
                      }
                      *(ulong *)(*(long *)(param_1 + 0x148) + (long)iVar11 * 8) =
                           auVar41._8_8_ & 0xffffffff | lVar19 << 0x20;
                      *(int *)(param_1 + 0x150) = (int)(lVar25 + 1);
                    }
                  }
                }
              }
              goto LAB_0339c840;
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 != uVar6);
          uVar22 = 0xffffffff;
        }
LAB_0339c840:
        iVar11 = *(int *)(param_1 + 0x168);
        plVar3 = (long *)(param_1 + 0x160);
        if (iVar11 <= param_3) {
          iVar28 = (int)((long)param_3 + 1);
          if ((int)(*(uint *)(param_1 + 0x16c) & 0x7fffffff) <= param_3) {
            FUN_033a5b98(plVar3,(long)iVar28);
            iVar11 = *(int *)(param_1 + 0x168);
          }
          if (param_3 < iVar11) {
            if (iVar28 < iVar11) {
              *(int *)(param_1 + 0x168) = iVar28;
            }
          }
          else {
            pvVar18 = (void *)(*(long *)(param_1 + 0x160) + (long)iVar11 * 0xc);
            *(int *)(param_1 + 0x168) = iVar28;
            memset(pvVar18,0,
                   ((((*(long *)(param_1 + 0x160) + ((long)param_3 + 1) * 0xc) - (long)pvVar18) -
                    0xcU) / 0xc) * 0xc + 0xc);
          }
        }
        *(uint *)(*plVar3 + (long)param_3 * 0xc) = auVar41._8_4_ | 0x50000000;
        *(undefined4 *)(*plVar3 + (long)param_3 * 0xc + 4) = 0xffffffff;
        *(int *)(*plVar3 + (long)param_3 * 0xc + 8) = (int)uVar22;
        return 0;
      }
    }
    auVar41 = FUN_0339c900(param_1,puVar30,1);
    iVar11 = *(int *)(param_1 + 0x168);
    if (iVar11 <= param_3) {
      iVar28 = (int)((long)param_3 + 1);
      if ((int)(*(uint *)(param_1 + 0x16c) & 0x7fffffff) <= param_3) {
        FUN_033a5b98(param_1 + 0x160,(long)iVar28);
        iVar11 = *(int *)(param_1 + 0x168);
      }
      if (param_3 < iVar11) {
        if (iVar28 < iVar11) {
          *(int *)(param_1 + 0x168) = iVar28;
        }
      }
      else {
        pvVar18 = (void *)(*(long *)(param_1 + 0x160) + (long)iVar11 * 0xc);
        *(int *)(param_1 + 0x168) = iVar28;
        memset(pvVar18,0,
               ((((*(long *)(param_1 + 0x160) + ((long)param_3 + 1) * 0xc) - (long)pvVar18) - 0xcU)
               / 0xc) * 0xc + 0xc);
      }
    }
    *(uint *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc) = auVar41._8_4_ | 0x40000000;
    *(undefined4 *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc + 4) = 0xffffffff;
    *(undefined4 *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc + 8) = 0;
    if (*(char *)(param_1 + 0x290) == '\0') {
      return 0;
    }
    local_78 = auVar41;
    FUN_0336059c(param_1 + 0x2e8,local_78 + 8);
    if ((extraout_x1_02 & 1) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x210) < (int)local_78._8_4_) {
      *(undefined4 *)(param_1 + 0x210) = local_78._8_4_;
    }
    lVar19 = FUN_031e9ec4(param_1 + 0x2a0,local_78._0_8_);
    iVar11 = *(int *)(param_1 + 0x20);
    lVar25 = (long)iVar11;
    uVar22 = local_78._8_8_ & 0xffffffff;
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= iVar11) {
      FUN_03394d44(param_1 + 0x18,PTR_PTR_047d1a50,lVar25 + 1);
      iVar11 = *(int *)(param_1 + 0x20);
    }
    *(ulong *)(*(long *)(param_1 + 0x18) + (long)iVar11 * 8) = uVar22 | lVar19 << 0x20;
    *(int *)(param_1 + 0x20) = (int)(lVar25 + 1);
    return 0;
  }
  uVar5 = *(undefined1 *)(param_1 + 0x290);
  plVar3 = (long *)(param_1 + 0x160);
  plVar17 = (long *)(param_1 + 8);
  memset(local_338,0,0x288);
  local_298 = FUN_03225a30;
  local_288 = PTR_LAB_047e5f00;
  local_1f8 = FUN_032259b8;
  local_208 = PTR_LAB_047e5f08;
  local_248 = &LAB_03225af8;
  local_280 = PTR_LAB_047e5f10;
  local_1c0 = PTR_FUN_047e5f18;
  local_1f0 = PTR_LAB_047e5f28;
  local_1a8 = FUN_03225a94;
  local_a8 = 0;
  local_1b0 = PTR_FUN_047e5f20;
  local_a0 = -0x8000000000000000;
  local_b0 = param_5;
  local_98 = param_1;
  local_90 = uVar5;
  local_88 = param_1 + 0x1a0;
  auVar41 = FUN_0339c900(param_1,param_2[1],0);
  puVar12 = auVar41._0_8_;
  puVar30 = puVar12;
  while( true ) {
    uVar10 = (uint)*puVar30;
    if ((uVar10 >> 0x14 & 1) != 0) break;
    if (((*puVar30 & 1) != 0) || (puVar30 = (ulong *)puVar30[1], puVar30 == (ulong *)0x0))
    goto LAB_0339b664;
  }
  if (puVar30 != (ulong *)0x0) {
    uVar22 = CONCAT44(uVar10,uVar10) & 0xfffff000fffff;
    uVar22 = (ulong)(*(ushort *)
                      ((long)puVar30 +
                      (ulong)(byte)(POPCOUNT((char)uVar22) + POPCOUNT((char)(uVar22 >> 8)) +
                                   POPCOUNT((char)(uVar22 >> 0x10))) * 8 + 0x12) & 0xfff);
    goto LAB_0339b66c;
  }
LAB_0339b664:
  uVar22 = 0;
LAB_0339b66c:
  iVar11 = *(int *)(param_1 + 0x10);
  iVar28 = 0;
  if (uVar22 != 0) {
    iVar28 = (int)((ulong)(long)iVar11 / uVar22);
  }
  iVar9 = (int)uVar22;
  iVar28 = iVar11 - iVar28 * iVar9;
  uVar10 = iVar9 - iVar28;
  if (iVar28 != 0 && uVar10 != 0) {
    iVar28 = uVar10 + iVar11;
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar28) {
      FUN_030b4a20(plVar17,PTR_PTR_047d1a50,(long)iVar28);
    }
    if (0 < (int)uVar10) {
      memset((void *)(*plVar17 + (long)iVar11),0,(ulong)uVar10);
    }
    *(int *)(param_1 + 0x10) = iVar28;
  }
  iVar11 = *(int *)(param_1 + 0x358);
  if (*(int *)(param_1 + 0x358) <= iVar9) {
    iVar11 = iVar9;
  }
  *(int *)(param_1 + 0x358) = iVar11;
  puVar2 = local_78 + 8;
  local_78 = auVar41;
  if (*(char *)(param_1 + 0x290) != '\0') {
    FUN_0336059c(param_1 + 0x2e8,puVar2);
    if ((extraout_x1 & 1) != 0) {
      if (*(int *)(param_1 + 0x210) < (int)local_78._8_4_) {
        *(undefined4 *)(param_1 + 0x210) = local_78._8_4_;
      }
      lVar19 = FUN_031e9ec4(param_1 + 0x2a0,local_78._0_8_);
      iVar11 = *(int *)(param_1 + 0x20);
      lVar25 = (long)iVar11;
      uVar22 = local_78._8_8_ & 0xffffffff;
      if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= iVar11) {
        FUN_03394d44(param_1 + 0x18,PTR_PTR_047d1a50,lVar25 + 1);
        iVar11 = *(int *)(param_1 + 0x20);
      }
      *(ulong *)(*(long *)(param_1 + 0x18) + (long)iVar11 * 8) = uVar22 | lVar19 << 0x20;
      *(int *)(param_1 + 0x20) = (int)(lVar25 + 1);
    }
  }
  if ((param_4 & 1) == 0) {
    iVar9 = (**(code **)(*param_5 + 0x18))(param_5,param_2);
    iVar28 = *(int *)(param_1 + 0x168);
    iVar11 = param_3;
    if (param_3 <= iVar9) {
      iVar11 = iVar9;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    if (iVar28 <= iVar11) {
      iVar36 = iVar11 + 1;
      if ((int)(*(uint *)(param_1 + 0x16c) & 0x7fffffff) <= iVar11) {
        FUN_033a5b98(plVar3,(long)iVar36);
        iVar28 = *(int *)(param_1 + 0x168);
      }
      if (iVar11 < iVar28) {
        if (iVar36 < iVar28) {
          *(int *)(param_1 + 0x168) = iVar36;
        }
      }
      else {
        pvVar18 = (void *)(*(long *)(param_1 + 0x160) + (long)iVar28 * 0xc);
        *(int *)(param_1 + 0x168) = iVar36;
        memset(pvVar18,0,
               ((((*(long *)(param_1 + 0x160) + (long)iVar36 * 0xc) - (long)pvVar18) - 0xcU) / 0xc)
               * 0xc + 0xc);
      }
    }
    *(uint *)(*plVar3 + (long)iVar9 * 0xc) = auVar41._8_4_ | 0x30000000;
    *(undefined4 *)(*plVar3 + (long)iVar9 * 0xc + 4) = uVar4;
    *(int *)(*plVar3 + (long)iVar9 * 0xc + 8) = param_3;
    if (*(uint *)(*plVar3 + (long)param_3 * 0xc) >> 0x1c != 0) goto LAB_0339b940;
    lVar19 = *plVar3 + (long)param_3 * 0xc;
  }
  else {
    iVar11 = *(int *)(param_1 + 0x168);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    if (iVar11 <= param_3) {
      iVar28 = (int)((long)param_3 + 1);
      if ((int)(*(uint *)(param_1 + 0x16c) & 0x7fffffff) <= param_3) {
        FUN_033a5b98(plVar3,(long)iVar28);
        iVar11 = *(int *)(param_1 + 0x168);
      }
      if (param_3 < iVar11) {
        if (iVar28 < iVar11) {
          *(int *)(param_1 + 0x168) = iVar28;
        }
      }
      else {
        pvVar18 = (void *)(*(long *)(param_1 + 0x160) + (long)iVar11 * 0xc);
        *(int *)(param_1 + 0x168) = iVar28;
        memset(pvVar18,0,
               ((((*(long *)(param_1 + 0x160) + ((long)param_3 + 1) * 0xc) - (long)pvVar18) - 0xcU)
               / 0xc) * 0xc + 0xc);
      }
    }
    iVar9 = 1;
    *(uint *)(*plVar3 + (long)param_3 * 0xc) = auVar41._8_4_ | 0x10000000;
    *(undefined4 *)(*plVar3 + (long)param_3 * 0xc + 4) = uVar4;
    lVar19 = *plVar3 + (long)param_3 * 0xc;
  }
  *(int *)(lVar19 + 8) = iVar9;
LAB_0339b940:
  lVar19 = param_1 + 0x228;
  if ((ulong *)param_2[1] == puVar12) {
    uVar14 = FUN_031fa694(lVar19);
  }
  else {
    uVar14 = FUN_031fa91c(lVar19,(ulong *)param_2[1],puVar12);
  }
  puVar30 = puVar12;
  while( true ) {
    uVar10 = (uint)*puVar30;
    if ((uVar10 >> 0x14 & 1) != 0) break;
    if (((*puVar30 & 1) != 0) || (puVar30 = (ulong *)puVar30[1], puVar30 == (ulong *)0x0))
    goto LAB_0339b9ac;
  }
  if (puVar30 != (ulong *)0x0) {
    uVar22 = CONCAT44(uVar10,uVar10) & 0xfffff000fffff;
    sVar39 = (size_t)(ushort)puVar30[(ulong)(byte)(POPCOUNT((char)uVar22) +
                                                   POPCOUNT((char)(uVar22 >> 8)) +
                                                  POPCOUNT((char)(uVar22 >> 0x10))) + 2];
    goto LAB_0339b9b0;
  }
LAB_0339b9ac:
  sVar39 = 0;
LAB_0339b9b0:
  uVar10 = (uint)*puVar12;
  if ((uVar10 >> 0x14 & 1) == 0) {
    if (((*puVar12 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0))
    goto LAB_0339b9f0;
    goto LAB_0339b9b0;
  }
  if (puVar12 != (ulong *)0x0) {
    uVar22 = CONCAT44(uVar10,uVar10) & 0xfffff000fffff;
    uVar22 = (ulong)(ushort)puVar12[(ulong)(byte)(POPCOUNT((char)uVar22) +
                                                  POPCOUNT((char)(uVar22 >> 8)) +
                                                 POPCOUNT((char)(uVar22 >> 0x10))) + 2];
    goto LAB_0339b9f4;
  }
LAB_0339b9f0:
  uVar22 = 0;
LAB_0339b9f4:
  iVar11 = *(int *)(param_1 + 0x10);
  lVar25 = (long)iVar11 + uVar22;
  iVar28 = (int)lVar25;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar28) {
    FUN_030b4a20(plVar17,PTR_PTR_047d1a50,lVar25);
  }
  pvVar18 = (void *)(*(long *)(param_1 + 8) + (long)iVar11);
  *(int *)(param_1 + 0x10) = iVar28;
  memset(pvVar18,0,sVar39);
  puVar30 = (ulong *)param_2[1];
  while( true ) {
    uVar10 = (uint)*puVar30;
    if ((uVar10 >> 0x14 & 1) != 0) break;
    if (((*puVar30 & 1) != 0) || (puVar30 = (ulong *)puVar30[1], puVar30 == (ulong *)0x0))
    goto LAB_0339ba80;
  }
  if (puVar30 != (ulong *)0x0) {
    uVar22 = CONCAT44(uVar10,uVar10) & 0xfffff000fffff;
    uVar21 = (undefined2)
             puVar30[(ulong)(byte)(POPCOUNT((char)uVar22) + POPCOUNT((char)(uVar22 >> 8)) +
                                  POPCOUNT((char)(uVar22 >> 0x10))) + 2];
    goto LAB_0339ba84;
  }
LAB_0339ba80:
  uVar21 = 0;
LAB_0339ba84:
  FUN_0339e128(local_338,uVar14,pvVar18,*param_2,uVar21,sVar39,1);
  if (0 < (int)local_a0) {
    lVar25 = 0;
    do {
      plVar40 = (long *)(local_a8 + lVar25 * 0x20);
      uVar22 = plVar40[2];
      lVar15 = *plVar40;
      puVar30 = (ulong *)plVar40[1];
      if ((uVar22 & 1) != 0) {
        piVar35 = (int *)((uVar22 & 0xfffffffffffffffe) + 8);
        do {
          cVar8 = '\x01';
          bVar33 = (bool)ExclusiveMonitorPass(piVar35,0x10);
          if (bVar33) {
            *piVar35 = *piVar35 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      if (puVar30 == (ulong *)0x0) {
        uVar32 = 0;
LAB_0339bc10:
        bVar33 = false;
        local_80[0] = 0x80040200;
      }
      else {
        iVar11 = *(int *)(local_a8 + lVar25 * 0x20 + 0x18);
        lVar34 = (long)iVar11;
        uVar23 = *puVar30;
        puVar12 = puVar30;
        if ((uVar23 & 1) == 0) {
          do {
            puVar12 = (ulong *)puVar12[1];
          } while ((*puVar12 & 1) == 0);
        }
        if ((puVar12[2] & 0x1f) == 8) {
          if ((uVar22 & 1) != 0) {
            piVar35 = (int *)((uVar22 & 0xfffffffffffffffe) + 8);
            do {
              cVar8 = '\x01';
              bVar33 = (bool)ExclusiveMonitorPass(piVar35,0x10);
              if (bVar33) {
                *piVar35 = *piVar35 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          uVar32 = uVar22;
          if (lVar15 == 0) {
            uVar23 = *puVar30;
            goto LAB_0339bbd8;
          }
          local_348 = 0;
          local_340 = 0;
          local_358 = (char *)0x0;
          local_350 = (ulong *)0x0;
          (**(code **)(*(long *)(uVar22 & 0xfffffffffffffffe) + 0x50))
                    ((long *)(uVar22 & 0xfffffffffffffffe),lVar15,puVar30,&local_358);
          puVar30 = local_350;
          auVar41 = FUN_0339c900(param_1,local_350,0);
          uVar23 = local_348;
          puVar27 = auVar41._0_8_;
          iVar28 = (int)local_348;
          puVar12 = puVar27;
          do {
            uVar10 = (uint)*puVar12;
            if ((uVar10 >> 0x14 & 1) != 0) {
              uVar29 = 0;
              if (puVar12 != (ulong *)0x0) {
                uVar38 = CONCAT44(uVar10,uVar10) & 0xfffff000fffff;
                uVar29 = *(ushort *)
                          ((long)puVar12 +
                          (ulong)(byte)(POPCOUNT((char)uVar38) + POPCOUNT((char)(uVar38 >> 8)) +
                                       POPCOUNT((char)(uVar38 >> 0x10))) * 8 + 0x12) & 0xfff;
              }
              goto LAB_0339be08;
            }
            if ((*puVar12 & 1) != 0) {
              uVar29 = 0;
              goto LAB_0339be08;
            }
            puVar12 = (ulong *)puVar12[1];
          } while (puVar12 != (ulong *)0x0);
          uVar29 = 0;
LAB_0339be08:
          iVar9 = *(int *)(param_1 + 0x10);
          uVar10 = *(uint *)(param_1 + 0x224);
          if ((int)*(uint *)(param_1 + 0x224) <= (int)uVar29) {
            uVar10 = uVar29;
          }
          iVar36 = 0;
          if ((ulong)uVar10 != 0) {
            iVar36 = (int)((ulong)(long)iVar9 / (ulong)uVar10);
          }
          iVar36 = iVar9 - iVar36 * uVar10;
          uVar29 = uVar10 - iVar36;
          if (iVar36 != 0 && uVar29 != 0) {
            iVar36 = uVar29 + iVar9;
            if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar36) {
              FUN_030b4a20(plVar17,PTR_PTR_047d1a50,(long)iVar36);
            }
            if (0 < (int)uVar29) {
              memset((void *)(*plVar17 + (long)iVar9),0,(ulong)uVar29);
            }
            *(int *)(param_1 + 0x10) = iVar36;
          }
          uVar29 = *(uint *)(param_1 + 0x358);
          if ((int)*(uint *)(param_1 + 0x358) <= (int)uVar10) {
            uVar29 = uVar10;
          }
          *(uint *)(param_1 + 0x358) = uVar29;
          local_78 = auVar41;
          if (*(char *)(param_1 + 0x290) != '\0') {
            FUN_0336059c(param_1 + 0x2e8,puVar2);
            if ((extraout_x1_01 & 1) != 0) {
              if (*(int *)(param_1 + 0x210) < (int)local_78._8_4_) {
                *(undefined4 *)(param_1 + 0x210) = local_78._8_4_;
              }
              lVar15 = FUN_031e9ec4(param_1 + 0x2a0,local_78._0_8_);
              iVar9 = *(int *)(param_1 + 0x20);
              lVar24 = (long)iVar9;
              uVar38 = local_78._8_8_ & 0xffffffff;
              if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= iVar9) {
                FUN_03394d44(param_1 + 0x18,PTR_PTR_047d1a50,lVar24 + 1);
                iVar9 = *(int *)(param_1 + 0x20);
              }
              *(ulong *)(*(long *)(param_1 + 0x18) + (long)iVar9 * 8) = uVar38 | lVar15 << 0x20;
              *(int *)(param_1 + 0x20) = (int)(lVar24 + 1);
            }
          }
          iVar9 = *(int *)(param_1 + 0x168);
          uVar4 = *(undefined4 *)(param_1 + 0x10);
          if (iVar9 <= iVar11) {
            if ((int)(*(uint *)(param_1 + 0x16c) & 0x7fffffff) <= iVar11) {
              FUN_033a5b98(plVar3,lVar34 + 1);
              iVar9 = *(int *)(param_1 + 0x168);
            }
            iVar36 = (int)(lVar34 + 1);
            if (iVar11 < iVar9) {
              if (iVar36 < iVar9) {
                *(int *)(param_1 + 0x168) = iVar36;
              }
            }
            else {
              pvVar18 = (void *)(*(long *)(param_1 + 0x160) + (long)iVar9 * 0xc);
              *(int *)(param_1 + 0x168) = iVar36;
              memset(pvVar18,0,
                     ((((*(long *)(param_1 + 0x160) + (long)iVar36 * 0xc) - (long)pvVar18) - 0xcU) /
                     0xc) * 0xc + 0xc);
            }
          }
          *(uint *)(*plVar3 + lVar34 * 0xc) = auVar41._8_4_ | 0x20000000;
          *(undefined4 *)(*plVar3 + lVar34 * 0xc + 4) = uVar4;
          *(int *)(*plVar3 + lVar34 * 0xc + 8) = iVar28;
          if (iVar28 != 0) {
            puVar12 = puVar30;
            while( true ) {
              uVar10 = (uint)*puVar12;
              if ((uVar10 >> 0x14 & 1) != 0) break;
              if (((*puVar12 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0))
              goto LAB_0339c030;
            }
            if (puVar12 != (ulong *)0x0) {
              uVar38 = CONCAT44(uVar10,uVar10) & 0xfffff000fffff;
              uVar21 = (undefined2)
                       puVar12[(ulong)(byte)(POPCOUNT((char)uVar38) + POPCOUNT((char)(uVar38 >> 8))
                                            + POPCOUNT((char)(uVar38 >> 0x10))) + 2];
              goto LAB_0339c034;
            }
LAB_0339c030:
            uVar21 = 0;
LAB_0339c034:
            puVar12 = puVar27;
            while( true ) {
              uVar10 = (uint)*puVar12;
              if ((uVar10 >> 0x14 & 1) != 0) break;
              if (((*puVar12 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0))
              goto LAB_0339c078;
            }
            if (puVar12 != (ulong *)0x0) {
              uVar38 = CONCAT44(uVar10,uVar10) & 0xfffff000fffff;
              uVar10 = (uint)(ushort)puVar12[(ulong)(byte)(POPCOUNT((char)uVar38) +
                                                           POPCOUNT((char)(uVar38 >> 8)) +
                                                          POPCOUNT((char)(uVar38 >> 0x10))) + 2];
              goto LAB_0339c07c;
            }
LAB_0339c078:
            uVar10 = 0;
LAB_0339c07c:
            if (puVar30 == puVar27) {
              uVar14 = FUN_031fa694(lVar19);
            }
            else {
              uVar14 = FUN_031fa91c(lVar19,puVar30,puVar27);
            }
            iVar11 = *(int *)(param_1 + 0x10);
            lVar15 = (long)iVar11 + (long)(int)(uVar10 * iVar28);
            iVar9 = (int)lVar15;
            if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar9) {
              FUN_030b4a20(plVar17,PTR_PTR_047d1a50,lVar15);
            }
            pvVar18 = (void *)(*(long *)(param_1 + 8) + (long)iVar11);
            *(int *)(param_1 + 0x10) = iVar9;
            memset(pvVar18,0,(long)(int)(uVar10 * iVar28));
            FUN_0339e128(local_338,uVar14,pvVar18,local_358,uVar10,uVar21,uVar23 & 0xffffffff);
          }
          if ((local_340 & 1) != 0) {
            plVar16 = (long *)(local_340 & 0xfffffffffffffffe);
            plVar40 = plVar16 + 1;
            do {
              lVar15 = *plVar40;
              cVar8 = '\x01';
              bVar33 = (bool)ExclusiveMonitorPass(plVar40,0x10);
              if (bVar33) {
                *(int *)plVar40 = (int)lVar15 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if ((plVar16 != (long *)0x0) && ((int)lVar15 == 1)) {
              (**(code **)(*plVar16 + 8))();
            }
          }
          bVar33 = true;
        }
        else {
          uVar32 = 0;
LAB_0339bbd8:
          puVar12 = puVar30;
          if ((uVar23 & 1) == 0) {
            do {
              puVar12 = (ulong *)puVar12[1];
            } while ((*puVar12 & 1) == 0);
          }
          if ((puVar12[2] & 0x1f) != 3) goto LAB_0339bc10;
          if ((uVar22 & 1) == 0) {
            if (lVar15 == 0) goto LAB_0339bc10;
          }
          else {
            plVar16 = (long *)(uVar22 & 0xfffffffffffffffe);
            plVar40 = plVar16 + 1;
            do {
              cVar8 = '\x01';
              bVar33 = (bool)ExclusiveMonitorPass(plVar40,0x10);
              if (bVar33) {
                *(int *)plVar40 = (int)*plVar40 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar15 == 0) {
              local_80[0] = 0x80040200;
              do {
                lVar15 = *plVar40;
                cVar8 = '\x01';
                bVar33 = (bool)ExclusiveMonitorPass(plVar40,0x10);
                if (bVar33) {
                  *(int *)plVar40 = (int)lVar15 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              bVar33 = false;
              if ((plVar16 != (long *)0x0) && ((int)lVar15 == 1)) {
                (**(code **)(*plVar16 + 8))(plVar16);
                bVar33 = false;
              }
              goto LAB_0339c320;
            }
          }
          plVar40 = (long *)(uVar22 & 0xfffffffffffffffe);
          auVar41 = FUN_0339c900(param_1,PTR_DAT_047e6888,0);
          local_358 = (char *)0x0;
          (**(code **)(*plVar40 + 0x38))(plVar40,lVar15,puVar30,&local_358);
          pcVar37 = local_358;
          sVar39 = strlen(local_358);
          uVar10 = (uint)sVar39;
          local_78 = auVar41;
          if (*(char *)(param_1 + 0x290) != '\0') {
            FUN_0336059c(param_1 + 0x2e8,puVar2);
            if ((extraout_x1_00 & 1) != 0) {
              if (*(int *)(param_1 + 0x210) < (int)local_78._8_4_) {
                *(undefined4 *)(param_1 + 0x210) = local_78._8_4_;
              }
              lVar15 = FUN_031e9ec4(param_1 + 0x2a0,local_78._0_8_);
              iVar28 = *(int *)(param_1 + 0x20);
              lVar24 = (long)iVar28;
              uVar23 = local_78._8_8_ & 0xffffffff;
              if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= iVar28) {
                FUN_03394d44(param_1 + 0x18,PTR_PTR_047d1a50,lVar24 + 1);
                iVar28 = *(int *)(param_1 + 0x20);
              }
              *(ulong *)(*(long *)(param_1 + 0x18) + (long)iVar28 * 8) = uVar23 | lVar15 << 0x20;
              *(int *)(param_1 + 0x20) = (int)(lVar24 + 1);
            }
            if (*(char *)(param_1 + 0x290) != '\0') {
              uVar23 = (ulong)*(int *)(param_1 + 0x10);
              if ((int)(uVar23 & 1) != 0) {
                sVar39 = 2 - (uVar23 & 1);
                lVar15 = sVar39 + uVar23;
                iVar28 = (int)lVar15;
                if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar28) {
                  FUN_030b4a20(plVar17,PTR_PTR_047d1a50,lVar15);
                }
                memset((void *)(*(long *)(param_1 + 8) + uVar23),0,sVar39);
                *(int *)(param_1 + 0x10) = iVar28;
              }
              iVar28 = *(int *)(param_1 + 0x358);
              if (iVar28 < 3) {
                iVar28 = 2;
              }
              *(int *)(param_1 + 0x358) = iVar28;
            }
          }
          iVar28 = *(int *)(param_1 + 0x168);
          uVar4 = *(undefined4 *)(param_1 + 0x10);
          if (iVar28 <= iVar11) {
            iVar9 = iVar11 + 1;
            if ((int)(*(uint *)(param_1 + 0x16c) & 0x7fffffff) <= iVar11) {
              FUN_033a5b98(plVar3,(long)iVar9);
              iVar28 = *(int *)(param_1 + 0x168);
            }
            if (iVar11 < iVar28) {
              if (iVar9 < iVar28) {
                *(int *)(param_1 + 0x168) = iVar9;
              }
            }
            else {
              pvVar18 = (void *)(*(long *)(param_1 + 0x160) + (long)iVar28 * 0xc);
              *(int *)(param_1 + 0x168) = iVar9;
              memset(pvVar18,0,
                     ((((*(long *)(param_1 + 0x160) + (long)iVar9 * 0xc) - (long)pvVar18) - 0xcU) /
                     0xc) * 0xc + 0xc);
            }
          }
          *(uint *)(*(long *)(param_1 + 0x160) + lVar34 * 0xc) = auVar41._8_4_ | 0x20000000;
          *(undefined4 *)(*(long *)(param_1 + 0x160) + lVar34 * 0xc + 4) = uVar4;
          *(int *)(*(long *)(param_1 + 0x160) + lVar34 * 0xc + 8) = (int)((long)(int)uVar10 + 1);
          iVar11 = *(int *)(param_1 + 0x10);
          lVar15 = (long)iVar11 + (long)(int)uVar10 + 1;
          iVar28 = (int)lVar15;
          if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar28) {
            FUN_030b4a20(plVar17,PTR_PTR_047d1a50,lVar15);
          }
          if (-1 < (int)uVar10) {
            pcVar20 = (char *)(*plVar17 + (long)iVar11);
            uVar29 = uVar10 + 1 & 7;
            if (6 < uVar10) {
              iVar11 = -(uVar10 + 1 & 0xfffffff8);
              pcVar31 = pcVar20;
              do {
                *pcVar31 = *pcVar37;
                pcVar31[1] = pcVar37[1];
                pcVar31[2] = pcVar37[2];
                pcVar31[3] = pcVar37[3];
                pcVar31[4] = pcVar37[4];
                pcVar31[5] = pcVar37[5];
                pcVar31[6] = pcVar37[6];
                pcVar1 = pcVar37 + 7;
                pcVar20 = pcVar31 + 8;
                pcVar37 = pcVar37 + 8;
                iVar11 = iVar11 + 8;
                pcVar31[7] = *pcVar1;
                pcVar31 = pcVar20;
              } while (iVar11 != 0);
            }
            for (; uVar29 != 0; uVar29 = uVar29 - 1) {
              *pcVar20 = *pcVar37;
              pcVar20 = pcVar20 + 1;
              pcVar37 = pcVar37 + 1;
            }
          }
          *(int *)(param_1 + 0x10) = iVar28;
          if ((uVar22 & 1) == 0) {
            bVar33 = true;
          }
          else {
            plVar16 = plVar40 + 1;
            do {
              lVar15 = *plVar16;
              cVar8 = '\x01';
              bVar33 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar33) {
                *(int *)plVar16 = (int)lVar15 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            bVar33 = true;
            if ((plVar40 != (long *)0x0) && ((int)lVar15 == 1)) {
              (**(code **)(*plVar40 + 8))(plVar40);
              bVar33 = true;
            }
          }
        }
      }
LAB_0339c320:
      if ((uVar32 & 1) != 0) {
        plVar16 = (long *)(uVar32 & 0xfffffffffffffffe);
        plVar40 = plVar16 + 1;
        do {
          lVar15 = *plVar40;
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar40,0x10);
          if (bVar7) {
            *(int *)plVar40 = (int)lVar15 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((plVar16 != (long *)0x0) && ((int)lVar15 == 1)) {
          (**(code **)(*plVar16 + 8))();
        }
      }
      if ((uVar22 & 1) != 0) {
        plVar16 = (long *)(uVar22 & 0xfffffffffffffffe);
        plVar40 = plVar16 + 1;
        do {
          lVar15 = *plVar40;
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar40,0x10);
          if (bVar7) {
            *(int *)plVar40 = (int)lVar15 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((plVar16 != (long *)0x0) && ((int)lVar15 == 1)) {
          (**(code **)(*plVar16 + 8))();
        }
      }
      if (!bVar33) {
        bVar33 = false;
        iVar11 = (int)local_a0;
        lVar19 = local_a8;
        goto joined_r0x0339c3b0;
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < (int)local_a0);
  }
  bVar33 = true;
  iVar11 = (int)local_a0;
  lVar19 = local_a8;
joined_r0x0339c3b0:
  local_a8 = lVar19;
  if (iVar11 != 0) {
    lVar25 = lVar19 + (long)iVar11 * 0x20;
    do {
      puVar30 = (ulong *)(lVar25 + -0x10);
      lVar25 = lVar25 + -0x20;
      if ((*puVar30 & 1) != 0) {
        plVar17 = (long *)(*puVar30 & 0xfffffffffffffffe);
        plVar3 = plVar17 + 1;
        do {
          lVar15 = *plVar3;
          cVar8 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *(int *)plVar3 = (int)lVar15 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((plVar17 != (long *)0x0) && ((int)lVar15 == 1)) {
          (**(code **)(*plVar17 + 8))();
        }
      }
    } while (lVar25 != lVar19);
  }
  lVar19 = local_a0;
  uVar22 = (ulong)local_a0._4_4_;
  local_a0 = (ulong)local_a0._4_4_ << 0x20;
  if ((-1 < lVar19) && (local_a8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_a8,uVar22 << 5);
  }
  if (!bVar33) {
    return local_80[0];
  }
  return 0;
}


