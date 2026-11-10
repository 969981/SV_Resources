/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033a9f5c; name: FUN_033a9f5c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_033a9f5c(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  ThreadType *pTVar8;
  long *plVar9;
  void *__dest;
  longlong lVar10;
  size_t sVar11;
  long *plVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  byte *pbVar16;
  long lVar17;
  ulong *puVar18;
  byte *pbVar19;
  code *pcVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  ulong *puVar26;
  byte *pbVar27;
  ulong uVar28;
  byte bVar29;
  ulong uVar30;
  ulong uVar31;
  int iVar32;
  int *piVar33;
  float *pfVar34;
  ulong uVar35;
  undefined *puVar36;
  float fVar37;
  double dVar38;
  long *local_290;
  undefined8 local_288;
  ulong *local_280;
  undefined8 local_278;
  ulong local_270 [16];
  int local_1f0;
  ulong *local_1e8;
  byte *pbStack_1e0;
  ulong local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  ulong *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  ulong *local_198;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  ulong local_170 [8];
  int local_130;
  uint local_6c [3];
  
  iVar7 = *(int *)(param_2 + 0xc0);
  if (iVar7 < 1) {
    piVar15 = (int *)0x0;
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(param_2 + 0x90) + (long)*(int *)(param_2 + 0x80);
    piVar15 = (int *)(lVar17 + **(int **)(param_2 + 0xb8));
    lVar17 = lVar17 + (*(int **)(param_2 + 0xb8))[1];
  }
  if ((lVar17 - (long)piVar15 != 6) || (*piVar15 != 0x6f636572 || (short)piVar15[1] != 0x6472)) {
    if (iVar7 < 1) {
      piVar15 = (int *)0x0;
      lVar17 = 0;
    }
    else {
      lVar17 = *(long *)(param_2 + 0x90) + (long)*(int *)(param_2 + 0x80);
      piVar15 = (int *)(lVar17 + **(int **)(param_2 + 0xb8));
      lVar17 = lVar17 + (*(int **)(param_2 + 0xb8))[1];
    }
    if ((lVar17 - (long)piVar15 == 7) &&
       (*piVar15 == 0x65746e69 && *(int *)((long)piVar15 + 3) == 0x72656765)) {
      pbVar16 = (byte *)param_3[1];
      if (pbVar16 == (byte *)0x0) {
LAB_033aa83c:
        uVar35 = 0;
LAB_033aa840:
        if (DAT_0488e218 < 2) {
          bVar6 = true;
          if (DAT_046aaf68 != '\0') goto LAB_033aac4c;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1c0 = (ulong *)0x0;
            local_1b0 = &DAT_0488e1c8;
            local_1a8 = (undefined8 *)0x2;
            pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a0 = nn::os::GetThreadId(pTVar8);
            local_198 = (ulong *)0x0;
            local_190 = 0;
            local_188 = (char *)0x0;
            local_180 = 0;
            uStack_178 = 0;
            local_280 = (ulong *)param_3[1];
            for (puVar18 = local_280; (*puVar18 & 1) == 0; puVar18 = (ulong *)puVar18[1]) {
            }
            local_1c8 = (byte *)(CONCAT44(local_1c8._4_4_,(int)puVar18[2]) & 0xffffffff0000001f);
            FUN_0322c554(&local_1c0,"Type \'{}\' is not an integer ({})",&DAT_047b32c0,&local_280,
                         &local_1c8);
            local_188 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
            ;
            local_180 = 0x2ad;
            FUN_0322c8e0(&local_1c0);
          }
          else {
LAB_033aac4c:
            local_1b0 = &DAT_0488e1c8;
            local_1a8 = (undefined8 *)0x2;
            pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a0 = nn::os::GetThreadId(pTVar8);
            local_190 = 0;
            local_188 = (char *)0x0;
            local_170[0]._0_1_ = '\0';
            local_1b8 = (ulong *)0x10000000000;
            local_180 = 0;
            uStack_178 = 0;
            local_1e8 = (ulong *)param_3[1];
            for (puVar18 = local_1e8; (*puVar18 & 1) == 0; puVar18 = (ulong *)puVar18[1]) {
            }
            local_6c[0] = (uint)puVar18[2] & 0x1f;
            local_1c0 = local_170;
            local_198 = local_170;
            FUN_0322c554(&local_1c0,"Type \'{}\' is not an integer ({})",&DAT_047b32c0,&local_1e8,
                         local_6c);
            local_188 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
            ;
            local_180 = 0x2ad;
            if ((char)local_170[0] != '\0') {
              sVar11 = strlen((char *)local_170);
              *(undefined2 *)
               ((long)local_170 + (long)(int)((int)sVar11 - (uint)((int)sVar11 == 0xff))) = 10;
              printf("%s",local_170);
              fflush(*(FILE **)PTR_stdout_047cb860);
            }
          }
          if (((ulong)local_198 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_198 + -1),0);
          }
          bVar6 = true;
        }
      }
      else {
        pbVar27 = pbVar16;
        if ((*pbVar16 & 1) == 0) {
          do {
            pbVar27 = *(byte **)(pbVar27 + 8);
          } while ((*pbVar27 & 1) == 0);
        }
        if ((*(ulong *)(pbVar27 + 0x10) & 0x1f) != 4) goto LAB_033aa83c;
        lVar17 = *param_3;
        uVar35 = param_3[2];
        if ((uVar35 & 1) != 0) {
          piVar15 = (int *)((uVar35 & 0xfffffffffffffffe) + 8);
          do {
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar6) {
              *piVar15 = *piVar15 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          uVar35 = param_3[2];
        }
        if (lVar17 == 0) goto LAB_033aa840;
        local_130 = 1;
        local_1b0 = (undefined8 *)((ulong)local_1b0._1_7_ << 8);
        local_1c0 = &local_1b0;
        local_1b8._0_4_ = 1;
        local_1b8._4_4_ = 0x80000080;
        local_280 = (ulong *)0x0;
        local_278 = 0;
        iVar7 = FUN_033b2c50(param_2,"value",&local_280);
        if ((iVar7 < 0) || (iVar7 = FUN_033b2f40(&local_280,&local_1c0), iVar7 < 0)) {
          bVar6 = true;
        }
        else {
          if ((byte)*local_1c0 == 0x22) {
            uVar25 = (int)local_1b8 - 1;
            if (uVar25 != 0 && 0 < (int)local_1b8) {
              uVar25 = 1;
            }
            iVar7 = (int)local_1b8;
            if (0 < (int)uVar25) {
              iVar14 = (int)local_1b8 - uVar25;
              if (iVar14 == 0) {
                iVar7 = 0;
                local_1b8._0_4_ = iVar14;
              }
              else {
                uVar28 = (long)iVar14 & 3;
                if ((ulong)((long)(int)local_1b8 + (long)(int)~uVar25) < 3) {
                  uVar30 = 0;
                }
                else {
                  uVar30 = 0;
                  do {
                    pbVar27 = (byte *)((long)local_1c0 + uVar30 + (ulong)uVar25 + 3);
                    pbVar19 = (byte *)((long)local_1c0 + uVar30 + 1);
                    uVar30 = uVar30 + 4;
                    pbVar19[-1] = pbVar27[-3];
                    *pbVar19 = pbVar27[-2];
                    pbVar19[1] = pbVar27[-1];
                    pbVar19[2] = *pbVar27;
                  } while (((long)iVar14 & 0xfffffffffffffffcU) != uVar30);
                }
                if (uVar28 != 0) {
                  pbVar27 = (byte *)((long)local_1c0 + uVar30);
                  do {
                    uVar28 = uVar28 - 1;
                    *pbVar27 = pbVar27[uVar25];
                    pbVar27 = pbVar27 + 1;
                  } while (uVar28 != 0);
                }
                iVar7 = iVar14;
                local_1b8._0_4_ = iVar14;
              }
            }
            uVar25 = iVar7 - 2U & ((int)(iVar7 - 2U) >> 0x1f ^ 0xffffffffU);
            uVar4 = (local_1b8._4_4_ & 0x7fffffff) - 1;
            uVar24 = uVar25;
            if ((int)uVar4 <= (int)uVar25) {
              uVar24 = uVar4;
            }
            if (local_130 != 0) {
              uVar24 = uVar25;
            }
            iVar14 = uVar24 + 1;
            if ((int)(local_1b8._4_4_ & 0x7fffffff) <= (int)uVar24) {
              FUN_030b4a20(&local_1c0,PTR_PTR_047d1a50 + 0x20,iVar14);
              iVar7 = (int)local_1b8;
            }
            if (iVar7 <= (int)uVar24 || iVar14 < iVar7) {
              local_1b8._0_4_ = iVar14;
            }
            *(byte *)((long)local_1c0 + (long)(int)uVar24) = 0;
          }
          bVar6 = (byte)*local_1c0 == 0x2d;
          puVar18 = (ulong *)((long)local_1c0 + 1);
          if (!bVar6) {
            puVar18 = local_1c0;
          }
          local_280 = (ulong *)strtoull((char *)puVar18,(char **)0x0,0);
          local_278 = (ulong)bVar6;
          (**(code **)(*(long *)(uVar35 & 0xfffffffffffffffe) + 0x30))
                    ((long *)(uVar35 & 0xfffffffffffffffe),lVar17,pbVar16,&local_280);
          bVar6 = false;
        }
        uVar25 = local_1b8._4_4_;
        local_1b8 = (ulong *)((ulong)local_1b8._4_4_ << 0x20);
        if ((-1 < (int)uVar25) && (local_1c0 != (ulong *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
        }
      }
      if ((uVar35 & 1) == 0) goto joined_r0x033ab39c;
      plVar9 = (long *)(uVar35 & 0xfffffffffffffffe);
      plVar1 = plVar9 + 1;
      do {
        iVar7 = (int)*plVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar2) {
          *(int *)plVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      if (iVar7 < 1) {
        piVar15 = (int *)0x0;
        lVar17 = 0;
      }
      else {
        lVar17 = *(long *)(param_2 + 0x90) + (long)*(int *)(param_2 + 0x80);
        piVar15 = (int *)(lVar17 + **(int **)(param_2 + 0xb8));
        lVar17 = lVar17 + (*(int **)(param_2 + 0xb8))[1];
      }
      if ((lVar17 - (long)piVar15 == 4) && (*piVar15 == 0x6c616572)) {
        pbVar16 = (byte *)param_3[1];
        if (pbVar16 == (byte *)0x0) {
LAB_033aa9a0:
          uVar35 = 0;
LAB_033aa9a4:
          if (DAT_0488e218 < 2) {
            bVar6 = true;
            if (DAT_046aaf68 != '\0') goto LAB_033aae84;
          }
          else {
            if (DAT_046aaf68 == '\0') {
              local_1c0 = (ulong *)0x0;
              local_1b0 = &DAT_0488e1c8;
              local_1a8 = (undefined8 *)0x2;
              pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a0 = nn::os::GetThreadId(pTVar8);
              local_198 = (ulong *)0x0;
              local_190 = 0;
              local_188 = (char *)0x0;
              local_180 = 0;
              uStack_178 = 0;
              local_280 = (ulong *)param_3[1];
              for (puVar18 = local_280; (*puVar18 & 1) == 0; puVar18 = (ulong *)puVar18[1]) {
              }
              local_1c8 = (byte *)(CONCAT44(local_1c8._4_4_,(int)puVar18[2]) & 0xffffffff0000001f);
              FUN_0322c554(&local_1c0,"Type \'{}\' is not a real ({})",&DAT_047b32c0,&local_280,
                           &local_1c8);
              local_188 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
              ;
              local_180 = 0x2c8;
              FUN_0322c8e0(&local_1c0);
            }
            else {
LAB_033aae84:
              local_1b0 = &DAT_0488e1c8;
              local_1a8 = (undefined8 *)0x2;
              pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a0 = nn::os::GetThreadId(pTVar8);
              local_190 = 0;
              local_188 = (char *)0x0;
              local_170[0]._0_1_ = '\0';
              local_1b8 = (ulong *)0x10000000000;
              local_180 = 0;
              uStack_178 = 0;
              local_1e8 = (ulong *)param_3[1];
              for (puVar18 = local_1e8; (*puVar18 & 1) == 0; puVar18 = (ulong *)puVar18[1]) {
              }
              local_6c[0] = (uint)puVar18[2] & 0x1f;
              local_1c0 = local_170;
              local_198 = local_170;
              FUN_0322c554(&local_1c0,"Type \'{}\' is not a real ({})",&DAT_047b32c0,&local_1e8,
                           local_6c);
              local_188 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
              ;
              local_180 = 0x2c8;
              if ((char)local_170[0] != '\0') {
                sVar11 = strlen((char *)local_170);
                *(undefined2 *)
                 ((long)local_170 + (long)(int)((int)sVar11 - (uint)((int)sVar11 == 0xff))) = 10;
                printf("%s",local_170);
                fflush(*(FILE **)PTR_stdout_047cb860);
              }
            }
            if (((ulong)local_198 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_198 + -1),0);
            }
            bVar6 = true;
          }
        }
        else {
          pbVar27 = pbVar16;
          if ((*pbVar16 & 1) == 0) {
            do {
              pbVar27 = *(byte **)(pbVar27 + 8);
            } while ((*pbVar27 & 1) == 0);
          }
          if ((*(ulong *)(pbVar27 + 0x10) & 0x1f) != 5) goto LAB_033aa9a0;
          pfVar34 = (float *)*param_3;
          uVar35 = param_3[2];
          if ((uVar35 & 1) != 0) {
            piVar15 = (int *)((uVar35 & 0xfffffffffffffffe) + 8);
            do {
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar6) {
                *piVar15 = *piVar15 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            uVar35 = param_3[2];
          }
          if (pfVar34 == (float *)0x0) goto LAB_033aa9a4;
          local_1b0 = (undefined8 *)((ulong)local_1b0._1_7_ << 8);
          local_1c0 = &local_1b0;
          local_270[0] = local_270[0] & 0xffffffffffffff00;
          local_1b8._0_4_ = 1;
          local_1b8._4_4_ = 0x80000080;
          local_280 = local_270;
          local_130 = 1;
          local_278._0_4_ = 1;
          local_278._4_4_ = 0x80000080;
          local_1f0 = 1;
          local_1e8 = (ulong *)0x0;
          pbStack_1e0 = (byte *)0x0;
          iVar7 = FUN_033b2c50(param_2,&DAT_03caa35f,&local_1e8);
          if ((iVar7 < 0) || (iVar7 = FUN_033b2f40(&local_1e8,&local_280), iVar7 < 0)) {
LAB_033ac0ac:
            bVar6 = true;
          }
          else {
            if ((byte)*local_280 == 0x22) {
              uVar25 = (int)local_278 - 1;
              if (uVar25 != 0 && 0 < (int)local_278) {
                uVar25 = 1;
              }
              iVar7 = (int)local_278;
              if (0 < (int)uVar25) {
                iVar14 = (int)local_278 - uVar25;
                if (iVar14 == 0) {
                  iVar7 = 0;
                  local_278._0_4_ = iVar14;
                }
                else {
                  uVar28 = (long)iVar14 & 3;
                  if ((ulong)((long)(int)local_278 + (long)(int)~uVar25) < 3) {
                    uVar30 = 0;
                  }
                  else {
                    uVar30 = 0;
                    do {
                      pbVar27 = (byte *)((long)local_280 + uVar30 + (ulong)uVar25 + 3);
                      pbVar19 = (byte *)((long)local_280 + uVar30 + 1);
                      uVar30 = uVar30 + 4;
                      pbVar19[-1] = pbVar27[-3];
                      *pbVar19 = pbVar27[-2];
                      pbVar19[1] = pbVar27[-1];
                      pbVar19[2] = *pbVar27;
                    } while (((long)iVar14 & 0xfffffffffffffffcU) != uVar30);
                  }
                  if (uVar28 != 0) {
                    pbVar27 = (byte *)((long)local_280 + uVar30);
                    do {
                      uVar28 = uVar28 - 1;
                      *pbVar27 = pbVar27[uVar25];
                      pbVar27 = pbVar27 + 1;
                    } while (uVar28 != 0);
                  }
                  iVar7 = iVar14;
                  local_278._0_4_ = iVar14;
                }
              }
              uVar25 = iVar7 - 2U & ((int)(iVar7 - 2U) >> 0x1f ^ 0xffffffffU);
              uVar4 = (local_278._4_4_ & 0x7fffffff) - 1;
              uVar24 = uVar25;
              if ((int)uVar4 <= (int)uVar25) {
                uVar24 = uVar4;
              }
              if (local_1f0 != 0) {
                uVar24 = uVar25;
              }
              iVar14 = uVar24 + 1;
              if ((int)(local_278._4_4_ & 0x7fffffff) <= (int)uVar24) {
                FUN_030b4a20(&local_280,PTR_PTR_047d1a50 + 0x20,iVar14);
                iVar7 = (int)local_278;
              }
              if (iVar7 <= (int)uVar24 || iVar14 < iVar7) {
                local_278._0_4_ = iVar14;
              }
              *(byte *)((long)local_280 + (long)(int)uVar24) = 0;
            }
            local_1e8 = (ulong *)0x0;
            pbStack_1e0 = (byte *)0x0;
            iVar7 = FUN_033b2c50(param_2,&DAT_03c15e29,&local_1e8);
            if ((iVar7 < 0) || (iVar7 = FUN_033b2f40(&local_1e8,&local_1c0), iVar7 < 0))
            goto LAB_033ac0ac;
            if ((byte)*local_1c0 == 0x22) {
              uVar25 = (int)local_1b8 - 1;
              if (uVar25 != 0 && 0 < (int)local_1b8) {
                uVar25 = 1;
              }
              iVar7 = (int)local_1b8;
              if (0 < (int)uVar25) {
                iVar14 = (int)local_1b8 - uVar25;
                if (iVar14 == 0) {
                  iVar7 = 0;
                  local_1b8._0_4_ = iVar14;
                }
                else {
                  uVar28 = (long)iVar14 & 3;
                  if ((ulong)((long)(int)local_1b8 + (long)(int)~uVar25) < 3) {
                    uVar30 = 0;
                  }
                  else {
                    uVar30 = 0;
                    do {
                      pbVar27 = (byte *)((long)local_1c0 + uVar30 + (ulong)uVar25 + 3);
                      pbVar19 = (byte *)((long)local_1c0 + uVar30 + 1);
                      uVar30 = uVar30 + 4;
                      pbVar19[-1] = pbVar27[-3];
                      *pbVar19 = pbVar27[-2];
                      pbVar19[1] = pbVar27[-1];
                      pbVar19[2] = *pbVar27;
                    } while (((long)iVar14 & 0xfffffffffffffffcU) != uVar30);
                  }
                  if (uVar28 != 0) {
                    pbVar27 = (byte *)((long)local_1c0 + uVar30);
                    do {
                      uVar28 = uVar28 - 1;
                      *pbVar27 = pbVar27[uVar25];
                      pbVar27 = pbVar27 + 1;
                    } while (uVar28 != 0);
                  }
                  iVar7 = iVar14;
                  local_1b8._0_4_ = iVar14;
                }
              }
              uVar25 = iVar7 - 2U & ((int)(iVar7 - 2U) >> 0x1f ^ 0xffffffffU);
              uVar4 = (local_1b8._4_4_ & 0x7fffffff) - 1;
              uVar24 = uVar25;
              if ((int)uVar4 <= (int)uVar25) {
                uVar24 = uVar4;
              }
              if (local_130 != 0) {
                uVar24 = uVar25;
              }
              iVar14 = uVar24 + 1;
              if ((int)(local_1b8._4_4_ & 0x7fffffff) <= (int)uVar24) {
                FUN_030b4a20(&local_1c0,PTR_PTR_047d1a50 + 0x20,iVar14);
                iVar7 = (int)local_1b8;
              }
              if (iVar7 <= (int)uVar24 || iVar14 < iVar7) {
                local_1b8._0_4_ = iVar14;
              }
              *(byte *)((long)local_1c0 + (long)(int)uVar24) = 0;
            }
            if ((byte)*local_280 != 0x23) goto LAB_033ac0ac;
            pbStack_1e0 = (byte *)((long)local_1c0 + (long)(int)local_1b8 + -1);
            local_1c8 = (byte *)0x0;
            local_1e8 = local_1c0;
            FUN_0322bac4(&local_1e8,&local_1c8);
            bVar23 = *(byte *)((long)local_280 + 1);
            if (bVar23 == 0) {
              pbVar27 = (byte *)0x0;
LAB_033ac10c:
              if ((double)local_1c8 <= 0.0) goto LAB_033ac16c;
              if ((double)local_1c8 == (double)pbVar27) {
                pcVar20 = *(code **)(*(long *)(uVar35 & 0xfffffffffffffffe) + 0x30);
                pbVar27 = local_1c8;
                goto LAB_033ac180;
              }
              pbVar19 = pbVar16;
              if ((*pbVar16 & 1) == 0) {
                do {
                  pbVar19 = *(byte **)(pbVar19 + 8);
                } while ((*pbVar19 & 1) == 0);
              }
              if (*(int *)(pbVar19 + 0x10) != 0x174605) goto LAB_033ac16c;
              if (((ulong)pbVar27 >> 0x34 & 0x7ff) < 0x381) {
                dVar38 = 1.1754943508222875e-38;
                if ((long)pbVar27 < 0) {
                  dVar38 = -1.1754943508222875e-38;
                }
                fVar37 = (float)((uint)(float)(dVar38 + (double)((ulong)pbVar27 & 0xfffffffff0000000
                                                                )) & 0x807fffff);
              }
              else {
                fVar37 = (float)(double)pbVar27;
              }
              *pfVar34 = fVar37;
            }
            else {
              pbVar27 = (byte *)0x0;
              pbVar19 = (byte *)((long)local_280 + 2);
              do {
                lVar17 = -0x30;
                if (((9 < (byte)(bVar23 - 0x30)) && (lVar17 = -0x57, 5 < (byte)(bVar23 + 0x9f))) &&
                   (lVar17 = -0x37, 5 < (byte)(bVar23 + 0xbf))) break;
                pbVar27 = (byte *)(lVar17 + (ulong)bVar23 + (long)pbVar27 * 0x10);
                bVar23 = *pbVar19;
                pbVar19 = pbVar19 + 1;
              } while (bVar23 != 0);
              if ((~(ulong)pbVar27 & 0x7ff0000000000000) != 0) goto LAB_033ac10c;
LAB_033ac16c:
              pcVar20 = *(code **)(*(long *)(uVar35 & 0xfffffffffffffffe) + 0x30);
LAB_033ac180:
              (*pcVar20)(pbVar27,uVar35 & 0xfffffffffffffffe,pfVar34,pbVar16);
            }
            bVar6 = false;
          }
          uVar25 = local_278._4_4_;
          local_278 = (ulong)local_278._4_4_ << 0x20;
          if ((-1 < (int)uVar25) && (local_280 != (ulong *)0x0)) {
            (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
          }
          uVar25 = local_1b8._4_4_;
          local_1b8 = (ulong *)((ulong)local_1b8._4_4_ << 0x20);
          if ((-1 < (int)uVar25) && (local_1c0 != (ulong *)0x0)) {
            (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
          }
        }
        if ((uVar35 & 1) == 0) goto joined_r0x033ab39c;
        plVar9 = (long *)(uVar35 & 0xfffffffffffffffe);
        plVar1 = plVar9 + 1;
        do {
          iVar7 = (int)*plVar1;
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar2) {
            *(int *)plVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      else {
        if (iVar7 < 1) {
          piVar15 = (int *)0x0;
          lVar17 = 0;
        }
        else {
          lVar17 = *(long *)(param_2 + 0x90) + (long)*(int *)(param_2 + 0x80);
          piVar15 = (int *)(lVar17 + **(int **)(param_2 + 0xb8));
          lVar17 = lVar17 + (*(int **)(param_2 + 0xb8))[1];
        }
        if ((lVar17 - (long)piVar15 == 4) && (*piVar15 == 0x6c6f6f62)) {
          pbVar16 = (byte *)param_3[1];
          if (pbVar16 == (byte *)0x0) {
LAB_033aab18:
            uVar35 = 0;
LAB_033aab1c:
            if (DAT_0488e218 < 2) {
              bVar6 = true;
              if (DAT_046aaf68 != '\0') goto LAB_033aaf70;
            }
            else {
              if (DAT_046aaf68 == '\0') {
                local_1c0 = (ulong *)0x0;
                local_1b0 = &DAT_0488e1c8;
                local_1a8 = (undefined8 *)0x2;
                pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a0 = nn::os::GetThreadId(pTVar8);
                local_198 = (ulong *)0x0;
                local_190 = 0;
                local_188 = (char *)0x0;
                local_180 = 0;
                uStack_178 = 0;
                local_280 = (ulong *)param_3[1];
                for (puVar18 = local_280; (*puVar18 & 1) == 0; puVar18 = (ulong *)puVar18[1]) {
                }
                local_1c8 = (byte *)(CONCAT44(local_1c8._4_4_,(int)puVar18[2]) & 0xffffffff0000001f)
                ;
                FUN_0322c554(&local_1c0,"Type \'{}\' is not a bool ({})",&DAT_047b32c0,&local_280,
                             &local_1c8);
                local_188 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
                ;
                local_180 = 0x307;
                FUN_0322c8e0(&local_1c0);
              }
              else {
LAB_033aaf70:
                local_1b0 = &DAT_0488e1c8;
                local_1a8 = (undefined8 *)0x2;
                pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a0 = nn::os::GetThreadId(pTVar8);
                local_190 = 0;
                local_188 = (char *)0x0;
                local_170[0]._0_1_ = '\0';
                local_1b8 = (ulong *)0x10000000000;
                local_180 = 0;
                uStack_178 = 0;
                local_1e8 = (ulong *)param_3[1];
                for (puVar18 = local_1e8; (*puVar18 & 1) == 0; puVar18 = (ulong *)puVar18[1]) {
                }
                local_6c[0] = (uint)puVar18[2] & 0x1f;
                local_1c0 = local_170;
                local_198 = local_170;
                FUN_0322c554(&local_1c0,"Type \'{}\' is not a bool ({})",&DAT_047b32c0,&local_1e8,
                             local_6c);
                local_188 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
                ;
                local_180 = 0x307;
                if ((char)local_170[0] != '\0') {
                  sVar11 = strlen((char *)local_170);
                  *(undefined2 *)
                   ((long)local_170 + (long)(int)((int)sVar11 - (uint)((int)sVar11 == 0xff))) = 10;
                  printf("%s",local_170);
                  fflush(*(FILE **)PTR_stdout_047cb860);
                }
              }
              if (((ulong)local_198 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_198 + -1),0);
              }
              bVar6 = true;
            }
          }
          else {
            pbVar27 = pbVar16;
            if ((*pbVar16 & 1) == 0) {
              do {
                pbVar27 = *(byte **)(pbVar27 + 8);
              } while ((*pbVar27 & 1) == 0);
            }
            if ((*(ulong *)(pbVar27 + 0x10) & 0x1f) != 2) goto LAB_033aab18;
            lVar17 = *param_3;
            uVar35 = param_3[2];
            if ((uVar35 & 1) != 0) {
              piVar15 = (int *)((uVar35 & 0xfffffffffffffffe) + 8);
              do {
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                if (bVar6) {
                  *piVar15 = *piVar15 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              uVar35 = param_3[2];
            }
            if (lVar17 == 0) goto LAB_033aab1c;
            local_130 = 1;
            local_1b0 = (undefined8 *)((ulong)local_1b0._1_7_ << 8);
            local_1c0 = &local_1b0;
            local_1b8._0_4_ = 1;
            local_1b8._4_4_ = 0x80000080;
            local_280 = (ulong *)0x0;
            local_278 = 0;
            iVar7 = FUN_033b2c50(param_2,"value",&local_280);
            if ((iVar7 < 0) || (iVar7 = FUN_033b2f40(&local_280,&local_1c0), iVar7 < 0)) {
              bVar6 = true;
            }
            else {
              if ((byte)*local_1c0 == 0x22) {
                uVar25 = (int)local_1b8 - 1;
                if (uVar25 != 0 && 0 < (int)local_1b8) {
                  uVar25 = 1;
                }
                iVar7 = (int)local_1b8;
                if (0 < (int)uVar25) {
                  iVar14 = (int)local_1b8 - uVar25;
                  if (iVar14 == 0) {
                    iVar7 = 0;
                    local_1b8._0_4_ = iVar14;
                  }
                  else {
                    uVar28 = (long)iVar14 & 3;
                    if ((ulong)((long)(int)local_1b8 + (long)(int)~uVar25) < 3) {
                      uVar30 = 0;
                    }
                    else {
                      uVar30 = 0;
                      do {
                        pbVar27 = (byte *)((long)local_1c0 + uVar30 + (ulong)uVar25 + 3);
                        pbVar19 = (byte *)((long)local_1c0 + uVar30 + 1);
                        uVar30 = uVar30 + 4;
                        pbVar19[-1] = pbVar27[-3];
                        *pbVar19 = pbVar27[-2];
                        pbVar19[1] = pbVar27[-1];
                        pbVar19[2] = *pbVar27;
                      } while (((long)iVar14 & 0xfffffffffffffffcU) != uVar30);
                    }
                    if (uVar28 != 0) {
                      pbVar27 = (byte *)((long)local_1c0 + uVar30);
                      do {
                        uVar28 = uVar28 - 1;
                        *pbVar27 = pbVar27[uVar25];
                        pbVar27 = pbVar27 + 1;
                      } while (uVar28 != 0);
                    }
                    iVar7 = iVar14;
                    local_1b8._0_4_ = iVar14;
                  }
                }
                uVar25 = iVar7 - 2U & ((int)(iVar7 - 2U) >> 0x1f ^ 0xffffffffU);
                uVar4 = (local_1b8._4_4_ & 0x7fffffff) - 1;
                uVar24 = uVar25;
                if ((int)uVar4 <= (int)uVar25) {
                  uVar24 = uVar4;
                }
                if (local_130 != 0) {
                  uVar24 = uVar25;
                }
                iVar14 = uVar24 + 1;
                if ((int)(local_1b8._4_4_ & 0x7fffffff) <= (int)uVar24) {
                  FUN_030b4a20(&local_1c0,PTR_PTR_047d1a50 + 0x20,iVar14);
                  iVar7 = (int)local_1b8;
                }
                if (iVar7 <= (int)uVar24 || iVar14 < iVar7) {
                  local_1b8._0_4_ = iVar14;
                }
                *(byte *)((long)local_1c0 + (long)(int)uVar24) = 0;
              }
              bVar23 = (byte)*local_1c0;
              if (bVar23 == 0) {
LAB_033abc00:
                bVar6 = false;
              }
              else {
                bVar29 = bVar23 + 0x20;
                if (0x19 < bVar23 - 0x41) {
                  bVar29 = bVar23;
                }
                if (bVar29 != 0x74) goto LAB_033abc00;
                bVar23 = *(byte *)((long)local_1c0 + 1);
                if (bVar23 == 0) goto LAB_033abc00;
                bVar29 = bVar23 + 0x20;
                if (0x19 < bVar23 - 0x41) {
                  bVar29 = bVar23;
                }
                if (bVar29 != 0x72) goto LAB_033abc00;
                bVar23 = *(byte *)((long)local_1c0 + 2);
                if (bVar23 == 0) goto LAB_033abc00;
                bVar29 = bVar23 + 0x20;
                if (0x19 < bVar23 - 0x41) {
                  bVar29 = bVar23;
                }
                if (bVar29 != 0x75) goto LAB_033abc00;
                bVar23 = *(byte *)((long)local_1c0 + 3);
                if (bVar23 == 0) goto LAB_033abc00;
                bVar29 = bVar23 + 0x20;
                if (0x19 < bVar23 - 0x41) {
                  bVar29 = bVar23;
                }
                if (bVar29 != 0x65) goto LAB_033abc00;
                bVar6 = *(byte *)((long)local_1c0 + 4) == 0;
              }
              (**(code **)(*(long *)(uVar35 & 0xfffffffffffffffe) + 0x30))
                        ((long *)(uVar35 & 0xfffffffffffffffe),lVar17,pbVar16,bVar6);
              bVar6 = false;
            }
            uVar25 = local_1b8._4_4_;
            local_1b8 = (ulong *)((ulong)local_1b8._4_4_ << 0x20);
            if ((-1 < (int)uVar25) && (local_1c0 != (ulong *)0x0)) {
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
            }
          }
          if ((uVar35 & 1) == 0) goto joined_r0x033ab39c;
          plVar9 = (long *)(uVar35 & 0xfffffffffffffffe);
          plVar1 = plVar9 + 1;
          do {
            iVar7 = (int)*plVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar2) {
              *(int *)plVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        else {
          if (iVar7 < 1) {
            piVar15 = (int *)0x0;
            lVar17 = 0;
          }
          else {
            lVar17 = *(long *)(param_2 + 0x90) + (long)*(int *)(param_2 + 0x80);
            piVar15 = (int *)(lVar17 + **(int **)(param_2 + 0xb8));
            lVar17 = lVar17 + (*(int **)(param_2 + 0xb8))[1];
          }
          if ((lVar17 - (long)piVar15 != 6) ||
             (*piVar15 != 0x69727473 || (short)piVar15[1] != 0x676e)) {
            if (iVar7 < 1) {
              piVar15 = (int *)0x0;
              lVar17 = 0;
            }
            else {
              lVar17 = *(long *)(param_2 + 0x90) + (long)*(int *)(param_2 + 0x80);
              piVar15 = (int *)(lVar17 + **(int **)(param_2 + 0xb8));
              lVar17 = lVar17 + (*(int **)(param_2 + 0xb8))[1];
            }
            if ((lVar17 - (long)piVar15 == 5) && (*piVar15 == 0x61727261 && (char)piVar15[1] == 'y')
               ) {
              local_1c0 = (ulong *)0x0;
              local_1b8 = (ulong *)0x0;
              iVar7 = FUN_033b2c50(param_2,"elementtypeid",&local_1c0);
              if (iVar7 < 0) {
                return 0x80040200;
              }
              if ((local_1c0 != local_1b8) && ((byte)*local_1c0 == 0x22)) {
                local_1c0 = (ulong *)((long)local_1c0 + 1);
                local_1b8 = (ulong *)((long)local_1b8 + -1);
              }
              if ((ulong)((long)local_1b8 - (long)local_1c0) < 4) {
                return 0x80040200;
              }
              if ((int)*local_1c0 != 0x65707974) {
                return 0x80040200;
              }
              puVar18 = (ulong *)((long)local_1c0 + 4);
              uVar35 = (long)local_1b8 - (long)puVar18;
              if ((int)uVar35 < 1) {
                return 0x80040200;
              }
              puVar26 = (ulong *)((long)local_1c0 + 5);
              if (*(byte *)((long)local_1c0 + 4) != 0x2d) {
                puVar26 = puVar18;
              }
              if (local_1b8 <= puVar26) {
                return 0x80040200;
              }
              bVar23 = (byte)*puVar26;
              while( true ) {
                if (9 < bVar23 - 0x30) {
                  return 0x80040200;
                }
                puVar26 = (ulong *)((long)puVar26 + 1);
                if (local_1b8 <= puVar26) break;
                bVar23 = *(byte *)puVar26;
              }
              local_1c0 = puVar18;
              if (0 < (int)uVar35) {
                strncpy((char *)&local_280,(char *)puVar18,uVar35 & 0xffffffff);
              }
              *(undefined1 *)((long)local_270 + (uVar35 - 0x10)) = 0;
              uVar35 = strtoll((char *)&local_280,(char **)0x0,0);
              iVar7 = FUN_033b2d68(param_2,"count",&local_1c8);
              if (iVar7 < 0) {
                return 0x80040200;
              }
              pbVar16 = (byte *)param_3[1];
              if (pbVar16 == (byte *)0x0) {
LAB_033ac18c:
                puVar36 = (undefined *)0x0;
              }
              else {
                pbVar27 = pbVar16;
                if ((*pbVar16 & 1) == 0) {
                  do {
                    pbVar27 = *(byte **)(pbVar27 + 8);
                  } while ((*pbVar27 & 1) == 0);
                }
                if ((*(ulong *)(pbVar27 + 0x10) & 0x1f) != 8) goto LAB_033ac18c;
                puVar13 = (undefined4 *)*param_3;
                puVar36 = (undefined *)param_3[2];
                if (((ulong)puVar36 & 1) != 0) {
                  piVar15 = (int *)(((ulong)puVar36 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                    if (bVar6) {
                      *piVar15 = *piVar15 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  puVar36 = (undefined *)param_3[2];
                }
                if (puVar13 != (undefined4 *)0x0) {
                  do {
                    local_288 = puVar36;
                    if ((*pbVar16 & 1) != 0) {
                      if ((pbVar16 != (byte *)0x0) &&
                         ((int)((ulong)*(undefined8 *)(pbVar16 + 0x10) >> 8) != 0)) {
                        local_1b0 = (undefined8 *)0x0;
                        local_1a8 = (undefined8 *)0x0;
                        local_1c0 = (ulong *)0x0;
                        local_1b8 = (ulong *)0x0;
                        (**(code **)(*(long *)((ulong)puVar36 & 0xfffffffffffffffe) + 0x50))();
                        if ((int)local_1b0 != 0) {
                          puVar18 = local_1c0;
                          puVar26 = local_1b8;
                          puVar21 = local_1a8;
                          uVar25 = local_1b0._4_4_;
                          goto LAB_033ac8f0;
                        }
                        if (((ulong)local_1a8 & 1) == 0) goto LAB_033aca54;
                        bVar6 = false;
                        local_290 = (long *)((ulong)local_1a8 & 0xfffffffffffffffe);
                        goto LAB_033aca14;
                      }
                      break;
                    }
                    pbVar16 = *(byte **)(pbVar16 + 8);
                  } while (pbVar16 != (byte *)0x0);
                  if ((int)local_1c8 == 0) {
                    bVar6 = false;
                    *puVar13 = 0;
                  }
                  else {
                    puVar26 = *(ulong **)
                               (*(long *)(param_1 + 0x68) +
                               (-(uVar35 >> 0x1f & 1) & 0xfffffff800000000 |
                               (uVar35 & 0xffffffff) << 3));
                    *puVar13 = *(undefined4 *)(param_1 + 0x188);
                    puVar18 = puVar26;
                    do {
                      uVar25 = (uint)*puVar18;
                      if ((uVar25 >> 0x14 & 1) != 0) {
                        uVar24 = 0;
                        if (puVar18 != (ulong *)0x0) {
                          uVar28 = CONCAT44(uVar25,uVar25) & 0xfffff000fffff;
                          uVar24 = (uint)(ushort)puVar18[(ulong)(byte)(POPCOUNT((char)uVar28) +
                                                                       POPCOUNT((char)(uVar28 >> 8))
                                                                      + POPCOUNT((char)(uVar28 >>
                                                                                       0x10))) + 2];
                        }
                        goto LAB_033ac748;
                      }
                      if ((*puVar18 & 1) != 0) {
                        uVar24 = 0;
                        goto LAB_033ac748;
                      }
                      puVar18 = (ulong *)puVar18[1];
                    } while (puVar18 != (ulong *)0x0);
                    uVar24 = 0;
LAB_033ac748:
                    local_1c0 = (ulong *)(long)(int)(uVar24 * (int)local_1c8);
                    puVar18 = (ulong *)(**(code **)(*(long *)(param_1 + 0xf0) + 0x10))
                                                 ((long *)(param_1 + 0xf0),local_1c0,&local_1c0);
                    iVar7 = *(int *)(param_1 + 0x188);
                    lVar17 = (long)iVar7;
                    if ((int)(*(uint *)(param_1 + 0x18c) & 0x7fffffff) <= iVar7) {
                      FUN_033ada20(param_1 + 0x180,lVar17 + 1);
                      iVar7 = *(int *)(param_1 + 0x188);
                    }
                    puVar21 = (undefined8 *)(*(long *)(param_1 + 0x180) + (long)iVar7 * 0x10);
                    *puVar21 = puVar18;
                    puVar21[1] = uVar35 & 0xffffffff | (long)local_1c8 << 0x20;
                    *(int *)(param_1 + 0x188) = (int)(lVar17 + 1);
                    if (puVar26 == (ulong *)0x0) {
                      puVar21 = (undefined8 *)0x0;
                      uVar25 = 0;
                    }
                    else {
                      puVar22 = puVar26;
                      do {
                        uVar25 = (uint)*puVar22;
                        if ((uVar25 >> 0x14 & 1) != 0) {
                          uVar35 = CONCAT44(uVar25,uVar25) & 0xfffff000fffff;
                          uVar25 = (uint)(ushort)puVar22[(ulong)(byte)(POPCOUNT((char)uVar35) +
                                                                       POPCOUNT((char)(uVar35 >> 8))
                                                                      + POPCOUNT((char)(uVar35 >>
                                                                                       0x10))) + 2];
                          goto LAB_033ac8a4;
                        }
                        if ((*puVar22 & 1) != 0) {
                          uVar25 = 0;
                          goto LAB_033ac8a4;
                        }
                        puVar22 = (ulong *)puVar22[1];
                      } while (puVar22 != (ulong *)0x0);
                      uVar25 = 0;
LAB_033ac8a4:
                      puVar22 = puVar26;
                      do {
                        uVar35 = *puVar22;
                        if (((uint)uVar35 >> 2 & 1) != 0) {
                          puVar21 = (undefined8 *)puVar22[(uVar35 >> 1 & 1) + (uVar35 & 1) + 2];
                          if (((ulong)puVar21 & 1) != 0) {
                            piVar15 = (int *)(((ulong)puVar21 & 0xfffffffffffffffe) + 8);
                            do {
                              cVar3 = '\x01';
                              bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                              if (bVar6) {
                                *piVar15 = *piVar15 + 1;
                                cVar3 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar3 != '\0');
                          }
                          goto LAB_033ac8f0;
                        }
                        puVar22 = (ulong *)puVar22[1];
                      } while (puVar22 != (ulong *)0x0);
                      puVar21 = (undefined8 *)0x0;
                    }
LAB_033ac8f0:
                    lVar17 = 0;
                    if (((ulong)puVar21 & 1) == 0) {
                      bVar6 = true;
                      do {
                        iVar7 = FUN_033a6b98(param_2,"array");
                        if (iVar7 < 0) goto LAB_033aca54;
                        local_1c0 = (ulong *)((long)puVar18 + lVar17 * (int)uVar25);
                        local_1b8 = puVar26;
                        local_1b0 = puVar21;
                        iVar7 = FUN_033a9f5c(param_1,param_2,&local_1c0);
                        if (((ulong)local_1b0 & 1) != 0) {
                          plVar9 = (long *)((ulong)local_1b0 & 0xfffffffffffffffe);
                          plVar1 = plVar9 + 1;
                          do {
                            lVar5 = *plVar1;
                            cVar3 = '\x01';
                            bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                            if (bVar2) {
                              *(int *)plVar1 = (int)lVar5 + -1;
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                          if ((plVar9 != (long *)0x0) && ((int)lVar5 == 1)) {
                            (**(code **)(*plVar9 + 8))();
                          }
                        }
                        lVar17 = lVar17 + 1;
                      } while (-1 < iVar7);
                    }
                    else {
                      local_290 = (long *)((ulong)puVar21 & 0xfffffffffffffffe);
                      plVar1 = local_290 + 1;
                      do {
                        iVar7 = FUN_033a6b98(param_2,"array");
                        if (iVar7 < 0) {
                          bVar6 = false;
                          goto LAB_033aca14;
                        }
                        local_1c0 = (ulong *)((long)puVar18 + lVar17 * (int)uVar25);
                        do {
                          cVar3 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar6) {
                            *(int *)plVar1 = (int)*plVar1 + 1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        local_1b8 = puVar26;
                        local_1b0 = puVar21;
                        iVar7 = FUN_033a9f5c(param_1,param_2,&local_1c0);
                        if (((ulong)local_1b0 & 1) != 0) {
                          plVar12 = (long *)((ulong)local_1b0 & 0xfffffffffffffffe);
                          plVar9 = plVar12 + 1;
                          do {
                            lVar5 = *plVar9;
                            cVar3 = '\x01';
                            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                            if (bVar6) {
                              *(int *)plVar9 = (int)lVar5 + -1;
                              cVar3 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar3 != '\0');
                          if ((plVar12 != (long *)0x0) && ((int)lVar5 == 1)) {
                            (**(code **)(*plVar12 + 8))();
                          }
                        }
                        lVar17 = lVar17 + 1;
                      } while (-1 < iVar7);
                      bVar6 = true;
LAB_033aca14:
                      plVar1 = local_290 + 1;
                      do {
                        lVar17 = *plVar1;
                        cVar3 = '\x01';
                        bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar2) {
                          *(int *)plVar1 = (int)lVar17 + -1;
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                      if ((local_290 != (long *)0x0) && ((int)lVar17 == 1)) {
                        (**(code **)(*local_290 + 8))();
                      }
                    }
                  }
                  goto LAB_033aca58;
                }
              }
              if (DAT_0488e218 < 2) {
                bVar6 = true;
                if (DAT_046aaf68 == '\0') goto LAB_033aca5c;
LAB_033ac218:
                local_1b0 = &DAT_0488e1c8;
                local_1a8 = (undefined8 *)0x2;
                pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a0 = nn::os::GetThreadId(pTVar8);
                local_190 = 0;
                local_188 = (char *)0x0;
                local_170[0]._0_1_ = '\0';
                local_1b8 = (ulong *)0x10000000000;
                local_180 = 0;
                uStack_178 = 0;
                local_1e8 = (ulong *)param_3[1];
                for (puVar18 = local_1e8; (*puVar18 & 1) == 0; puVar18 = (ulong *)puVar18[1]) {
                }
                local_1cc = (uint)puVar18[2] & 0x1f;
                local_1c0 = local_170;
                local_198 = local_170;
                FUN_0322c554(&local_1c0,"Type \'{}\' is not an array ({})",&DAT_047b32c0,&local_1e8,
                             &local_1cc);
                local_188 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
                ;
                local_180 = 0x33d;
                if ((char)local_170[0] != '\0') {
                  sVar11 = strlen((char *)local_170);
                  *(undefined2 *)
                   ((long)local_170 + (long)(int)((int)sVar11 - (uint)((int)sVar11 == 0xff))) = 10;
                  printf("%s",local_170);
                  fflush(*(FILE **)PTR_stdout_047cb860);
                }
              }
              else {
                if (DAT_046aaf68 != '\0') goto LAB_033ac218;
                local_1c0 = (ulong *)0x0;
                local_1b0 = &DAT_0488e1c8;
                local_1a8 = (undefined8 *)0x2;
                pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a0 = nn::os::GetThreadId(pTVar8);
                local_198 = (ulong *)0x0;
                local_190 = 0;
                local_188 = (char *)0x0;
                local_180 = 0;
                uStack_178 = 0;
                local_280 = (ulong *)param_3[1];
                for (puVar18 = local_280; (*puVar18 & 1) == 0; puVar18 = (ulong *)puVar18[1]) {
                }
                local_6c[0] = (uint)puVar18[2] & 0x1f;
                FUN_0322c554(&local_1c0,"Type \'{}\' is not an array ({})",&DAT_047b32c0,&local_280,
                             local_6c);
                local_188 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
                ;
                local_180 = 0x33d;
                FUN_0322c8e0(&local_1c0);
              }
              if (((ulong)local_198 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_198 + -1),0);
              }
              bVar6 = true;
LAB_033aca5c:
              if (((ulong)puVar36 & 1) != 0) {
                plVar9 = (long *)((ulong)puVar36 & 0xfffffffffffffffe);
                plVar1 = plVar9 + 1;
                do {
                  lVar17 = *plVar1;
                  cVar3 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar2) {
                    *(int *)plVar1 = (int)lVar17 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((plVar9 != (long *)0x0) && ((int)lVar17 == 1)) {
                  (**(code **)(*plVar9 + 8))();
                }
              }
              if (!bVar6) {
                return 0;
              }
              return 0x80040200;
            }
            if (iVar7 < 1) {
              piVar15 = (int *)0x0;
              lVar17 = 0;
            }
            else {
              lVar17 = *(long *)(param_2 + 0x90) + (long)*(int *)(param_2 + 0x80);
              piVar15 = (int *)(lVar17 + **(int **)(param_2 + 0xb8));
              lVar17 = lVar17 + (*(int **)(param_2 + 0xb8))[1];
            }
            if (lVar17 - (long)piVar15 != 7) {
              return 0;
            }
            if (*piVar15 != 0x6e696f70 || *(int *)((long)piVar15 + 3) != 0x7265746e) {
              return 0;
            }
            pbVar16 = (byte *)param_3[1];
            if (pbVar16 == (byte *)0x0) {
LAB_033ab12c:
              uVar35 = 0;
LAB_033ab130:
              if (DAT_0488e218 < 2) {
                bVar6 = true;
                if (DAT_046aaf68 != '\0') goto LAB_033ab2ac;
              }
              else {
                if (DAT_046aaf68 == '\0') {
                  local_1c0 = (ulong *)0x0;
                  local_1b0 = &DAT_0488e1c8;
                  local_1a8 = (undefined8 *)0x2;
                  pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1a0 = nn::os::GetThreadId(pTVar8);
                  local_198 = (ulong *)0x0;
                  local_190 = 0;
                  local_188 = (char *)0x0;
                  local_180 = 0;
                  uStack_178 = 0;
                  local_280 = (ulong *)param_3[1];
                  for (puVar18 = local_280; (*puVar18 & 1) == 0; puVar18 = (ulong *)puVar18[1]) {
                  }
                  local_1c8 = (byte *)(CONCAT44(local_1c8._4_4_,(int)puVar18[2]) &
                                      0xffffffff0000001f);
                  FUN_0322c554(&local_1c0,"Type \'{}\' is not a pointer ({})",&DAT_047b32c0,
                               &local_280,&local_1c8);
                  local_188 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
                  ;
                  local_180 = 0x370;
                  FUN_0322c8e0(&local_1c0);
                }
                else {
LAB_033ab2ac:
                  local_1b0 = &DAT_0488e1c8;
                  local_1a8 = (undefined8 *)0x2;
                  pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1a0 = nn::os::GetThreadId(pTVar8);
                  local_190 = 0;
                  local_188 = (char *)0x0;
                  local_170[0]._0_1_ = '\0';
                  local_1b8 = (ulong *)0x10000000000;
                  local_180 = 0;
                  uStack_178 = 0;
                  local_1e8 = (ulong *)param_3[1];
                  for (puVar18 = local_1e8; (*puVar18 & 1) == 0; puVar18 = (ulong *)puVar18[1]) {
                  }
                  local_6c[0] = (uint)puVar18[2] & 0x1f;
                  local_1c0 = local_170;
                  local_198 = local_170;
                  FUN_0322c554(&local_1c0,"Type \'{}\' is not a pointer ({})",&DAT_047b32c0,
                               &local_1e8,local_6c);
                  local_188 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
                  ;
                  local_180 = 0x370;
                  if ((char)local_170[0] != '\0') {
                    sVar11 = strlen((char *)local_170);
                    *(undefined2 *)
                     ((long)local_170 + (long)(int)((int)sVar11 - (uint)((int)sVar11 == 0xff))) = 10
                    ;
                    printf("%s",local_170);
                    fflush(*(FILE **)PTR_stdout_047cb860);
                  }
                }
                if (((ulong)local_198 & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_198 + -1),0);
                }
                bVar6 = true;
              }
            }
            else {
              for (; (*pbVar16 & 1) == 0; pbVar16 = *(byte **)(pbVar16 + 8)) {
              }
              if ((*(ulong *)(pbVar16 + 0x10) & 0x1f) != 6) goto LAB_033ab12c;
              lVar17 = *param_3;
              uVar35 = param_3[2];
              if ((uVar35 & 1) != 0) {
                piVar15 = (int *)((uVar35 & 0xfffffffffffffffe) + 8);
                do {
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                  if (bVar6) {
                    *piVar15 = *piVar15 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                uVar35 = param_3[2];
              }
              if (lVar17 == 0) goto LAB_033ab130;
              local_130 = 1;
              local_1b0 = (undefined8 *)((ulong)local_1b0._1_7_ << 8);
              local_1c0 = &local_1b0;
              local_1b8._0_4_ = 1;
              local_1b8._4_4_ = 0x80000080;
              local_280 = (ulong *)0x0;
              local_278 = 0;
              iVar7 = FUN_033b2c50(param_2,&DAT_03c12387,&local_280);
              if ((-1 < iVar7) && (iVar7 = FUN_033b2f40(&local_280,&local_1c0), -1 < iVar7)) {
                if ((byte)*local_1c0 == 0x22) {
                  uVar25 = (int)local_1b8 - 1;
                  if (uVar25 != 0 && 0 < (int)local_1b8) {
                    uVar25 = 1;
                  }
                  iVar7 = (int)local_1b8;
                  if (0 < (int)uVar25) {
                    iVar14 = (int)local_1b8 - uVar25;
                    if (iVar14 == 0) {
                      iVar7 = 0;
                      local_1b8._0_4_ = iVar14;
                    }
                    else {
                      uVar28 = (long)iVar14 & 3;
                      if ((ulong)((long)(int)local_1b8 + (long)(int)~uVar25) < 3) {
                        uVar30 = 0;
                      }
                      else {
                        uVar30 = 0;
                        do {
                          pbVar16 = (byte *)((long)local_1c0 + uVar30 + (ulong)uVar25 + 3);
                          pbVar27 = (byte *)((long)local_1c0 + uVar30 + 1);
                          uVar30 = uVar30 + 4;
                          pbVar27[-1] = pbVar16[-3];
                          *pbVar27 = pbVar16[-2];
                          pbVar27[1] = pbVar16[-1];
                          pbVar27[2] = *pbVar16;
                        } while (((long)iVar14 & 0xfffffffffffffffcU) != uVar30);
                      }
                      if (uVar28 != 0) {
                        pbVar16 = (byte *)((long)local_1c0 + uVar30);
                        do {
                          uVar28 = uVar28 - 1;
                          *pbVar16 = pbVar16[uVar25];
                          pbVar16 = pbVar16 + 1;
                        } while (uVar28 != 0);
                      }
                      iVar7 = iVar14;
                      local_1b8._0_4_ = iVar14;
                    }
                  }
                  uVar25 = iVar7 - 2U & ((int)(iVar7 - 2U) >> 0x1f ^ 0xffffffffU);
                  uVar4 = (local_1b8._4_4_ & 0x7fffffff) - 1;
                  uVar24 = uVar25;
                  if ((int)uVar4 <= (int)uVar25) {
                    uVar24 = uVar4;
                  }
                  if (local_130 != 0) {
                    uVar24 = uVar25;
                  }
                  iVar14 = uVar24 + 1;
                  if ((int)(local_1b8._4_4_ & 0x7fffffff) <= (int)uVar24) {
                    FUN_030b4a20(&local_1c0,PTR_PTR_047d1a50 + 0x20,iVar14);
                    iVar7 = (int)local_1b8;
                  }
                  if (iVar7 <= (int)uVar24 || iVar14 < iVar7) {
                    local_1b8._0_4_ = iVar14;
                  }
                  *(byte *)((long)local_1c0 + (long)(int)uVar24) = 0;
                }
                if ((byte)*local_1c0 == 0x6e) {
                  if (((*(byte *)((long)local_1c0 + 1) == 0x6f) &&
                      (*(byte *)((long)local_1c0 + 2) == 0x74)) &&
                     (*(byte *)((long)local_1c0 + 3) == 0x65)) {
                    iVar14 = 0x3c5a755;
                    iVar7 = 0x3c5a759;
                    goto LAB_033abe80;
                  }
                }
                else if (((((byte)*local_1c0 == 0x6f) && (*(byte *)((long)local_1c0 + 1) == 0x62))
                         && ((*(byte *)((long)local_1c0 + 2) == 0x6a &&
                             ((*(byte *)((long)local_1c0 + 3) == 0x65 &&
                              (*(byte *)((long)local_1c0 + 4) == 99)))))) &&
                        (*(byte *)((long)local_1c0 + 5) == 0x74)) {
                  iVar14 = 0x3c68f94;
                  iVar7 = 0x3c68f9a;
LAB_033abe80:
                  pbVar16 = (byte *)((long)local_1c0 + (long)(iVar7 - iVar14));
                  pbVar27 = (byte *)((long)local_1c0 + (long)(int)local_1b8 + -1);
                  uVar28 = (long)pbVar27 - (long)pbVar16;
                  if (0 < (int)uVar28) {
                    pbVar19 = pbVar16 + 1;
                    if (*pbVar16 != 0x2d) {
                      pbVar19 = pbVar16;
                    }
                    if ((pbVar19 < pbVar27) && (pbVar16[*pbVar16 == 0x2d] - 0x30 < 10)) {
                      bVar6 = true;
LAB_033abedc:
                      pbVar19 = pbVar19 + 1;
                      if (pbVar19 < pbVar27) goto code_r0x033abee4;
                      if (0 < (int)uVar28) {
                        strncpy((char *)&local_280,(char *)pbVar16,uVar28 & 0xffffffff);
                      }
                      *(undefined1 *)((long)local_270 + (uVar28 - 0x10)) = 0;
                      lVar10 = strtoll((char *)&local_280,(char **)0x0,0);
                      iVar14 = *(int *)(param_1 + 0x80);
                      iVar32 = (int)lVar10;
                      iVar7 = iVar14;
                      if (iVar14 <= iVar32 + 1) {
                        iVar7 = iVar32 + 1;
                      }
                      if ((int)(*(uint *)(param_1 + 0x84) & 0x7fffffff) < iVar7) {
                        FUN_033277d4(param_1 + 0x78,PTR_PTR_047d1a50,(long)iVar7);
                        iVar14 = *(int *)(param_1 + 0x80);
                      }
                      if (iVar14 < iVar7) {
                        puVar21 = (undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar14 * 0x18);
                        lVar17 = (long)iVar7 * 0x18 + (long)iVar14 * -0x18;
                        *(int *)(param_1 + 0x80) = iVar7;
                        do {
                          *(undefined4 *)((long)puVar21 + 0x14) = 0;
                          lVar17 = lVar17 + -0x18;
                          *(undefined1 *)(puVar21 + 2) = 0;
                          *puVar21 = 0;
                          puVar21[1] = 0;
                          puVar21 = puVar21 + 3;
                        } while (lVar17 != 0);
                      }
                      else if (iVar7 < iVar14) {
                        *(int *)(param_1 + 0x80) = iVar7;
                      }
                      bVar6 = false;
                      *(int *)*param_3 = iVar32;
                      goto LAB_033abefc;
                    }
                  }
                }
              }
              bVar6 = true;
LAB_033abefc:
              uVar25 = local_1b8._4_4_;
              local_1b8 = (ulong *)((ulong)local_1b8._4_4_ << 0x20);
              if ((-1 < (int)uVar25) && (local_1c0 != (ulong *)0x0)) {
                (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
              }
            }
            if ((uVar35 & 1) != 0) {
              plVar9 = (long *)(uVar35 & 0xfffffffffffffffe);
              plVar1 = plVar9 + 1;
              do {
                lVar17 = *plVar1;
                cVar3 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar2) {
                  *(int *)plVar1 = (int)lVar17 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((plVar9 != (long *)0x0) && ((int)lVar17 == 1)) {
                (**(code **)(*plVar9 + 8))();
              }
            }
            goto joined_r0x033ab39c;
          }
          pbVar16 = (byte *)param_3[1];
          if (pbVar16 == (byte *)0x0) {
LAB_033aae14:
            uVar35 = 0;
LAB_033aae18:
            if (1 < DAT_0488e218) {
              if (DAT_046aaf68 != '\0') goto LAB_033ab19c;
              local_1c0 = (ulong *)0x0;
              local_1b0 = &DAT_0488e1c8;
              local_1a8 = (undefined8 *)0x2;
              pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a0 = nn::os::GetThreadId(pTVar8);
              local_198 = (ulong *)0x0;
              local_190 = 0;
              local_188 = (char *)0x0;
              local_180 = 0;
              uStack_178 = 0;
              local_280 = (ulong *)param_3[1];
              for (puVar18 = local_280; (*puVar18 & 1) == 0; puVar18 = (ulong *)puVar18[1]) {
              }
              local_1c8 = (byte *)(CONCAT44(local_1c8._4_4_,(int)puVar18[2]) & 0xffffffff0000001f);
              FUN_0322c554(&local_1c0,"Type \'{}\' is not a string ({})",&DAT_047b32c0,&local_280,
                           &local_1c8);
              local_188 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
              ;
              local_180 = 0x316;
              FUN_0322c8e0(&local_1c0);
LAB_033ab230:
              if (((ulong)local_198 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_198 + -1),0);
              }
              goto LAB_033ab254;
            }
            bVar6 = true;
            if (DAT_046aaf68 != '\0') {
LAB_033ab19c:
              local_1b0 = &DAT_0488e1c8;
              local_1a8 = (undefined8 *)0x2;
              pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a0 = nn::os::GetThreadId(pTVar8);
              local_190 = 0;
              local_188 = (char *)0x0;
              local_170[0]._0_1_ = '\0';
              local_1b8 = (ulong *)0x10000000000;
              local_180 = 0;
              uStack_178 = 0;
              local_1e8 = (ulong *)param_3[1];
              for (puVar18 = local_1e8; (*puVar18 & 1) == 0; puVar18 = (ulong *)puVar18[1]) {
              }
              local_6c[0] = (uint)puVar18[2] & 0x1f;
              local_1c0 = local_170;
              local_198 = local_170;
              FUN_0322c554(&local_1c0,"Type \'{}\' is not a string ({})",&DAT_047b32c0,&local_1e8,
                           local_6c);
              local_188 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
              ;
              local_180 = 0x316;
              if ((char)local_170[0] != '\0') {
                sVar11 = strlen((char *)local_170);
                *(undefined2 *)
                 ((long)local_170 + (long)(int)((int)sVar11 - (uint)((int)sVar11 == 0xff))) = 10;
                printf("%s",local_170);
                fflush(*(FILE **)PTR_stdout_047cb860);
              }
              goto LAB_033ab230;
            }
          }
          else {
            for (; (*pbVar16 & 1) == 0; pbVar16 = *(byte **)(pbVar16 + 8)) {
            }
            if ((*(ulong *)(pbVar16 + 0x10) & 0x1f) != 3) goto LAB_033aae14;
            piVar15 = (int *)*param_3;
            uVar35 = param_3[2];
            if ((uVar35 & 1) != 0) {
              piVar33 = (int *)((uVar35 & 0xfffffffffffffffe) + 8);
              do {
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar33,0x10);
                if (bVar6) {
                  *piVar33 = *piVar33 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              uVar35 = param_3[2];
            }
            if (piVar15 == (int *)0x0) goto LAB_033aae18;
            local_280 = (ulong *)0x0;
            local_278 = 0;
            iVar7 = FUN_033b2c50(param_2,"value",&local_280);
            if (iVar7 < 0) {
              bVar6 = false;
              *piVar15 = 0;
              goto LAB_033ab258;
            }
            local_1c0 = &local_1b0;
            local_1b8._0_4_ = 0;
            local_1b8._4_4_ = 0x80000080;
            local_130 = 1;
            FUN_031c6afc(&local_1c0,local_280,(int)local_278 - (int)local_280);
            FUN_033b2f40(&local_280,&local_1c0);
            if ((byte)*local_1c0 == 0x22) {
              uVar25 = (int)local_1b8 - 1;
              if (uVar25 != 0 && 0 < (int)local_1b8) {
                uVar25 = 1;
              }
              iVar7 = (int)local_1b8;
              if (0 < (int)uVar25) {
                iVar14 = (int)local_1b8 - uVar25;
                if (iVar14 == 0) {
                  iVar7 = 0;
                  local_1b8._0_4_ = iVar14;
                }
                else {
                  uVar28 = (long)iVar14 & 3;
                  if ((ulong)((long)(int)local_1b8 + (long)(int)~uVar25) < 3) {
                    uVar30 = 0;
                  }
                  else {
                    uVar30 = 0;
                    do {
                      pbVar16 = (byte *)((long)local_1c0 + uVar30 + (ulong)uVar25 + 3);
                      pbVar27 = (byte *)((long)local_1c0 + uVar30 + 1);
                      uVar30 = uVar30 + 4;
                      pbVar27[-1] = pbVar16[-3];
                      *pbVar27 = pbVar16[-2];
                      pbVar27[1] = pbVar16[-1];
                      pbVar27[2] = *pbVar16;
                    } while (((long)iVar14 & 0xfffffffffffffffcU) != uVar30);
                  }
                  if (uVar28 != 0) {
                    pbVar16 = (byte *)((long)local_1c0 + uVar30);
                    do {
                      uVar28 = uVar28 - 1;
                      *pbVar16 = pbVar16[uVar25];
                      pbVar16 = pbVar16 + 1;
                    } while (uVar28 != 0);
                  }
                  iVar7 = iVar14;
                  local_1b8._0_4_ = iVar14;
                }
              }
              uVar25 = iVar7 - 2U & ((int)(iVar7 - 2U) >> 0x1f ^ 0xffffffffU);
              uVar4 = (local_1b8._4_4_ & 0x7fffffff) - 1;
              uVar24 = uVar25;
              if ((int)uVar4 <= (int)uVar25) {
                uVar24 = uVar4;
              }
              if (local_130 != 0) {
                uVar24 = uVar25;
              }
              iVar14 = uVar24 + 1;
              if ((int)(local_1b8._4_4_ & 0x7fffffff) <= (int)uVar24) {
                FUN_030b4a20(&local_1c0,PTR_PTR_047d1a50 + 0x20,iVar14);
                iVar7 = (int)local_1b8;
              }
              if (iVar7 <= (int)uVar24 || iVar14 < iVar7) {
                local_1b8._0_4_ = iVar14;
              }
              *(byte *)((long)local_1c0 + (long)(int)uVar24) = 0;
            }
            puVar18 = local_1c0;
            iVar7 = *(int *)(param_1 + 0x188);
            if (*(int *)(param_1 + 400) == 0) {
              uVar25 = *(uint *)(param_1 + 0x70);
              if (1 < (int)uVar25) {
                lVar17 = *(long *)(param_1 + 0x68);
                uVar28 = 1;
                do {
                  puVar26 = *(ulong **)(lVar17 + uVar28 * 8);
                  if (puVar26 != (ulong *)0x0) {
                    uVar30 = *puVar26;
                    uVar24 = (uint)uVar30;
                    bVar23 = (byte)uVar30;
                    puVar22 = puVar26;
                    if ((uVar30 & 1) == 0) {
                      do {
                        puVar22 = (ulong *)puVar22[1];
                      } while ((*puVar22 & 1) == 0);
                    }
                    if ((puVar22[2] & 0xfffffdff) == 0x2004) {
                      puVar22 = puVar26;
                      bVar29 = bVar23;
                      if ((uVar24 >> 3 & 1) == 0) {
                        uVar31 = uVar30;
                        do {
                          if (((uVar31 & 1) != 0) ||
                             (puVar22 = (ulong *)puVar22[1], puVar22 == (ulong *)0x0))
                          goto LAB_033ab900;
                          uVar31 = *puVar22;
                          bVar29 = (byte)uVar31;
                        } while (((uint)uVar31 >> 3 & 1) == 0);
                      }
                      if (puVar22[(ulong)(byte)POPCOUNT(bVar29 & 7) + 2] != 0) {
                        while ((uVar24 >> 3 & 1) == 0) {
                          if (((uVar30 & 1) != 0) ||
                             (puVar26 = (ulong *)puVar26[1], puVar26 == (ulong *)0x0))
                          goto LAB_033ab900;
                          uVar30 = *puVar26;
                          bVar23 = (byte)uVar30;
                          uVar24 = (uint)uVar30;
                        }
                        piVar33 = (int *)puVar26[(ulong)(byte)POPCOUNT(bVar23 & 7) + 2];
                        if (((piVar33 != (int *)0x0) &&
                            (sVar11 = strlen((char *)piVar33), sVar11 == 4)) &&
                           (*piVar33 == 0x72616863)) {
                          *(int *)(param_1 + 400) = (int)uVar28;
                          if ((int)uVar28 != 0) goto LAB_033ab74c;
                          break;
                        }
                      }
                    }
                  }
LAB_033ab900:
                  uVar28 = uVar28 + 1;
                } while (uVar28 != uVar25);
              }
            }
            else {
LAB_033ab74c:
              sVar11 = strlen((char *)puVar18);
              sVar11 = (size_t)((int)sVar11 + 1);
              __dest = (void *)(**(code **)(*(long *)(param_1 + 0xf0) + 0x18))
                                         ((long *)(param_1 + 0xf0),sVar11);
              memcpy(__dest,puVar18,sVar11);
              sVar11 = strlen((char *)puVar18);
              uVar25 = *(uint *)(param_1 + 400);
              iVar14 = *(int *)(param_1 + 0x188);
              lVar17 = (long)iVar14;
              if ((int)(*(uint *)(param_1 + 0x18c) & 0x7fffffff) <= iVar14) {
                FUN_033ada20(param_1 + 0x180,lVar17 + 1);
                iVar14 = *(int *)(param_1 + 0x188);
              }
              uVar24 = local_1b8._4_4_;
              puVar21 = (undefined8 *)(*(long *)(param_1 + 0x180) + (long)iVar14 * 0x10);
              *puVar21 = __dest;
              puVar21[1] = (ulong)uVar25 | sVar11 << 0x20;
              *(int *)(param_1 + 0x188) = (int)(lVar17 + 1);
              if (-1 < iVar7) {
                *piVar15 = iVar7;
                local_1b8 = (ulong *)((ulong)local_1b8._4_4_ << 0x20);
                if ((-1 < (int)uVar24) && (local_1c0 != (ulong *)0x0)) {
                  (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
                }
                bVar6 = false;
                goto LAB_033ab258;
              }
            }
            uVar25 = local_1b8._4_4_;
            local_1b8 = (ulong *)((ulong)local_1b8._4_4_ << 0x20);
            if ((-1 < (int)uVar25) && (local_1c0 != (ulong *)0x0)) {
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
            }
LAB_033ab254:
            bVar6 = true;
          }
LAB_033ab258:
          if ((uVar35 & 1) == 0) goto joined_r0x033ab39c;
          plVar9 = (long *)(uVar35 & 0xfffffffffffffffe);
          plVar1 = plVar9 + 1;
          do {
            iVar7 = (int)*plVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar2) {
              *(int *)plVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
    }
    if ((plVar9 != (long *)0x0) && (iVar7 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
joined_r0x033ab39c:
    if (!bVar6) {
      return 0;
    }
    return 0x80040200;
  }
  local_278 = 0;
  local_270[0] = 0;
  local_280 = (ulong *)0x0;
  pbVar16 = (byte *)param_3[1];
  if (pbVar16 != (byte *)0x0) {
    for (; (*pbVar16 & 1) == 0; pbVar16 = *(byte **)(pbVar16 + 8)) {
    }
    if ((*(ulong *)(pbVar16 + 0x10) & 0x1f) == 7) {
      local_280 = (ulong *)*param_3;
      local_278 = param_3[1];
      uVar35 = param_3[2];
      if ((uVar35 & 1) != 0) {
        piVar15 = (int *)((uVar35 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar6) {
            *piVar15 = *piVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar35 = param_3[2];
      }
      local_270[0] = uVar35;
      if (local_280 != (ulong *)0x0) {
        iVar7 = FUN_033a6b98(param_2,"record");
        puVar36 = PTR_PTR_047d1a50;
        if (-1 < iVar7) {
          local_288 = PTR_PTR_047d1a50 + 0x20;
          do {
            if (*(int *)(param_2 + 0xc0) < 1) {
              piVar15 = (int *)0x0;
              lVar17 = 0;
            }
            else {
              lVar17 = *(long *)(param_2 + 0x90) + (long)*(int *)(param_2 + 0x80);
              piVar15 = (int *)(lVar17 + **(int **)(param_2 + 0xb8));
              lVar17 = lVar17 + (*(int **)(param_2 + 0xb8))[1];
            }
            if ((lVar17 - (long)piVar15 != 5) || (*piVar15 != 0x6c656966 || (char)piVar15[1] != 'd')
               ) {
              if ((local_270[0] & 1) == 0) {
                return 0x80040200;
              }
              plVar9 = (long *)(local_270[0] & 0xfffffffffffffffe);
              plVar1 = plVar9 + 1;
              do {
                iVar7 = (int)*plVar1;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *(int *)plVar1 = iVar7 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              goto LAB_033aaafc;
            }
            local_1b8._0_4_ = 1;
            local_1b8._4_4_ = 0x80000080;
            local_130 = 1;
            local_1b0 = (undefined8 *)((ulong)local_1b0 & 0xffffffffffffff00);
            local_1e8 = (ulong *)0x0;
            pbStack_1e0 = (byte *)0x0;
            local_1c0 = &local_1b0;
            iVar7 = FUN_033b2c50(param_2,&DAT_03c1dc5b,&local_1e8);
            uVar25 = local_1b8._4_4_;
            if (iVar7 < 0) {
              local_1b8 = (ulong *)((ulong)local_1b8._4_4_ << 0x20);
              if ((-1 < (int)uVar25) && (local_1c0 != (ulong *)0x0)) {
                (**(code **)(*(long *)(puVar36 + 0x20) + 0x20))(puVar36 + 0x20);
              }
              if ((local_270[0] & 1) == 0) {
                return 0x80040200;
              }
              plVar9 = (long *)(local_270[0] & 0xfffffffffffffffe);
              plVar1 = plVar9 + 1;
              do {
                iVar7 = (int)*plVar1;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *(int *)plVar1 = iVar7 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              goto LAB_033aaafc;
            }
            iVar7 = FUN_033b2f40(&local_1e8,&local_1c0);
            uVar25 = local_1b8._4_4_;
            if (iVar7 < 0) {
              local_1b8 = (ulong *)((ulong)local_1b8._4_4_ << 0x20);
              if ((-1 < (int)uVar25) && (local_1c0 != (ulong *)0x0)) {
                (**(code **)(*(long *)(puVar36 + 0x20) + 0x20))(puVar36 + 0x20);
              }
              if ((local_270[0] & 1) == 0) {
                return 0x80040200;
              }
              plVar9 = (long *)(local_270[0] & 0xfffffffffffffffe);
              plVar1 = plVar9 + 1;
              do {
                iVar7 = (int)*plVar1;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *(int *)plVar1 = iVar7 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              goto LAB_033aaafc;
            }
            if ((byte)*local_1c0 == 0x22) {
              uVar25 = (int)local_1b8 - 1;
              if (uVar25 != 0 && 0 < (int)local_1b8) {
                uVar25 = 1;
              }
              iVar7 = (int)local_1b8;
              if (0 < (int)uVar25) {
                iVar14 = (int)local_1b8 - uVar25;
                if (iVar14 == 0) {
                  iVar7 = 0;
                  local_1b8._0_4_ = iVar14;
                }
                else {
                  uVar35 = (long)iVar14 & 7;
                  if ((ulong)((long)(int)local_1b8 + (long)(int)~uVar25) < 7) {
                    uVar28 = 0;
                  }
                  else {
                    uVar28 = 0;
                    lVar17 = (ulong)uVar25 + 3;
                    do {
                      lVar5 = uVar28 + lVar17;
                      pbVar16 = (byte *)((long)local_1c0 + uVar28 + 3);
                      pbVar16[-3] = *(byte *)((long)local_1c0 + lVar5 + -3);
                      pbVar16[-2] = *(byte *)((long)local_1c0 + lVar5 + -2);
                      pbVar16[-1] = *(byte *)((long)local_1c0 + lVar5 + -1);
                      *pbVar16 = *(byte *)((long)local_1c0 + uVar28 + lVar17);
                      pbVar16[1] = *(byte *)((long)local_1c0 + lVar5 + 1);
                      pbVar16[2] = *(byte *)((long)local_1c0 + lVar5 + 2);
                      pbVar16[3] = *(byte *)((long)local_1c0 + lVar5 + 3);
                      uVar28 = uVar28 + 8;
                      pbVar16[4] = *(byte *)((long)local_1c0 + lVar5 + 4);
                    } while (((long)iVar14 & 0xfffffffffffffff8U) != uVar28);
                  }
                  if (uVar35 != 0) {
                    pbVar16 = (byte *)((long)local_1c0 + uVar28);
                    do {
                      uVar35 = uVar35 - 1;
                      *pbVar16 = pbVar16[uVar25];
                      pbVar16 = pbVar16 + 1;
                    } while (uVar35 != 0);
                  }
                  local_1b8._0_4_ = iVar14;
                  iVar7 = iVar14;
                }
              }
              uVar25 = iVar7 - 2U & ((int)(iVar7 - 2U) >> 0x1f ^ 0xffffffffU);
              uVar4 = (local_1b8._4_4_ & 0x7fffffff) - 1;
              uVar24 = uVar25;
              if ((int)uVar4 <= (int)uVar25) {
                uVar24 = uVar4;
              }
              if (local_130 != 0) {
                uVar24 = uVar25;
              }
              iVar14 = uVar24 + 1;
              if ((int)(local_1b8._4_4_ & 0x7fffffff) <= (int)uVar24) {
                FUN_030b4a20(&local_1c0,local_288,iVar14);
                iVar7 = (int)local_1b8;
              }
              if (iVar7 <= (int)uVar24 || iVar14 < iVar7) {
                local_1b8._0_4_ = iVar14;
              }
              *(byte *)((long)local_1c0 + (long)(int)uVar24) = 0;
            }
            uVar35 = FUN_031e1c40(local_278,local_1c0,1);
            if (1 < uVar35) {
              FUN_031e32f0(&local_1e8,&local_280,uVar35);
              iVar7 = FUN_033a6b98(param_2,"field");
              if ((-1 < iVar7) && (iVar7 = FUN_033a9f5c(param_1,param_2,&local_1e8), iVar7 < 0)) {
                if ((local_1d8 & 1) != 0) {
                  plVar9 = (long *)(local_1d8 & 0xfffffffffffffffe);
                  plVar1 = plVar9 + 1;
                  do {
                    lVar17 = *plVar1;
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar6) {
                      *(int *)plVar1 = (int)lVar17 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if ((plVar9 != (long *)0x0) && ((int)lVar17 == 1)) {
                    (**(code **)(*plVar9 + 8))();
                  }
                }
                uVar25 = local_1b8._4_4_;
                local_1b8 = (ulong *)((ulong)local_1b8._4_4_ << 0x20);
                if ((-1 < (int)uVar25) && (local_1c0 != (ulong *)0x0)) {
                  (**(code **)(*(long *)(puVar36 + 0x20) + 0x20))(puVar36 + 0x20);
                }
                if ((local_270[0] & 1) == 0) {
                  return 0x80040200;
                }
                plVar9 = (long *)(local_270[0] & 0xfffffffffffffffe);
                plVar1 = plVar9 + 1;
                do {
                  iVar7 = (int)*plVar1;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *(int *)plVar1 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                goto LAB_033aaafc;
              }
              if ((local_1d8 & 1) != 0) {
                plVar9 = (long *)(local_1d8 & 0xfffffffffffffffe);
                plVar1 = plVar9 + 1;
                do {
                  lVar17 = *plVar1;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *(int *)plVar1 = (int)lVar17 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((plVar9 != (long *)0x0) && ((int)lVar17 == 1)) {
                  (**(code **)(*plVar9 + 8))();
                }
              }
            }
            uVar25 = local_1b8._4_4_;
            local_1b8 = (ulong *)((ulong)local_1b8._4_4_ << 0x20);
            if ((-1 < (int)uVar25) && (local_1c0 != (ulong *)0x0)) {
              (**(code **)(*(long *)(puVar36 + 0x20) + 0x20))();
            }
            iVar7 = FUN_033a6b98(param_2,"record");
          } while (-1 < iVar7);
          uVar35 = local_270[0];
        }
        if ((uVar35 & 1) == 0) {
          return 0;
        }
        plVar9 = (long *)(uVar35 & 0xfffffffffffffffe);
        plVar1 = plVar9 + 1;
        do {
          lVar17 = *plVar1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)lVar17 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (plVar9 == (long *)0x0) {
          return 0;
        }
        if ((int)lVar17 == 1) {
          (**(code **)(*plVar9 + 8))();
          return 0;
        }
        return 0;
      }
    }
  }
  if (DAT_0488e218 < 2) {
    if (DAT_046aaf68 == '\0') goto LAB_033aaadc;
LAB_033aaa24:
    local_1b0 = &DAT_0488e1c8;
    local_1a8 = (undefined8 *)0x2;
    pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
    local_1a0 = nn::os::GetThreadId(pTVar8);
    local_190 = 0;
    local_188 = (char *)0x0;
    local_170[0]._0_1_ = '\0';
    local_1b8 = (ulong *)0x10000000000;
    local_180 = 0;
    uStack_178 = 0;
    local_1c8 = (byte *)param_3[1];
    for (pbVar16 = local_1c8; (*pbVar16 & 1) == 0; pbVar16 = *(byte **)(pbVar16 + 8)) {
    }
    local_1cc = *(uint *)(pbVar16 + 0x10) & 0x1f;
    local_1c0 = local_170;
    local_198 = local_170;
    FUN_0322c554(&local_1c0,"Type \'{}\' is not a record ({})",&DAT_047b32c0,&local_1c8,&local_1cc);
    local_188 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
    ;
    local_180 = 0x289;
    if ((char)local_170[0] != '\0') {
      sVar11 = strlen((char *)local_170);
      *(undefined2 *)((long)local_170 + (long)(int)((int)sVar11 - (uint)((int)sVar11 == 0xff))) = 10
      ;
      printf("%s",local_170);
      fflush(*(FILE **)PTR_stdout_047cb860);
    }
  }
  else {
    if (DAT_046aaf68 != '\0') goto LAB_033aaa24;
    local_1c0 = (ulong *)0x0;
    local_1b0 = &DAT_0488e1c8;
    local_1a8 = (undefined8 *)0x2;
    pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
    local_1a0 = nn::os::GetThreadId(pTVar8);
    local_198 = (ulong *)0x0;
    local_190 = 0;
    local_188 = (char *)0x0;
    local_180 = 0;
    uStack_178 = 0;
    local_1e8 = (ulong *)param_3[1];
    for (puVar18 = local_1e8; (*puVar18 & 1) == 0; puVar18 = (ulong *)puVar18[1]) {
    }
    local_6c[0] = (uint)puVar18[2] & 0x1f;
    FUN_0322c554(&local_1c0,"Type \'{}\' is not a record ({})",&DAT_047b32c0,&local_1e8,local_6c);
    local_188 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
    ;
    local_180 = 0x289;
    FUN_0322c8e0(&local_1c0);
  }
  if (((ulong)local_198 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_198 + -1),0);
  }
LAB_033aaadc:
  if ((local_270[0] & 1) == 0) {
    return 0x80040200;
  }
  plVar9 = (long *)(local_270[0] & 0xfffffffffffffffe);
  plVar1 = plVar9 + 1;
  do {
    iVar7 = (int)*plVar1;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *(int *)plVar1 = iVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_033aaafc:
  if (plVar9 == (long *)0x0) {
    return 0x80040200;
  }
  if (iVar7 == 1) {
    (**(code **)(*plVar9 + 8))();
    return 0x80040200;
  }
  return 0x80040200;
LAB_033aca54:
  bVar6 = false;
LAB_033aca58:
  puVar36 = local_288;
  goto LAB_033aca5c;
code_r0x033abee4:
  if (9 < *pbVar19 - 0x30) goto LAB_033abefc;
  goto LAB_033abedc;
}


