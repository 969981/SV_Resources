/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03214908; name: FUN_03214908
 */


void FUN_03214908(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ThreadType *pTVar10;
  size_t sVar11;
  long *plVar12;
  char *pcVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  ushort uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  long lVar20;
  uint uVar21;
  ulong *puVar22;
  short *psVar23;
  undefined8 *puVar24;
  ulong uVar25;
  short *psVar26;
  undefined1 *puVar27;
  char *pcVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  long *plVar31;
  char *local_1078;
  byte *local_1070;
  undefined8 *local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  char *local_1050;
  undefined8 local_1048;
  char *local_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  char local_1028 [256];
  char *local_f28;
  byte *local_f20;
  undefined8 *local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  char *local_f00;
  undefined8 local_ef8;
  char *local_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  char local_ed8 [80];
  code *local_e88;
  undefined *local_e78;
  undefined *local_e70;
  undefined1 *local_e38;
  undefined *local_df8;
  code *local_de8;
  undefined *local_de0;
  undefined *local_db0;
  undefined *local_da0;
  code *local_d98;
  undefined8 *local_ca0;
  undefined1 **local_c98;
  undefined8 local_c90;
  undefined8 *local_c88;
  char *local_c80;
  undefined1 *local_c78;
  undefined8 local_c70;
  undefined1 auStack_c68 [3080];
  
  local_c78 = auStack_c68;
  local_c70 = 0x8000004000000000;
  uVar17 = 0;
  puVar22 = (ulong *)param_3[1];
  do {
    uVar21 = (uint)*puVar22;
    if ((uVar21 >> 0x15 & 1) == 0) {
      uVar25 = 0;
    }
    else {
      uVar25 = CONCAT44(uVar21,uVar21) & 0x1fffff001fffff;
      uVar25 = puVar22[(ulong)(byte)(POPCOUNT((char)uVar25) + POPCOUNT((char)(uVar25 >> 8)) +
                                    POPCOUNT((char)(uVar25 >> 0x10))) + 2];
    }
    uVar17 = uVar25 | uVar17;
  } while (((*puVar22 & 1) == 0) && (puVar22 = (ulong *)puVar22[1], puVar22 != (ulong *)0x0));
  if (((uint)uVar17 >> 3 & 1) != 0) {
    puVar29 = (undefined8 *)param_2[1];
    plVar12 = (long *)0x0;
    plVar31 = (long *)0x0;
    puVar30 = (undefined8 *)0x0;
LAB_032149cc:
    plVar31 = plVar31 + 1;
    puVar18 = puVar30;
    if (plVar12 <= plVar31) {
      if (puVar29 == puVar30) goto LAB_03215000;
      psVar23 = (short *)0x0;
      puVar18 = (undefined8 *)0x0;
      puVar24 = puVar29;
      do {
        uVar21 = (uint)*puVar24;
        if ((uVar21 >> 0x17 & 1) != 0) {
          uVar17 = CONCAT44(uVar21,uVar21) & 0x7fffff007fffff;
          psVar26 = (short *)puVar24[(ulong)(byte)(POPCOUNT((char)uVar17) +
                                                   POPCOUNT((char)(uVar17 >> 8)) +
                                                  POPCOUNT((char)(uVar17 >> 0x10))) + 2];
          if (psVar26 != (short *)0x0) {
            if ((int)psVar26[1] + (int)*psVar26 != 0) {
              psVar23 = psVar26;
              puVar18 = puVar24;
            }
          }
        }
        puVar24 = (undefined8 *)puVar24[1];
      } while (puVar24 != puVar30);
      if (puVar18 == (undefined8 *)0x0) goto LAB_03215000;
      plVar31 = (long *)(psVar23 + 4);
      plVar12 = plVar31 + (long)psVar23[1] + (long)*psVar23;
    }
    uVar21 = (uint)*(undefined8 *)*plVar31;
    if ((uVar21 >> 0x11 & 1) == 0) {
      uVar16 = 0;
    }
    else {
      uVar17 = CONCAT44(uVar21,uVar21) & 0x1ffff0001ffff;
      uVar16 = *(ushort *)
                (*plVar31 +
                (ulong)(byte)(POPCOUNT((char)uVar17) + POPCOUNT((char)(uVar17 >> 8)) +
                             POPCOUNT((char)(uVar17 >> 0x10))) * 8 + 0x12);
    }
    puVar30 = puVar18;
    if ((uVar16 & 0x30) != 0) {
      FUN_031e32f0(&local_f28,param_2,*plVar31);
      for (puVar22 = (ulong *)*plVar31; puVar22 != (ulong *)0x0; puVar22 = (ulong *)puVar22[1]) {
        uVar21 = (uint)*puVar22;
        if ((uVar21 >> 0x10 & 1) != 0) {
          uVar17 = CONCAT44(uVar21,uVar21) & 0xffff0000ffff;
          pcVar28 = (char *)puVar22[(ulong)(byte)(POPCOUNT((char)uVar17) +
                                                 POPCOUNT((char)(uVar17 >> 8))) + 2];
          goto LAB_03214ae4;
        }
        if ((*puVar22 & 1) != 0) break;
      }
      pcVar28 = (char *)0x0;
LAB_03214ae4:
      if (*param_3 == 0) {
LAB_03214b4c:
        local_1070 = (byte *)0x0;
        local_1068 = (undefined8 *)0x0;
        local_1078 = (char *)0x0;
      }
      else {
        lVar8 = param_3[1];
        if (pcVar28 == (char *)0x0) {
          pcVar13 = (char *)0x0;
        }
        else {
          sVar11 = strlen(pcVar28);
          pcVar13 = pcVar28 + sVar11;
        }
        uVar17 = FUN_031e198c(lVar8,pcVar28,pcVar13,1);
        if (uVar17 < 2) goto LAB_03214b4c;
        FUN_031e32f0(&local_1078,param_3,uVar17);
        if (local_1078 != (char *)0x0) {
          for (pbVar19 = local_1070; (*pbVar19 & 1) == 0; pbVar19 = *(byte **)(pbVar19 + 8)) {
          }
          uVar21 = *(uint *)(pbVar19 + 0x10) & 0x1f;
          if (uVar21 == 8) {
LAB_03214be8:
            iVar7 = *(int *)(param_1 + 8);
            lVar8 = (long)iVar7;
            if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) <= iVar7) {
              FUN_032107fc(param_1 + 7,lVar8 + 1);
              iVar7 = *(int *)(param_1 + 8);
            }
            lVar20 = param_1[7];
            puVar18 = (undefined8 *)(lVar20 + (long)iVar7 * 0x30);
            *puVar18 = local_1078;
            puVar18[1] = local_1070;
            puVar18[2] = local_1068;
            if (((ulong)local_1068 & 1) != 0) {
              piVar2 = (int *)(((ulong)local_1068 & 0xfffffffffffffffe) + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = *piVar2 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            lVar20 = lVar20 + (long)iVar7 * 0x30;
            *(char **)(lVar20 + 0x18) = local_f28;
            *(byte **)(lVar20 + 0x20) = local_f20;
            *(undefined8 **)(lVar20 + 0x28) = local_f18;
            if (((ulong)local_f18 & 1) != 0) {
              piVar2 = (int *)(((ulong)local_f18 & 0xfffffffffffffffe) + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = *piVar2 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            *(int *)(param_1 + 8) = (int)(lVar8 + 1);
          }
          else if (uVar21 == 6) {
            lVar8 = (long)(int)local_c70;
            if ((int)(local_c70._4_4_ & 0x7fffffff) <= (int)local_c70) {
              FUN_032153fc(&local_c78,lVar8 + 1);
            }
            puVar6 = local_c78;
            lVar20 = (long)(int)local_c70;
            puVar18 = (undefined8 *)(local_c78 + (long)(int)local_c70 * 0x30);
            puVar18[1] = 0;
            puVar18[2] = 0;
            *puVar18 = 0;
            pbVar19 = local_1070;
            if (local_1070 != (byte *)0x0) {
              for (; (*pbVar19 & 1) == 0; pbVar19 = *(byte **)(pbVar19 + 8)) {
              }
              if ((*(ulong *)(pbVar19 + 0x10) & 0x1f) == 6) {
                *puVar18 = local_1078;
                puVar18[1] = local_1070;
                puVar22 = (ulong *)(local_c78 + lVar20 * 0x30 + 0x10);
                if (((ulong)local_1068 & 1) != 0) {
                  piVar2 = (int *)(((ulong)local_1068 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar4) {
                      *piVar2 = *piVar2 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                uVar17 = *puVar22;
                if ((uVar17 & 1) != 0) {
                  plVar9 = (long *)(uVar17 & 0xfffffffffffffffe);
                  plVar1 = plVar9 + 1;
                  do {
                    lVar5 = *plVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar4) {
                      *(int *)plVar1 = (int)lVar5 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if ((plVar9 != (long *)0x0) && ((int)lVar5 == 1)) {
                    (**(code **)(*plVar9 + 8))();
                  }
                }
                *puVar22 = (ulong)local_1068;
              }
            }
            *(undefined8 *)(puVar6 + lVar20 * 0x30 + 0x18) = 0;
            *(undefined8 *)(puVar6 + lVar20 * 0x30 + 0x20) = 0;
            *(undefined8 *)(puVar6 + lVar20 * 0x30 + 0x28) = 0;
            pbVar19 = local_f20;
            if (local_f20 != (byte *)0x0) {
              for (; (*pbVar19 & 1) == 0; pbVar19 = *(byte **)(pbVar19 + 8)) {
              }
              if ((*(ulong *)(pbVar19 + 0x10) & 0x1f) == 6) {
                *(char **)(puVar6 + lVar20 * 0x30 + 0x18) = local_f28;
                *(byte **)(puVar6 + lVar20 * 0x30 + 0x20) = local_f20;
                if (((ulong)local_f18 & 1) != 0) {
                  piVar2 = (int *)(((ulong)local_f18 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar4) {
                      *piVar2 = *piVar2 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                uVar17 = *(ulong *)(puVar6 + lVar20 * 0x30 + 0x28);
                if ((uVar17 & 1) != 0) {
                  plVar9 = (long *)(uVar17 & 0xfffffffffffffffe);
                  plVar1 = plVar9 + 1;
                  do {
                    lVar5 = *plVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar4) {
                      *(int *)plVar1 = (int)lVar5 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if ((plVar9 != (long *)0x0) && ((int)lVar5 == 1)) {
                    (**(code **)(*plVar9 + 8))();
                  }
                }
                *(undefined8 **)(puVar6 + lVar20 * 0x30 + 0x28) = local_f18;
              }
            }
            local_c70 = CONCAT44(local_c70._4_4_,(int)(lVar8 + 1));
          }
          else {
            if (uVar21 == 3) goto LAB_03214be8;
            FUN_03210a10(param_1,&local_f28,&local_1078);
          }
        }
      }
      if (((ulong)local_1068 & 1) != 0) {
        plVar9 = (long *)((ulong)local_1068 & 0xfffffffffffffffe);
        plVar1 = plVar9 + 1;
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar8 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      if (((ulong)local_f18 & 1) != 0) {
        plVar9 = (long *)((ulong)local_f18 & 0xfffffffffffffffe);
        plVar1 = plVar9 + 1;
        do {
          lVar8 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar8 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    goto LAB_032149cc;
  }
  if ((ulong *)param_3[1] == (ulong *)param_2[1]) {
    lVar8 = FUN_031fa694(param_1 + 0xb);
  }
  else {
    lVar8 = FUN_031fa91c();
  }
  if (lVar8 == 0) {
    if (1 < DAT_04884f08) {
      if (DAT_046aaf68 != '\0') goto LAB_03215098;
      local_f28 = (char *)0x0;
      local_f18 = &DAT_04884eb8;
      uStack_f10 = 2;
      pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
      local_f08 = nn::os::GetThreadId(pTVar10);
      local_f00 = (char *)0x0;
      local_ef8 = 0;
      local_ef0 = (char *)0x0;
      local_ee8 = 0;
      uStack_ee0 = 0;
      puVar22 = (ulong *)param_3[1];
      if (puVar22 == (ulong *)0x0) {
        local_1078 = "<No name>";
      }
      else {
        do {
          uVar17 = *puVar22;
          if (((uint)uVar17 >> 3 & 1) != 0) {
            local_1078 = (char *)0x0;
            if (puVar22 != (ulong *)0x0) {
              local_1078 = (char *)puVar22[(ulong)(byte)POPCOUNT((byte)uVar17 & 7) + 2];
            }
            goto LAB_032151d8;
          }
          if ((uVar17 & 1) != 0) {
            local_1078 = (char *)0x0;
            goto LAB_032151d8;
          }
          puVar22 = (ulong *)puVar22[1];
        } while (puVar22 != (ulong *)0x0);
        local_1078 = (char *)0x0;
      }
LAB_032151d8:
      FUN_0322c554(&local_f28,"Cannot compile type {}",&DAT_044e9758,&local_1078);
      local_ef0 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      local_ee8 = 0x17b;
      FUN_0322c8e0(&local_f28);
      pcVar28 = local_f00;
      goto joined_r0x03215214;
    }
    if (DAT_046aaf68 != '\0') {
LAB_03215098:
      local_f18 = &DAT_04884eb8;
      uStack_f10 = 2;
      pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
      local_f08 = nn::os::GetThreadId(pTVar10);
      local_ef8 = 0;
      local_ef0 = (char *)0x0;
      local_ed8[0] = '\0';
      local_ee8 = 0;
      uStack_ee0 = 0;
      local_f20 = (byte *)0x10000000000;
      puVar22 = (ulong *)param_3[1];
      if (puVar22 == (ulong *)0x0) {
        local_c80 = "<No name>";
      }
      else {
        do {
          uVar17 = *puVar22;
          if (((uint)uVar17 >> 3 & 1) != 0) {
            local_c80 = (char *)0x0;
            if (puVar22 != (ulong *)0x0) {
              local_c80 = (char *)puVar22[(ulong)(byte)POPCOUNT((byte)uVar17 & 7) + 2];
            }
            goto LAB_03215360;
          }
          if ((uVar17 & 1) != 0) {
            local_c80 = (char *)0x0;
            goto LAB_03215360;
          }
          puVar22 = (ulong *)puVar22[1];
        } while (puVar22 != (ulong *)0x0);
        local_c80 = (char *)0x0;
      }
LAB_03215360:
      local_f28 = local_ed8;
      local_f00 = local_ed8;
      FUN_0322c554(&local_f28,"Cannot compile type {}",&DAT_044e9758,&local_c80);
      local_ef0 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      local_ee8 = 0x17b;
      pcVar28 = local_f00;
      if (local_ed8[0] != '\0') {
        sVar11 = strlen(local_ed8);
        (local_ed8 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[0] = '\n';
        (local_ed8 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[1] = '\0';
        printf("%s",local_ed8);
        fflush(*(FILE **)PTR_stdout_047cb860);
        pcVar28 = local_f00;
      }
      goto joined_r0x03215214;
    }
  }
  else {
    memset(&local_f28,0,0x288);
    local_e88 = FUN_03225a30;
    local_e78 = PTR_LAB_047e5f00;
    local_de8 = FUN_032259b8;
    local_df8 = PTR_LAB_047e5f08;
    local_e38 = &LAB_03225af8;
    local_e70 = PTR_LAB_047e5f10;
    local_db0 = PTR_FUN_047e5f18;
    local_de0 = PTR_LAB_047e5f28;
    local_c98 = &local_c78;
    local_ca0 = param_1 + 7;
    local_d98 = FUN_03225a94;
    local_da0 = PTR_FUN_047e5f20;
    local_c90 = *param_1;
    puVar22 = (ulong *)param_3[1];
    while( true ) {
      uVar21 = (uint)*puVar22;
      if ((uVar21 >> 0x14 & 1) != 0) break;
      if (((*puVar22 & 1) != 0) || (puVar22 = (ulong *)puVar22[1], puVar22 == (ulong *)0x0))
      goto LAB_03214f94;
    }
    if (puVar22 != (ulong *)0x0) {
      uVar17 = CONCAT44(uVar21,uVar21) & 0xfffff000fffff;
      uVar15 = (undefined2)
               puVar22[(ulong)(byte)(POPCOUNT((char)uVar17) + POPCOUNT((char)(uVar17 >> 8)) +
                                    POPCOUNT((char)(uVar17 >> 0x10))) + 2];
      goto LAB_03214f98;
    }
LAB_03214f94:
    uVar15 = 0;
LAB_03214f98:
    puVar22 = (ulong *)param_2[1];
    while( true ) {
      uVar21 = (uint)*puVar22;
      if ((uVar21 >> 0x14 & 1) != 0) break;
      if (((*puVar22 & 1) != 0) || (puVar22 = (ulong *)puVar22[1], puVar22 == (ulong *)0x0))
      goto LAB_03214fdc;
    }
    if (puVar22 != (ulong *)0x0) {
      uVar17 = CONCAT44(uVar21,uVar21) & 0xfffff000fffff;
      uVar14 = (undefined2)
               puVar22[(ulong)(byte)(POPCOUNT((char)uVar17) + POPCOUNT((char)(uVar17 >> 8)) +
                                    POPCOUNT((char)(uVar17 >> 0x10))) + 2];
      goto LAB_03214fe0;
    }
LAB_03214fdc:
    uVar14 = 0;
LAB_03214fe0:
    local_c88 = param_1;
    iVar7 = FUN_0321562c(&local_f28,lVar8,*param_3,*param_2,uVar14,uVar15,1);
    if (-1 < iVar7) {
      FUN_0320ae94(param_1[6],param_3);
LAB_03215000:
      FUN_03213968(param_1,local_c78,local_c70 & 0xffffffff);
      goto LAB_03215240;
    }
    if (DAT_04884f08 < 2) {
      if (DAT_046aaf68 == '\0') goto LAB_03215234;
    }
    else if (DAT_046aaf68 == '\0') {
      local_1078 = (char *)0x0;
      local_1068 = &DAT_04884eb8;
      uStack_1060 = 2;
      pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
      local_1058 = nn::os::GetThreadId(pTVar10);
      local_1050 = (char *)0x0;
      local_1048 = 0;
      local_1040 = (char *)0x0;
      local_1038 = 0;
      uStack_1030 = 0;
      FUN_0322c554(&local_1078,"Cannot copy object",PTR_DAT_047d1b38);
      local_1040 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      local_1038 = 0x185;
      FUN_0322c8e0(&local_1078);
      pcVar28 = local_1050;
      goto joined_r0x03215214;
    }
    local_1068 = &DAT_04884eb8;
    uStack_1060 = 2;
    pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
    local_1058 = nn::os::GetThreadId(pTVar10);
    local_1048 = 0;
    local_1040 = (char *)0x0;
    local_1038 = 0;
    uStack_1030 = 0;
    local_1028[0] = '\0';
    local_1070 = (byte *)0x10000000000;
    local_1078 = local_1028;
    local_1050 = local_1028;
    FUN_0322c554(&local_1078,"Cannot copy object",PTR_DAT_047d1b38);
    local_1040 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
    ;
    local_1038 = 0x185;
    pcVar28 = local_1050;
    if (local_1028[0] != '\0') {
      sVar11 = strlen(local_1028);
      (local_1028 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[0] = '\n';
      (local_1028 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[1] = '\0';
      printf("%s",local_1028);
      fflush(*(FILE **)PTR_stdout_047cb860);
      pcVar28 = local_1050;
    }
joined_r0x03215214:
    if (((ulong)pcVar28 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,pcVar28 + -1,0);
    }
  }
LAB_03215234:
  *(undefined4 *)(param_1 + 1) = 0x80040200;
LAB_03215240:
  puVar6 = local_c78;
  if ((int)local_c70 != 0) {
    puVar27 = local_c78 + (long)(int)local_c70 * 0x30;
    do {
      if ((*(ulong *)(puVar27 + -8) & 1) != 0) {
        plVar12 = (long *)(*(ulong *)(puVar27 + -8) & 0xfffffffffffffffe);
        plVar31 = plVar12 + 1;
        do {
          lVar8 = *plVar31;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar4) {
            *(int *)plVar31 = (int)lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar8 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      puVar22 = (ulong *)(puVar27 + -0x20);
      puVar27 = puVar27 + -0x30;
      if ((*puVar22 & 1) != 0) {
        plVar12 = (long *)(*puVar22 & 0xfffffffffffffffe);
        plVar31 = plVar12 + 1;
        do {
          lVar8 = *plVar31;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar4) {
            *(int *)plVar31 = (int)lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar8 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    } while (puVar27 != puVar6);
  }
  uVar17 = local_c70;
  uVar25 = (ulong)local_c70._4_4_;
  local_c70 = (ulong)local_c70._4_4_ << 0x20;
  if ((-1 < (long)uVar17) && (local_c78 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_c78,uVar25 * 0x30);
  }
  return;
}


