/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ad770; name: FUN_028ad770
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

long FUN_028ad770(uint param_1,void *param_2,long param_3,long param_4,int param_5,ulong *param_6,
                 void *param_7,undefined8 param_8,long param_9,long param_10)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  void *__dest;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  undefined4 uVar12;
  uint uVar13;
  size_t __n;
  code *pcVar14;
  long lVar15;
  long *extraout_x8;
  char *pcVar16;
  long lVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  void *pvVar21;
  undefined8 uStackY_1bd;
  undefined4 uStackY_1b5;
  long local_150;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  ulong uStack_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  long lStack_d8;
  undefined4 local_d0;
  undefined1 auStack_c4 [4];
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  undefined4 local_70;
  
  if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
    uVar8 = 0xffffffffffffffff;
  }
  else {
    uVar8 = (**(code **)PTR_DAT_047cb878)("OodleLZ_Compress",0);
  }
  FUN_001c3650();
  puVar6 = PTR_DAT_047cb8a0;
  if (*PTR_DAT_047cb8a0 == '\0') {
    if ((param_1 == 3) || ((0x3b00U >> (ulong)(param_1 & 0x1f) & 1) != 0)) {
      if (param_6 != (ulong *)0x0) goto LAB_028ad900;
    }
    else {
      if ((DAT_047ecce0 & 1) == 0) {
        DAT_047ecce0 = 1;
        if (param_1 < 0xe) {
          pcVar16 = (&PTR_DAT_04483f98)[(int)param_1];
          pcVar14 = *(code **)PTR_PTR_047cb868;
        }
        else {
          pcVar16 = "invalid";
          pcVar14 = *(code **)PTR_PTR_047cb868;
        }
        if (pcVar14 != (code *)0x0) {
          (*pcVar14)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xb36,
                     "OODLE USAGE WARNING : Encoding with archaic compressor (%s) is deprecated and will be removed in a future version.\n  Use one of the modern Oodle codecs (Kraken, Mermaid, Leviathan, Selkie, Hydra).\n  Check OodleLZ_Compressor_IsNewLZFamily.\n  This message is only shown once per run.\n(Usage warnings can be disabled via Oodle_SetUsageWarnings.)\n"
                     ,pcVar16);
        }
      }
      if (param_6 != (ulong *)0x0) {
        if (((*(int *)((long)param_6 + 0x14) == 0) ||
            ((0x3f88U >> (ulong)(param_1 & 0x1f) & 1) != 0)) || ((DAT_047ecce1 & 1) != 0)) {
LAB_028ad900:
          iVar7 = (int)param_6[6];
        }
        else {
          DAT_047ecce1 = 1;
          if (param_1 < 0xe) {
            pcVar16 = (&PTR_DAT_04483f98)[(int)param_1];
            if (*puVar6 == '\0') goto LAB_028adb98;
            goto LAB_028ad900;
          }
          pcVar16 = "invalid";
          if (*puVar6 != '\0') goto LAB_028ad900;
LAB_028adb98:
          if (*(code **)PTR_PTR_047cb868 == (code *)0x0) goto LAB_028ad900;
          (**(code **)PTR_PTR_047cb868)
                    (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xb40,
                     "OODLE USAGE WARNING : Requested dictionarySize limit but compressor (%s) does not support it.\n  Use one of the modern Oodle codecs (Kraken, Mermaid, Leviathan, Selkie, Hydra).\n  Check OodleLZ_Compressor_RespectsDictionarySize.\n  This message is only shown once per run.\n(Usage warnings can be disabled via Oodle_SetUsageWarnings.)\n"
                     ,pcVar16);
          iVar7 = (int)param_6[6];
        }
        if (((1 < iVar7) && (*(undefined **)PTR_PTR_047cb8a8 == PTR_FUN_047cb8b0)) &&
           (((DAT_047ecce2 & 1) == 0 &&
            ((DAT_047ecce2 = 1, *puVar6 == '\0' && (*(code **)PTR_PTR_047cb868 != (code *)0x0))))))
        {
          (**(code **)PTR_PTR_047cb868)
                    (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xb4b,
                     "OODLE USAGE WARNING : \'jobify\' is enabled, but no job system was installed!\n  Call OodleCore_Plugins_SetJobSystem to set up a job system first.\n  This message is only shown once per run.\n(Usage warnings can be disabled via Oodle_SetUsageWarnings.)\n"
                     ,0);
        }
        goto LAB_028ad7f4;
      }
    }
LAB_028ad978:
    puVar19 = (ulong *)&DAT_04484008;
    if (0x18 < param_3) goto LAB_028ad988;
LAB_028ad844:
    if (param_3 < 1) {
LAB_028adb4c:
      lVar17 = 0;
      pcVar14 = *(code **)PTR_DAT_047cb880;
      goto joined_r0x028adab4;
    }
LAB_028ad9c0:
    if (param_1 < 0xe) {
      uVar12 = *(undefined4 *)(&DAT_03cb66cc + (long)(int)param_1 * 4);
    }
    else {
      iVar7 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x674,
                           "OodleLZ_Compressor_to_DecodeType","Invalid compressor\n");
      if (iVar7 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar12 = 0xffffffff;
    }
    pvVar11 = (void *)((long)param_2 + param_3);
    local_c0 = CONCAT44(uVar12,4);
    local_b8 = 0x100000000;
    local_b0 = 0;
    lVar17 = param_4;
    if (param_2 < pvVar11) {
      pvVar21 = param_2;
      if (param_7 != (void *)0x0) {
        pvVar21 = param_7;
      }
      do {
        __n = (long)pvVar11 - (long)param_2;
        if (0x3ffff < (long)__n) {
          __n = 0x40000;
        }
        uVar20 = (long)param_2 - (long)pvVar21;
        if (uVar20 == 0) {
          uVar13 = 1;
        }
        else if (((uVar20 & 0x3ffff) == 0) && ((int)puVar19[1] != 0)) {
          uVar13 = (uint)(((long)*(int *)((long)puVar19 + 0xc) - 1U & uVar20) == 0);
        }
        else {
          uVar13 = 0;
        }
        local_b0 = CONCAT44(local_b0._4_4_,uVar13);
        __dest = (void *)FUN_0015c610(&local_c0,lVar17);
        memcpy(__dest,param_2,__n);
        param_2 = (void *)((long)param_2 + __n);
        lVar17 = (long)__dest + __n;
      } while (param_2 < pvVar11);
    }
    lVar17 = lVar17 - param_4;
  }
  else {
    if (param_6 == (ulong *)0x0) goto LAB_028ad978;
LAB_028ad7f4:
    local_148 = *param_6;
    local_140 = param_6[1];
    local_138 = param_6[2];
    local_130 = param_6[3];
    local_128 = param_6[4];
    local_120 = param_6[5];
    local_118 = param_6[6];
    uStack_100 = param_6[9];
    local_110 = param_6[7];
    local_108 = param_6[8];
    local_f8 = (undefined4)param_6[10];
    puVar19 = &local_148;
    FUN_00152a40(&local_148);
    if (param_3 < 0x19) goto LAB_028ad844;
LAB_028ad988:
    if ((param_5 == 0) || (param_3 <= (int)puVar19[3])) goto LAB_028ad9c0;
    if ((param_1 != 8) && ((int)puVar19[2] == 1)) {
      if (param_1 < 0xe) {
        pcVar16 = (&PTR_DAT_04483f98)[(int)param_1];
      }
      else {
        pcVar16 = "invalid";
      }
      FUN_0015c3d0();
      if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
        (**(code **)PTR_PTR_047cb868)
                  (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xba4,
                   "OODLE ERROR : Reduced profile only supports Kraken, failing compress.\n",pcVar16
                  );
      }
LAB_028adb48:
      FUN_0015c3f0();
      goto LAB_028adb4c;
    }
    pvVar11 = param_2;
    if (param_7 == (void *)0x0) {
joined_r0x028adc4c:
      if (param_9 == 0) goto LAB_028adc50;
LAB_028adaf4:
      if (param_10 < 1) goto LAB_028adc50;
      local_150 = 0;
    }
    else {
      uVar20 = (long)param_2 - (long)param_7;
      if ((uVar20 & 0x3ffff) != 0) {
        FUN_0015c3d0();
        if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
          (**(code **)PTR_PTR_047cb868)
                    (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xbb9,
                     "OODLE ERROR : dictionary offset must be a multiple of OODLELZ_BLOCK_LEN\n");
        }
        goto LAB_028adb48;
      }
      if ((int)puVar19[1] == 0) {
        pvVar11 = (void *)((long)param_2 - 0x20000000);
        if ((long)uVar20 < 0x20000001) {
          pvVar11 = param_7;
        }
        goto joined_r0x028adc4c;
      }
      lVar15 = (long)*(int *)((long)puVar19 + 0xc);
      lVar17 = 0;
      if (lVar15 != 0) {
        lVar17 = (long)uVar20 / lVar15;
      }
      pvVar11 = (void *)((long)param_7 + lVar17 * lVar15);
      if (param_9 != 0) goto LAB_028adaf4;
LAB_028adc50:
      if (((0x3b00U >> (ulong)(param_1 & 0x1f) & 1) == 0) || (4 < param_5)) {
LAB_028add30:
        param_10 = param_3 * 8 + 0x4000;
        if (0xfffff < param_10) {
          param_10 = 0x100000;
        }
      }
      else {
        local_b0 = puVar19[2];
        uStack_a8 = puVar19[3];
        local_c0 = *puVar19;
        local_b8 = puVar19[1];
        local_90 = puVar19[6];
        uStack_88 = puVar19[7];
        local_a0 = puVar19[4];
        uStack_98 = puVar19[5];
        local_70 = (int)puVar19[10];
        local_80 = puVar19[8];
        uStack_78 = puVar19[9];
        FUN_00152a40(&local_c0);
        lVar17 = param_3;
        if ((int)local_b8 != 0) {
          if (local_b8._4_4_ <= param_3) {
            lVar17 = (long)local_b8._4_4_;
          }
        }
        local_d0 = 0;
        lVar15 = 0x20000000;
        if (0 < lVar17) {
          lVar15 = lVar17;
        }
        local_f0 = &local_c0;
        lStack_d8 = (long)((ulong)auStack_c4 | 1) - (long)local_f0;
        if ((undefined8 *)((ulong)auStack_c4 | 1) < local_f0 || lStack_d8 == 0) {
          lStack_d8 = 0;
          local_f0 = (undefined8 *)0x0;
        }
        local_e8 = local_f0;
        local_e0 = local_f0;
        param_10 = FUN_00152640(param_1,0,lVar15,0,param_5,&local_c0,0,0,&local_f0);
        if (param_10 == -1) goto LAB_028add30;
      }
      param_9 = (**(code **)PTR_PTR_047cb890)(param_10,0x10);
      if (param_9 == 0) {
        lVar17 = FUN_0015ed40(param_10);
        if (*(long *)(lVar17 + 0x420) == 0) {
          *extraout_x8 = 0;
          *(undefined1 *)(extraout_x8 + 1) = 0;
          return lVar17;
        }
        nn::os::LockMutex((MutexType *)(lVar17 + 0x3f0));
        if (*(long *)(lVar17 + 0x3b0) == 0) {
          *extraout_x8 = 0;
          *(undefined1 *)(extraout_x8 + 1) = 0;
        }
        else {
          lVar15 = *(long *)(*(long *)(lVar17 + 0x370) + (*(ulong *)(lVar17 + 0x3a8) / 0xaa) * 8);
          uVar20 = *(ulong *)(lVar17 + 0x3a8) % 0xaa;
          lVar9 = *(long *)(lVar15 + uVar20 * 0x18);
          if (lVar9 != 0) {
            lVar18 = *(long *)(lVar9 + 0x30);
            if (*(long *)(lVar18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar18 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 0) {
              uVar8 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
              *(undefined8 *)(lVar18 + 8) = uVar8;
              *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
            }
            else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
          }
          bVar4 = *(char *)(lVar15 + uVar20 * 0x18 + 8) != '\0';
          if (bVar4) {
            lVar15 = lVar15 + uVar20 * 0x18;
            uStackY_1bd = *(undefined8 *)(lVar15 + 0xc);
            uStackY_1b5 = *(undefined4 *)(lVar15 + 0x14);
          }
          *(long *)(lVar17 + 0x420) = *(long *)(lVar17 + 0x3b0) + -1;
          uVar20 = *(ulong *)(lVar17 + 0x3a8) % 0xaa;
          lVar15 = *(long *)(*(long *)(lVar17 + 0x370) + (*(ulong *)(lVar17 + 0x3a8) / 0xaa) * 8);
          pcVar16 = (char *)(lVar15 + uVar20 * 0x18 + 8);
          if (*pcVar16 != '\0') {
            *pcVar16 = '\0';
          }
          plVar10 = *(long **)(lVar15 + uVar20 * 0x18);
          if (plVar10 != (long *)0x0) {
            lVar15 = plVar10[6];
            psVar1 = (short *)(lVar15 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar15 + 0x10) = 0;
              (**(code **)(*plVar10 + 0x50))();
            }
            else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          *(long *)(lVar17 + 0x3b0) = *(long *)(lVar17 + 0x3b0) + -1;
          uVar20 = *(long *)(lVar17 + 0x3a8) + 1;
          *(ulong *)(lVar17 + 0x3a8) = uVar20;
          if (0x153 < uVar20) {
            plVar10 = *(long **)(lVar17 + 0x3b8);
            uVar8 = **(undefined8 **)(lVar17 + 0x370);
            uVar20 = (**(code **)(*plVar10 + 0xf8))(plVar10);
            if (((uVar20 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
              (**(code **)(*plVar10 + 0x18))(plVar10,uVar8,0xff0,8);
            }
            else {
              FUN_00c48fe8(plVar10,uVar8,0xff0,8);
            }
            *(long *)(lVar17 + 0x370) = *(long *)(lVar17 + 0x370) + 8;
            *(long *)(lVar17 + 0x3a8) = *(long *)(lVar17 + 0x3a8) + -0xaa;
          }
          nn::os::SignalConditionVariable((ConditionVariableType *)(lVar17 + 0x410));
          *extraout_x8 = lVar9;
          *(undefined1 *)(extraout_x8 + 1) = 0;
          if (bVar4) {
            *(undefined4 *)((long)extraout_x8 + 0x14) = uStackY_1b5;
            *(undefined8 *)((long)extraout_x8 + 0xc) = uStackY_1bd;
            *(undefined1 *)(extraout_x8 + 1) = 1;
          }
        }
        lVar17 = nn::os::UnlockMutex((MutexType *)(lVar17 + 0x3f0));
        return lVar17;
      }
      local_150 = param_9;
    }
    param_10 = param_10 + -1;
    *(undefined1 *)(param_9 + param_10) = 0x17;
    local_a0 = CONCAT44(local_a0._4_4_,1);
    local_b8 = 0;
    if ((param_9 == 0) || (param_10 < 1)) {
LAB_028addac:
      uStack_a8 = 0;
      local_c0 = 0;
    }
    else {
      local_c0 = param_9 + 0xfU & 0xfffffffffffffff0;
      uStack_a8 = (param_10 + param_9) - local_c0;
      if ((ulong)(param_10 + param_9) < local_c0 || uStack_a8 == 0) goto LAB_028addac;
    }
    local_b0 = local_c0;
    local_b8 = local_c0;
    if ((int)puVar19[1] == 0) {
      if ((param_3 < 0x40000000) && ((long)param_2 + (param_3 - (long)pvVar11) < 0x60000000)) {
        lVar17 = FUN_00152640(param_1,param_2,param_3,param_4,param_5,puVar19,pvVar11,param_8,
                              &local_c0);
      }
      else {
        pvVar21 = (void *)((long)param_2 + param_3);
        lVar17 = param_4;
        if (param_2 < pvVar21) {
          do {
            lVar15 = (long)pvVar21 - (long)param_2;
            if (0x257fffff < lVar15) {
              lVar15 = 0x20000000;
            }
            lVar9 = (long)param_2 - (long)pvVar11;
            if (0x1fffffff < lVar9) {
              lVar9 = 0x20000000;
            }
            lVar9 = FUN_00152640(param_1,param_2,lVar15,lVar17,param_5,puVar19,(long)param_2 - lVar9
                                 ,param_8,&local_c0);
            if (lVar9 < 1) goto joined_r0x028adf0c;
            param_2 = (void *)((long)param_2 + lVar15);
            lVar17 = lVar17 + lVar9;
          } while (param_2 < pvVar21);
        }
        lVar17 = lVar17 - param_4;
      }
    }
    else {
      lVar17 = param_4;
      pvVar21 = param_2;
      if ((long)pvVar11 - (long)param_2 != 0) {
        lVar15 = ((long)pvVar11 - (long)param_2) + (long)*(int *)((long)puVar19 + 0xc);
        if (param_3 <= lVar15) {
          lVar15 = param_3;
        }
        lVar17 = FUN_00152640(param_1,param_2,lVar15,param_4,param_5,puVar19,pvVar11,0,&local_c0);
        if (lVar17 < 1) {
joined_r0x028adf0c:
          if (local_150 != 0) {
            (**(code **)PTR_PTR_047cb898)(local_150);
          }
          goto LAB_028adb4c;
        }
        lVar17 = param_4 + lVar17;
        pvVar21 = (void *)((long)param_2 + lVar15);
      }
      param_2 = (void *)((long)param_2 + param_3);
      if (pvVar21 < param_2) {
        do {
          lVar15 = (long)param_2 - (long)pvVar21;
          if ((long)*(int *)((long)puVar19 + 0xc) <= (long)param_2 - (long)pvVar21) {
            lVar15 = (long)*(int *)((long)puVar19 + 0xc);
          }
          lVar9 = FUN_00152640(param_1,pvVar21,lVar15,lVar17,param_5,puVar19,pvVar21,0,&local_c0);
          if (lVar9 < 1) goto joined_r0x028adf0c;
          pvVar21 = (void *)((long)pvVar21 + lVar15);
          lVar17 = lVar17 + lVar9;
        } while (pvVar21 < param_2);
      }
      lVar17 = lVar17 - param_4;
    }
    if (local_150 != 0) {
      (**(code **)PTR_PTR_047cb898)();
      pcVar14 = *(code **)PTR_DAT_047cb880;
      goto joined_r0x028adab4;
    }
  }
  pcVar14 = *(code **)PTR_DAT_047cb880;
joined_r0x028adab4:
  if (pcVar14 != (code *)0x0) {
    (*pcVar14)(uVar8);
  }
  return lVar17;
}


