/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033883ac; name: FUN_033883ac
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_033883ac(undefined4 *param_1,long *param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ThreadType *pTVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  size_t sVar16;
  char *pcVar17;
  ulong **ppuVar18;
  uint *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  long lVar25;
  undefined8 *puVar26;
  code *pcVar27;
  int iVar28;
  long lVar29;
  int iVar30;
  FILE *pFVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  uint uVar35;
  long lVar36;
  uint *puVar37;
  undefined *puVar38;
  ulong *puVar39;
  long lVar40;
  uint *puVar41;
  long lVar42;
  undefined1 auVar43 [16];
  long *local_248;
  long *local_238;
  uint local_218 [2];
  ulong *local_210;
  int local_208;
  int local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0 [2];
  undefined1 local_1e8 [8];
  ulong *puStack_1e0;
  uint local_1d8 [2];
  ulong *local_1d0;
  ulong *local_1c8;
  undefined8 uStack_1c0;
  undefined8 *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  ulong *local_1a0;
  undefined8 local_198;
  char *local_190;
  undefined8 local_188;
  undefined8 local_180;
  ulong local_178 [32];
  uint local_78 [2];
  undefined8 local_70;
  
  puVar38 = PTR_DAT_047d1a08;
  auVar7._8_8_ = puStack_1e0;
  auVar7._0_8_ = param_1;
  if ((param_3 & 1) == 0) {
    lVar25 = *param_2;
    puVar14 = param_1;
    if ((param_2[1] - lVar25 & 3U) == 0) {
      lVar32 = *(long *)(param_1 + 4);
      iVar3 = param_1[6];
      uVar21 = 0;
      lVar29 = *(long *)(param_1 + 0x10);
      lVar36 = *(long *)(param_1 + 0x12);
      lVar40 = *(long *)(param_1 + 0x14);
      lVar34 = *(long *)(param_1 + 0x16);
      uVar12 = (uint)((ulong)(param_2[1] - lVar25) >> 2);
      local_1f0[0] = 0;
      if (2 < (int)uVar12) {
        pFVar31 = *(FILE **)PTR_stdout_047cb860;
        uVar11 = 2;
        uVar21 = 0;
        uVar33 = lVar36 - lVar29;
        do {
          uVar35 = 0x80040200;
          lVar42 = (long)(int)uVar21 + 1;
          local_1f0[0] = (uint)lVar42;
          uVar10 = *(uint *)(lVar25 + (long)(int)uVar21 * 4);
          local_1e8._0_4_ = uVar10;
          if (uVar10 == 0) {
            local_210 = (ulong *)0x0;
            local_208 = 0;
            local_1d8[0] = 0;
LAB_0338b854:
            local_218[0] = local_1d8[0];
            if (DAT_0488dfa8 < 4) {
              if (DAT_046aaf68 != '\0') goto LAB_0338cb5c;
            }
            else if (DAT_046aaf68 == '\0') {
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 4;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_1a0 = (ulong *)0x0;
              local_198 = 0;
              local_190 = (char *)0x0;
              local_188 = 0;
              local_180 = 0;
              FUN_0322c554(&local_1c8,"Finished internal, starting external",PTR_DAT_047d1b38);
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0x103;
              puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
              if (((ulong)local_1a0 & 1) != 0) {
                puVar14 = (undefined4 *)
                          (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              }
            }
            else {
LAB_0338cb5c:
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 4;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_198 = 0;
              local_190 = (char *)0x0;
              local_188 = 0;
              local_180 = 0;
              local_178[0]._0_1_ = '\0';
              uStack_1c0 = 0x10000000000;
              local_1c8 = local_178;
              local_1a0 = local_178;
              puVar14 = (undefined4 *)
                        FUN_0322c554(&local_1c8,"Finished internal, starting external",
                                     PTR_DAT_047d1b38);
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0x103;
              if ((char)local_178[0] != '\0') {
                sVar16 = strlen((char *)local_178);
                *(undefined2 *)
                 ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10;
                printf("%s",local_178);
                uVar11 = fflush(pFVar31);
                puVar14 = (undefined4 *)(ulong)uVar11;
              }
              if (((ulong)local_1a0 & 1) != 0) {
                puVar14 = (undefined4 *)
                          (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              }
            }
            uVar21 = (ulong)local_1f0[0];
            break;
          }
          if ((ulong)uVar10 < (ulong)(long)iVar3) {
            if (*(long *)(lVar32 + (long)(int)uVar10 * 8) == 0) {
              local_70 = (ulong *)CONCAT44(local_70._4_4_,0x80040200);
              if (DAT_0488dfa8 != 0) {
                local_1c8 = (ulong *)0x0;
                local_1b8 = &DAT_0488df58;
                uStack_1b0 = 1;
                pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a8 = nn::os::GetThreadId(pTVar13);
                local_180 = 0;
                local_1a0 = (ulong *)0x0;
                local_198 = 0;
                local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                local_188 = 0xd7;
                FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_70);
                local_1d0 = (ulong *)CONCAT44(local_1d0._4_4_,local_1f0[0] - 1);
                pcVar17 = 
                "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type";
                goto LAB_03388884;
              }
              goto LAB_033888b8;
            }
            iVar28 = *(int *)(lVar25 + lVar42 * 4);
            local_70 = (ulong *)CONCAT44(local_70._4_4_,iVar28);
            local_1f0[0] = uVar11;
            if ((int)uVar12 < (int)(iVar28 + uVar11)) {
              local_1d0 = (ulong *)CONCAT44(local_1d0._4_4_,0x80040200);
              if (DAT_0488dfa8 != 0) {
                local_1c8 = (ulong *)0x0;
                local_1b8 = &DAT_0488df58;
                uStack_1b0 = 1;
                pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a8 = nn::os::GetThreadId(pTVar13);
                local_180 = 0;
                local_1a0 = (ulong *)0x0;
                local_198 = 0;
                local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                local_188 = 0xde;
                FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_1d0);
                local_78[0] = local_1f0[0] - 1;
                FUN_0322c554(&local_1c8,
                             "Corrupt patch index body at index {}: invalid entries number {}",
                             &DAT_044e9030,local_78,&local_70);
                puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
                if (((ulong)local_1a0 & 1) != 0) {
                  puVar14 = (undefined4 *)
                            (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                }
                uVar35 = (uint)local_1d0;
              }
              goto LAB_033888b8;
            }
            if (DAT_0488dfa8 < 4) {
              if (DAT_046aaf68 != '\0') goto LAB_03388ea8;
            }
            else if (DAT_046aaf68 == '\0') {
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 4;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_180 = 0;
              local_1a0 = (ulong *)0x0;
              local_198 = 0;
              local_190 = (char *)0x0;
              local_188 = 0;
              FUN_0322c554(&local_1c8,"Type {} ({} entries) //{}",&DAT_047b2be0,local_1e8,&local_70,
                           lVar32 + (long)(int)local_1e8._0_4_ * 8);
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0xe1;
              puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
              if (((ulong)local_1a0 & 1) != 0) {
                puVar14 = (undefined4 *)
                          (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              }
            }
            else {
LAB_03388ea8:
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 4;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_198 = 0;
              local_190 = (char *)0x0;
              local_188 = 0;
              local_180 = 0;
              local_178[0]._0_1_ = '\0';
              uStack_1c0 = 0x10000000000;
              local_1c8 = local_178;
              local_1a0 = local_178;
              puVar14 = (undefined4 *)
                        FUN_0322c554(&local_1c8,"Type {} ({} entries) //{}",&DAT_047b2be0,local_1e8,
                                     &local_70,lVar32 + (long)(int)local_1e8._0_4_ * 8);
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0xe1;
              if ((char)local_178[0] != '\0') {
                sVar16 = strlen((char *)local_178);
                *(undefined2 *)
                 ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10;
                printf("%s",local_178);
                uVar11 = fflush(pFVar31);
                puVar14 = (undefined4 *)(ulong)uVar11;
              }
              if (((ulong)local_1a0 & 1) != 0) {
                puVar14 = (undefined4 *)
                          (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              }
            }
            local_210 = *(ulong **)(lVar32 + (long)(int)local_1e8._0_4_ * 8);
            local_218[0] = 0;
            local_208 = (uint)local_70;
          }
          else {
            local_70 = (ulong *)CONCAT44(local_70._4_4_,0x80040200);
            if (DAT_0488dfa8 != 0) {
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 1;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_180 = 0;
              local_1a0 = (ulong *)0x0;
              local_198 = 0;
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0xd2;
              FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_70);
              pcVar17 = "Corrupt patch index body at index {}: invalid TypeId {}";
              local_1d0 = (ulong *)CONCAT44(local_1d0._4_4_,local_1f0[0] - 1);
LAB_03388884:
              FUN_0322c554(&local_1c8,pcVar17,&DAT_044e9030,&local_1d0,local_1e8);
              puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
              if (((ulong)local_1a0 & 1) != 0) {
                puVar14 = (undefined4 *)
                          (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              }
              uVar35 = (uint)local_70;
            }
LAB_033888b8:
            local_210 = (ulong *)0x0;
            local_208 = 0;
            local_218[0] = uVar35;
          }
          local_1d8[0] = local_218[0];
          if ((int)local_218[0] < 0) goto LAB_0338c790;
          if (local_210 == (ulong *)0x0) goto LAB_0338b854;
          if (DAT_0488dfa8 < 4) {
            if (DAT_046aaf68 != '\0') goto LAB_03388dd0;
          }
          else if (DAT_046aaf68 == '\0') {
            local_1c8 = (ulong *)0x0;
            local_1b8 = &DAT_0488df58;
            uStack_1b0 = 4;
            pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a8 = nn::os::GetThreadId(pTVar13);
            local_1a0 = (ulong *)0x0;
            local_198 = 0;
            local_180 = 0;
            local_190 = (char *)0x0;
            local_188 = 0;
            FUN_0322c554(&local_1c8,"Internal fixups for type {}",PTR_DAT_047e5c18,&local_210);
            local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            local_188 = 0x107;
            uStack_1b0._0_2_ = CONCAT11(1,(undefined1)uStack_1b0);
            puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
            if (((ulong)local_1a0 & 1) != 0) {
              puVar14 = (undefined4 *)(**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0)
              ;
            }
          }
          else {
LAB_03388dd0:
            local_1c8 = (ulong *)0x0;
            local_1b8 = &DAT_0488df58;
            uStack_1b0 = 4;
            pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a8 = nn::os::GetThreadId(pTVar13);
            local_198 = 0;
            local_190 = (char *)0x0;
            local_188 = 0;
            local_180 = 0;
            uStack_1c0 = 0x10000000000;
            local_178[0]._0_1_ = '\0';
            local_1c8 = local_178;
            local_1a0 = local_178;
            puVar14 = (undefined4 *)
                      FUN_0322c554(&local_1c8,"Internal fixups for type {}",PTR_DAT_047e5c18,
                                   &local_210);
            local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            local_188 = 0x107;
            uStack_1b0._0_2_ = CONCAT11(1,(undefined1)uStack_1b0);
            if ((char)local_178[0] != '\0') {
              sVar16 = strlen((char *)local_178);
              *(undefined2 *)
               ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10;
              printf("%s",local_178);
              uVar11 = fflush(pFVar31);
              puVar14 = (undefined4 *)(ulong)uVar11;
            }
            if (((ulong)local_1a0 & 1) != 0) {
              puVar14 = (undefined4 *)(**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0)
              ;
            }
          }
          uVar21 = (ulong)(int)local_1f0[0];
          if (local_208 != 0) {
            puVar19 = (uint *)(lVar25 + uVar21 * 4);
            for (puVar22 = local_210; (*puVar22 & 1) == 0; puVar22 = (ulong *)puVar22[1]) {
            }
            lVar42 = (long)local_208 << 2;
            if ((puVar22[2] & 0x1f) == 3) {
              do {
                uVar11 = *puVar19;
                if (uVar33 <= uVar11) goto LAB_0338a080;
                if (DAT_0488dfa8 < 4) {
                  if (DAT_046aaf68 != '\0') goto LAB_03388a84;
                }
                else {
                  if (DAT_046aaf68 == '\0') {
                    local_1c8 = (ulong *)0x0;
                    local_1b8 = &DAT_0488df58;
                    uStack_1b0 = 4;
                    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                    local_1a8 = nn::os::GetThreadId(pTVar13);
                    local_1a0 = (ulong *)0x0;
                    local_198 = 0;
                    local_180 = 0;
                    local_190 = (char *)0x0;
                    local_188 = 0;
                    FUN_0322c554(&local_1c8,"srcOff={}",PTR_DAT_047e5908,puVar19);
                    local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    local_188 = 0x116;
                    FUN_0322c8e0(&local_1c8);
                  }
                  else {
LAB_03388a84:
                    local_1c8 = (ulong *)0x0;
                    local_1b8 = &DAT_0488df58;
                    uStack_1b0 = 4;
                    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                    local_1a8 = nn::os::GetThreadId(pTVar13);
                    local_198 = 0;
                    local_190 = (char *)0x0;
                    local_188 = 0;
                    local_180 = 0;
                    uStack_1c0 = 0x10000000000;
                    local_178[0]._0_1_ = '\0';
                    local_1c8 = local_178;
                    local_1a0 = local_178;
                    FUN_0322c554(&local_1c8,"srcOff={}",PTR_DAT_047e5908,puVar19);
                    local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    local_188 = 0x116;
                    if ((char)local_178[0] != '\0') {
                      sVar16 = strlen((char *)local_178);
                      *(undefined2 *)
                       ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) =
                           10;
                      printf("%s",local_178);
                      fflush(pFVar31);
                    }
                  }
                  if (((ulong)local_1a0 & 1) != 0) {
                    (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                  }
                }
                local_1c8 = (ulong *)CONCAT44(local_1c8._4_4_,((int)lVar29 + uVar11) - param_1[0x10]
                                             );
                puVar14 = (undefined4 *)FUN_03001450(*(undefined8 *)(param_1 + 0x42),&local_1c8);
                local_1f0[0] = local_1f0[0] + 1;
                puVar19 = puVar19 + 1;
                lVar42 = lVar42 + -4;
                local_1d8[0] = 0;
              } while (lVar42 != 0);
            }
            else {
              do {
                if (uVar33 <= *puVar19) goto LAB_0338a080;
                if (DAT_0488dfa8 < 4) {
                  if (DAT_046aaf68 != '\0') goto LAB_03388be4;
                }
                else {
                  if (DAT_046aaf68 == '\0') {
                    local_1c8 = (ulong *)0x0;
                    local_1b8 = &DAT_0488df58;
                    uStack_1b0 = 4;
                    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                    local_1a8 = nn::os::GetThreadId(pTVar13);
                    local_1a0 = (ulong *)0x0;
                    local_198 = 0;
                    local_180 = 0;
                    local_190 = (char *)0x0;
                    local_188 = 0;
                    FUN_0322c554(&local_1c8,"srcOff={}",PTR_DAT_047e5908,puVar19);
                    local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    local_188 = 0x116;
                    puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
                  }
                  else {
LAB_03388be4:
                    local_1c8 = (ulong *)0x0;
                    local_1b8 = &DAT_0488df58;
                    uStack_1b0 = 4;
                    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                    local_1a8 = nn::os::GetThreadId(pTVar13);
                    local_198 = 0;
                    local_190 = (char *)0x0;
                    local_188 = 0;
                    local_180 = 0;
                    uStack_1c0 = 0x10000000000;
                    local_178[0]._0_1_ = '\0';
                    local_1c8 = local_178;
                    local_1a0 = local_178;
                    puVar14 = (undefined4 *)
                              FUN_0322c554(&local_1c8,"srcOff={}",PTR_DAT_047e5908,puVar19);
                    local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    local_188 = 0x116;
                    if ((char)local_178[0] != '\0') {
                      sVar16 = strlen((char *)local_178);
                      *(undefined2 *)
                       ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) =
                           10;
                      printf("%s",local_178);
                      uVar11 = fflush(pFVar31);
                      puVar14 = (undefined4 *)(ulong)uVar11;
                    }
                  }
                  if (((ulong)local_1a0 & 1) != 0) {
                    puVar14 = (undefined4 *)
                              (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                  }
                }
                local_1f0[0] = local_1f0[0] + 1;
                puVar19 = puVar19 + 1;
                lVar42 = lVar42 + -4;
                local_1d8[0] = 0;
              } while (lVar42 != 0);
            }
            local_1d8[0] = 0;
            uVar21 = (ulong)local_1f0[0];
          }
          if (3 < DAT_0488dfa8) {
            local_1c8 = (ulong *)0x0;
            local_1b8 = &DAT_0488df58;
            uStack_1b0 = 4;
            pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a8 = nn::os::GetThreadId(pTVar13);
            local_1a0 = (ulong *)0x0;
            local_198 = 0;
            local_180 = 0;
            local_190 = (char *)0x0;
            local_188 = 0;
            uStack_1b0._0_2_ = CONCAT11(0xff,(undefined1)uStack_1b0);
            puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
            if (((ulong)local_1a0 & 1) != 0) {
              puVar14 = (undefined4 *)(**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0)
              ;
            }
            uVar21 = (ulong)local_1f0[0];
          }
          uVar11 = (int)uVar21 + 2;
        } while ((int)uVar11 < (int)uVar12);
      }
      uVar11 = (int)uVar21 + 2;
      if ((int)uVar11 < (int)uVar12) {
        uVar33 = lVar36 - lVar29;
        pFVar31 = *(FILE **)PTR_stdout_047cb860;
LAB_0338b944:
        uVar35 = 0x80040200;
        lVar36 = (long)(int)uVar21 + 1;
        local_1f0[0] = (uint)lVar36;
        uVar10 = *(uint *)(lVar25 + (long)(int)uVar21 * 4);
        local_1e8._0_4_ = uVar10;
        if (uVar10 == 0) {
          local_218[0] = 0;
          local_210 = (ulong *)0x0;
          local_208 = 0;
LAB_0338c6f4:
          local_1d8[0] = 0x80040200;
          if (DAT_0488dfa8 != 0) {
            local_1c8 = (ulong *)0x0;
            local_1b8 = &DAT_0488df58;
            uStack_1b0 = 1;
            pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a8 = nn::os::GetThreadId(pTVar13);
            local_1a0 = (ulong *)0x0;
            local_198 = 0;
            local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            local_188 = 300;
            local_180 = 0;
            FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,local_1d8);
            FUN_0322c554(&local_1c8,"Invalid sentinel at the end of external fixups",
                         PTR_DAT_047d1b38);
            puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
            if (((ulong)local_1a0 & 1) != 0) {
              pcVar27 = *(code **)(PTR_DAT_047d1a08 + 8);
LAB_0338c780:
              puVar14 = (undefined4 *)(*pcVar27)(0,(byte *)((long)local_1a0 + -1),0);
            }
          }
        }
        else {
          if ((ulong)uVar10 < (ulong)(long)iVar3) {
            if (*(long *)(lVar32 + (long)(int)uVar10 * 8) == 0) {
              local_70 = (ulong *)CONCAT44(local_70._4_4_,0x80040200);
              if (DAT_0488dfa8 != 0) {
                local_1c8 = (ulong *)0x0;
                local_1b8 = &DAT_0488df58;
                uStack_1b0 = 1;
                pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a8 = nn::os::GetThreadId(pTVar13);
                local_180 = 0;
                local_1a0 = (ulong *)0x0;
                local_198 = 0;
                local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                local_188 = 0xd7;
                FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_70);
                local_1d0 = (ulong *)CONCAT44(local_1d0._4_4_,local_1f0[0] - 1);
                pcVar17 = 
                "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type";
                goto LAB_0338bb54;
              }
              goto LAB_0338bb90;
            }
            iVar28 = *(int *)(lVar25 + lVar36 * 4);
            local_70 = (ulong *)CONCAT44(local_70._4_4_,iVar28);
            local_1f0[0] = uVar11;
            if ((int)uVar12 < (int)(iVar28 + uVar11)) {
              local_1d0 = (ulong *)CONCAT44(local_1d0._4_4_,0x80040200);
              if (DAT_0488dfa8 != 0) {
                local_1c8 = (ulong *)0x0;
                local_1b8 = &DAT_0488df58;
                uStack_1b0 = 1;
                pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a8 = nn::os::GetThreadId(pTVar13);
                local_180 = 0;
                local_1a0 = (ulong *)0x0;
                local_198 = 0;
                local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                local_188 = 0xde;
                FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_1d0);
                local_78[0] = local_1f0[0] - 1;
                FUN_0322c554(&local_1c8,
                             "Corrupt patch index body at index {}: invalid entries number {}",
                             &DAT_044e9030,local_78,&local_70);
                puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
                if (((ulong)local_1a0 & 1) != 0) {
                  puVar14 = (undefined4 *)
                            (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                }
                uVar35 = (uint)local_1d0;
              }
              goto LAB_0338bb90;
            }
            if (DAT_0488dfa8 < 4) {
              if (DAT_046aaf68 != '\0') goto LAB_0338c5f0;
            }
            else if (DAT_046aaf68 == '\0') {
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 4;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_180 = 0;
              local_1a0 = (ulong *)0x0;
              local_198 = 0;
              local_190 = (char *)0x0;
              local_188 = 0;
              FUN_0322c554(&local_1c8,"Type {} ({} entries) //{}",&DAT_047b2be0,local_1e8,&local_70,
                           lVar32 + (long)(int)local_1e8._0_4_ * 8);
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0xe1;
              puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
              if (((ulong)local_1a0 & 1) != 0) {
                puVar14 = (undefined4 *)
                          (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              }
            }
            else {
LAB_0338c5f0:
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 4;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_198 = 0;
              local_190 = (char *)0x0;
              local_188 = 0;
              local_180 = 0;
              local_178[0]._0_1_ = '\0';
              uStack_1c0 = 0x10000000000;
              local_1c8 = local_178;
              local_1a0 = local_178;
              puVar14 = (undefined4 *)
                        FUN_0322c554(&local_1c8,"Type {} ({} entries) //{}",&DAT_047b2be0,local_1e8,
                                     &local_70,lVar32 + (long)(int)local_1e8._0_4_ * 8);
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0xe1;
              if ((char)local_178[0] != '\0') {
                sVar16 = strlen((char *)local_178);
                *(undefined2 *)
                 ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10;
                printf("%s",local_178);
                uVar11 = fflush(pFVar31);
                puVar14 = (undefined4 *)(ulong)uVar11;
              }
              if (((ulong)local_1a0 & 1) != 0) {
                puVar14 = (undefined4 *)
                          (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              }
            }
            local_210 = *(ulong **)(lVar32 + (long)(int)local_1e8._0_4_ * 8);
            local_218[0] = 0;
            local_208 = (uint)local_70;
          }
          else {
            local_70 = (ulong *)CONCAT44(local_70._4_4_,0x80040200);
            if (DAT_0488dfa8 != 0) {
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 1;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_180 = 0;
              local_1a0 = (ulong *)0x0;
              local_198 = 0;
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0xd2;
              FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_70);
              pcVar17 = "Corrupt patch index body at index {}: invalid TypeId {}";
              local_1d0 = (ulong *)CONCAT44(local_1d0._4_4_,local_1f0[0] - 1);
LAB_0338bb54:
              FUN_0322c554(&local_1c8,pcVar17,&DAT_044e9030,&local_1d0,local_1e8);
              puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
              if (((ulong)local_1a0 & 1) != 0) {
                puVar14 = (undefined4 *)
                          (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              }
              uVar35 = (uint)local_70;
            }
LAB_0338bb90:
            local_210 = (ulong *)0x0;
            local_208 = 0;
            local_218[0] = uVar35;
          }
          local_1d8[0] = local_218[0];
          if (-1 < (int)local_218[0]) {
            if (local_210 == (ulong *)0x0) goto LAB_0338c6f4;
            if (DAT_0488dfa8 < 4) {
              if (DAT_046aaf68 != '\0') goto LAB_0338c544;
            }
            else {
              if (DAT_046aaf68 == '\0') {
                local_1c8 = (ulong *)0x0;
                local_1b8 = &DAT_0488df58;
                uStack_1b0 = 4;
                pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a8 = nn::os::GetThreadId(pTVar13);
                local_1a0 = (ulong *)0x0;
                local_198 = 0;
                local_180 = 0;
                local_190 = (char *)0x0;
                local_188 = 0;
                FUN_0322c554(&local_1c8,"External fixups for type {}",PTR_DAT_047e5c18,&local_210);
                local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                local_188 = 0x12f;
                uStack_1b0._0_2_ = CONCAT11(1,(undefined1)uStack_1b0);
                puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
              }
              else {
LAB_0338c544:
                local_1c8 = (ulong *)0x0;
                local_1b8 = &DAT_0488df58;
                uStack_1b0 = 4;
                pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a8 = nn::os::GetThreadId(pTVar13);
                local_198 = 0;
                local_190 = (char *)0x0;
                local_188 = 0;
                local_180 = 0;
                local_178[0]._0_1_ = '\0';
                uStack_1c0 = 0x10000000000;
                local_1c8 = local_178;
                local_1a0 = local_178;
                puVar14 = (undefined4 *)
                          FUN_0322c554(&local_1c8,"External fixups for type {}",PTR_DAT_047e5c18,
                                       &local_210);
                local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                local_188 = 0x12f;
                uStack_1b0._0_2_ = CONCAT11(1,(undefined1)uStack_1b0);
                if ((char)local_178[0] != '\0') {
                  sVar16 = strlen((char *)local_178);
                  *(undefined2 *)
                   ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10;
                  printf("%s",local_178);
                  uVar11 = fflush(pFVar31);
                  puVar14 = (undefined4 *)(ulong)uVar11;
                }
              }
              if (((ulong)local_1a0 & 1) != 0) {
                puVar14 = (undefined4 *)
                          (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              }
            }
            if (0 < local_208) {
              for (puVar22 = local_210; (*puVar22 & 1) == 0; puVar22 = (ulong *)puVar22[1]) {
              }
              uVar21 = puVar22[2];
              iVar28 = 0;
              do {
                uVar11 = local_1f0[0] + 1;
                uVar10 = *(uint *)(lVar25 + (long)(int)local_1f0[0] * 4);
                local_1e8._0_4_ = uVar10;
                if ((ulong)((lVar34 - lVar40 >> 2) * -0x5555555555555555) <= (ulong)uVar10) {
                  local_1d8[0] = 0x80040200;
                  local_1f0[0] = uVar11;
                  if (DAT_0488dfa8 == 0) goto LAB_0338c2d4;
                  local_1c8 = (ulong *)0x0;
                  local_1b8 = &DAT_0488df58;
                  uStack_1b0 = 1;
                  pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1a8 = nn::os::GetThreadId(pTVar13);
                  local_180 = 0;
                  local_1a0 = (ulong *)0x0;
                  local_198 = 0;
                  local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  local_188 = 0x13a;
                  FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,local_1d8);
                  ppuVar18 = (ulong **)&local_70;
                  puVar20 = (undefined8 *)local_1e8;
                  pcVar17 = "Corrupt patch index body at index {}: invalid target index {}";
                  local_70 = (ulong *)CONCAT44(local_70._4_4_,local_1f0[0] - 1);
LAB_0338c534:
                  FUN_0322c554(&local_1c8,pcVar17,&DAT_047b2c00,ppuVar18,puVar20);
                  goto LAB_0338c2a8;
                }
                local_1f0[0] = local_1f0[0] + 2;
                iVar30 = *(int *)(lVar25 + (long)(int)uVar11 * 4);
                local_70 = (ulong *)CONCAT44(local_70._4_4_,iVar30);
                if (uVar12 < iVar30 + local_1f0[0]) {
                  local_1d8[0] = 0x80040200;
                  if (DAT_0488dfa8 != 0) {
                    local_1c8 = (ulong *)0x0;
                    local_1b8 = &DAT_0488df58;
                    uStack_1b0 = 1;
                    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                    local_1a8 = nn::os::GetThreadId(pTVar13);
                    local_180 = 0;
                    local_1a0 = (ulong *)0x0;
                    local_198 = 0;
                    local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    local_188 = 0x141;
                    FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,local_1d8);
                    local_1d0 = (ulong *)CONCAT44(local_1d0._4_4_,local_1f0[0] - 1);
                    ppuVar18 = &local_1d0;
                    puVar20 = &local_70;
                    pcVar17 = "Corrupt patch index body at index {}: invalid offsets number {}";
                    goto LAB_0338c534;
                  }
                  goto LAB_0338c2d4;
                }
                if (DAT_0488dfa8 < 4) {
                  if (DAT_046aaf68 != '\0') goto LAB_0338c104;
                }
                else {
                  if (DAT_046aaf68 == '\0') {
                    local_1c8 = (ulong *)0x0;
                    local_1b8 = &DAT_0488df58;
                    uStack_1b0 = 4;
                    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                    local_1a8 = nn::os::GetThreadId(pTVar13);
                    local_1a0 = (ulong *)0x0;
                    local_198 = 0;
                    local_190 = (char *)0x0;
                    local_188 = 0;
                    local_180 = 0;
                    FUN_0322c554(&local_1c8,"tgtIdx={}, {} entries",PTR_DAT_047e6878,local_1e8,
                                 &local_70);
                    local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    local_188 = 0x144;
                    uStack_1b0._0_2_ = CONCAT11(1,(undefined1)uStack_1b0);
                    puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
                  }
                  else {
LAB_0338c104:
                    local_1c8 = (ulong *)0x0;
                    local_1b8 = &DAT_0488df58;
                    uStack_1b0 = 4;
                    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                    local_1a8 = nn::os::GetThreadId(pTVar13);
                    local_198 = 0;
                    local_190 = (char *)0x0;
                    local_188 = 0;
                    local_180 = 0;
                    uStack_1c0 = 0x10000000000;
                    local_178[0]._0_1_ = '\0';
                    local_1c8 = local_178;
                    local_1a0 = local_178;
                    puVar14 = (undefined4 *)
                              FUN_0322c554(&local_1c8,"tgtIdx={}, {} entries",PTR_DAT_047e6878,
                                           local_1e8,&local_70);
                    local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    local_188 = 0x144;
                    uStack_1b0._0_2_ = CONCAT11(1,(undefined1)uStack_1b0);
                    if ((char)local_178[0] != '\0') {
                      sVar16 = strlen((char *)local_178);
                      *(undefined2 *)
                       ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) =
                           10;
                      printf("%s",local_178);
                      uVar11 = fflush(pFVar31);
                      puVar14 = (undefined4 *)(ulong)uVar11;
                    }
                  }
                  if (((ulong)local_1a0 & 1) != 0) {
                    puVar14 = (undefined4 *)
                              (**(code **)(PTR_DAT_047d1a08 + 8))
                                        (0,(byte *)((long)local_1a0 + -1),0);
                  }
                }
                if ((uint)local_70 != 0) {
                  lVar36 = ((ulong)local_70 & 0xffffffff) << 2;
                  puVar19 = (uint *)(lVar25 + (long)(int)local_1f0[0] * 4);
                  if ((uVar21 & 0x1f) == 3) {
                    do {
                      uVar11 = *puVar19;
                      if (uVar33 <= uVar11) goto LAB_0338c1bc;
                      if (DAT_0488dfa8 < 4) {
                        if (DAT_046aaf68 != '\0') goto LAB_0338be68;
                      }
                      else {
                        if (DAT_046aaf68 == '\0') {
                          local_1c8 = (ulong *)0x0;
                          local_1b8 = &DAT_0488df58;
                          uStack_1b0 = 4;
                          pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                          local_1a8 = nn::os::GetThreadId(pTVar13);
                          local_1a0 = (ulong *)0x0;
                          local_198 = 0;
                          local_180 = 0;
                          local_190 = (char *)0x0;
                          local_188 = 0;
                          FUN_0322c554(&local_1c8,"srcOff={}",PTR_DAT_047e5908,puVar19);
                          local_190 = 
                          "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                          local_188 = 0x151;
                          FUN_0322c8e0(&local_1c8);
                        }
                        else {
LAB_0338be68:
                          local_1c8 = (ulong *)0x0;
                          local_1b8 = &DAT_0488df58;
                          uStack_1b0 = 4;
                          pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                          local_1a8 = nn::os::GetThreadId(pTVar13);
                          local_198 = 0;
                          local_190 = (char *)0x0;
                          local_188 = 0;
                          local_180 = 0;
                          uStack_1c0 = 0x10000000000;
                          local_178[0]._0_1_ = '\0';
                          local_1c8 = local_178;
                          local_1a0 = local_178;
                          FUN_0322c554(&local_1c8,"srcOff={}",PTR_DAT_047e5908,puVar19);
                          local_190 = 
                          "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                          local_188 = 0x151;
                          if ((char)local_178[0] != '\0') {
                            sVar16 = strlen((char *)local_178);
                            *(undefined2 *)
                             ((long)local_178 +
                             (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10;
                            printf("%s",local_178);
                            fflush(pFVar31);
                          }
                        }
                        if (((ulong)local_1a0 & 1) != 0) {
                          (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                        }
                      }
                      local_1c8 = (ulong *)CONCAT44(local_1c8._4_4_,
                                                    ((int)lVar29 + uVar11) - param_1[0x10]);
                      puVar14 = (undefined4 *)
                                FUN_03001450(*(undefined8 *)(param_1 + 0x42),&local_1c8);
                      local_1f0[0] = local_1f0[0] + 1;
                      puVar19 = puVar19 + 1;
                      lVar36 = lVar36 + -4;
                      local_1d8[0] = 0;
                    } while (lVar36 != 0);
                  }
                  else {
                    do {
                      if (uVar33 <= *puVar19) goto LAB_0338c1bc;
                      if (DAT_0488dfa8 < 4) {
                        if (DAT_046aaf68 != '\0') goto LAB_0338bfd0;
                      }
                      else {
                        if (DAT_046aaf68 == '\0') {
                          local_1c8 = (ulong *)0x0;
                          local_1b8 = &DAT_0488df58;
                          uStack_1b0 = 4;
                          pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                          local_1a8 = nn::os::GetThreadId(pTVar13);
                          local_1a0 = (ulong *)0x0;
                          local_198 = 0;
                          local_180 = 0;
                          local_190 = (char *)0x0;
                          local_188 = 0;
                          FUN_0322c554(&local_1c8,"srcOff={}",PTR_DAT_047e5908,puVar19);
                          local_190 = 
                          "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                          local_188 = 0x151;
                          puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
                        }
                        else {
LAB_0338bfd0:
                          local_1c8 = (ulong *)0x0;
                          local_1b8 = &DAT_0488df58;
                          uStack_1b0 = 4;
                          pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                          local_1a8 = nn::os::GetThreadId(pTVar13);
                          local_198 = 0;
                          local_190 = (char *)0x0;
                          local_188 = 0;
                          local_180 = 0;
                          uStack_1c0 = 0x10000000000;
                          local_178[0]._0_1_ = '\0';
                          local_1c8 = local_178;
                          local_1a0 = local_178;
                          puVar14 = (undefined4 *)
                                    FUN_0322c554(&local_1c8,"srcOff={}",PTR_DAT_047e5908,puVar19);
                          local_190 = 
                          "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                          local_188 = 0x151;
                          if ((char)local_178[0] != '\0') {
                            sVar16 = strlen((char *)local_178);
                            *(undefined2 *)
                             ((long)local_178 +
                             (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10;
                            printf("%s",local_178);
                            uVar11 = fflush(pFVar31);
                            puVar14 = (undefined4 *)(ulong)uVar11;
                          }
                        }
                        if (((ulong)local_1a0 & 1) != 0) {
                          puVar14 = (undefined4 *)
                                    (**(code **)(PTR_DAT_047d1a08 + 8))
                                              (0,(byte *)((long)local_1a0 + -1),0);
                        }
                      }
                      local_1f0[0] = local_1f0[0] + 1;
                      puVar19 = puVar19 + 1;
                      lVar36 = lVar36 + -4;
                      local_1d8[0] = 0;
                    } while (lVar36 != 0);
                  }
                }
                if (3 < DAT_0488dfa8) {
                  local_1c8 = (ulong *)0x0;
                  local_1b8 = &DAT_0488df58;
                  uStack_1b0 = 4;
                  pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1a8 = nn::os::GetThreadId(pTVar13);
                  local_1a0 = (ulong *)0x0;
                  local_198 = 0;
                  local_180 = 0;
                  local_190 = (char *)0x0;
                  local_188 = 0;
                  uStack_1b0._0_2_ = CONCAT11(0xff,(undefined1)uStack_1b0);
                  puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
                  if (((ulong)local_1a0 & 1) != 0) {
                    puVar14 = (undefined4 *)
                              (**(code **)(PTR_DAT_047d1a08 + 8))
                                        (0,(byte *)((long)local_1a0 + -1),0);
                  }
                }
                iVar28 = iVar28 + 1;
              } while (iVar28 < local_208);
            }
            bVar4 = true;
            goto LAB_0338c2e0;
          }
        }
        goto LAB_0338c790;
      }
LAB_0338c6dc:
      local_1d8[0] = 0;
    }
    else {
      local_1d8[0] = 0x80040200;
      if (DAT_0488dfa8 != 0) {
        local_1c8 = (ulong *)0x0;
        local_1b8 = &DAT_0488df58;
        uStack_1b0 = 1;
        pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
        local_1a8 = nn::os::GetThreadId(pTVar13);
        local_1a0 = (ulong *)0x0;
        local_198 = 0;
        local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
        local_188 = 0xeb;
        local_180 = 0;
        FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,local_1d8);
        local_218[0] = 0x20f2cca4;
        FUN_0322c554(&local_1c8,"PATCH_DATA section has the wrong size",&DAT_047b2bd0,local_218);
        puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
        if (((ulong)local_1a0 & 1) != 0) {
          puVar14 = (undefined4 *)
                    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
        }
      }
    }
LAB_0338c790:
    if (-1 < (int)local_1d8[0]) {
      return puVar14;
    }
    if (DAT_0488dfa8 == 0) {
      if (DAT_046aaf68 == '\0') goto LAB_0338c834;
    }
    else if (DAT_046aaf68 == '\0') {
      local_1c8 = (ulong *)0x0;
      local_1b8 = &DAT_0488df58;
      uStack_1b0 = 1;
      pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
      local_1a8 = nn::os::GetThreadId(pTVar13);
      local_1a0 = (ulong *)0x0;
      local_198 = 0;
      local_190 = (char *)0x0;
      local_188 = 0;
      local_180 = 0;
      FUN_0322c554(&local_1c8,"Failed to read the PATCH_DATA section",PTR_DAT_047d1b38);
      local_190 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      local_188 = 0xae6;
      puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
      if (((ulong)local_1a0 & 1) != 0) {
        puVar14 = (undefined4 *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,(long)local_1a0 - 1,0);
      }
      goto LAB_0338c834;
    }
    local_1b8 = &DAT_0488df58;
    uStack_1b0 = 1;
    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
    local_1a8 = nn::os::GetThreadId(pTVar13);
    local_198 = 0;
    local_190 = (char *)0x0;
    local_188 = 0;
    local_180 = 0;
    local_178[0]._0_1_ = '\0';
    uStack_1c0 = 0x10000000000;
    local_1c8 = local_178;
    local_1a0 = local_178;
    puVar14 = (undefined4 *)
              FUN_0322c554(&local_1c8,"Failed to read the PATCH_DATA section",PTR_DAT_047d1b38);
    local_190 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_188 = 0xae6;
    if ((char)local_178[0] != '\0') {
      sVar16 = strlen((char *)local_178);
      *(undefined2 *)((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10
      ;
      printf("%s",local_178);
      uVar12 = fflush(*(FILE **)PTR_stdout_047cb860);
      puVar14 = (undefined4 *)(ulong)uVar12;
    }
    if (((ulong)local_1a0 & 1) != 0) {
      puVar14 = (undefined4 *)
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_1a0 + -1),0);
    }
LAB_0338c834:
    *param_1 = 0x80040200;
    return puVar14;
  }
  if ((param_3 >> 8 & 1) == 0) {
    lVar25 = *param_2;
    if ((param_2[1] - lVar25 & 3U) == 0) {
      lVar40 = *(long *)(param_1 + 0x72);
      lVar36 = *(long *)(param_1 + 0x10);
      lVar29 = *(long *)(param_1 + 0x12);
      uVar21 = (*(long *)(param_1 + 0x16) - *(long *)(param_1 + 0x14) >> 2) * -0x5555555555555555;
      lVar34 = *(long *)(param_1 + 4);
      iVar3 = param_1[6];
      uVar12 = (uint)((ulong)(param_2[1] - lVar25) >> 2);
      local_1fc = 0;
      if (2 < (int)uVar12) {
        iVar30 = 0;
        pFVar31 = *(FILE **)PTR_stdout_047cb860;
        iVar28 = 2;
        do {
          puStack_1e0 = auVar7._8_8_;
          local_1fc = (int)((long)iVar30 + 1);
          uVar11 = *(uint *)(lVar25 + (long)iVar30 * 4);
          local_1e8._0_4_ = uVar11;
          if (uVar11 == 0) {
            local_210 = (ulong *)0x0;
            local_208 = 0;
            local_1f8 = 0;
LAB_0338a180:
            puStack_1e0 = auVar7._8_8_;
            local_218[0] = local_1f8;
            if (DAT_0488dfa8 < 4) {
              if (DAT_046aaf68 == '\0') break;
            }
            else if (DAT_046aaf68 == '\0') {
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 4;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_1a0 = (ulong *)0x0;
              local_198 = 0;
              local_190 = (char *)0x0;
              local_188 = 0;
              local_180 = 0;
              FUN_0322c554(&local_1c8,"Finished internal, starting external",PTR_DAT_047d1b38);
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0x103;
              uVar15 = FUN_0322c8e0(&local_1c8);
              auVar7._8_8_ = puStack_1e0;
              auVar7._0_8_ = uVar15;
              if (((ulong)local_1a0 & 1) != 0) {
                uVar15 = (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                auVar7._8_8_ = puStack_1e0;
                auVar7._0_8_ = uVar15;
              }
              break;
            }
            local_1c8 = (ulong *)0x0;
            local_1b8 = &DAT_0488df58;
            uStack_1b0 = 4;
            pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a8 = nn::os::GetThreadId(pTVar13);
            local_198 = 0;
            local_190 = (char *)0x0;
            local_188 = 0;
            local_180 = 0;
            local_178[0]._0_1_ = '\0';
            uStack_1c0 = 0x10000000000;
            local_1c8 = local_178;
            local_1a0 = local_178;
            uVar33 = FUN_0322c554(&local_1c8,"Finished internal, starting external",PTR_DAT_047d1b38
                                 );
            local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            local_188 = 0x103;
            if ((char)local_178[0] != '\0') {
              sVar16 = strlen((char *)local_178);
              *(undefined2 *)
               ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10;
              printf("%s",local_178);
              uVar11 = fflush(pFVar31);
              uVar33 = (ulong)uVar11;
            }
            auVar7._8_8_ = puStack_1e0;
            auVar7._0_8_ = uVar33;
            if (((ulong)local_1a0 & 1) != 0) {
              uVar15 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              auVar7._8_8_ = puStack_1e0;
              auVar7._0_8_ = uVar15;
            }
            break;
          }
          if ((ulong)uVar11 < (ulong)(long)iVar3) {
            if (*(long *)(lVar34 + (long)(int)uVar11 * 8) == 0) {
              uVar11 = 0x80040200;
              local_70 = (ulong *)CONCAT44(local_70._4_4_,0x80040200);
              if (DAT_0488dfa8 != 0) {
                local_1c8 = (ulong *)0x0;
                local_1b8 = &DAT_0488df58;
                uStack_1b0 = 1;
                pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a8 = nn::os::GetThreadId(pTVar13);
                local_180 = 0;
                local_1a0 = (ulong *)0x0;
                local_198 = 0;
                local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                local_188 = 0xd7;
                FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_70);
                local_1d0 = (ulong *)CONCAT44(local_1d0._4_4_,local_1fc + -1);
                pcVar17 = 
                "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type";
                goto LAB_03389248;
              }
              goto LAB_0338927c;
            }
            iVar30 = *(int *)(lVar25 + ((long)iVar30 + 1) * 4);
            local_70 = (ulong *)CONCAT44(local_70._4_4_,iVar30);
            local_1fc = iVar28;
            if ((int)uVar12 < iVar30 + iVar28) {
              local_1d0 = (ulong *)CONCAT44(local_1d0._4_4_,0x80040200);
              uVar11 = 0x80040200;
              if (DAT_0488dfa8 != 0) {
                local_1c8 = (ulong *)0x0;
                local_1b8 = &DAT_0488df58;
                uStack_1b0 = 1;
                pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a8 = nn::os::GetThreadId(pTVar13);
                local_180 = 0;
                local_1a0 = (ulong *)0x0;
                local_198 = 0;
                local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                local_188 = 0xde;
                FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_1d0);
                local_78[0] = local_1fc - 1;
                FUN_0322c554(&local_1c8,
                             "Corrupt patch index body at index {}: invalid entries number {}",
                             &DAT_044e9030,local_78,&local_70);
                uVar15 = FUN_0322c8e0(&local_1c8);
                if (((ulong)local_1a0 & 1) != 0) {
                  uVar15 = (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                }
                auVar7._8_8_ = puStack_1e0;
                auVar7._0_8_ = uVar15;
                uVar11 = (uint)local_1d0;
              }
              goto LAB_0338927c;
            }
            if (DAT_0488dfa8 < 4) {
              if (DAT_046aaf68 != '\0') goto LAB_03389ecc;
            }
            else if (DAT_046aaf68 == '\0') {
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 4;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_180 = 0;
              local_1a0 = (ulong *)0x0;
              local_198 = 0;
              local_190 = (char *)0x0;
              local_188 = 0;
              FUN_0322c554(&local_1c8,"Type {} ({} entries) //{}",&DAT_047b2be0,local_1e8,&local_70,
                           lVar34 + (long)(int)local_1e8._0_4_ * 8);
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0xe1;
              uVar15 = FUN_0322c8e0(&local_1c8);
              auVar7._8_8_ = puStack_1e0;
              auVar7._0_8_ = uVar15;
              if (((ulong)local_1a0 & 1) != 0) {
                uVar15 = (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                auVar7._8_8_ = puStack_1e0;
                auVar7._0_8_ = uVar15;
              }
            }
            else {
LAB_03389ecc:
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 4;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_198 = 0;
              local_190 = (char *)0x0;
              local_188 = 0;
              local_180 = 0;
              uStack_1c0 = 0x10000000000;
              local_178[0]._0_1_ = '\0';
              local_1c8 = local_178;
              local_1a0 = local_178;
              uVar33 = FUN_0322c554(&local_1c8,"Type {} ({} entries) //{}",&DAT_047b2be0,local_1e8,
                                    &local_70,lVar34 + (long)(int)local_1e8._0_4_ * 8);
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0xe1;
              if ((char)local_178[0] != '\0') {
                sVar16 = strlen((char *)local_178);
                *(undefined2 *)
                 ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10;
                printf("%s",local_178);
                uVar11 = fflush(pFVar31);
                uVar33 = (ulong)uVar11;
              }
              if (((ulong)local_1a0 & 1) != 0) {
                uVar33 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              }
              auVar7._8_8_ = puStack_1e0;
              auVar7._0_8_ = uVar33;
              puVar38 = PTR_DAT_047d1a08;
            }
            local_210 = *(ulong **)(lVar34 + (long)(int)local_1e8._0_4_ * 8);
            local_218[0] = 0;
            local_208 = (uint)local_70;
          }
          else {
            uVar11 = 0x80040200;
            local_70 = (ulong *)CONCAT44(local_70._4_4_,0x80040200);
            if (DAT_0488dfa8 != 0) {
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 1;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_180 = 0;
              local_1a0 = (ulong *)0x0;
              local_198 = 0;
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0xd2;
              FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_70);
              pcVar17 = "Corrupt patch index body at index {}: invalid TypeId {}";
              local_1d0 = (ulong *)CONCAT44(local_1d0._4_4_,local_1fc + -1);
LAB_03389248:
              FUN_0322c554(&local_1c8,pcVar17,&DAT_044e9030,&local_1d0,local_1e8);
              uVar15 = FUN_0322c8e0(&local_1c8);
              if (((ulong)local_1a0 & 1) != 0) {
                uVar15 = (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              }
              auVar7._8_8_ = puStack_1e0;
              auVar7._0_8_ = uVar15;
              uVar11 = (uint)local_70;
            }
LAB_0338927c:
            local_210 = (ulong *)0x0;
            local_208 = 0;
            local_218[0] = uVar11;
          }
          puStack_1e0 = auVar7._8_8_;
          local_1f8 = local_218[0];
          if ((int)local_218[0] < 0) goto LAB_0338b53c;
          if (local_210 == (ulong *)0x0) goto LAB_0338a180;
          if (DAT_0488dfa8 < 4) {
            if (DAT_046aaf68 != '\0') goto LAB_03389e28;
          }
          else {
            if (DAT_046aaf68 == '\0') {
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 4;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_1a0 = (ulong *)0x0;
              local_198 = 0;
              local_180 = 0;
              local_190 = (char *)0x0;
              local_188 = 0;
              FUN_0322c554(&local_1c8,"Internal fixups for type {}",PTR_DAT_047e5c18,&local_210);
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0x107;
              uStack_1b0._0_2_ = CONCAT11(1,(undefined1)uStack_1b0);
              uVar33 = FUN_0322c8e0(&local_1c8);
            }
            else {
LAB_03389e28:
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 4;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_198 = 0;
              local_190 = (char *)0x0;
              local_188 = 0;
              local_180 = 0;
              local_178[0]._0_1_ = '\0';
              uStack_1c0 = 0x10000000000;
              local_1c8 = local_178;
              local_1a0 = local_178;
              uVar33 = FUN_0322c554(&local_1c8,"Internal fixups for type {}",PTR_DAT_047e5c18,
                                    &local_210);
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0x107;
              uStack_1b0._0_2_ = CONCAT11(1,(undefined1)uStack_1b0);
              if ((char)local_178[0] != '\0') {
                sVar16 = strlen((char *)local_178);
                *(undefined2 *)
                 ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10;
                printf("%s",local_178);
                uVar11 = fflush(pFVar31);
                uVar33 = (ulong)uVar11;
              }
            }
            auVar7._8_8_ = puStack_1e0;
            auVar7._0_8_ = uVar33;
            if (((ulong)local_1a0 & 1) != 0) {
              uVar15 = (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              auVar7._8_8_ = puStack_1e0;
              auVar7._0_8_ = uVar15;
            }
          }
          puVar22 = local_210;
          do {
            uVar33 = *puVar22;
            if (((uint)uVar33 >> 2 & 1) != 0) {
              local_238 = (long *)puVar22[(uVar33 >> 1 & 1) + (uVar33 & 1) + 2];
              goto LAB_0338936c;
            }
            puVar22 = (ulong *)puVar22[1];
          } while (puVar22 != (ulong *)0x0);
          local_238 = (long *)0x0;
LAB_0338936c:
          if (local_208 == 0) {
            bVar4 = true;
          }
          else {
            puVar19 = (uint *)(lVar25 + (long)local_1fc * 4);
            bVar2 = (byte)*local_210;
            puVar22 = local_210;
            while ((bVar2 & 1) == 0) {
              puVar22 = (ulong *)puVar22[1];
              bVar2 = (byte)*puVar22;
            }
            puVar1 = puVar19 + local_208;
            uVar11 = (uint)puVar22[2] & 0x1f;
            do {
              puStack_1e0 = auVar7._8_8_;
              if ((ulong)(lVar29 - lVar36) <= (ulong)*puVar19) {
                local_1f8 = 0x80040200;
                if (DAT_0488dfa8 == 0) goto LAB_0338b53c;
                local_1c8 = (ulong *)0x0;
                local_1b8 = &DAT_0488df58;
                uStack_1b0 = 1;
                pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a8 = nn::os::GetThreadId(pTVar13);
                local_180 = 0;
                local_1a0 = (ulong *)0x0;
                local_198 = 0;
                local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                local_188 = 0x113;
                FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_1f8);
                FUN_0322c554(&local_1c8,"Corrupt patch index body at index {}: invalid offset {}",
                             &DAT_047b2c00,&local_1fc,puVar19);
                uVar15 = FUN_0322c8e0(&local_1c8);
                auVar7._8_8_ = puStack_1e0;
                auVar7._0_8_ = uVar15;
                if (((ulong)local_1a0 & 1) != 0) {
                  uVar15 = (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                  auVar7._8_8_ = puStack_1e0;
                  auVar7._0_8_ = uVar15;
                }
LAB_03389d68:
                bVar4 = false;
                goto LAB_03389d70;
              }
              puVar22 = (ulong *)(long)(int)*puVar19;
              puVar41 = (uint *)(lVar36 + (long)puVar22);
              if (DAT_0488dfa8 < 4) {
                if (DAT_046aaf68 != '\0') goto LAB_03389b78;
              }
              else {
                if (DAT_046aaf68 == '\0') {
                  local_1c8 = (ulong *)0x0;
                  local_1b8 = &DAT_0488df58;
                  uStack_1b0 = 4;
                  pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1a8 = nn::os::GetThreadId(pTVar13);
                  local_1a0 = (ulong *)0x0;
                  local_198 = 0;
                  local_180 = 0;
                  local_190 = (char *)0x0;
                  local_188 = 0;
                  FUN_0322c554(&local_1c8,"srcOff={}",PTR_DAT_047e5908,puVar19);
                  local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  local_188 = 0x116;
                  uVar33 = FUN_0322c8e0(&local_1c8);
                }
                else {
LAB_03389b78:
                  local_1c8 = (ulong *)0x0;
                  local_1b8 = &DAT_0488df58;
                  uStack_1b0 = 4;
                  pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1a8 = nn::os::GetThreadId(pTVar13);
                  local_198 = 0;
                  local_190 = (char *)0x0;
                  local_188 = 0;
                  local_180 = 0;
                  uStack_1c0 = 0x10000000000;
                  local_178[0]._0_1_ = '\0';
                  local_1c8 = local_178;
                  local_1a0 = local_178;
                  uVar33 = FUN_0322c554(&local_1c8,"srcOff={}",PTR_DAT_047e5908,puVar19);
                  local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  local_188 = 0x116;
                  if ((char)local_178[0] != '\0') {
                    sVar16 = strlen((char *)local_178);
                    *(undefined2 *)
                     ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10
                    ;
                    printf("%s",local_178);
                    uVar10 = fflush(pFVar31);
                    uVar33 = (ulong)uVar10;
                  }
                }
                auVar7._8_8_ = puStack_1e0;
                auVar7._0_8_ = uVar33;
                if (((ulong)local_1a0 & 1) != 0) {
                  uVar15 = (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                  auVar7._8_8_ = puStack_1e0;
                  auVar7._0_8_ = uVar15;
                }
              }
              puVar39 = local_210;
              puStack_1e0 = auVar7._8_8_;
              local_1f4 = *puVar41;
              local_1f0[0] = 0x80040200;
              if (local_1f4 < uVar21) {
                local_1d0 = local_210;
                *puVar41 = 0;
                local_1d8[0] = local_1f4;
                if (local_1f4 == 0) {
                  local_78[0] = 0x80040200;
                  uVar15 = (**(code **)(*local_238 + 0x10))(local_238,puVar41,local_210,0,0,0);
                  auVar7._8_8_ = puStack_1e0;
                  auVar7._0_8_ = uVar15;
                  if ((int)uVar15 < 0) {
                    if (DAT_0488dfa8 == 0) goto LAB_0338998c;
                    local_1c8 = (ulong *)0x0;
                    local_1b8 = &DAT_0488df58;
                    uStack_1b0 = 1;
                    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                    local_1a8 = nn::os::GetThreadId(pTVar13);
                    local_1a0 = (ulong *)0x0;
                    local_198 = 0;
                    local_180 = 0;
                    local_190 = 
                    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                    ;
                    local_188 = 0xaa9;
                    FUN_0322c554(&local_1c8,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_047e6880,
                                 "srcImpl->inplaceFixup(srcAddr, srcType, nullptr, nullptr, 0).isFailure()"
                                 ,local_78);
                    local_1e8 = (undefined1  [8])puVar22;
                    FUN_0322c554(&local_1c8,
                                 "Failed to apply null fixup of type \'{}\' at data offset {}",
                                 PTR_DAT_047e5b38,&local_1d0,local_1e8);
                    uVar15 = FUN_0322c8e0(&local_1c8);
                    auVar43._8_8_ = puStack_1e0;
                    auVar43._0_8_ = local_1e8;
                    auVar7._8_8_ = puStack_1e0;
                    auVar7._0_8_ = uVar15;
                    goto joined_r0x03389a84;
                  }
LAB_03389988:
                  auVar7._8_8_ = puStack_1e0;
                  auVar7._0_8_ = uVar15;
                  local_78[0] = 0;
                }
                else {
                  lVar32 = *(long *)(param_1 + 0x14);
                  lVar42 = (long)(int)local_1f4;
                  puVar37 = (uint *)(lVar32 + lVar42 * 0xc);
                  auVar43 = FUN_03393e1c(param_1 + 2,puVar37);
                  puVar24 = auVar43._8_8_;
                  auVar43._0_8_ = auVar43._0_8_;
                  local_1e8 = (undefined1  [8])auVar43._0_8_;
                  auVar7 = auVar43;
                  _local_1e8 = auVar43;
                  if (uVar11 == 3) {
                    local_78[0] = 0x80040200;
                    if (puVar24 == (ulong *)PTR_DAT_047e6888) goto LAB_033898d0;
                    puVar23 = puVar24;
                    while( true ) {
                      uVar10 = (uint)*puVar23;
                      if ((uVar10 >> 0xd & 1) != 0) break;
                      if (((*puVar23 & 1) != 0) ||
                         (puVar23 = (ulong *)puVar23[1], puVar23 == (ulong *)0x0))
                      goto LAB_03389758;
                    }
                    if (puVar23 != (ulong *)0x0) {
                      uVar33 = CONCAT44(uVar10,uVar10) & 0x1fff00001fff;
                      local_1c8 = puVar23 + (ulong)(byte)(POPCOUNT((char)uVar33) +
                                                         POPCOUNT((char)(uVar33 >> 8))) + 2;
                      goto LAB_03389760;
                    }
LAB_03389758:
                    local_1c8 = (ulong *)0x0;
LAB_03389760:
                    puVar23 = (ulong *)PTR_DAT_047e6888;
                    while( true ) {
                      uVar10 = (uint)*puVar23;
                      if ((uVar10 >> 0xd & 1) != 0) break;
                      if (((*puVar23 & 1) != 0) ||
                         (puVar23 = (ulong *)puVar23[1], puVar23 == (ulong *)0x0))
                      goto LAB_033897c0;
                    }
                    if (puVar23 != (ulong *)0x0) {
                      uVar33 = CONCAT44(uVar10,uVar10) & 0x1fff00001fff;
                      local_70 = puVar23 + (ulong)(byte)(POPCOUNT((char)uVar33) +
                                                        POPCOUNT((char)(uVar33 >> 8))) + 2;
                      if (local_1c8 == (ulong *)0x0) goto LAB_03389808;
                      uVar33 = FUN_031dd3c0(&local_1c8,&local_70);
                      auVar7._8_8_ = puStack_1e0;
                      auVar7._0_8_ = uVar33;
                      if ((uVar33 & 1) != 0) goto LAB_033898d0;
                      goto LAB_03389808;
                    }
LAB_033897c0:
                    local_70 = (ulong *)0x0;
                    if (local_1c8 == (ulong *)0x0) {
                      if (puVar24 == (ulong *)0x0) {
                        puVar24 = (ulong *)0x0;
                      }
                      else {
                        do {
                          if ((*puVar24 & 1) != 0) break;
                          puVar24 = (ulong *)puVar24[1];
                        } while (puVar24 != (ulong *)0x0);
                      }
                      puVar23 = (ulong *)PTR_DAT_047e6888;
                      do {
                        if ((*puVar23 & 1) != 0) break;
                        puVar23 = (ulong *)puVar23[1];
                      } while (puVar23 != (ulong *)0x0);
                      if (puVar24 == puVar23) goto LAB_033898d0;
                    }
LAB_03389808:
                    puStack_1e0 = auVar7._8_8_;
                    if (DAT_0488dfa8 != 0) {
                      local_1c8 = (ulong *)0x0;
                      local_1b8 = &DAT_0488df58;
                      uStack_1b0 = 1;
                      pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                      local_1a8 = nn::os::GetThreadId(pTVar13);
                      local_180 = 0;
                      local_1a0 = (ulong *)0x0;
                      local_198 = 0;
                      local_190 = 
                      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                      ;
                      local_188 = 0xa96;
                      FUN_0322c554(&local_1c8,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_047b2cd0,
                                   "!addrAndType.m_type->equals(hkReflect::getType<char>())",
                                   local_78);
                      FUN_0322c554(&local_1c8,
                                   "Found string whose item type is \'{}\' instead of \'char\'",
                                   PTR_DAT_047e5c18,&puStack_1e0);
                      goto LAB_03389890;
                    }
LAB_03389b54:
                    puVar38 = PTR_DAT_047d1a08;
                  }
                  else {
                    if ((uVar11 == 6) &&
                       (local_78[0] = 0x80040200, (*puVar37 | 0x10000000) >> 0x1c == 3)) {
                      if (DAT_0488dfa8 == 0) goto LAB_03389b54;
                      local_1c8 = (ulong *)0x0;
                      local_1b8 = &DAT_0488df58;
                      uStack_1b0 = 1;
                      pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                      local_1a8 = nn::os::GetThreadId(pTVar13);
                      local_180 = 0;
                      local_1a0 = (ulong *)0x0;
                      local_198 = 0;
                      local_190 = 
                      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                      ;
                      local_188 = 0xa91;
                      FUN_0322c554(&local_1c8,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_047b2c30,
                                   "targetItem.isKindVarN() || targetItem.isKindNote()",local_78);
                      FUN_0322c554(&local_1c8,"Found invalid fixup for pointer",PTR_DAT_047d1b38);
LAB_03389890:
                      uVar15 = FUN_0322c8e0(&local_1c8);
                      auVar7._8_8_ = puStack_1e0;
                      auVar7._0_8_ = uVar15;
                      puVar38 = PTR_DAT_047d1a08;
                      auVar43 = _local_1e8;
                    }
                    else {
LAB_033898d0:
                      puStack_1e0 = auVar7._8_8_;
                      auVar5._8_8_ = puStack_1e0;
                      auVar5._0_8_ = local_1e8;
                      if (*puVar37 >> 0x1c == 5) {
                        if (((((ulong *)0x1 < auVar43._0_8_) &&
                             (uVar10 = (uint)*auVar43._0_8_, (uVar10 >> 0x11 & 1) != 0)) &&
                            (uVar33 = CONCAT44(uVar10,uVar10) & 0x1ffff0001ffff,
                            ((uint)auVar43._0_8_
                                   [(ulong)(byte)(POPCOUNT((char)uVar33) +
                                                  POPCOUNT((char)(uVar33 >> 8)) +
                                                 POPCOUNT((char)(uVar33 >> 0x10))) + 2] >> 0x14 & 1)
                            != 0)) &&
                           (local_78[0] = 0x80040200,
                           *(char *)(lVar40 + ((ulong)*puVar37 & 0xffffff)) == '\0')) {
                          if (DAT_0488dfa8 == 0) goto LAB_03389b54;
                          local_1c8 = (ulong *)0x0;
                          local_1b8 = &DAT_0488df58;
                          uStack_1b0 = 1;
                          pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                          local_1a8 = nn::os::GetThreadId(pTVar13);
                          local_180 = 0;
                          local_1a0 = (ulong *)0x0;
                          local_198 = 0;
                          local_190 = 
                          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                          ;
                          local_188 = 0xa9f;
                          FUN_0322c554(&local_1c8,"HK_RETURN_RES_IF({}) returning {}. ",
                                       &DAT_047b2c30,
                                       "decl && !m_propHashVerified[targetItem.getIndex()]",local_78
                                      );
                          local_70 = (ulong *)(CONCAT44(local_70._4_4_,*puVar37) &
                                              0xffffffff00ffffff);
                          FUN_0322c554(&local_1c8,
                                       "Found pointer to decl in type ${} ({}) but no property hash has been loaded for the type"
                                       ,&DAT_047b2d70,&local_70,
                                       lVar34 + ((ulong)*puVar37 & 0xffffff) * 8);
                          goto LAB_03389890;
                        }
                        puVar39 = local_1d0;
                        auVar43 = auVar5;
                      }
                      local_78[0] = 0x80040200;
                      uVar15 = (**(code **)(*local_238 + 0x10))
                                         (local_238,puVar41,puVar39,auVar43._0_8_,auVar43._8_8_,
                                          *(undefined4 *)(lVar32 + lVar42 * 0xc + 8));
                      puVar38 = PTR_DAT_047d1a08;
                      auVar7._8_8_ = puStack_1e0;
                      auVar7._0_8_ = uVar15;
                      if (-1 < (int)uVar15) goto LAB_03389988;
                      if ((-1 < (int)local_78[0]) || (DAT_0488dfa8 == 0)) goto LAB_0338998c;
                      local_1c8 = (ulong *)0x0;
                      local_1b8 = &DAT_0488df58;
                      uStack_1b0 = 1;
                      pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                      local_1a8 = nn::os::GetThreadId(pTVar13);
                      local_180 = 0;
                      local_1a0 = (ulong *)0x0;
                      local_198 = 0;
                      local_190 = 
                      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                      ;
                      local_188 = 0xaa4;
                      FUN_0322c554(&local_1c8,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_047b2d88,
                                   "srcImpl->inplaceFixup(srcAddr, srcType, addrAndType.m_addr, addrAndType.m_type, targetItem.count).isFailure()"
                                   ,local_78);
                      local_70 = puVar22;
                      FUN_0322c554(&local_1c8,
                                   "Failed to apply fixup of type \'{}\'; at data offset {} pointing to item {}"
                                   ,&DAT_047b2e28,&local_1d0,&local_70,local_1d8);
                      uVar15 = FUN_0322c8e0(&local_1c8);
                      auVar43._8_8_ = puStack_1e0;
                      auVar43._0_8_ = local_1e8;
                      auVar7._8_8_ = puStack_1e0;
                      auVar7._0_8_ = uVar15;
                    }
joined_r0x03389a84:
                    if (((ulong)local_1a0 & 1) != 0) {
                      _local_1e8 = auVar43;
                      uVar15 = (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                      auVar7._8_8_ = puStack_1e0;
                      auVar7._0_8_ = uVar15;
                    }
                  }
                }
LAB_0338998c:
                local_1f0[0] = local_78[0];
              }
              else {
                if (DAT_0488dfa8 == 0) {
                  local_1f8 = 0x80040200;
                  goto LAB_03389d68;
                }
                local_1c8 = (ulong *)0x0;
                local_1b8 = &DAT_0488df58;
                uStack_1b0 = 1;
                pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a8 = nn::os::GetThreadId(pTVar13);
                local_1a0 = (ulong *)0x0;
                local_198 = 0;
                local_180 = 0;
                local_190 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                ;
                local_188 = 0xa7d;
                FUN_0322c554(&local_1c8,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_047e5f70,
                             "tgtIdx >= m_numItems",local_1f0);
                local_1e8 = (undefined1  [8])puVar22;
                FUN_0322c554(&local_1c8,"Corrupt data at offset {}: invalid target index {}",
                             &DAT_047b2c18,local_1e8,&local_1f4);
                uVar15 = FUN_0322c8e0(&local_1c8);
                auVar7._8_8_ = puStack_1e0;
                auVar7._0_8_ = uVar15;
                if (((ulong)local_1a0 & 1) != 0) {
                  uVar15 = (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                  auVar7._8_8_ = puStack_1e0;
                  auVar7._0_8_ = uVar15;
                }
              }
              local_1f8 = local_1f0[0];
              if ((int)local_1f0[0] < 0) goto LAB_03389d68;
              local_1fc = local_1fc + 1;
              puVar19 = puVar19 + 1;
            } while (puVar19 != puVar1);
            bVar4 = true;
          }
LAB_03389d70:
          puStack_1e0 = auVar7._8_8_;
          iVar30 = local_1fc;
          if (3 < DAT_0488dfa8) {
            local_1c8 = (ulong *)0x0;
            local_1b8 = &DAT_0488df58;
            uStack_1b0 = 4;
            pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a8 = nn::os::GetThreadId(pTVar13);
            local_1a0 = (ulong *)0x0;
            local_198 = 0;
            local_180 = 0;
            local_190 = (char *)0x0;
            local_188 = 0;
            uStack_1b0._0_2_ = CONCAT11(0xff,(undefined1)uStack_1b0);
            uVar15 = FUN_0322c8e0(&local_1c8);
            if (((ulong)local_1a0 & 1) != 0) {
              uVar15 = (**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
            }
            auVar7._8_8_ = puStack_1e0;
            auVar7._0_8_ = uVar15;
            iVar30 = local_1fc;
          }
          local_1fc = iVar30;
          if (!bVar4) goto LAB_0338b53c;
          iVar28 = iVar30 + 2;
        } while (iVar28 < (int)uVar12);
      }
      iVar28 = local_1fc + 2;
      if (iVar28 < (int)uVar12) {
        pFVar31 = *(FILE **)PTR_stdout_047cb860;
        do {
          puStack_1e0 = auVar7._8_8_;
          iVar30 = (int)((long)local_1fc + 1);
          uVar11 = *(uint *)(lVar25 + (long)local_1fc * 4);
          local_1e8._0_4_ = uVar11;
          if (uVar11 == 0) {
            local_218[0] = 0;
            local_210 = (ulong *)0x0;
            local_208 = 0;
            local_1fc = iVar30;
LAB_0338c868:
            puStack_1e0 = auVar7._8_8_;
            local_1f8 = 0x80040200;
            if (DAT_0488dfa8 == 0) goto LAB_0338b53c;
            local_1c8 = (ulong *)0x0;
            local_1b8 = &DAT_0488df58;
            uStack_1b0 = 1;
            pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a8 = nn::os::GetThreadId(pTVar13);
            local_1a0 = (ulong *)0x0;
            local_198 = 0;
            local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            local_188 = 300;
            local_180 = 0;
            FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_1f8);
            FUN_0322c554(&local_1c8,"Invalid sentinel at the end of external fixups",
                         PTR_DAT_047d1b38);
            goto LAB_0338854c;
          }
          if ((ulong)uVar11 < (ulong)(long)iVar3) {
            if (*(long *)(lVar34 + (long)(int)uVar11 * 8) == 0) {
              uVar11 = 0x80040200;
              local_70 = (ulong *)CONCAT44(local_70._4_4_,0x80040200);
              local_1fc = iVar30;
              if (DAT_0488dfa8 != 0) {
                local_1c8 = (ulong *)0x0;
                local_1b8 = &DAT_0488df58;
                uStack_1b0 = 1;
                pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a8 = nn::os::GetThreadId(pTVar13);
                local_180 = 0;
                local_1a0 = (ulong *)0x0;
                local_198 = 0;
                local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                local_188 = 0xd7;
                FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_70);
                local_1d0 = (ulong *)CONCAT44(local_1d0._4_4_,local_1fc + -1);
                pcVar17 = 
                "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type";
                goto LAB_0338a490;
              }
              goto LAB_0338a4cc;
            }
            iVar30 = *(int *)(lVar25 + ((long)local_1fc + 1) * 4);
            local_70 = (ulong *)CONCAT44(local_70._4_4_,iVar30);
            local_1fc = iVar28;
            if ((int)uVar12 < iVar30 + iVar28) {
              local_1d0 = (ulong *)CONCAT44(local_1d0._4_4_,0x80040200);
              uVar11 = 0x80040200;
              if (DAT_0488dfa8 != 0) {
                local_1c8 = (ulong *)0x0;
                local_1b8 = &DAT_0488df58;
                uStack_1b0 = 1;
                pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a8 = nn::os::GetThreadId(pTVar13);
                local_180 = 0;
                local_1a0 = (ulong *)0x0;
                local_198 = 0;
                local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                local_188 = 0xde;
                FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_1d0);
                local_78[0] = local_1fc - 1;
                FUN_0322c554(&local_1c8,
                             "Corrupt patch index body at index {}: invalid entries number {}",
                             &DAT_044e9030,local_78,&local_70);
                uVar15 = FUN_0322c8e0(&local_1c8);
                if (((ulong)local_1a0 & 1) != 0) {
                  uVar15 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                }
                auVar7._8_8_ = puStack_1e0;
                auVar7._0_8_ = uVar15;
                uVar11 = (uint)local_1d0;
              }
              goto LAB_0338a4cc;
            }
            if (DAT_0488dfa8 < 4) {
              if (DAT_046aaf68 != '\0') goto LAB_0338b44c;
            }
            else if (DAT_046aaf68 == '\0') {
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 4;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_1a0 = (ulong *)0x0;
              local_198 = 0;
              local_180 = 0;
              local_190 = (char *)0x0;
              local_188 = 0;
              FUN_0322c554(&local_1c8,"Type {} ({} entries) //{}",&DAT_047b2be0,local_1e8,&local_70,
                           lVar34 + (long)(int)local_1e8._0_4_ * 8);
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0xe1;
              uVar15 = FUN_0322c8e0(&local_1c8);
              auVar7._8_8_ = puStack_1e0;
              auVar7._0_8_ = uVar15;
              if (((ulong)local_1a0 & 1) != 0) {
                uVar15 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                auVar7._8_8_ = puStack_1e0;
                auVar7._0_8_ = uVar15;
              }
            }
            else {
LAB_0338b44c:
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 4;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_198 = 0;
              local_190 = (char *)0x0;
              local_188 = 0;
              local_180 = 0;
              local_178[0]._0_1_ = '\0';
              uStack_1c0 = 0x10000000000;
              local_1c8 = local_178;
              local_1a0 = local_178;
              uVar33 = FUN_0322c554(&local_1c8,"Type {} ({} entries) //{}",&DAT_047b2be0,local_1e8,
                                    &local_70,lVar34 + (long)(int)local_1e8._0_4_ * 8);
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0xe1;
              if ((char)local_178[0] != '\0') {
                sVar16 = strlen((char *)local_178);
                *(undefined2 *)
                 ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10;
                printf("%s",local_178);
                uVar11 = fflush(pFVar31);
                uVar33 = (ulong)uVar11;
              }
              auVar7._8_8_ = puStack_1e0;
              auVar7._0_8_ = uVar33;
              if (((ulong)local_1a0 & 1) != 0) {
                uVar15 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                auVar7._8_8_ = puStack_1e0;
                auVar7._0_8_ = uVar15;
              }
            }
            local_210 = *(ulong **)(lVar34 + (long)(int)local_1e8._0_4_ * 8);
            local_218[0] = 0;
            local_208 = (uint)local_70;
          }
          else {
            uVar11 = 0x80040200;
            local_70 = (ulong *)CONCAT44(local_70._4_4_,0x80040200);
            local_1fc = iVar30;
            if (DAT_0488dfa8 != 0) {
              local_1c8 = (ulong *)0x0;
              local_1b8 = &DAT_0488df58;
              uStack_1b0 = 1;
              pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
              local_1a8 = nn::os::GetThreadId(pTVar13);
              local_180 = 0;
              local_1a0 = (ulong *)0x0;
              local_198 = 0;
              local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_188 = 0xd2;
              FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_70);
              pcVar17 = "Corrupt patch index body at index {}: invalid TypeId {}";
              local_1d0 = (ulong *)CONCAT44(local_1d0._4_4_,local_1fc + -1);
LAB_0338a490:
              FUN_0322c554(&local_1c8,pcVar17,&DAT_044e9030,&local_1d0,local_1e8);
              uVar15 = FUN_0322c8e0(&local_1c8);
              if (((ulong)local_1a0 & 1) != 0) {
                uVar15 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              }
              auVar7._8_8_ = puStack_1e0;
              auVar7._0_8_ = uVar15;
              uVar11 = (uint)local_70;
            }
LAB_0338a4cc:
            local_210 = (ulong *)0x0;
            local_208 = 0;
            local_218[0] = uVar11;
          }
          puStack_1e0 = auVar7._8_8_;
          local_1f8 = local_218[0];
          if ((int)local_218[0] < 0) goto LAB_0338b53c;
          if (local_210 == (ulong *)0x0) goto LAB_0338c868;
          if (DAT_0488dfa8 < 4) {
            if (DAT_046aaf68 != '\0') goto LAB_0338b36c;
          }
          else if (DAT_046aaf68 == '\0') {
            local_1c8 = (ulong *)0x0;
            local_1b8 = &DAT_0488df58;
            uStack_1b0 = 4;
            pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a8 = nn::os::GetThreadId(pTVar13);
            local_180 = 0;
            local_1a0 = (ulong *)0x0;
            local_198 = 0;
            local_190 = (char *)0x0;
            local_188 = 0;
            FUN_0322c554(&local_1c8,"External fixups for type {}",PTR_DAT_047e5c18,&local_210);
            local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            local_188 = 0x12f;
            uStack_1b0._0_2_ = CONCAT11(1,(undefined1)uStack_1b0);
            uVar15 = FUN_0322c8e0(&local_1c8);
            auVar7._8_8_ = puStack_1e0;
            auVar7._0_8_ = uVar15;
            if (((ulong)local_1a0 & 1) != 0) {
              uVar15 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              auVar7._8_8_ = puStack_1e0;
              auVar7._0_8_ = uVar15;
            }
          }
          else {
LAB_0338b36c:
            local_1c8 = (ulong *)0x0;
            local_1b8 = &DAT_0488df58;
            uStack_1b0 = 4;
            pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a8 = nn::os::GetThreadId(pTVar13);
            local_198 = 0;
            local_190 = (char *)0x0;
            local_188 = 0;
            local_180 = 0;
            uStack_1c0 = 0x10000000000;
            local_178[0]._0_1_ = '\0';
            local_1c8 = local_178;
            local_1a0 = local_178;
            uVar33 = FUN_0322c554(&local_1c8,"External fixups for type {}",PTR_DAT_047e5c18,
                                  &local_210);
            local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            local_188 = 0x12f;
            uStack_1b0._0_2_ = CONCAT11(1,(undefined1)uStack_1b0);
            if ((char)local_178[0] != '\0') {
              sVar16 = strlen((char *)local_178);
              *(undefined2 *)
               ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10;
              printf("%s",local_178);
              uVar11 = fflush(pFVar31);
              uVar33 = (ulong)uVar11;
            }
            auVar7._8_8_ = puStack_1e0;
            auVar7._0_8_ = uVar33;
            if (((ulong)local_1a0 & 1) != 0) {
              uVar15 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
              auVar7._8_8_ = puStack_1e0;
              auVar7._0_8_ = uVar15;
            }
          }
          puVar22 = local_210;
          do {
            uVar33 = *puVar22;
            if (((uint)uVar33 >> 2 & 1) != 0) {
              local_248 = (long *)puVar22[(uVar33 >> 1 & 1) + (uVar33 & 1) + 2];
              goto LAB_0338a5d0;
            }
            puVar22 = (ulong *)puVar22[1];
          } while (puVar22 != (ulong *)0x0);
          local_248 = (long *)0x0;
LAB_0338a5d0:
          puVar22 = local_210;
          if (0 < local_208) {
            for (; (*puVar22 & 1) == 0; puVar22 = (ulong *)puVar22[1]) {
            }
            iVar28 = 0;
            uVar11 = (uint)puVar22[2] & 0x1f;
            do {
              puStack_1e0 = auVar7._8_8_;
              iVar30 = local_1fc + 1;
              local_1f0[0] = *(uint *)(lVar25 + (long)local_1fc * 4);
              if (uVar21 <= local_1f0[0]) {
                local_1f8 = 0x80040200;
                local_1fc = iVar30;
                if (DAT_0488dfa8 != 0) {
                  local_1c8 = (ulong *)0x0;
                  local_1b8 = &DAT_0488df58;
                  uStack_1b0 = 1;
                  pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1a8 = nn::os::GetThreadId(pTVar13);
                  local_180 = 0;
                  local_1a0 = (ulong *)0x0;
                  local_198 = 0;
                  local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  local_188 = 0x13a;
                  FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_1f8);
                  puVar19 = local_1f0;
                  pcVar17 = "Corrupt patch index body at index {}: invalid target index {}";
                  local_1e8._0_4_ = local_1fc + -1;
LAB_0338b278:
                  FUN_0322c554(&local_1c8,pcVar17,&DAT_047b2c00,local_1e8,puVar19);
                  uVar15 = FUN_0322c8e0(&local_1c8);
                  auVar7._8_8_ = puStack_1e0;
                  auVar7._0_8_ = uVar15;
                  if (((ulong)local_1a0 & 1) != 0) {
                    uVar15 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0)
                    ;
                    auVar7._8_8_ = puStack_1e0;
                    auVar7._0_8_ = uVar15;
                  }
                }
LAB_0338b2b0:
                bVar4 = false;
                goto LAB_0338b2b4;
              }
              local_1fc = local_1fc + 2;
              local_1f4 = *(uint *)(lVar25 + (long)iVar30 * 4);
              if (uVar12 < local_1f4 + local_1fc) {
                local_1f8 = 0x80040200;
                if (DAT_0488dfa8 != 0) {
                  local_1c8 = (ulong *)0x0;
                  local_1b8 = &DAT_0488df58;
                  uStack_1b0 = 1;
                  pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1a8 = nn::os::GetThreadId(pTVar13);
                  local_180 = 0;
                  local_1a0 = (ulong *)0x0;
                  local_198 = 0;
                  local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  local_188 = 0x141;
                  FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_1f8);
                  local_1e8._0_4_ = local_1fc + -1;
                  puVar19 = &local_1f4;
                  pcVar17 = "Corrupt patch index body at index {}: invalid offsets number {}";
                  goto LAB_0338b278;
                }
                goto LAB_0338b2b0;
              }
              if (DAT_0488dfa8 < 4) {
                if (DAT_046aaf68 != '\0') goto LAB_0338afe0;
              }
              else {
                if (DAT_046aaf68 == '\0') {
                  local_1c8 = (ulong *)0x0;
                  local_1b8 = &DAT_0488df58;
                  uStack_1b0 = 4;
                  pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1a8 = nn::os::GetThreadId(pTVar13);
                  local_180 = 0;
                  local_1a0 = (ulong *)0x0;
                  local_198 = 0;
                  local_190 = (char *)0x0;
                  local_188 = 0;
                  FUN_0322c554(&local_1c8,"tgtIdx={}, {} entries",PTR_DAT_047e6878,local_1f0,
                               &local_1f4);
                  local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  local_188 = 0x144;
                  uStack_1b0._0_2_ = CONCAT11(1,(undefined1)uStack_1b0);
                  uVar33 = FUN_0322c8e0(&local_1c8);
                }
                else {
LAB_0338afe0:
                  local_1c8 = (ulong *)0x0;
                  local_1b8 = &DAT_0488df58;
                  uStack_1b0 = 4;
                  pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1a8 = nn::os::GetThreadId(pTVar13);
                  local_198 = 0;
                  local_190 = (char *)0x0;
                  local_188 = 0;
                  local_180 = 0;
                  uStack_1c0 = 0x10000000000;
                  local_178[0]._0_1_ = '\0';
                  local_1c8 = local_178;
                  local_1a0 = local_178;
                  uVar33 = FUN_0322c554(&local_1c8,"tgtIdx={}, {} entries",PTR_DAT_047e6878,
                                        local_1f0,&local_1f4);
                  local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  local_188 = 0x144;
                  uStack_1b0._0_2_ = CONCAT11(1,(undefined1)uStack_1b0);
                  if ((char)local_178[0] != '\0') {
                    sVar16 = strlen((char *)local_178);
                    *(undefined2 *)
                     ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10
                    ;
                    printf("%s",local_178);
                    uVar10 = fflush(pFVar31);
                    uVar33 = (ulong)uVar10;
                  }
                }
                auVar7._8_8_ = puStack_1e0;
                auVar7._0_8_ = uVar33;
                if (((ulong)local_1a0 & 1) != 0) {
                  uVar15 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                  auVar7._8_8_ = puStack_1e0;
                  auVar7._0_8_ = uVar15;
                }
              }
              if (local_1f4 == 0) {
                bVar4 = true;
              }
              else {
                puVar19 = (uint *)(lVar25 + (long)local_1fc * 4);
                puVar1 = puVar19 + local_1f4;
                do {
                  puStack_1e0 = auVar7._8_8_;
                  if ((ulong)(lVar29 - lVar36) <= (ulong)*puVar19) {
                    local_1f8 = 0x80040200;
                    if (DAT_0488dfa8 == 0) goto LAB_0338b53c;
                    local_1c8 = (ulong *)0x0;
                    local_1b8 = &DAT_0488df58;
                    uStack_1b0 = 1;
                    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                    local_1a8 = nn::os::GetThreadId(pTVar13);
                    local_180 = 0;
                    local_1a0 = (ulong *)0x0;
                    local_198 = 0;
                    local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    local_188 = 0x14e;
                    FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_1f8)
                    ;
                    FUN_0322c554(&local_1c8,
                                 "Corrupt patch index body at index {}: invalid offset {}",
                                 &DAT_047b2c00,&local_1fc,puVar19);
                    uVar15 = FUN_0322c8e0(&local_1c8);
                    auVar7._8_8_ = puStack_1e0;
                    auVar7._0_8_ = uVar15;
                    if (((ulong)local_1a0 & 1) != 0) {
                      uVar15 = (**(code **)(PTR_DAT_047d1a08 + 8))
                                         (0,(byte *)((long)local_1a0 + -1),0);
                      auVar7._8_8_ = puStack_1e0;
                      auVar7._0_8_ = uVar15;
                    }
LAB_0338af38:
                    bVar4 = false;
                    goto LAB_0338af48;
                  }
                  puVar22 = (ulong *)(long)(int)*puVar19;
                  puVar14 = (undefined4 *)(lVar36 + (long)puVar22);
                  if (DAT_0488dfa8 < 4) {
                    if (DAT_046aaf68 != '\0') goto LAB_0338adc8;
                  }
                  else {
                    if (DAT_046aaf68 == '\0') {
                      local_1c8 = (ulong *)0x0;
                      local_1b8 = &DAT_0488df58;
                      uStack_1b0 = 4;
                      pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                      local_1a8 = nn::os::GetThreadId(pTVar13);
                      local_180 = 0;
                      local_1a0 = (ulong *)0x0;
                      local_198 = 0;
                      local_190 = (char *)0x0;
                      local_188 = 0;
                      FUN_0322c554(&local_1c8,"srcOff={}",PTR_DAT_047e5908,puVar19);
                      local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                      local_188 = 0x151;
                      FUN_0322c8e0(&local_1c8);
                    }
                    else {
LAB_0338adc8:
                      local_1c8 = (ulong *)0x0;
                      local_1b8 = &DAT_0488df58;
                      uStack_1b0 = 4;
                      pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                      local_1a8 = nn::os::GetThreadId(pTVar13);
                      local_198 = 0;
                      local_190 = (char *)0x0;
                      local_188 = 0;
                      local_180 = 0;
                      uStack_1c0 = 0x10000000000;
                      local_178[0]._0_1_ = '\0';
                      local_1c8 = local_178;
                      local_1a0 = local_178;
                      FUN_0322c554(&local_1c8,"srcOff={}",PTR_DAT_047e5908,puVar19);
                      local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                      local_188 = 0x151;
                      if ((char)local_178[0] != '\0') {
                        sVar16 = strlen((char *)local_178);
                        *(undefined2 *)
                         ((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff)))
                             = 10;
                        printf("%s",local_178);
                        fflush(pFVar31);
                      }
                    }
                    if (((ulong)local_1a0 & 1) != 0) {
                      (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                    }
                  }
                  puVar39 = local_210;
                  local_1d0 = local_210;
                  lVar32 = (long)(int)local_1f0[0];
                  local_1d8[0] = local_1f0[0];
                  *puVar14 = 0;
                  if (local_1f0[0] == 0) {
                    local_78[0] = 0x80040200;
                    uVar15 = (**(code **)(*local_248 + 0x10))(local_248,puVar14,local_210,0,0,0);
                    auVar7._8_8_ = puStack_1e0;
                    auVar7._0_8_ = uVar15;
                    if ((int)uVar15 < 0) {
                      if (DAT_0488dfa8 != 0) {
                        local_1c8 = (ulong *)0x0;
                        local_1b8 = &DAT_0488df58;
                        uStack_1b0 = 1;
                        pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                        local_1a8 = nn::os::GetThreadId(pTVar13);
                        local_180 = 0;
                        local_1a0 = (ulong *)0x0;
                        local_198 = 0;
                        local_190 = 
                        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                        ;
                        local_188 = 0xaa9;
                        FUN_0322c554(&local_1c8,"HK_RETURN_RES_IF({}) returning {}. ",
                                     PTR_DAT_047e6880,
                                     "srcImpl->inplaceFixup(srcAddr, srcType, nullptr, nullptr, 0).isFailure()"
                                     ,local_78);
                        local_1e8 = (undefined1  [8])puVar22;
                        FUN_0322c554(&local_1c8,
                                     "Failed to apply null fixup of type \'{}\' at data offset {}",
                                     PTR_DAT_047e5b38,&local_1d0,local_1e8);
                        uVar15 = FUN_0322c8e0(&local_1c8);
                        auVar9._8_8_ = puStack_1e0;
                        auVar9._0_8_ = local_1e8;
                        auVar7._8_8_ = puStack_1e0;
                        auVar7._0_8_ = uVar15;
                        goto joined_r0x0338a99c;
                      }
                    }
                    else {
LAB_0338abe4:
                      auVar7._8_8_ = puStack_1e0;
                      auVar7._0_8_ = uVar15;
                      local_78[0] = 0;
                    }
                  }
                  else {
                    lVar42 = *(long *)(param_1 + 0x14);
                    puVar41 = (uint *)(lVar42 + lVar32 * 0xc);
                    auVar43 = FUN_03393e1c(param_1 + 2,puVar41);
                    puVar24 = auVar43._8_8_;
                    auVar43._0_8_ = auVar43._0_8_;
                    local_1e8 = (undefined1  [8])auVar43._0_8_;
                    auVar7 = auVar43;
                    _local_1e8 = auVar43;
                    if (uVar11 == 3) {
                      local_78[0] = 0x80040200;
                      if (puVar24 == (ulong *)PTR_DAT_047e6888) goto LAB_0338ab48;
                      puVar23 = puVar24;
                      while( true ) {
                        uVar10 = (uint)*puVar23;
                        if ((uVar10 >> 0xd & 1) != 0) break;
                        if (((*puVar23 & 1) != 0) ||
                           (puVar23 = (ulong *)puVar23[1], puVar23 == (ulong *)0x0))
                        goto LAB_0338aa08;
                      }
                      if (puVar23 != (ulong *)0x0) {
                        uVar33 = CONCAT44(uVar10,uVar10) & 0x1fff00001fff;
                        local_1c8 = puVar23 + (ulong)(byte)(POPCOUNT((char)uVar33) +
                                                           POPCOUNT((char)(uVar33 >> 8))) + 2;
                        goto LAB_0338aa10;
                      }
LAB_0338aa08:
                      local_1c8 = (ulong *)0x0;
LAB_0338aa10:
                      puVar23 = (ulong *)PTR_DAT_047e6888;
                      while( true ) {
                        uVar10 = (uint)*puVar23;
                        if ((uVar10 >> 0xd & 1) != 0) break;
                        if (((*puVar23 & 1) != 0) ||
                           (puVar23 = (ulong *)puVar23[1], puVar23 == (ulong *)0x0))
                        goto LAB_0338aa70;
                      }
                      if (puVar23 != (ulong *)0x0) {
                        uVar33 = CONCAT44(uVar10,uVar10) & 0x1fff00001fff;
                        local_70 = puVar23 + (ulong)(byte)(POPCOUNT((char)uVar33) +
                                                          POPCOUNT((char)(uVar33 >> 8))) + 2;
                        if (local_1c8 == (ulong *)0x0) goto LAB_0338aab8;
                        uVar33 = FUN_031dd3c0(&local_1c8,&local_70);
                        auVar7._8_8_ = puStack_1e0;
                        auVar7._0_8_ = uVar33;
                        if ((uVar33 & 1) != 0) goto LAB_0338ab48;
                        goto LAB_0338aab8;
                      }
LAB_0338aa70:
                      local_70 = (ulong *)0x0;
                      if (local_1c8 == (ulong *)0x0) {
                        if (puVar24 == (ulong *)0x0) {
                          puVar24 = (ulong *)0x0;
                        }
                        else {
                          do {
                            if ((*puVar24 & 1) != 0) break;
                            puVar24 = (ulong *)puVar24[1];
                          } while (puVar24 != (ulong *)0x0);
                        }
                        puVar23 = (ulong *)PTR_DAT_047e6888;
                        do {
                          if ((*puVar23 & 1) != 0) break;
                          puVar23 = (ulong *)puVar23[1];
                        } while (puVar23 != (ulong *)0x0);
                        if (puVar24 == puVar23) goto LAB_0338ab48;
                      }
LAB_0338aab8:
                      puStack_1e0 = auVar7._8_8_;
                      if (DAT_0488dfa8 == 0) goto LAB_0338ada0;
                      local_1c8 = (ulong *)0x0;
                      local_1b8 = &DAT_0488df58;
                      uStack_1b0 = 1;
                      pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                      local_1a8 = nn::os::GetThreadId(pTVar13);
                      local_180 = 0;
                      local_1a0 = (ulong *)0x0;
                      local_198 = 0;
                      local_190 = 
                      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                      ;
                      local_188 = 0xa96;
                      FUN_0322c554(&local_1c8,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_047b2cd0,
                                   "!addrAndType.m_type->equals(hkReflect::getType<char>())",
                                   local_78);
                      FUN_0322c554(&local_1c8,
                                   "Found string whose item type is \'{}\' instead of \'char\'",
                                   PTR_DAT_047e5c18,&puStack_1e0);
                    }
                    else if ((uVar11 == 6) &&
                            (local_78[0] = 0x80040200, (*puVar41 | 0x10000000) >> 0x1c == 3)) {
                      if (DAT_0488dfa8 == 0) goto LAB_0338ada0;
                      local_1c8 = (ulong *)0x0;
                      local_1b8 = &DAT_0488df58;
                      uStack_1b0 = 1;
                      pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                      local_1a8 = nn::os::GetThreadId(pTVar13);
                      local_180 = 0;
                      local_1a0 = (ulong *)0x0;
                      local_198 = 0;
                      local_190 = 
                      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                      ;
                      local_188 = 0xa91;
                      FUN_0322c554(&local_1c8,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_047b2c30,
                                   "targetItem.isKindVarN() || targetItem.isKindNote()",local_78);
                      FUN_0322c554(&local_1c8,"Found invalid fixup for pointer",PTR_DAT_047d1b38);
                    }
                    else {
LAB_0338ab48:
                      puStack_1e0 = auVar7._8_8_;
                      auVar6._8_8_ = puStack_1e0;
                      auVar6._0_8_ = local_1e8;
                      if (*puVar41 >> 0x1c == 5) {
                        if (((((ulong *)0x1 < auVar43._0_8_) &&
                             (uVar10 = (uint)*auVar43._0_8_, (uVar10 >> 0x11 & 1) != 0)) &&
                            (uVar33 = CONCAT44(uVar10,uVar10) & 0x1ffff0001ffff,
                            ((uint)auVar43._0_8_
                                   [(ulong)(byte)(POPCOUNT((char)uVar33) +
                                                  POPCOUNT((char)(uVar33 >> 8)) +
                                                 POPCOUNT((char)(uVar33 >> 0x10))) + 2] >> 0x14 & 1)
                            != 0)) &&
                           (local_78[0] = 0x80040200,
                           *(char *)(lVar40 + ((ulong)*puVar41 & 0xffffff)) == '\0')) {
                          if (DAT_0488dfa8 == 0) goto LAB_0338ada0;
                          local_1c8 = (ulong *)0x0;
                          local_1b8 = &DAT_0488df58;
                          uStack_1b0 = 1;
                          pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                          local_1a8 = nn::os::GetThreadId(pTVar13);
                          local_180 = 0;
                          local_1a0 = (ulong *)0x0;
                          local_198 = 0;
                          local_190 = 
                          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                          ;
                          local_188 = 0xa9f;
                          FUN_0322c554(&local_1c8,"HK_RETURN_RES_IF({}) returning {}. ",
                                       &DAT_047b2c30,
                                       "decl && !m_propHashVerified[targetItem.getIndex()]",local_78
                                      );
                          local_70 = (ulong *)(CONCAT44(local_70._4_4_,*puVar41) &
                                              0xffffffff00ffffff);
                          FUN_0322c554(&local_1c8,
                                       "Found pointer to decl in type ${} ({}) but no property hash has been loaded for the type"
                                       ,&DAT_047b2d70,&local_70,
                                       lVar34 + ((ulong)*puVar41 & 0xffffff) * 8);
                          goto LAB_0338ac98;
                        }
                        puVar39 = local_1d0;
                        auVar43 = auVar6;
                      }
                      local_78[0] = 0x80040200;
                      uVar15 = (**(code **)(*local_248 + 0x10))
                                         (local_248,puVar14,puVar39,auVar43._0_8_,auVar43._8_8_,
                                          *(undefined4 *)(lVar42 + lVar32 * 0xc + 8));
                      auVar8._8_8_ = puStack_1e0;
                      auVar8._0_8_ = uVar15;
                      auVar7._8_8_ = puStack_1e0;
                      auVar7._0_8_ = uVar15;
                      if (-1 < (int)uVar15) goto LAB_0338abe4;
                      if ((-1 < (int)local_78[0]) || (auVar7 = auVar8, DAT_0488dfa8 == 0))
                      goto LAB_0338ada0;
                      local_1c8 = (ulong *)0x0;
                      local_1b8 = &DAT_0488df58;
                      uStack_1b0 = 1;
                      pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                      local_1a8 = nn::os::GetThreadId(pTVar13);
                      local_180 = 0;
                      local_1a0 = (ulong *)0x0;
                      local_198 = 0;
                      local_190 = 
                      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                      ;
                      local_188 = 0xaa4;
                      FUN_0322c554(&local_1c8,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_047b2d88,
                                   "srcImpl->inplaceFixup(srcAddr, srcType, addrAndType.m_addr, addrAndType.m_type, targetItem.count).isFailure()"
                                   ,local_78);
                      local_70 = puVar22;
                      FUN_0322c554(&local_1c8,
                                   "Failed to apply fixup of type \'{}\'; at data offset {} pointing to item {}"
                                   ,&DAT_047b2e28,&local_1d0,&local_70,local_1d8);
                    }
LAB_0338ac98:
                    uVar15 = FUN_0322c8e0(&local_1c8);
                    auVar7._8_8_ = puStack_1e0;
                    auVar7._0_8_ = uVar15;
                    auVar9 = _local_1e8;
joined_r0x0338a99c:
                    if (((ulong)local_1a0 & 1) != 0) {
                      _local_1e8 = auVar9;
                      uVar15 = (**(code **)(PTR_DAT_047d1a08 + 8))
                                         (0,(byte *)((long)local_1a0 + -1),0);
                      auVar7._8_8_ = puStack_1e0;
                      auVar7._0_8_ = uVar15;
                    }
                  }
LAB_0338ada0:
                  local_1f8 = local_78[0];
                  if ((int)local_78[0] < 0) goto LAB_0338af38;
                  local_1fc = local_1fc + 1;
                  puVar19 = puVar19 + 1;
                } while (puVar19 != puVar1);
                bVar4 = true;
              }
LAB_0338af48:
              puStack_1e0 = auVar7._8_8_;
              if (DAT_0488dfa8 < 4) {
                if (!bVar4) goto LAB_0338b53c;
              }
              else {
                local_1c8 = (ulong *)0x0;
                local_1b8 = &DAT_0488df58;
                uStack_1b0 = 4;
                pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
                local_1a8 = nn::os::GetThreadId(pTVar13);
                local_180 = 0;
                local_1a0 = (ulong *)0x0;
                local_198 = 0;
                local_190 = (char *)0x0;
                local_188 = 0;
                uStack_1b0._0_2_ = CONCAT11(0xff,(undefined1)uStack_1b0);
                uVar15 = FUN_0322c8e0(&local_1c8);
                if (((ulong)local_1a0 & 1) != 0) {
                  uVar15 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
                }
                auVar7._8_8_ = puStack_1e0;
                auVar7._0_8_ = uVar15;
                if (!bVar4) goto LAB_0338b2b0;
              }
              iVar28 = iVar28 + 1;
            } while (iVar28 < local_208);
          }
          bVar4 = true;
LAB_0338b2b4:
          puStack_1e0 = auVar7._8_8_;
          if (3 < DAT_0488dfa8) {
            local_1c8 = (ulong *)0x0;
            local_1b8 = &DAT_0488df58;
            uStack_1b0 = 4;
            pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a8 = nn::os::GetThreadId(pTVar13);
            local_180 = 0;
            local_1a0 = (ulong *)0x0;
            local_198 = 0;
            local_190 = (char *)0x0;
            local_188 = 0;
            uStack_1b0._0_2_ = CONCAT11(0xff,(undefined1)uStack_1b0);
            uVar15 = FUN_0322c8e0(&local_1c8);
            if (((ulong)local_1a0 & 1) != 0) {
              uVar15 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
            }
            auVar7._8_8_ = puStack_1e0;
            auVar7._0_8_ = uVar15;
          }
          if (!bVar4) goto LAB_0338b53c;
          iVar28 = local_1fc + 2;
        } while (iVar28 < (int)uVar12);
      }
      local_1f8 = 0;
    }
    else {
      local_1f8 = 0x80040200;
      if (DAT_0488dfa8 != 0) {
        local_1c8 = (ulong *)0x0;
        local_1b8 = &DAT_0488df58;
        uStack_1b0 = 1;
        pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
        local_1a8 = nn::os::GetThreadId(pTVar13);
        local_1a0 = (ulong *)0x0;
        local_198 = 0;
        local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
        local_188 = 0xeb;
        local_180 = 0;
        FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,&local_1f8);
        local_218[0] = 0x20f2cca4;
        FUN_0322c554(&local_1c8,"PATCH_DATA section has the wrong size",&DAT_047b2bd0,local_218);
LAB_0338854c:
        uVar15 = FUN_0322c8e0(&local_1c8);
        auVar7._8_8_ = puStack_1e0;
        auVar7._0_8_ = uVar15;
        if (((ulong)local_1a0 & 1) != 0) {
          uVar15 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
          auVar7._8_8_ = puStack_1e0;
          auVar7._0_8_ = uVar15;
        }
      }
    }
LAB_0338b53c:
    puStack_1e0 = auVar7._8_8_;
    if (-1 < (int)local_1f8) {
      lVar25 = *(long *)PTR_DAT_047e3fe8;
      nn::os::LockMutex((MutexType *)(lVar25 + 0xc0));
      iVar3 = param_1[6];
      if ((int)(param_1[0x7d] & 0x7fffffff) < iVar3) {
        FUN_03398774(param_1 + 0x7a,(long)iVar3);
      }
      iVar28 = param_1[0x7c];
      if (iVar28 < iVar3) {
        lVar29 = *(long *)(param_1 + 0x7a);
        param_1[0x7c] = iVar3;
        puVar20 = (undefined8 *)(lVar29 + (long)iVar28 * 8);
        do {
          puVar26 = puVar20 + 1;
          *puVar20 = 0xfffffffe;
          puVar20 = puVar26;
        } while (puVar26 != (undefined8 *)(lVar29 + (long)iVar3 * 8));
      }
      else if (iVar3 < iVar28) {
        param_1[0x7c] = iVar3;
      }
      lVar29 = *(long *)(param_1 + 0x14);
      if (1 < (int)((ulong)(*(long *)(param_1 + 0x16) - lVar29) >> 2) * -0x55555555) {
        lVar40 = 1;
        do {
          uVar11 = *(uint *)(lVar29 + lVar40 * 0xc);
          uVar12 = uVar11 & 0xf0000000;
          if ((uVar12 == 0x10000000 || uVar12 == 0x30000000) || uVar12 == 0x20000000) {
            uVar33 = (ulong)uVar11 & 0xffffff;
            puVar22 = (ulong *)(*(long *)(param_1 + 0x7a) + uVar33 * 8);
            uVar21 = (ulong)(uint)*puVar22;
            if ((int)(uint)*puVar22 < -1) {
              puVar39 = *(ulong **)(*(long *)(param_1 + 4) + uVar33 * 8);
              uVar12 = FUN_031ddfe0((long *)(lVar25 + 0x38),puVar39);
              while( true ) {
                uVar11 = (uint)*puVar39;
                if ((uVar11 >> 0x14 & 1) != 0) break;
                if (((*puVar39 & 1) != 0) ||
                   (puVar39 = (ulong *)puVar39[1], puVar39 == (ulong *)0x0)) goto LAB_0338b744;
              }
              if (puVar39 != (ulong *)0x0) {
                uVar21 = CONCAT44(uVar11,uVar11) & 0xfffff000fffff;
                uVar33 = (puVar39[(ulong)(byte)(POPCOUNT((char)uVar21) +
                                                POPCOUNT((char)(uVar21 >> 8)) +
                                               POPCOUNT((char)(uVar21 >> 0x10))) + 2] & 0xffff) <<
                         0x20;
                goto LAB_0338b748;
              }
LAB_0338b744:
              uVar33 = 0;
LAB_0338b748:
              uVar21 = 0xffffffff;
              if (*(int *)(*(long *)(lVar25 + 0x38) + (long)(int)uVar12 * 0x18 + 0x10) != 0) {
                uVar21 = (ulong)uVar12;
              }
              *puVar22 = uVar33 | uVar21;
            }
            if ((-1 < (int)uVar21) && (-1 < (int)uVar21)) {
              lVar29 = lVar29 + lVar40 * 0xc;
              iVar3 = *(int *)(lVar29 + 8);
              lVar36 = *(long *)(lVar25 + 0x38) + uVar21 * 0x18;
              uVar12 = *(uint *)(lVar36 + 0x10);
              if ((0 < iVar3 && uVar12 != 0) && 0 < (int)uVar12) {
                iVar28 = 0;
                lVar36 = *(long *)(lVar36 + 8);
                lVar29 = *(long *)(param_1 + 0x10) + (long)*(int *)(lVar29 + 4);
                do {
                  lVar34 = (ulong)uVar12 + 1;
                  puVar20 = (undefined8 *)(lVar36 + (ulong)uVar12 * 0x10 + -8);
                  do {
                    (*(code *)*puVar20)(puVar20[-1] + lVar29);
                    lVar34 = lVar34 + -1;
                    puVar20 = puVar20 + -2;
                  } while (1 < lVar34);
                  iVar28 = iVar28 + 1;
                  lVar29 = lVar29 + (int)*(uint *)((long)puVar22 + 4);
                } while (iVar28 != iVar3);
              }
            }
          }
          lVar40 = lVar40 + 1;
          lVar29 = *(long *)(param_1 + 0x14);
        } while (lVar40 < (int)((ulong)(*(long *)(param_1 + 0x16) - lVar29) >> 2) * -0x55555555);
      }
      puVar14 = (undefined4 *)nn::os::UnlockMutex((MutexType *)(lVar25 + 0xc0));
      return puVar14;
    }
    if (DAT_0488dfa8 == 0) {
      puVar14 = auVar7._0_8_;
      if (DAT_046aaf68 == '\0') goto LAB_0338b830;
    }
    else if (DAT_046aaf68 == '\0') {
      local_1c8 = (ulong *)0x0;
      local_1b8 = &DAT_0488df58;
      uStack_1b0 = 1;
      pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
      local_1a8 = nn::os::GetThreadId(pTVar13);
      local_1a0 = (ulong *)0x0;
      local_198 = 0;
      local_190 = (char *)0x0;
      local_188 = 0;
      local_180 = 0;
      FUN_0322c554(&local_1c8,"Failed to read the PATCH_DATA section",PTR_DAT_047d1b38);
      local_188 = 0xaae;
      goto LAB_0338b624;
    }
    local_1b8 = &DAT_0488df58;
    uStack_1b0 = 1;
    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
    local_1a8 = nn::os::GetThreadId(pTVar13);
    local_198 = 0;
    local_190 = (char *)0x0;
    local_188 = 0;
    local_180 = 0;
    local_178[0]._0_1_ = '\0';
    uStack_1c0 = 0x10000000000;
    local_1c8 = local_178;
    local_1a0 = local_178;
    puVar14 = (undefined4 *)
              FUN_0322c554(&local_1c8,"Failed to read the PATCH_DATA section",PTR_DAT_047d1b38);
    local_190 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_188 = 0xaae;
    if ((char)local_178[0] != '\0') {
      sVar16 = strlen((char *)local_178);
      *(undefined2 *)((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10
      ;
      printf("%s",local_178);
      uVar12 = fflush(*(FILE **)PTR_stdout_047cb860);
      puVar14 = (undefined4 *)(ulong)uVar12;
    }
    if (((ulong)local_1a0 & 1) != 0) {
      puVar14 = (undefined4 *)
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_1a0 + -1),0);
    }
    goto LAB_0338b830;
  }
  if (DAT_0488dfa8 == 0) {
    puVar14 = param_1;
    if (DAT_046aaf68 == '\0') goto LAB_0338b830;
LAB_03389fcc:
    local_1b8 = &DAT_0488df58;
    uStack_1b0 = 1;
    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
    local_1a8 = nn::os::GetThreadId(pTVar13);
    local_198 = 0;
    local_190 = (char *)0x0;
    local_188 = 0;
    local_180 = 0;
    local_178[0]._0_1_ = '\0';
    uStack_1c0 = 0x10000000000;
    local_1c8 = local_178;
    local_1a0 = local_178;
    puVar14 = (undefined4 *)
              FUN_0322c554(&local_1c8,"Format is readonly but buffer contains a PATCH_DATA section",
                           PTR_DAT_047d1b38);
    local_190 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_188 = 0xa60;
    if ((char)local_178[0] != '\0') {
      sVar16 = strlen((char *)local_178);
      *(undefined2 *)((long)local_178 + (long)(int)((int)sVar16 - (uint)((int)sVar16 == 0xff))) = 10
      ;
      printf("%s",local_178);
      uVar12 = fflush(*(FILE **)PTR_stdout_047cb860);
      puVar14 = (undefined4 *)(ulong)uVar12;
    }
  }
  else {
    if (DAT_046aaf68 != '\0') goto LAB_03389fcc;
    local_1c8 = (ulong *)0x0;
    local_1b8 = &DAT_0488df58;
    uStack_1b0 = 1;
    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
    local_1a8 = nn::os::GetThreadId(pTVar13);
    local_1a0 = (ulong *)0x0;
    local_198 = 0;
    local_190 = (char *)0x0;
    local_188 = 0;
    local_180 = 0;
    FUN_0322c554(&local_1c8,"Format is readonly but buffer contains a PATCH_DATA section",
                 PTR_DAT_047d1b38);
    local_188 = 0xa60;
LAB_0338b624:
    local_190 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
  }
  if (((ulong)local_1a0 & 1) != 0) {
    puVar14 = (undefined4 *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_1a0 + -1),0);
  }
LAB_0338b830:
  *param_1 = 0x80040200;
  return puVar14;
LAB_0338a080:
  local_1d8[0] = 0x80040200;
  if (DAT_0488dfa8 == 0) goto LAB_0338c790;
  local_1c8 = (ulong *)0x0;
  local_1b8 = &DAT_0488df58;
  uStack_1b0 = 1;
  pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
  local_1a8 = nn::os::GetThreadId(pTVar13);
  local_1a0 = (ulong *)0x0;
  local_198 = 0;
  local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
  local_188 = 0x113;
  local_180 = 0;
  FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,local_1d8);
  FUN_0322c554(&local_1c8,"Corrupt patch index body at index {}: invalid offset {}",&DAT_047b2c00,
               local_1f0,puVar19);
  puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
  if (((ulong)local_1a0 & 1) != 0) {
    puVar14 = (undefined4 *)(**(code **)(puVar38 + 8))(0,(byte *)((long)local_1a0 + -1),0);
  }
  if (DAT_0488dfa8 < 4) goto LAB_0338c790;
  local_1c8 = (ulong *)0x0;
  local_1b8 = &DAT_0488df58;
  uStack_1b0 = 4;
  pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
  local_1a8 = nn::os::GetThreadId(pTVar13);
  local_1a0 = (ulong *)0x0;
  local_198 = 0;
  local_180 = 0;
  local_190 = (char *)0x0;
  local_188 = 0;
  uStack_1b0._0_2_ = CONCAT11(0xff,(undefined1)uStack_1b0);
  puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
  if (((ulong)local_1a0 & 1) == 0) goto LAB_0338c790;
  pcVar27 = *(code **)(puVar38 + 8);
  goto LAB_0338c780;
LAB_0338c1bc:
  local_1d8[0] = 0x80040200;
  if (DAT_0488dfa8 == 0) goto LAB_0338c790;
  local_1c8 = (ulong *)0x0;
  local_1b8 = &DAT_0488df58;
  uStack_1b0 = 1;
  pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
  local_1a8 = nn::os::GetThreadId(pTVar13);
  local_180 = 0;
  local_1a0 = (ulong *)0x0;
  local_198 = 0;
  local_190 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
  local_188 = 0x14e;
  FUN_0322c554(&local_1c8,"HK_RETURN_LOG returning {}. ",&DAT_047b2bc0,local_1d8);
  FUN_0322c554(&local_1c8,"Corrupt patch index body at index {}: invalid offset {}",&DAT_047b2c00,
               local_1f0,puVar19);
  puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
  if (((ulong)local_1a0 & 1) != 0) {
    puVar14 = (undefined4 *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
  }
  if (DAT_0488dfa8 < 4) goto LAB_0338c790;
  local_1c8 = (ulong *)0x0;
  local_1b8 = &DAT_0488df58;
  uStack_1b0 = 4;
  pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
  local_1a8 = nn::os::GetThreadId(pTVar13);
  local_180 = 0;
  local_1a0 = (ulong *)0x0;
  local_198 = 0;
  local_190 = (char *)0x0;
  local_188 = 0;
  uStack_1b0._0_2_ = CONCAT11(0xff,(undefined1)uStack_1b0);
LAB_0338c2a8:
  puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
  if (((ulong)local_1a0 & 1) != 0) {
    puVar14 = (undefined4 *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
  }
LAB_0338c2d4:
  bVar4 = false;
LAB_0338c2e0:
  if (3 < DAT_0488dfa8) {
    local_1c8 = (ulong *)0x0;
    local_1b8 = &DAT_0488df58;
    uStack_1b0 = 4;
    pTVar13 = (ThreadType *)nn::os::GetCurrentThread();
    local_1a8 = nn::os::GetThreadId(pTVar13);
    local_1a0 = (ulong *)0x0;
    local_198 = 0;
    local_180 = 0;
    local_190 = (char *)0x0;
    local_188 = 0;
    uStack_1b0._0_2_ = CONCAT11(0xff,(undefined1)uStack_1b0);
    puVar14 = (undefined4 *)FUN_0322c8e0(&local_1c8);
    if (((ulong)local_1a0 & 1) != 0) {
      puVar14 = (undefined4 *)
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1a0 + -1),0);
    }
  }
  if (!bVar4) goto LAB_0338c790;
  uVar21 = (ulong)local_1f0[0];
  uVar11 = local_1f0[0] + 2;
  if ((int)uVar12 <= (int)uVar11) goto LAB_0338c6dc;
  goto LAB_0338b944;
}


