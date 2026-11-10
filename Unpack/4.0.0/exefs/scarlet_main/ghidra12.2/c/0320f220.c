/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320f220; name: FUN_0320f220
 */


void FUN_0320f220(undefined8 *param_1,ulong *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  ulong *puVar9;
  ThreadType *pTVar10;
  long *plVar11;
  size_t sVar12;
  ulong *puVar13;
  long lVar14;
  ulong *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  char *local_1e8;
  ulong uStack_1e0;
  ulong *local_1d8;
  undefined8 uStack_1d0;
  undefined8 *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  ulong *local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  ulong local_188 [32];
  ulong *local_88;
  ulong uStack_80;
  ulong *local_78;
  ulong *local_70;
  ulong local_68;
  
  uVar20 = *param_2;
  uVar21 = param_2[2];
  if ((uVar21 & 1) != 0) {
    piVar2 = (int *)((uVar21 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_78 = (ulong *)*param_3;
  local_70 = (ulong *)param_3[1];
  local_68 = param_3[2];
  if ((local_68 & 1) != 0) {
    piVar2 = (int *)((local_68 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  iVar8 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2,&local_78);
  if (iVar8 < 0) {
    if ((((local_78 != (ulong *)0x0) && (local_70 != (ulong *)0x0)) &&
        (uVar19 = FUN_031dd260(local_70,PTR_DAT_047e5c40), puVar9 = local_78, (uVar19 & 1) != 0)) &&
       (local_78 != (ulong *)0x0)) {
      if (*(char *)((long)param_1 + 0xc) != '\0') {
        if (DAT_04884f08 < 4) {
          if (DAT_046aaf68 != '\0') goto LAB_0320fdd4;
        }
        else {
          if (DAT_046aaf68 != '\0') {
LAB_0320fdd4:
            local_1d8 = (ulong *)0x0;
            local_1c8 = &DAT_04884eb8;
            uStack_1c0 = 4;
            pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
            local_1b8 = nn::os::GetThreadId(pTVar10);
            local_1a8 = 0;
            local_1a0 = (char *)0x0;
            local_188[0]._0_1_ = '\0';
            uStack_1d0 = 0x10000000000;
            local_198 = 0;
            uStack_190 = 0;
            puVar15 = puVar9;
            do {
              uVar19 = *puVar15;
              if (((uint)uVar19 >> 3 & 1) != 0) {
                local_1e8 = (char *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar19 & 7) + 2];
                goto LAB_03210588;
              }
              if ((uVar19 & 1) != 0) {
                local_1e8 = (char *)0x0;
                goto LAB_03210588;
              }
              puVar15 = (ulong *)puVar15[1];
            } while (puVar15 != (ulong *)0x0);
            local_1e8 = (char *)0x0;
LAB_03210588:
            do {
              uVar16 = (uint)*puVar9;
              if ((uVar16 >> 0xf & 1) != 0) {
                uVar19 = CONCAT44(uVar16,uVar16) & 0x7fff00007fff;
                uStack_1e0 = puVar9[(ulong)(byte)(POPCOUNT((char)uVar19) +
                                                 POPCOUNT((char)(uVar19 >> 8))) + 2];
                goto LAB_032105c8;
              }
            } while (((*puVar9 & 9) == 0) && (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0));
            uStack_1e0 = 0;
LAB_032105c8:
            local_1d8 = local_188;
            local_1b0 = local_188;
            FUN_0322c554(&local_1d8,"Skipping type {} (callback returned failure)",PTR_DAT_047e5db0,
                         &local_1e8);
            local_1a0 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            local_198 = 0x26f;
            if ((char)local_188[0] != '\0') {
              sVar12 = strlen((char *)local_188);
              *(undefined2 *)
               ((long)local_188 + (long)(int)((int)sVar12 - (uint)((int)sVar12 == 0xff))) = 10;
              printf("%s",local_188);
              fflush(*(FILE **)PTR_stdout_047cb860);
            }
            if (((ulong)local_1b0 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1b0 + -1),0);
            }
            goto LAB_0320fae4;
          }
          local_1d8 = (ulong *)0x0;
          local_1c8 = &DAT_04884eb8;
          uStack_1c0 = 4;
          pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
          local_1b8 = nn::os::GetThreadId(pTVar10);
          local_1b0 = (ulong *)0x0;
          local_1a8 = 0;
          local_1a0 = (char *)0x0;
          local_198 = 0;
          uStack_190 = 0;
          puVar15 = puVar9;
          do {
            uVar19 = *puVar15;
            if (((uint)uVar19 >> 3 & 1) != 0) {
              local_88 = (ulong *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar19 & 7) + 2];
              goto LAB_032100bc;
            }
            if ((uVar19 & 1) != 0) {
              local_88 = (ulong *)0x0;
              goto LAB_032100bc;
            }
            puVar15 = (ulong *)puVar15[1];
          } while (puVar15 != (ulong *)0x0);
          local_88 = (ulong *)0x0;
LAB_032100bc:
          do {
            uVar16 = (uint)*puVar9;
            if ((uVar16 >> 0xf & 1) != 0) {
              uVar19 = CONCAT44(uVar16,uVar16) & 0x7fff00007fff;
              uStack_80 = puVar9[(ulong)(byte)(POPCOUNT((char)uVar19) +
                                              POPCOUNT((char)(uVar19 >> 8))) + 2];
              goto LAB_032100fc;
            }
          } while (((*puVar9 & 9) == 0) && (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0));
          uStack_80 = 0;
LAB_032100fc:
          FUN_0322c554(&local_1d8,"Skipping type {} (callback returned failure)",PTR_DAT_047e5db0,
                       &local_88);
          local_198 = 0x26f;
LAB_0320fab4:
          local_1a0 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          FUN_0322c8e0(&local_1d8);
          if (((ulong)local_1b0 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1b0 + -1),0);
          }
        }
        goto LAB_0320fae4;
      }
      if (DAT_04884f08 < 2) {
        if (DAT_046aaf68 == '\0') goto LAB_03210258;
      }
      else if (DAT_046aaf68 == '\0') {
        local_1d8 = (ulong *)0x0;
        local_1c8 = &DAT_04884eb8;
        uStack_1c0 = 2;
        pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
        local_1b8 = nn::os::GetThreadId(pTVar10);
        local_1b0 = (ulong *)0x0;
        local_1a8 = 0;
        local_1a0 = (char *)0x0;
        local_198 = 0;
        uStack_190 = 0;
        puVar15 = puVar9;
        do {
          uVar20 = *puVar15;
          if (((uint)uVar20 >> 3 & 1) != 0) {
            local_88 = (ulong *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar20 & 7) + 2];
            goto LAB_03210158;
          }
          if ((uVar20 & 1) != 0) {
            local_88 = (ulong *)0x0;
            goto LAB_03210158;
          }
          puVar15 = (ulong *)puVar15[1];
        } while (puVar15 != (ulong *)0x0);
        local_88 = (ulong *)0x0;
LAB_03210158:
        do {
          uVar16 = (uint)*puVar9;
          if ((uVar16 >> 0xf & 1) != 0) {
            uVar20 = CONCAT44(uVar16,uVar16) & 0x7fff00007fff;
            uStack_80 = puVar9[(ulong)(byte)(POPCOUNT((char)uVar20) + POPCOUNT((char)(uVar20 >> 8)))
                               + 2];
            goto LAB_03210198;
          }
        } while (((*puVar9 & 9) == 0) && (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0));
        uStack_80 = 0;
LAB_03210198:
        FUN_0322c554(&local_1d8,"Cannot find native type for {} (unregistered type?)",
                     PTR_DAT_047e5db0,&local_88);
        local_198 = 0x26d;
        goto LAB_03210228;
      }
      local_1c8 = &DAT_04884eb8;
      uStack_1c0 = 2;
      pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
      local_1b8 = nn::os::GetThreadId(pTVar10);
      local_1d8 = local_188;
      local_1a8 = 0;
      local_1a0 = (char *)0x0;
      local_188[0]._0_1_ = '\0';
      uStack_1d0 = 0x10000000000;
      local_198 = 0;
      uStack_190 = 0;
      puVar15 = puVar9;
      do {
        uVar20 = *puVar15;
        if (((uint)uVar20 >> 3 & 1) != 0) {
          local_1e8 = (char *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar20 & 7) + 2];
          goto LAB_0321069c;
        }
        if ((uVar20 & 1) != 0) {
          local_1e8 = (char *)0x0;
          goto LAB_0321069c;
        }
        puVar15 = (ulong *)puVar15[1];
      } while (puVar15 != (ulong *)0x0);
      local_1e8 = (char *)0x0;
LAB_0321069c:
      do {
        uVar16 = (uint)*puVar9;
        if ((uVar16 >> 0xf & 1) != 0) {
          uVar20 = CONCAT44(uVar16,uVar16) & 0x7fff00007fff;
          uStack_1e0 = puVar9[(ulong)(byte)(POPCOUNT((char)uVar20) + POPCOUNT((char)(uVar20 >> 8)))
                              + 2];
          goto LAB_032106dc;
        }
      } while (((*puVar9 & 9) == 0) && (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0));
      uStack_1e0 = 0;
LAB_032106dc:
      local_1b0 = local_1d8;
      FUN_0322c554(&local_1d8,"Cannot find native type for {} (unregistered type?)",PTR_DAT_047e5db0
                   ,&local_1e8);
      local_198 = 0x26d;
LAB_0321070c:
      local_1a0 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      if ((char)local_188[0] != '\0') {
        sVar12 = strlen((char *)local_188);
        *(undefined2 *)((long)local_188 + (long)(int)((int)sVar12 - (uint)((int)sVar12 == 0xff))) =
             10;
LAB_03210744:
        printf("%s",local_188);
        fflush(*(FILE **)PTR_stdout_047cb860);
      }
      goto LAB_03210234;
    }
    uVar19 = 0;
    puVar9 = local_70;
    do {
      uVar16 = (uint)*puVar9;
      if ((uVar16 >> 0x15 & 1) == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = CONCAT44(uVar16,uVar16) & 0x1fffff001fffff;
        uVar17 = puVar9[(ulong)(byte)(POPCOUNT((char)uVar17) + POPCOUNT((char)(uVar17 >> 8)) +
                                     POPCOUNT((char)(uVar17 >> 0x10))) + 2];
      }
      uVar19 = uVar17 | uVar19;
    } while (((*puVar9 & 1) == 0) && (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0));
    if (((uint)uVar19 >> 0xb & 1) != 0) {
      if (*(char *)((long)param_1 + 0xc) == '\0') {
        if (DAT_04884f08 < 2) {
          if (DAT_046aaf68 == '\0') goto LAB_03210258;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1d8 = (ulong *)0x0;
          local_1c8 = &DAT_04884eb8;
          uStack_1c0 = 2;
          pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
          local_1b8 = nn::os::GetThreadId(pTVar10);
          local_1b0 = (ulong *)0x0;
          local_1a8 = 0;
          local_1a0 = (char *)0x0;
          local_198 = 0;
          uStack_190 = 0;
          puVar9 = local_70;
          do {
            uVar20 = *puVar9;
            puVar15 = local_70;
            if (((uint)uVar20 >> 3 & 1) != 0) {
              local_88 = (ulong *)0x0;
              if (puVar9 != (ulong *)0x0) {
                local_88 = (ulong *)puVar9[(ulong)(byte)POPCOUNT((byte)uVar20 & 7) + 2];
              }
              goto LAB_0320fed0;
            }
            if ((uVar20 & 1) != 0) {
              local_88 = (ulong *)0x0;
              goto LAB_0320fed0;
            }
            puVar9 = (ulong *)puVar9[1];
          } while (puVar9 != (ulong *)0x0);
          local_88 = (ulong *)0x0;
LAB_0320fed0:
          do {
            uVar16 = (uint)*puVar15;
            if ((uVar16 >> 0xf & 1) != 0) {
              uVar20 = CONCAT44(uVar16,uVar16) & 0x7fff00007fff;
              uStack_80 = puVar15[(ulong)(byte)(POPCOUNT((char)uVar20) +
                                               POPCOUNT((char)(uVar20 >> 8))) + 2];
              goto LAB_0320ff48;
            }
            if ((*puVar15 & 9) != 0) {
              uStack_80 = 0;
              goto LAB_0320ff48;
            }
            puVar9 = puVar15 + 1;
            puVar15 = (ulong *)*puVar9;
          } while ((ulong *)*puVar9 != (ulong *)0x0);
          uStack_80 = 0;
LAB_0320ff48:
          FUN_0322c554(&local_1d8,
                       "Cannot allocate/construct instance of foreign type \'{}\'. This is likely due to the type being defined in a missing (not loaded) DLL or WinMD file. Check that DLLs and WinMD files are present on disk and correctly loaded."
                       ,PTR_DAT_047e5db0,&local_88);
          local_198 = 0x278;
          goto LAB_03210228;
        }
        local_1c8 = &DAT_04884eb8;
        uStack_1c0 = 2;
        pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
        local_1b8 = nn::os::GetThreadId(pTVar10);
        local_1d8 = local_188;
        local_1a8 = 0;
        local_1a0 = (char *)0x0;
        local_188[0]._0_1_ = '\0';
        uStack_1d0 = 0x10000000000;
        local_198 = 0;
        uStack_190 = 0;
        puVar9 = local_70;
        do {
          uVar20 = *puVar9;
          puVar15 = local_70;
          if (((uint)uVar20 >> 3 & 1) != 0) {
            local_1e8 = (char *)0x0;
            if (puVar9 != (ulong *)0x0) {
              local_1e8 = (char *)puVar9[(ulong)(byte)POPCOUNT((byte)uVar20 & 7) + 2];
            }
            goto LAB_032104ac;
          }
          if ((uVar20 & 1) != 0) {
            local_1e8 = (char *)0x0;
            goto LAB_032104ac;
          }
          puVar9 = (ulong *)puVar9[1];
        } while (puVar9 != (ulong *)0x0);
        local_1e8 = (char *)0x0;
LAB_032104ac:
        do {
          uVar16 = (uint)*puVar15;
          if ((uVar16 >> 0xf & 1) != 0) {
            uVar20 = CONCAT44(uVar16,uVar16) & 0x7fff00007fff;
            uStack_1e0 = puVar15[(ulong)(byte)(POPCOUNT((char)uVar20) +
                                              POPCOUNT((char)(uVar20 >> 8))) + 2];
            goto LAB_03210528;
          }
          if ((*puVar15 & 9) != 0) {
            uStack_1e0 = 0;
            goto LAB_03210528;
          }
          puVar9 = puVar15 + 1;
          puVar15 = (ulong *)*puVar9;
        } while ((ulong *)*puVar9 != (ulong *)0x0);
        uStack_1e0 = 0;
LAB_03210528:
        local_1b0 = local_1d8;
        FUN_0322c554(&local_1d8,
                     "Cannot allocate/construct instance of foreign type \'{}\'. This is likely due to the type being defined in a missing (not loaded) DLL or WinMD file. Check that DLLs and WinMD files are present on disk and correctly loaded."
                     ,PTR_DAT_047e5db0,&local_1e8);
        local_198 = 0x278;
        goto LAB_0321070c;
      }
LAB_0320f500:
      if (DAT_04884f08 < 4) {
        if (DAT_046aaf68 == '\0') goto LAB_0320fae4;
      }
      else if (DAT_046aaf68 == '\0') {
        local_1d8 = (ulong *)0x0;
        local_1c8 = &DAT_04884eb8;
        uStack_1c0 = 4;
        pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
        local_1b8 = nn::os::GetThreadId(pTVar10);
        local_1b0 = (ulong *)0x0;
        local_1a8 = 0;
        local_1a0 = (char *)0x0;
        local_198 = 0;
        uStack_190 = 0;
        puVar9 = local_70;
        do {
          uVar19 = *puVar9;
          puVar15 = local_70;
          if (((uint)uVar19 >> 3 & 1) != 0) {
            local_88 = (ulong *)0x0;
            if (puVar9 != (ulong *)0x0) {
              local_88 = (ulong *)puVar9[(ulong)(byte)POPCOUNT((byte)uVar19 & 7) + 2];
            }
            goto LAB_0320fa44;
          }
          if ((uVar19 & 1) != 0) {
            local_88 = (ulong *)0x0;
            goto LAB_0320fa44;
          }
          puVar9 = (ulong *)puVar9[1];
        } while (puVar9 != (ulong *)0x0);
        local_88 = (ulong *)0x0;
LAB_0320fa44:
        do {
          uVar16 = (uint)*puVar15;
          if ((uVar16 >> 0xf & 1) != 0) {
            uVar19 = CONCAT44(uVar16,uVar16) & 0x7fff00007fff;
            uStack_80 = puVar15[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))
                                             ) + 2];
            goto LAB_0320fa88;
          }
          if ((*puVar15 & 9) != 0) {
            uStack_80 = 0;
            goto LAB_0320fa88;
          }
          puVar9 = puVar15 + 1;
          puVar15 = (ulong *)*puVar9;
        } while ((ulong *)*puVar9 != (ulong *)0x0);
        uStack_80 = 0;
LAB_0320fa88:
        FUN_0322c554(&local_1d8,"Skipping instance of {} (callback returned failure)",
                     PTR_DAT_047e5db0,&local_88);
        local_198 = 0x27f;
        goto LAB_0320fab4;
      }
      local_1d8 = (ulong *)0x0;
      local_1c8 = &DAT_04884eb8;
      uStack_1c0 = 4;
      pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
      local_1b8 = nn::os::GetThreadId(pTVar10);
      local_1a8 = 0;
      local_1a0 = (char *)0x0;
      local_188[0]._0_1_ = '\0';
      uStack_1d0 = 0x10000000000;
      local_198 = 0;
      uStack_190 = 0;
      puVar9 = local_70;
      do {
        uVar19 = *puVar9;
        puVar15 = local_70;
        if (((uint)uVar19 >> 3 & 1) != 0) {
          local_1e8 = (char *)0x0;
          if (puVar9 != (ulong *)0x0) {
            local_1e8 = (char *)puVar9[(ulong)(byte)POPCOUNT((byte)uVar19 & 7) + 2];
          }
          goto LAB_03210320;
        }
        if ((uVar19 & 1) != 0) {
          local_1e8 = (char *)0x0;
          goto LAB_03210320;
        }
        puVar9 = (ulong *)puVar9[1];
      } while (puVar9 != (ulong *)0x0);
      local_1e8 = (char *)0x0;
LAB_03210320:
      do {
        uVar16 = (uint)*puVar15;
        if ((uVar16 >> 0xf & 1) != 0) {
          uVar19 = CONCAT44(uVar16,uVar16) & 0x7fff00007fff;
          uStack_1e0 = puVar15[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)))
                               + 2];
          goto LAB_03210364;
        }
        if ((*puVar15 & 9) != 0) {
          uStack_1e0 = 0;
          goto LAB_03210364;
        }
        puVar9 = puVar15 + 1;
        puVar15 = (ulong *)*puVar9;
      } while ((ulong *)*puVar9 != (ulong *)0x0);
      uStack_1e0 = 0;
LAB_03210364:
      local_1d8 = local_188;
      local_1b0 = local_188;
      FUN_0322c554(&local_1d8,"Skipping instance of {} (callback returned failure)",PTR_DAT_047e5db0
                   ,&local_1e8);
      local_1a0 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      local_198 = 0x27f;
      if ((char)local_188[0] != '\0') {
        sVar12 = strlen((char *)local_188);
        *(undefined2 *)((long)local_188 + (long)(int)((int)sVar12 - (uint)((int)sVar12 == 0xff))) =
             10;
        printf("%s",local_188);
        fflush(*(FILE **)PTR_stdout_047cb860);
      }
      if (((ulong)local_1b0 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1b0 + -1),0);
      }
LAB_0320fae4:
      uVar19 = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      if ((uVar19 & 1) != 0) {
        plVar11 = (long *)(uVar19 & 0xfffffffffffffffe);
        plVar3 = plVar11 + 1;
        do {
          lVar14 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(int *)plVar3 = (int)lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar11 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar11 + 8))();
        }
      }
      goto LAB_0320f2bc;
    }
    if (*(char *)((long)param_1 + 0xc) != '\0') goto LAB_0320f500;
    if (1 < DAT_04884f08) {
      if (DAT_046aaf68 != '\0') goto LAB_0320fb2c;
      local_1d8 = (ulong *)0x0;
      local_1c8 = &DAT_04884eb8;
      uStack_1c0 = 2;
      pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
      local_1b8 = nn::os::GetThreadId(pTVar10);
      local_1b0 = (ulong *)0x0;
      local_1a8 = 0;
      local_1a0 = (char *)0x0;
      local_198 = 0;
      uStack_190 = 0;
      puVar9 = local_70;
      do {
        uVar20 = *puVar9;
        puVar15 = local_70;
        if (((uint)uVar20 >> 3 & 1) != 0) {
          local_88 = (ulong *)0x0;
          if (puVar9 != (ulong *)0x0) {
            local_88 = (ulong *)puVar9[(ulong)(byte)POPCOUNT((byte)uVar20 & 7) + 2];
          }
          goto LAB_0320fe88;
        }
        if ((uVar20 & 1) != 0) {
          local_88 = (ulong *)0x0;
          goto LAB_0320fe88;
        }
        puVar9 = (ulong *)puVar9[1];
      } while (puVar9 != (ulong *)0x0);
      local_88 = (ulong *)0x0;
LAB_0320fe88:
      do {
        uVar16 = (uint)*puVar15;
        if ((uVar16 >> 0xf & 1) != 0) {
          uVar20 = CONCAT44(uVar16,uVar16) & 0x7fff00007fff;
          uStack_80 = puVar15[(ulong)(byte)(POPCOUNT((char)uVar20) + POPCOUNT((char)(uVar20 >> 8)))
                              + 2];
          goto LAB_0320ff14;
        }
        if ((*puVar15 & 9) != 0) {
          uStack_80 = 0;
          goto LAB_0320ff14;
        }
        puVar9 = puVar15 + 1;
        puVar15 = (ulong *)*puVar9;
      } while ((ulong *)*puVar9 != (ulong *)0x0);
      uStack_80 = 0;
LAB_0320ff14:
      FUN_0322c554(&local_1d8,
                   "Cannot allocate/construct instance of type \'{}\' (unregistered type?)",
                   PTR_DAT_047e5db0,&local_88);
      local_198 = 0x27c;
      goto LAB_03210228;
    }
    if (DAT_046aaf68 != '\0') {
LAB_0320fb2c:
      local_1c8 = &DAT_04884eb8;
      uStack_1c0 = 2;
      pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
      local_1b8 = nn::os::GetThreadId(pTVar10);
      local_1d8 = local_188;
      local_1a8 = 0;
      local_1a0 = (char *)0x0;
      local_188[0]._0_1_ = '\0';
      uStack_1d0 = 0x10000000000;
      local_198 = 0;
      uStack_190 = 0;
      puVar9 = local_70;
      do {
        uVar20 = *puVar9;
        puVar15 = local_70;
        if (((uint)uVar20 >> 3 & 1) != 0) {
          local_1e8 = (char *)0x0;
          if (puVar9 != (ulong *)0x0) {
            local_1e8 = (char *)puVar9[(ulong)(byte)POPCOUNT((byte)uVar20 & 7) + 2];
          }
          goto LAB_03210464;
        }
        if ((uVar20 & 1) != 0) {
          local_1e8 = (char *)0x0;
          goto LAB_03210464;
        }
        puVar9 = (ulong *)puVar9[1];
      } while (puVar9 != (ulong *)0x0);
      local_1e8 = (char *)0x0;
LAB_03210464:
      do {
        uVar16 = (uint)*puVar15;
        if ((uVar16 >> 0xf & 1) != 0) {
          uVar20 = CONCAT44(uVar16,uVar16) & 0x7fff00007fff;
          uStack_1e0 = puVar15[(ulong)(byte)(POPCOUNT((char)uVar20) + POPCOUNT((char)(uVar20 >> 8)))
                               + 2];
          goto LAB_032104f0;
        }
        if ((*puVar15 & 9) != 0) {
          uStack_1e0 = 0;
          goto LAB_032104f0;
        }
        puVar9 = puVar15 + 1;
        puVar15 = (ulong *)*puVar9;
      } while ((ulong *)*puVar9 != (ulong *)0x0);
      uStack_1e0 = 0;
LAB_032104f0:
      local_1b0 = local_1d8;
      FUN_0322c554(&local_1d8,
                   "Cannot allocate/construct instance of type \'{}\' (unregistered type?)",
                   PTR_DAT_047e5db0,&local_1e8);
      local_198 = 0x27c;
      goto LAB_0321070c;
    }
  }
  else {
LAB_0320f2bc:
    if (uVar20 == 0) {
      if (local_78 != (ulong *)0x0) {
        plVar3 = param_1 + 2;
        iVar8 = FUN_03213500(plVar3,&local_78);
        if (*(int *)(param_1 + 3) == iVar8) {
          iVar1 = iVar8 + 1;
          if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) <= iVar8) {
            FUN_03213674(plVar3,(long)iVar1);
            iVar8 = *(int *)(param_1 + 3);
          }
          lVar14 = *plVar3;
          puVar18 = (undefined8 *)(lVar14 + (long)iVar8 * 0x30);
          *puVar18 = local_78;
          puVar18[1] = local_70;
          puVar18[2] = local_68;
          if ((local_68 & 1) != 0) {
            piVar2 = (int *)((local_68 & 0xfffffffffffffffe) + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = *piVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar14 = lVar14 + (long)iVar8 * 0x30;
          uVar20 = param_2[1];
          *(ulong *)(lVar14 + 0x18) = *param_2;
          *(ulong *)(lVar14 + 0x20) = uVar20;
          uVar20 = param_2[2];
          *(ulong *)(lVar14 + 0x28) = uVar20;
          if ((uVar20 & 1) != 0) {
            piVar2 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = *piVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          *(int *)(param_1 + 3) = iVar1;
        }
        else {
          lVar14 = *plVar3 + (long)iVar8 * 0x30;
          uVar20 = param_2[1];
          *(ulong *)(lVar14 + 0x18) = *param_2;
          *(ulong *)(lVar14 + 0x20) = uVar20;
          if ((param_2[2] & 1) != 0) {
            piVar2 = (int *)((param_2[2] & 0xfffffffffffffffe) + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = *piVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uVar20 = *(ulong *)(lVar14 + 0x28);
          if ((uVar20 & 1) != 0) {
            plVar11 = (long *)(uVar20 & 0xfffffffffffffffe);
            plVar3 = plVar11 + 1;
            do {
              lVar7 = *plVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *(int *)plVar3 = (int)lVar7 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((plVar11 != (long *)0x0) && ((int)lVar7 == 1)) {
              (**(code **)(*plVar11 + 8))();
            }
          }
          *(ulong *)(lVar14 + 0x28) = param_2[2];
        }
      }
      if (local_78 != (ulong *)*param_3) {
        plVar3 = param_1 + 2;
        iVar8 = FUN_03213500(plVar3,param_3);
        if (*(int *)(param_1 + 3) == iVar8) {
          iVar1 = iVar8 + 1;
          if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) <= iVar8) {
            FUN_03213674(plVar3,(long)iVar1);
            iVar8 = *(int *)(param_1 + 3);
          }
          lVar14 = *plVar3;
          puVar18 = (undefined8 *)(lVar14 + (long)iVar8 * 0x30);
          uVar4 = param_3[1];
          *puVar18 = *param_3;
          puVar18[1] = uVar4;
          uVar20 = param_3[2];
          puVar18[2] = uVar20;
          if ((uVar20 & 1) != 0) {
            piVar2 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = *piVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar14 = lVar14 + (long)iVar8 * 0x30;
          uVar20 = param_2[1];
          *(ulong *)(lVar14 + 0x18) = *param_2;
          *(ulong *)(lVar14 + 0x20) = uVar20;
          uVar20 = param_2[2];
          *(ulong *)(lVar14 + 0x28) = uVar20;
          if ((uVar20 & 1) != 0) {
            piVar2 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = *piVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          *(int *)(param_1 + 3) = iVar1;
        }
        else {
          lVar14 = *plVar3 + (long)iVar8 * 0x30;
          uVar20 = param_2[1];
          *(ulong *)(lVar14 + 0x18) = *param_2;
          *(ulong *)(lVar14 + 0x20) = uVar20;
          if ((param_2[2] & 1) != 0) {
            piVar2 = (int *)((param_2[2] & 0xfffffffffffffffe) + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = *piVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uVar20 = *(ulong *)(lVar14 + 0x28);
          if ((uVar20 & 1) != 0) {
            plVar11 = (long *)(uVar20 & 0xfffffffffffffffe);
            plVar3 = plVar11 + 1;
            do {
              lVar7 = *plVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *(int *)plVar3 = (int)lVar7 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((plVar11 != (long *)0x0) && ((int)lVar7 == 1)) {
              (**(code **)(*plVar11 + 8))();
            }
          }
          *(ulong *)(lVar14 + 0x28) = param_2[2];
        }
      }
    }
    if (((local_78 == (ulong *)0x0) || (*param_2 == 0)) ||
       ((local_70 != (ulong *)0x0 &&
        ((uVar20 = FUN_031dd260(local_70,PTR_DAT_047e5c40), (uVar20 & 1) != 0 &&
         (local_78 != (ulong *)0x0)))))) goto LAB_03210264;
    puVar9 = (ulong *)*param_2;
    if (puVar9 == local_78) {
      puVar9 = (ulong *)param_2[1];
      if (puVar9 == local_70) goto LAB_03210264;
      local_1d8 = puVar9;
      while( true ) {
        uVar16 = (uint)*local_1d8;
        if ((uVar16 >> 0xd & 1) != 0) break;
        if (((*local_1d8 & 1) != 0) ||
           (local_1d8 = (ulong *)local_1d8[1], local_1d8 == (ulong *)0x0)) goto LAB_0320fc0c;
      }
      if (local_1d8 != (ulong *)0x0) {
        uVar16 = uVar16 & 0x1fff;
        local_1d8 = local_1d8 +
                    (ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8))) + 2;
        goto LAB_0320fc14;
      }
LAB_0320fc0c:
      local_1d8 = (ulong *)0x0;
LAB_0320fc14:
      puVar15 = local_70;
      while( true ) {
        uVar16 = (uint)*puVar15;
        if ((uVar16 >> 0xd & 1) != 0) break;
        if (((*puVar15 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
        goto LAB_0320fc70;
      }
      if (puVar15 != (ulong *)0x0) {
        uVar20 = CONCAT44(uVar16,uVar16) & 0x1fff00001fff;
        local_88 = puVar15 + (ulong)(byte)(POPCOUNT((char)uVar20) + POPCOUNT((char)(uVar20 >> 8))) +
                             2;
        if ((local_1d8 == (ulong *)0x0) ||
           (uVar20 = FUN_031dd3c0(&local_1d8,&local_88), (uVar20 & 1) == 0)) goto LAB_0320fca8;
        goto LAB_03210264;
      }
LAB_0320fc70:
      local_88 = (ulong *)0x0;
      if (local_1d8 == (ulong *)0x0) {
        for (; (puVar15 = local_70, puVar9 != (ulong *)0x0 && ((*puVar9 & 1) == 0));
            puVar9 = (ulong *)puVar9[1]) {
        }
        for (; (puVar15 != (ulong *)0x0 && ((*puVar15 & 1) == 0)); puVar15 = (ulong *)puVar15[1]) {
        }
        if (puVar9 == puVar15) goto LAB_03210264;
      }
LAB_0320fca8:
      if (DAT_04884f08 < 2) {
        if (DAT_046aaf68 == '\0') goto LAB_03210258;
      }
      else if (DAT_046aaf68 == '\0') {
        local_1d8 = (ulong *)0x0;
        local_1c8 = &DAT_04884eb8;
        uStack_1c0 = 2;
        pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
        local_1b8 = nn::os::GetThreadId(pTVar10);
        local_1b0 = (ulong *)0x0;
        local_1a8 = 0;
        local_1a0 = (char *)0x0;
        local_198 = 0;
        uStack_190 = 0;
        FUN_0322c554(&local_1d8,"Cannot clone on self with a different type",PTR_DAT_047d1b38);
        local_198 = 0x29c;
        goto LAB_03210228;
      }
      local_1c8 = &DAT_04884eb8;
      uStack_1c0 = 2;
      pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
      local_1b8 = nn::os::GetThreadId(pTVar10);
      local_1d8 = local_188;
      local_1a8 = 0;
      local_1a0 = (char *)0x0;
      local_198 = 0;
      uStack_190 = 0;
      local_188[0]._0_1_ = '\0';
      uStack_1d0 = 0x10000000000;
      local_1b0 = local_1d8;
      FUN_0322c554(&local_1d8,"Cannot clone on self with a different type",PTR_DAT_047d1b38);
      local_198 = 0x29c;
      goto LAB_0321070c;
    }
    puVar15 = local_70;
    do {
      uVar16 = (uint)*puVar15;
      if ((uVar16 >> 0x14 & 1) != 0) {
        uVar20 = 0;
        if (puVar15 != (ulong *)0x0) {
          uVar20 = CONCAT44(uVar16,uVar16) & 0xfffff000fffff;
          uVar20 = (ulong)(ushort)puVar15[(ulong)(byte)(POPCOUNT((char)uVar20) +
                                                        POPCOUNT((char)(uVar20 >> 8)) +
                                                       POPCOUNT((char)(uVar20 >> 0x10))) + 2];
        }
        goto LAB_0320f808;
      }
      if ((*puVar15 & 1) != 0) {
        uVar20 = 0;
        goto LAB_0320f808;
      }
      puVar15 = (ulong *)puVar15[1];
    } while (puVar15 != (ulong *)0x0);
    uVar20 = 0;
LAB_0320f808:
    puVar13 = (ulong *)param_2[1];
    puVar15 = puVar13;
    do {
      uVar16 = (uint)*puVar15;
      if ((uVar16 >> 0x14 & 1) != 0) {
        uVar19 = 0;
        if (puVar15 != (ulong *)0x0) {
          uVar19 = CONCAT44(uVar16,uVar16) & 0xfffff000fffff;
          uVar19 = (ulong)(ushort)puVar15[(ulong)(byte)(POPCOUNT((char)uVar19) +
                                                        POPCOUNT((char)(uVar19 >> 8)) +
                                                       POPCOUNT((char)(uVar19 >> 0x10))) + 2];
        }
        goto LAB_0320f858;
      }
      if ((*puVar15 & 1) != 0) {
        uVar19 = 0;
        goto LAB_0320f858;
      }
      puVar15 = (ulong *)puVar15[1];
    } while (puVar15 != (ulong *)0x0);
    uVar19 = 0;
LAB_0320f858:
    if (((ulong *)(uVar20 + (long)local_78) <= puVar9) ||
       ((ulong *)(uVar19 + (long)puVar9) <= local_78)) {
      if (param_4 != 1) {
LAB_0320f938:
        FUN_03210a10(param_1,&local_78,param_2);
        goto LAB_03210264;
      }
      uVar20 = 0;
      puVar15 = puVar13;
      do {
        uVar16 = (uint)*puVar15;
        if ((uVar16 >> 0x15 & 1) == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = CONCAT44(uVar16,uVar16) & 0x1fffff001fffff;
          uVar19 = puVar15[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                                        POPCOUNT((char)(uVar19 >> 0x10))) + 2];
        }
        uVar20 = uVar19 | uVar20;
      } while (((*puVar15 & 1) == 0) && (puVar15 = (ulong *)puVar15[1], puVar15 != (ulong *)0x0));
      if ((((uint)uVar20 >> 3 & 1) != 0) || (iVar8 = FUN_031dad84(puVar9,puVar13,1), -1 < iVar8))
      goto LAB_0320f938;
      if (DAT_04884f08 < 2) {
        if (DAT_046aaf68 == '\0') goto LAB_03210258;
      }
      else if (DAT_046aaf68 == '\0') {
        local_1d8 = (ulong *)0x0;
        local_1c8 = &DAT_04884eb8;
        uStack_1c0 = 2;
        pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
        local_1b8 = nn::os::GetThreadId(pTVar10);
        local_1b0 = (ulong *)0x0;
        local_1a8 = 0;
        local_1a0 = (char *)0x0;
        local_198 = 0;
        uStack_190 = 0;
        puVar9 = (ulong *)param_2[1];
        if (puVar9 == (ulong *)0x0) {
          local_88 = (ulong *)0x3bf8c0f;
        }
        else {
          do {
            uVar20 = *puVar9;
            if (((uint)uVar20 >> 3 & 1) != 0) {
              local_88 = (ulong *)puVar9[(ulong)(byte)POPCOUNT((byte)uVar20 & 7) + 2];
              goto LAB_032101fc;
            }
            if ((uVar20 & 1) != 0) {
              local_88 = (ulong *)0x0;
              goto LAB_032101fc;
            }
            puVar9 = (ulong *)puVar9[1];
          } while (puVar9 != (ulong *)0x0);
          local_88 = (ulong *)0x0;
        }
LAB_032101fc:
        FUN_0322c554(&local_1d8,"Cannot construct type {}",&DAT_044e9758,&local_88);
        local_198 = 0x2a9;
        goto LAB_03210228;
      }
      local_1c8 = &DAT_04884eb8;
      uStack_1c0 = 2;
      pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
      local_1b8 = nn::os::GetThreadId(pTVar10);
      local_1a8 = 0;
      local_1a0 = (char *)0x0;
      local_188[0]._0_1_ = '\0';
      local_198 = 0;
      uStack_190 = 0;
      uStack_1d0 = 0x10000000000;
      puVar9 = (ulong *)param_2[1];
      if (puVar9 == (ulong *)0x0) {
        local_1e8 = "<No name>";
      }
      else {
        do {
          uVar20 = *puVar9;
          if (((uint)uVar20 >> 3 & 1) != 0) {
            local_1e8 = (char *)puVar9[(ulong)(byte)POPCOUNT((byte)uVar20 & 7) + 2];
            goto LAB_03210790;
          }
          if ((uVar20 & 1) != 0) {
            local_1e8 = (char *)0x0;
            goto LAB_03210790;
          }
          puVar9 = (ulong *)puVar9[1];
        } while (puVar9 != (ulong *)0x0);
        local_1e8 = (char *)0x0;
      }
LAB_03210790:
      local_1d8 = local_188;
      local_1b0 = local_188;
      FUN_0322c554(&local_1d8,"Cannot construct type {}",&DAT_044e9758,&local_1e8);
      local_1a0 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      local_198 = 0x2a9;
      if ((char)local_188[0] == '\0') goto LAB_03210234;
      sVar12 = strlen((char *)local_188);
      *(undefined2 *)((long)local_188 + (long)(int)((int)sVar12 - (uint)((int)sVar12 == 0xff))) = 10
      ;
      goto LAB_03210744;
    }
    if (DAT_04884f08 < 2) {
      if (DAT_046aaf68 == '\0') goto LAB_03210258;
LAB_0320f9b4:
      local_1c8 = &DAT_04884eb8;
      uStack_1c0 = 2;
      pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
      local_1b8 = nn::os::GetThreadId(pTVar10);
      local_1d8 = local_188;
      local_1a8 = 0;
      local_1a0 = (char *)0x0;
      local_198 = 0;
      uStack_190 = 0;
      local_188[0]._0_1_ = '\0';
      uStack_1d0 = 0x10000000000;
      local_1b0 = local_1d8;
      FUN_0322c554(&local_1d8,"Cannot clone on a buffer overlapping with source object",
                   PTR_DAT_047d1b38);
      local_198 = 0x2a4;
      goto LAB_0321070c;
    }
    if (DAT_046aaf68 != '\0') goto LAB_0320f9b4;
    local_1d8 = (ulong *)0x0;
    local_1c8 = &DAT_04884eb8;
    uStack_1c0 = 2;
    pTVar10 = (ThreadType *)nn::os::GetCurrentThread();
    local_1b8 = nn::os::GetThreadId(pTVar10);
    local_1b0 = (ulong *)0x0;
    local_1a8 = 0;
    local_1a0 = (char *)0x0;
    local_198 = 0;
    uStack_190 = 0;
    FUN_0322c554(&local_1d8,"Cannot clone on a buffer overlapping with source object",
                 PTR_DAT_047d1b38);
    local_198 = 0x2a4;
LAB_03210228:
    local_1a0 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
    ;
    FUN_0322c8e0(&local_1d8);
LAB_03210234:
    if (((ulong)local_1b0 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1b0 + -1),0);
    }
  }
LAB_03210258:
  *(undefined4 *)(param_1 + 1) = 0x80040200;
LAB_03210264:
  if ((local_68 & 1) != 0) {
    plVar11 = (long *)(local_68 & 0xfffffffffffffffe);
    plVar3 = plVar11 + 1;
    do {
      lVar14 = *plVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  if ((uVar21 & 1) != 0) {
    plVar11 = (long *)(uVar21 & 0xfffffffffffffffe);
    plVar3 = plVar11 + 1;
    do {
      lVar14 = *plVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar14 == 1)) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  return;
}


