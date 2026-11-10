/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03397598; name: FUN_03397598
 */


/* WARNING: Removing unreachable block (ram,0x03397cbc) */

int * FUN_03397598(int *param_1,ulong *param_2,ulong param_3,undefined8 param_4,int param_5)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  short sVar6;
  undefined4 uVar7;
  uint uVar8;
  ThreadType *pTVar9;
  int *piVar10;
  size_t sVar11;
  int iVar12;
  char *pcVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  char *pcVar17;
  int iVar18;
  undefined8 *puVar19;
  short *psVar20;
  short *psVar21;
  char *pcVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong *puVar26;
  uint uVar27;
  long lVar28;
  ulong *puVar29;
  long local_1c0;
  long local_1b8;
  long *local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined8 uStack_198;
  undefined8 *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  char local_150 [256];
  int local_34;
  
  if ((param_3 & 1) != 0) {
    return param_1;
  }
  piVar10 = param_1;
  if (param_1[0x4a] == 1) {
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_03397920;
LAB_03397744:
      local_190 = &DAT_0488df58;
      uStack_188 = 1;
      pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
      local_180 = nn::os::GetThreadId(pTVar9);
      local_1a0 = local_150;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      local_150[0] = '\0';
      uStack_198 = 0x10000000000;
      local_178 = local_1a0;
      piVar10 = (int *)FUN_0322c554(&local_1a0,"Types cannot be added to when using a compendium.",
                                    PTR_DAT_047d1b38);
      local_160 = 0x78f;
      goto LAB_03398204;
    }
    if (DAT_046aaf68 != '\0') goto LAB_03397744;
    local_1a0 = (char *)0x0;
    local_190 = &DAT_0488df58;
    uStack_188 = 1;
    pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
    local_180 = nn::os::GetThreadId(pTVar9);
    local_178 = (char *)0x0;
    local_170 = 0;
    local_168 = (char *)0x0;
    local_160 = 0;
    uStack_158 = 0;
    FUN_0322c554(&local_1a0,"Types cannot be added to when using a compendium.",PTR_DAT_047d1b38);
    local_160 = 0x78f;
LAB_033976ac:
    local_168 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    piVar10 = (int *)FUN_0322c8e0(&local_1a0);
  }
  else {
    uVar27 = param_1[6];
    iVar18 = param_1[0x1a];
    uVar8 = uVar27;
    if ((int)uVar27 < 2) {
      uVar8 = 1;
    }
    if ((int)uVar8 <= iVar18) {
      if ((int)(param_1[7] & 0x7fffffffU) < iVar18) {
        piVar10 = (int *)FUN_031d93e4(param_1 + 4,PTR_PTR_047d1a50,(long)iVar18);
        uVar27 = param_1[6];
      }
      if ((int)uVar27 < iVar18) {
        param_1[6] = iVar18;
        piVar10 = memset((void *)(*(long *)(param_1 + 4) + (long)(int)uVar27 * 8),0,
                         (ulong)(iVar18 + ~uVar27) * 8 + 8);
      }
      else if (iVar18 < (int)uVar27) {
        param_1[6] = iVar18;
      }
      if (param_5 != 0) {
        pcVar13 = (char *)*param_2;
        pcVar17 = (char *)param_2[1];
LAB_033977bc:
        puVar29 = param_2 + 1;
        iVar18 = param_1[0x7e];
        local_1b0 = (long *)0x0;
        local_1a8 = -0x8000000000000000;
        local_34 = iVar18;
        if ((long)pcVar13 < (long)pcVar17) {
          puVar1 = PTR_PTR_047d1a50 + 0x20;
          do {
            if (*pcVar13 == '\0') break;
            if (iVar18 < 1) {
              if (DAT_0488dfa8 == '\0') {
                if (DAT_046aaf68 == '\0') goto LAB_033980bc;
              }
              else if (DAT_046aaf68 == '\0') {
                local_1a0 = (char *)0x0;
                local_190 = &DAT_0488df58;
                uStack_188 = 1;
                pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
                local_180 = nn::os::GetThreadId(pTVar9);
                local_178 = (char *)0x0;
                local_170 = 0;
                local_168 = (char *)0x0;
                local_160 = 0;
                uStack_158 = 0;
                FUN_0322c554(&local_1a0,
                             "Too many type bodies actually present in bundle compared to what expected ({})."
                             ,&DAT_044e9048,&local_34);
                local_160 = 0x7a6;
                goto LAB_03397e3c;
              }
              local_190 = &DAT_0488df58;
              uStack_188 = 1;
              pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
              local_180 = nn::os::GetThreadId(pTVar9);
              local_1a0 = local_150;
              local_170 = 0;
              local_168 = (char *)0x0;
              local_160 = 0;
              uStack_158 = 0;
              local_150[0] = '\0';
              uStack_198 = 0x10000000000;
              local_178 = local_1a0;
              piVar10 = (int *)FUN_0322c554(&local_1a0,
                                            "Too many type bodies actually present in bundle compared to what expected ({})."
                                            ,&DAT_044e9048,&local_34);
              local_160 = 0x7a6;
              goto LAB_033982b8;
            }
            piVar10 = (int *)FUN_0338e248(param_1,param_2,&local_1b8,&local_1c0);
            if ((char)param_2[3] != '\0') {
              *param_1 = -0x7ffbfe00;
LAB_03397e78:
              if (DAT_0488dfa8 == '\0') {
                if (DAT_046aaf68 == '\0') goto LAB_033980c8;
              }
              else if (DAT_046aaf68 == '\0') {
                local_1a0 = (char *)0x0;
                local_190 = &DAT_0488df58;
                uStack_188 = 1;
                pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
                local_180 = nn::os::GetThreadId(pTVar9);
                local_178 = (char *)0x0;
                local_170 = 0;
                local_168 = (char *)0x0;
                local_160 = 0;
                uStack_158 = 0;
                FUN_0322c554(&local_1a0,"Error in input stream.",PTR_DAT_047d1b38);
                local_160 = 0x7aa;
                goto LAB_03397edc;
              }
              local_190 = &DAT_0488df58;
              uStack_188 = 1;
              pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
              local_180 = nn::os::GetThreadId(pTVar9);
              local_1a0 = local_150;
              local_170 = 0;
              local_168 = (char *)0x0;
              local_160 = 0;
              uStack_158 = 0;
              local_150[0] = '\0';
              uStack_198 = 0x10000000000;
              local_178 = local_1a0;
              piVar10 = (int *)FUN_0322c554(&local_1a0,"Error in input stream.",PTR_DAT_047d1b38);
              local_160 = 0x7aa;
              goto LAB_03398158;
            }
            if (*param_1 < 0) goto LAB_03397e78;
            if ((char)local_1c0 != '\0') {
              lVar14 = (long)(int)local_1a8;
              if ((int)(local_1a8._4_4_ & 0x7fffffff) <= (int)local_1a8) {
                piVar10 = (int *)FUN_031d93e4(&local_1b0,puVar1,lVar14 + 1);
              }
              local_1b0[(int)local_1a8] = local_1b8;
              local_1a8 = CONCAT44(local_1a8._4_4_,(int)(lVar14 + 1));
            }
            iVar18 = param_1[0x7e] + -1;
            param_1[0x7e] = iVar18;
            pcVar13 = (char *)*param_2;
          } while ((long)pcVar13 < (long)*puVar29);
        }
        if (*param_1 < 0) goto LAB_033980c8;
        if (param_1[0x4a] == 2) {
          *(ulong *)(param_1 + 0x50) = param_2[2];
          *(char **)(param_1 + 0x52) = pcVar13;
        }
        iVar18 = param_1[0x2a];
        if (iVar18 == 0) {
          iVar12 = 0;
          iVar18 = 0;
        }
        else {
          puVar23 = *(undefined8 **)(param_1 + 0x28);
          lVar14 = *(long *)(param_1 + 4);
          iVar4 = param_1[6];
          iVar12 = 0;
          puVar19 = (undefined8 *)0x0;
          puVar24 = puVar23 + (long)iVar18 * 2 + -2;
          do {
            if ((*(int *)(puVar24 + 1) < iVar4) &&
               (lVar28 = *(long *)(lVar14 + (long)*(int *)(puVar24 + 1) * 8), lVar28 != 0)) {
              iVar12 = iVar12 + 1;
              *(long *)*puVar24 = lVar28;
              if (puVar19 == (undefined8 *)0x0) {
                puVar25 = puVar24 + -2;
              }
              else {
                if (puVar24 != puVar19) {
                  uVar3 = puVar19[1];
                  *puVar24 = *puVar19;
                  puVar24[1] = uVar3;
                }
                puVar23 = puVar24 + 2;
                puVar25 = puVar19 + -2;
                puVar19 = (undefined8 *)0x0;
              }
            }
            else {
              puVar25 = puVar23;
              if (puVar19 != (undefined8 *)0x0) {
                puVar25 = puVar24 + 2;
                puVar24 = puVar19;
              }
              puVar19 = puVar24;
            }
            iVar18 = iVar18 + -1;
            puVar24 = puVar25;
          } while (iVar18 != 0);
          iVar18 = param_1[0x2a];
        }
        param_1[0x2a] = iVar18 - iVar12;
        if ((int)local_1a8 != 0) {
          plVar15 = local_1b0;
          do {
            uVar8 = (uint)*(undefined8 *)*plVar15;
            if ((uVar8 >> 0x17 & 1) == 0) {
              psVar20 = (short *)0x0;
            }
            else {
              uVar8 = uVar8 & 0x7fffff;
              psVar20 = (short *)((undefined8 *)*plVar15)
                                 [(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8))
                                               + POPCOUNT((char)(uVar8 >> 0x10))) + 2];
            }
            sVar6 = *psVar20;
            if ((long)sVar6 != 0) {
              psVar21 = psVar20 + 4;
              do {
                puVar23 = *(undefined8 **)psVar21;
                if (((uint)*puVar23 >> 0x14 & 1) != 0) {
                  uVar8 = (uint)*puVar23 & 0xfffff;
                  puVar26 = (ulong *)puVar23[1];
                  do {
                    uVar27 = (uint)*puVar26;
                    if ((uVar27 >> 0x14 & 1) != 0) {
                      uVar16 = 0;
                      if (puVar26 != (ulong *)0x0) {
                        uVar27 = uVar27 & 0xfffff;
                        uVar16 = (ulong)(ushort)puVar26[(ulong)(byte)(POPCOUNT((char)uVar27) +
                                                                      POPCOUNT((char)(uVar27 >> 8))
                                                                     + POPCOUNT((char)(uVar27 >>
                                                                                      0x10))) + 2];
                      }
                      goto LAB_03397bb8;
                    }
                    if ((*puVar26 & 1) != 0) {
                      uVar16 = 0;
                      goto LAB_03397bb8;
                    }
                    puVar26 = (ulong *)puVar26[1];
                  } while (puVar26 != (ulong *)0x0);
                  uVar16 = 0;
LAB_03397bb8:
                  puVar23[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) +
                                       POPCOUNT((char)(uVar8 >> 0x10))) + 2] =
                       uVar16 | (ulong)*(ushort *)
                                        ((long)(puVar23 +
                                               (ulong)(byte)(POPCOUNT((char)uVar8) +
                                                             POPCOUNT((char)(uVar8 >> 8)) +
                                                            POPCOUNT((char)(uVar8 >> 0x10))) + 2) +
                                        2) << 0x10;
                }
                psVar21 = psVar21 + 4;
              } while (psVar21 != psVar20 + (long)sVar6 * 4 + 4);
            }
            plVar15 = plVar15 + 1;
          } while (plVar15 != local_1b0 + (int)local_1a8);
        }
        pcVar17 = (char *)*param_2;
        pcVar13 = (char *)*puVar29;
        if ((long)pcVar13 - (long)pcVar17 < 4) {
          pcVar22 = pcVar17;
LAB_03397c88:
          do {
            if (pcVar13 == pcVar22) {
              if ((char)param_2[3] == '\0') {
                if (-1 < *param_1) {
                  if (param_5 == 0) {
                    *(ulong *)(param_1 + 0x6e) = (long)pcVar17 - param_2[2];
                  }
                  goto LAB_033980c8;
                }
              }
              else {
                *param_1 = -0x7ffbfe00;
              }
              if (DAT_0488dfa8 == '\0') {
                if (DAT_046aaf68 == '\0') goto LAB_033980c8;
LAB_033980fc:
                local_190 = &DAT_0488df58;
                uStack_188 = 1;
                pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
                local_180 = nn::os::GetThreadId(pTVar9);
                local_1a0 = local_150;
                local_170 = 0;
                local_168 = (char *)0x0;
                local_160 = 0;
                uStack_158 = 0;
                local_150[0] = '\0';
                uStack_198 = 0x10000000000;
                local_178 = local_1a0;
                piVar10 = (int *)FUN_0322c554(&local_1a0,"Error in input stream.",PTR_DAT_047d1b38);
                local_160 = 0x7e4;
LAB_03398158:
                local_168 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                ;
                if (local_150[0] != '\0') {
                  sVar11 = strlen(local_150);
                  (local_150 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[0] = '\n';
                  (local_150 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[1] = '\0';
                  printf("%s",local_150);
                  uVar8 = fflush(*(FILE **)PTR_stdout_047cb860);
                  piVar10 = (int *)(ulong)uVar8;
                }
              }
              else {
                if (DAT_046aaf68 != '\0') goto LAB_033980fc;
                local_1a0 = (char *)0x0;
                local_190 = &DAT_0488df58;
                uStack_188 = 1;
                pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
                local_180 = nn::os::GetThreadId(pTVar9);
                local_178 = (char *)0x0;
                local_170 = 0;
                local_168 = (char *)0x0;
                local_160 = 0;
                uStack_158 = 0;
                FUN_0322c554(&local_1a0,"Error in input stream.",PTR_DAT_047d1b38);
                local_160 = 0x7e4;
LAB_03397edc:
                local_168 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                ;
                piVar10 = (int *)FUN_0322c8e0(&local_1a0);
              }
              if (((ulong)local_178 & 1) != 0) {
                piVar10 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_178 + -1,0);
              }
              goto LAB_033980c8;
            }
            pcVar2 = pcVar22 + 1;
            if (pcVar13 < pcVar2) {
              *param_2 = (ulong)pcVar13;
              *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
              pcVar22 = pcVar13;
              goto LAB_03397c88;
            }
            cVar5 = *pcVar22;
            *param_2 = (ulong)pcVar2;
            pcVar22 = pcVar2;
          } while (cVar5 == '\0');
          if (DAT_0488dfa8 == '\0') {
            if (DAT_046aaf68 == '\0') goto LAB_033980bc;
          }
          else if (DAT_046aaf68 == '\0') {
            local_1a0 = (char *)0x0;
            local_190 = &DAT_0488df58;
            uStack_188 = 1;
            pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
            local_180 = nn::os::GetThreadId(pTVar9);
            local_178 = (char *)0x0;
            local_170 = 0;
            local_168 = (char *)0x0;
            local_160 = 0;
            uStack_158 = 0;
            FUN_0322c554(&local_1a0,
                         "Found non-zero byte in padding of type body section (TBOD/TBDY).",
                         PTR_DAT_047d1b38);
            local_160 = 0x7e2;
            uVar7 = 0x68bf09d3;
            goto LAB_03397d40;
          }
          local_190 = &DAT_0488df58;
          uStack_188 = 1;
          pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
          local_180 = nn::os::GetThreadId(pTVar9);
          local_1a0 = local_150;
          local_170 = 0;
          local_168 = (char *)0x0;
          local_160 = 0;
          uStack_158 = 0;
          local_150[0] = '\0';
          uStack_198 = 0x10000000000;
          local_178 = local_1a0;
          piVar10 = (int *)FUN_0322c554(&local_1a0,
                                        "Found non-zero byte in padding of type body section (TBOD/TBDY)."
                                        ,PTR_DAT_047d1b38);
          local_160 = 0x7e2;
          uStack_188 = CONCAT44(0x68bf09d3,(undefined4)uStack_188);
LAB_033982b8:
          local_168 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          if (local_150[0] != '\0') {
            sVar11 = strlen(local_150);
            (local_150 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[0] = '\n';
            (local_150 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[1] = '\0';
LAB_033982ec:
            printf("%s",local_150);
            uVar8 = fflush(*(FILE **)PTR_stdout_047cb860);
            piVar10 = (int *)(ulong)uVar8;
          }
LAB_03397e44:
          if (((ulong)local_178 & 1) != 0) {
            piVar10 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_178 + -1,0);
          }
        }
        else {
          if (DAT_0488dfa8 != '\0') {
            if (DAT_046aaf68 == '\0') {
              local_1a0 = (char *)0x0;
              local_190 = &DAT_0488df58;
              uStack_188 = 1;
              pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
              local_180 = nn::os::GetThreadId(pTVar9);
              local_178 = (char *)0x0;
              local_170 = 0;
              local_168 = (char *)0x0;
              local_160 = 0;
              uStack_158 = 0;
              local_1b8 = *puVar29 - *param_2;
              FUN_0322c554(&local_1a0,
                           "Type body section (TBOD/TBDY) has oversized padding: max padding of 3 bytes expected, found {} instead."
                           ,&DAT_047b2ea0,&local_1b8);
              local_160 = 0x7dd;
              uVar7 = 0x16964161;
LAB_03397d40:
              uStack_188 = CONCAT44(uVar7,(undefined4)uStack_188);
LAB_03397e3c:
              local_168 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
              ;
              piVar10 = (int *)FUN_0322c8e0(&local_1a0);
              goto LAB_03397e44;
            }
LAB_03397f14:
            local_190 = &DAT_0488df58;
            uStack_188 = 1;
            pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
            local_180 = nn::os::GetThreadId(pTVar9);
            local_170 = 0;
            local_168 = (char *)0x0;
            uStack_198 = 0x10000000000;
            local_160 = 0;
            uStack_158 = 0;
            local_150[0] = '\0';
            local_1c0 = *puVar29 - *param_2;
            local_1a0 = local_150;
            local_178 = local_150;
            piVar10 = (int *)FUN_0322c554(&local_1a0,
                                          "Type body section (TBOD/TBDY) has oversized padding: max padding of 3 bytes expected, found {} instead."
                                          ,&DAT_047b2ea0,&local_1c0);
            local_168 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            local_160 = 0x7dd;
            uStack_188 = CONCAT44(0x16964161,(undefined4)uStack_188);
            if (local_150[0] != '\0') {
              sVar11 = strlen(local_150);
              (local_150 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[0] = '\n';
              (local_150 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[1] = '\0';
              goto LAB_033982ec;
            }
            goto LAB_03397e44;
          }
          if (DAT_046aaf68 != '\0') goto LAB_03397f14;
        }
LAB_033980bc:
        *param_1 = -0x7ffbfe00;
LAB_033980c8:
        lVar14 = local_1a8;
        uVar16 = (ulong)local_1a8._4_4_;
        local_1a8 = (ulong)local_1a8._4_4_ << 0x20;
        if (lVar14 < 0) {
          return piVar10;
        }
        if (local_1b0 == (long *)0x0) {
          return piVar10;
        }
        piVar10 = (int *)(**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                                   (PTR_PTR_047d1a50 + 0x20,local_1b0,uVar16 << 3);
        return piVar10;
      }
      pcVar13 = (char *)(*param_2 + *(long *)(param_1 + 0x6e));
      pcVar17 = (char *)param_2[1];
      if (pcVar17 < pcVar13) {
        *param_2 = (ulong)pcVar17;
        *(byte *)(param_2 + 3) = (byte)param_2[3] | 1;
LAB_03397984:
        *param_1 = -0x7ffbfe00;
      }
      else {
        *param_2 = (ulong)pcVar13;
        if ((char)param_2[3] != '\0') goto LAB_03397984;
        if (-1 < *param_1) goto LAB_033977bc;
      }
      if (DAT_0488dfa8 == '\0') {
        if (DAT_046aaf68 == '\0') {
          return piVar10;
        }
      }
      else if (DAT_046aaf68 == '\0') {
        local_1a0 = (char *)0x0;
        local_190 = &DAT_0488df58;
        uStack_188 = 1;
        pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar9);
        local_178 = (char *)0x0;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        FUN_0322c554(&local_1a0,"Error in input stream.",PTR_DAT_047d1b38);
        local_168 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        local_160 = 0x79c;
        piVar10 = (int *)FUN_0322c8e0(&local_1a0);
        goto LAB_03397a00;
      }
      local_190 = &DAT_0488df58;
      uStack_188 = 1;
      pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
      local_180 = nn::os::GetThreadId(pTVar9);
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      local_150[0] = '\0';
      uStack_198 = 0x10000000000;
      local_1a0 = local_150;
      local_178 = local_150;
      piVar10 = (int *)FUN_0322c554(&local_1a0,"Error in input stream.",PTR_DAT_047d1b38);
      local_168 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      local_160 = 0x79c;
      if (local_150[0] != '\0') {
        sVar11 = strlen(local_150);
        (local_150 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[0] = '\n';
        (local_150 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[1] = '\0';
        printf("%s",local_150);
        uVar8 = fflush(*(FILE **)PTR_stdout_047cb860);
        piVar10 = (int *)(ulong)uVar8;
      }
LAB_03397a00:
      if (((ulong)local_178 & 1) == 0) {
        return piVar10;
      }
      piVar10 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_178 + -1,0);
      return piVar10;
    }
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_03397920;
    }
    else if (DAT_046aaf68 == '\0') {
      local_1a0 = (char *)0x0;
      local_190 = &DAT_0488df58;
      uStack_188 = 1;
      pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
      local_180 = nn::os::GetThreadId(pTVar9);
      local_178 = (char *)0x0;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      FUN_0322c554(&local_1a0,"Cannot remove types while deserializing.",PTR_DAT_047d1b38);
      local_160 = 0x794;
      goto LAB_033976ac;
    }
    local_190 = &DAT_0488df58;
    uStack_188 = 1;
    pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
    local_180 = nn::os::GetThreadId(pTVar9);
    local_1a0 = local_150;
    local_170 = 0;
    local_168 = (char *)0x0;
    local_160 = 0;
    uStack_158 = 0;
    local_150[0] = '\0';
    uStack_198 = 0x10000000000;
    local_178 = local_1a0;
    piVar10 = (int *)FUN_0322c554(&local_1a0,"Cannot remove types while deserializing.",
                                  PTR_DAT_047d1b38);
    local_160 = 0x794;
LAB_03398204:
    local_168 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    if (local_150[0] != '\0') {
      sVar11 = strlen(local_150);
      (local_150 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[0] = '\n';
      (local_150 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[1] = '\0';
      printf("%s",local_150);
      uVar8 = fflush(*(FILE **)PTR_stdout_047cb860);
      piVar10 = (int *)(ulong)uVar8;
    }
  }
  if (((ulong)local_178 & 1) != 0) {
    piVar10 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_178 + -1,0);
  }
LAB_03397920:
  *param_1 = -0x7ffbfe00;
  return piVar10;
}


