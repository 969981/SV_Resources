/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0100e844; name: FUN_0100e844
 */


void FUN_0100e844(long *param_1,long param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  code *pcVar20;
  ulong uVar21;
  short sVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  undefined8 *puVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  undefined8 *puVar31;
  long *plVar32;
  undefined8 *puVar33;
  ulong uVar34;
  ulong unaff_x28;
  float fVar35;
  uint local_190;
  uint local_18c;
  undefined1 local_180;
  undefined1 local_178;
  uint local_170;
  uint local_16c;
  ulong local_150;
  long local_148;
  undefined2 local_140;
  undefined6 uStack_13e;
  undefined1 local_138;
  undefined2 local_137;
  undefined1 local_135;
  undefined4 local_134;
  undefined1 uStack_130;
  undefined2 uStack_12f;
  undefined1 uStack_12d;
  undefined1 uStack_12c;
  long *local_128;
  undefined8 uStack_120;
  ulong local_118;
  long *local_110;
  code *local_108;
  code *local_100;
  code *local_f8;
  long lStack_f0;
  undefined8 local_e8;
  undefined5 uStack_e0;
  undefined3 local_db;
  undefined5 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78;
  long local_70 [2];
  
  FUN_00c9e664(&local_80,param_2 + 0xe8);
  lVar25 = *param_3;
  if (local_78 == (long *)0x0) {
    plVar28 = (long *)0x0;
  }
  else {
    plVar28 = (long *)local_78[9];
  }
  (**(code **)(*plVar28 + 0x18))(&local_110,plVar28);
  local_90 = (long *)0x0;
  uStack_88 = 0;
  plVar15 = (long *)0x0;
  if (plVar28 != (long *)0x0) {
    plVar15 = plVar28 + 5;
  }
  if ((long *)local_110[2] == plVar15) {
    FUN_00c9ea00(&local_90,&local_110);
  }
  plVar28 = local_110;
  if (local_110 != (long *)0x0) {
    plVar15 = local_110 + 3;
    do {
      sVar22 = (short)*plVar15;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar14) {
        *(short *)plVar15 = sVar22 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar22 == 1) {
      piVar2 = (int *)((long)local_110 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar14) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar29 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar29;
        local_148 = *plVar28;
        FUN_00c44438(lVar29 + 0x8040,&local_148);
      }
    }
    else if (sVar22 == 0) goto LAB_0100ea44;
  }
  FUN_0100fa74(param_1,lVar25,&local_90);
  plVar28 = local_90;
  if (local_90 != (long *)0x0) {
    plVar15 = local_90 + 3;
    do {
      sVar22 = (short)*plVar15;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar14) {
        *(short *)plVar15 = sVar22 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar22 == 1) {
      piVar2 = (int *)((long)local_90 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar14) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar25 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar25;
        local_110 = (long *)*plVar28;
        FUN_00c44438(lVar25 + 0x8040,&local_110);
      }
    }
    else if (sVar22 == 0) {
LAB_0100ea44:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  plVar28 = (long *)(param_2 + 0x280);
  lVar25 = nn::os::GetCurrentThread();
  while (*plVar28 == 0 && *(long *)(param_2 + 0x288) == 0) {
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar14) {
      *plVar28 = lVar25;
      *(undefined8 *)(param_2 + 0x288) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0100e90c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x290));
  do {
    if (*plVar28 != 0 || *(long *)(param_2 + 0x288) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x290));
        while (*plVar28 == 0 && *(long *)(param_2 + 0x288) == 0) {
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar14) {
            *plVar28 = lVar25;
            *(undefined8 *)(param_2 + 0x288) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0100e90c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar14) {
      *plVar28 = lVar25;
      *(undefined8 *)(param_2 + 0x288) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0100e90c:
  lVar25 = *param_1;
  if ((lVar25 != 0) && (*(short *)(lVar25 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar25 + 0x1a);
    sVar22 = *(short *)(lVar25 + 0x1a);
LAB_0100eb54:
    sVar3 = *psVar1;
    if (sVar3 == sVar22) {
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_0100eb78;
      bVar14 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0100eb78:
      bVar14 = false;
    }
    if (!bVar14) goto code_r0x0100eb80;
    lVar25 = *(long *)(lVar25 + 0x10);
    if (lVar25 == 0) goto LAB_0100e914;
    plVar15 = (long *)(lVar25 + -0x28);
    lVar29 = *(long *)(lVar25 + 8);
    local_110 = plVar15;
    if (*(long *)(lVar29 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar29 + 0x1a);
    do {
      sVar22 = *psVar1;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar22 == 0) {
      uVar23 = (**(code **)**(undefined8 **)(lVar29 + 0x10))();
      *(undefined8 *)(lVar29 + 8) = uVar23;
      *(undefined4 *)(lVar29 + 0x1c) = 0xfffffffe;
    }
    else if (sVar22 == -1) {
      pcVar9 = "count != 0";
      pcVar11 = "AddReference";
      pcVar12 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar13 = "Reference counter overflows.";
      goto LAB_0100f0a0;
    }
    FUN_0220f500(param_2 + 0x120,&local_110);
    if (local_110 != (long *)0x0) {
      lVar29 = local_110[6];
      psVar1 = (short *)(lVar29 + 0x1a);
      do {
        sVar22 = *psVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar22 == 1) {
        *(undefined8 *)(lVar29 + 0x10) = 0;
        (**(code **)(*local_110 + 0x50))();
      }
      else if (sVar22 == 0) goto LAB_0100ee28;
    }
    if ((ulong *)*param_1 == (ulong *)0x0) {
      local_150 = 0;
    }
    else {
      local_150 = *(ulong *)*param_1;
    }
    lVar29 = *(long *)(param_2 + 8);
    plVar32 = (long *)(param_2 + 0x208);
    uVar34 = *(ulong *)(param_2 + 0x210);
    if (uVar34 == 0) {
LAB_0100eca8:
      plVar26 = (long *)(**(code **)(**(long **)(param_2 + 0x240) + 0x10))
                                  (*(long **)(param_2 + 0x240),0x10e8,8);
      if (plVar26 == (long *)0x0) {
        (**(code **)(**(long **)(param_2 + 0x240) + 0xe8))();
      }
      uVar23 = *(undefined8 *)(param_2 + 0x240);
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar30 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar30 != 0) {
        if (0xf < *(ulong *)(lVar30 + 0x80)) goto LAB_0100f86c;
        *(undefined8 *)(lVar30 + *(ulong *)(lVar30 + 0x80) * 8) = uVar23;
        *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + 1;
      }
      plVar26[2] = local_150;
      plVar26[3] = 0x3ff00000000;
      plVar26[4] = 0;
      memset(plVar26 + 0x205,0,0xa0);
      plVar26[0x219] = lVar29;
      plVar26[0x21b] = 0;
      plVar26[0x21a] = 0xfffffffffffffff;
      *(undefined4 *)(plVar26 + 0x21c) = 0;
      if (lVar30 != 0) {
        *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + -1;
      }
      *plVar26 = 0;
      plVar26[1] = local_150;
      fVar35 = (float)(*(long *)(param_2 + 0x260) + 1);
      if ((uVar34 == 0) || (*(float *)(param_2 + 0x268) * (float)uVar34 < fVar35)) {
        uVar34 = (ulong)(uVar34 < 3 || (uVar34 & uVar34 - 1) != 0) | uVar34 << 1;
        uVar16 = (ulong)(fVar35 / *(float *)(param_2 + 0x268));
        if (uVar16 <= uVar34) {
          uVar16 = uVar34;
        }
        if (uVar16 - 1 == 0) {
          uVar16 = 2;
        }
        else if ((uVar16 & uVar16 - 1) != 0) {
          uVar16 = std::__next_prime(uVar16);
        }
        uVar34 = *(ulong *)(param_2 + 0x210);
        if (uVar34 < uVar16) {
          uVar21 = uVar16;
LAB_0100ee9c:
          FUN_0220f940(plVar32,uVar21);
        }
        else if (uVar16 < uVar34) {
          uVar21 = (ulong)((float)*(ulong *)(param_2 + 0x260) / *(float *)(param_2 + 0x268));
          if ((uVar34 < 3) ||
             (uVar18 = uVar34 - (uVar34 >> 1 & 0x5555555555555555),
             uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333),
             1 < (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
            uVar21 = std::__next_prime(uVar21);
          }
          else if (1 < uVar21) {
            uVar21 = 1L << (-LZCOUNT(uVar21 - 1) & 0x3fU);
          }
          if (uVar21 <= uVar16) {
            uVar21 = uVar16;
          }
          if (uVar21 < uVar34) goto LAB_0100ee9c;
        }
        uVar34 = *(ulong *)(param_2 + 0x210);
        if ((uVar34 & uVar34 - 1) == 0) {
          unaff_x28 = uVar34 - 1 & local_150;
        }
        else if (local_150 < uVar34) {
          unaff_x28 = local_150;
        }
        else {
          uVar16 = 0;
          if (uVar34 != 0) {
            uVar16 = local_150 / uVar34;
          }
          unaff_x28 = local_150 - uVar16 * uVar34;
        }
      }
      plVar17 = *(long **)(*plVar32 + unaff_x28 * 8);
      if (plVar17 == (long *)0x0) {
        *plVar26 = *(long *)(param_2 + 0x238);
        *(long **)(param_2 + 0x238) = plVar26;
        *(long *)(*(long *)(param_2 + 0x208) + unaff_x28 * 8) = param_2 + 0x238;
        if (*plVar26 != 0) {
          uVar16 = *(ulong *)(*plVar26 + 8);
          if ((uVar34 & uVar34 - 1) == 0) {
            uVar16 = uVar16 & uVar34 - 1;
          }
          else if (uVar34 <= uVar16) {
            uVar21 = 0;
            if (uVar34 != 0) {
              uVar21 = uVar16 / uVar34;
            }
            uVar16 = uVar16 - uVar21 * uVar34;
          }
          plVar17 = (long *)(*plVar32 + uVar16 * 8);
          goto LAB_0100edd4;
        }
      }
      else {
        *plVar26 = *plVar17;
LAB_0100edd4:
        *plVar17 = (long)plVar26;
      }
      *(long *)(param_2 + 0x260) = *(long *)(param_2 + 0x260) + 1;
    }
    else {
      uVar16 = uVar34 - 1;
      if ((uVar34 & uVar16) != 0) {
        unaff_x28 = local_150;
        if (uVar34 <= local_150) {
          uVar16 = 0;
          if (uVar34 != 0) {
            uVar16 = local_150 / uVar34;
          }
          unaff_x28 = local_150 - uVar16 * uVar34;
        }
        plVar26 = *(long **)(*plVar32 + unaff_x28 * 8);
        if (plVar26 != (long *)0x0) {
          while (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0) {
            uVar16 = plVar26[1];
            if (uVar16 != local_150) {
              if (uVar34 <= uVar16) {
                uVar21 = 0;
                if (uVar34 != 0) {
                  uVar21 = uVar16 / uVar34;
                }
                uVar16 = uVar16 - uVar21 * uVar34;
              }
              if (uVar16 != unaff_x28) break;
            }
            if (plVar26[2] == local_150) goto LAB_0100ede4;
          }
        }
        goto LAB_0100eca8;
      }
      unaff_x28 = uVar16 & local_150;
      plVar26 = *(long **)(*plVar32 + unaff_x28 * 8);
      if (plVar26 == (long *)0x0) goto LAB_0100eca8;
      do {
        plVar26 = (long *)*plVar26;
        if ((plVar26 == (long *)0x0) ||
           (plVar26[1] != local_150 && (plVar26[1] & uVar16) != unaff_x28)) goto LAB_0100eca8;
      } while (plVar26[2] != local_150);
    }
LAB_0100ede4:
    if ((char)param_3[1] != '\0') {
      if (*(char *)((long)param_3 + 9) == '\0') {
        lVar29 = plVar26[0x205];
        local_16c = 0;
        uVar7 = 0;
        goto LAB_0100f1c0;
      }
LAB_0100edf4:
      *(undefined1 *)(param_2 + 0x274) = 1;
      lVar25 = *(long *)(lVar25 + 8);
      psVar1 = (short *)(lVar25 + 0x1a);
      do {
        sVar22 = *psVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar22 == 1) {
        *(undefined8 *)(lVar25 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))();
      }
      else if (sVar22 == 0) {
LAB_0100ee28:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      goto LAB_0100e914;
    }
    plVar32 = plVar26 + 3;
    if (plVar26[0x205] == 0) {
      local_16c = *(uint *)(plVar26 + 4);
      *(uint *)(plVar26 + 4) = local_16c + 1;
      lVar29 = 0;
    }
    else {
      lVar29 = plVar26[0x205] + -1;
      local_16c = *(uint *)((long)plVar26 + lVar29 * 4 + 0x28);
      plVar26[0x205] = lVar29;
    }
    local_178 = 1;
    uVar5 = local_16c - (int)*plVar32;
    uVar34 = (ulong)(uVar5 >> 3) & 0x1ffffff8;
    *(ulong *)((long)plVar32 + uVar34 + 0x1018) =
         1L << ((ulong)uVar5 & 0x3f) | *(ulong *)((long)plVar32 + uVar34 + 0x1018);
    *(int *)((long)plVar26 + 0x24) = *(int *)((long)plVar26 + 0x24) + 1;
    local_18c = local_16c >> 8;
    uVar7 = 1;
    if (*(char *)((long)param_3 + 9) == '\0') {
LAB_0100f1c0:
      local_178 = uVar7;
      plVar32 = plVar26 + 3;
      if (lVar29 == 0) {
        local_170 = *(uint *)(plVar26 + 4);
        *(uint *)(plVar26 + 4) = local_170 + 1;
      }
      else {
        local_170 = *(uint *)((long)plVar26 + (lVar29 + -1) * 4 + 0x28);
        plVar26[0x205] = lVar29 + -1;
      }
      local_180 = 1;
      uVar5 = local_170 - (int)*plVar32;
      uVar34 = (ulong)(uVar5 >> 3) & 0x1ffffff8;
      *(ulong *)((long)plVar32 + uVar34 + 0x1018) =
           1L << ((ulong)uVar5 & 0x3f) | *(ulong *)((long)plVar32 + uVar34 + 0x1018);
      *(int *)((long)plVar26 + 0x24) = *(int *)((long)plVar26 + 0x24) + 1;
      local_190 = local_170 >> 8;
    }
    else {
      local_170 = 0;
      local_180 = 0;
    }
    lVar29 = plVar26[0x216];
    uVar34 = (ulong)*(uint *)(plVar26 + 4);
    uVar16 = plVar26[0x217] - lVar29 >> 4;
    if (uVar16 < uVar34) {
      if ((ulong)(plVar26[0x218] - plVar26[0x217] >> 4) < uVar34 - uVar16) {
        uVar21 = plVar26[0x21a];
        if (0x7ffffffffffffffe < uVar21) {
          uVar21 = 0x7fffffffffffffff;
        }
        if (uVar21 < uVar34) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar29 = plVar26[0x218] - lVar29;
        uVar19 = lVar29 >> 3;
        plVar32 = plVar26 + 0x219;
        uVar18 = uVar34;
        if (uVar34 <= uVar19) {
          uVar18 = uVar19;
        }
        if (uVar21 >> 1 <= (ulong)(lVar29 >> 4)) {
          uVar18 = uVar21;
        }
        if (uVar18 == 0) {
          lVar29 = 0;
        }
        else {
          lVar29 = (**(code **)(*(long *)*plVar32 + 0x10))((long *)*plVar32,uVar18 << 4,8);
          if (lVar29 == 0) {
            (**(code **)(*(long *)*plVar32 + 0xe8))();
          }
        }
        puVar27 = (undefined8 *)(lVar29 + uVar16 * 0x10);
        lVar30 = uVar34 * 0x10 + uVar16 * -0x10;
        puVar33 = puVar27;
        do {
          lVar24 = *plVar32;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar10 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar10 == 0) {
            *puVar33 = 0;
            puVar33[1] = 0;
          }
          else {
            if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_0100f86c:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar24;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
            *puVar33 = 0;
            puVar33[1] = 0;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          }
          puVar33 = puVar33 + 2;
          lVar30 = lVar30 + -0x10;
        } while (lVar30 != 0);
        puVar33 = (undefined8 *)plVar26[0x216];
        puVar31 = (undefined8 *)plVar26[0x217];
        if (puVar31 == puVar33) {
          puVar31 = puVar33;
        }
        else {
          do {
            puVar27 = puVar27 + -2;
            puVar31 = puVar31 + -2;
            FUN_0220fda0(plVar32,puVar27,puVar31);
          } while (puVar33 != puVar31);
          puVar31 = (undefined8 *)plVar26[0x216];
          puVar33 = (undefined8 *)plVar26[0x217];
        }
        lVar30 = plVar26[0x218];
        plVar26[0x216] = (long)puVar27;
        plVar26[0x217] = lVar29 + uVar34 * 0x10;
        plVar26[0x218] = lVar29 + uVar18 * 0x10;
        puVar6 = PTR_DAT_047d3908;
        while (puVar33 != puVar31) {
          puVar33 = puVar33 + -2;
          puVar27 = (undefined8 *)*puVar33;
          if (puVar27 != (undefined8 *)0x0) {
            psVar1 = (short *)(puVar27 + 3);
            do {
              sVar22 = *psVar1;
              cVar4 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar14) {
                *psVar1 = sVar22 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar22 == 1) {
              piVar2 = (int *)((long)puVar27 + 0x1c);
              do {
                iVar8 = *piVar2;
                cVar4 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar14) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar8 != -1) {
                if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(puVar6);
                }
                lVar29 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar29;
                local_110 = (long *)*puVar27;
                FUN_00c44438(lVar29 + 0x8040,&local_110);
              }
            }
            else if (sVar22 == 0) goto LAB_0100ea44;
          }
        }
        if (puVar31 != (undefined8 *)0x0) {
          plVar32 = (long *)*plVar32;
          uVar34 = (**(code **)(*plVar32 + 0xf8))(plVar32);
          if (((uVar34 & 1) == 0) || (lVar29 = FUN_00c4e600(), *(int *)(lVar29 + 0x12c8) < 1)) {
            (**(code **)(*plVar32 + 0x18))(plVar32,puVar31,lVar30 - (long)puVar31,8);
          }
          else {
            FUN_00c48fe8(plVar32,puVar31,lVar30 - (long)puVar31,8);
          }
        }
      }
      else {
        FUN_0220fc90();
      }
    }
    else if (uVar16 != uVar34) {
      FUN_0220fe98(plVar26 + 0x216,lVar29 + uVar34 * 0x10);
    }
    local_148 = *param_3;
    local_140 = (undefined2)param_3[1];
    local_134 = CONCAT31(local_134._1_3_,local_178);
    local_138 = (undefined1)local_16c;
    local_137 = (undefined2)local_18c;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    local_135 = (undefined1)(local_18c >> 0x10);
    uStack_12f = (undefined2)local_190;
    uStack_130 = (undefined1)local_170;
    uStack_12d = (undefined1)(local_190 >> 0x10);
    uStack_12c = local_180;
    FUN_00c43ef0(&local_110,param_2 + 0x98);
    local_128 = (long *)0x0;
    uStack_120 = 0;
    lVar29 = 0;
    if (param_2 != 0) {
      lVar29 = param_2 + 0x28;
    }
    if (local_110[2] == lVar29) {
      FUN_00e77114(&local_128,&local_110);
    }
    plVar32 = local_110;
    if (local_110 != (long *)0x0) {
      plVar26 = local_110 + 3;
      do {
        sVar22 = (short)*plVar26;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar14) {
          *(short *)plVar26 = sVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar22 == 1) {
        piVar2 = (int *)((long)local_110 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar29 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar29;
          local_70[0] = *plVar32;
          FUN_00c44438(lVar29 + 0x8040,local_70);
        }
      }
      else if (sVar22 == 0) goto LAB_0100ea44;
    }
    local_f8 = (code *)0x0;
    lStack_f0 = local_148;
    local_e8 = CONCAT62(uStack_13e,local_140);
    local_118 = local_150;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    local_100 = (code *)0x0;
    uStack_e0 = (undefined5)CONCAT44(local_134,CONCAT13(local_135,CONCAT21(local_137,local_138)));
    local_d0 = 0;
    uStack_c8 = 0;
    local_db = local_134._1_3_;
    uStack_d8 = (undefined5)
                (CONCAT17(uStack_12c,
                          CONCAT16(uStack_12d,
                                   CONCAT24(uStack_12f,CONCAT13(uStack_130,local_134._1_3_)))) >>
                0x18);
    FUN_00e76d44(&local_d0,&local_128);
    local_110 = (long *)&LAB_022120c0;
    local_108 = FUN_022126a4;
    local_c0 = local_118;
    local_100 = FUN_0221341c;
    local_f8 = FUN_02213470;
    plVar32 = (long *)(lVar25 + 0x88);
    lVar29 = nn::os::GetCurrentThread();
    while (*plVar32 == 0 && *(long *)(lVar25 + 0x90) == 0) {
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar14) {
        *plVar32 = lVar29;
        *(undefined8 *)(lVar25 + 0x90) = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_0100f4a0;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x98));
    do {
      if (*plVar32 != 0 || *(long *)(lVar25 + 0x90) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0x98));
          while (*plVar32 == 0 && *(long *)(lVar25 + 0x90) == 0) {
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar14) {
              *plVar32 = lVar29;
              *(undefined8 *)(lVar25 + 0x90) = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_0100f4a0;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar14) {
        *plVar32 = lVar29;
        *(undefined8 *)(lVar25 + 0x90) = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_0100f4a0:
    pcVar20 = *(code **)(lVar25 + 800);
    if (pcVar20 != (code *)0x0) {
      *(undefined8 *)(lVar25 + 0x328) = 0;
      *(undefined8 *)(lVar25 + 0x330) = 0;
      *(undefined8 *)(lVar25 + 0x318) = 0;
      *(undefined8 *)(lVar25 + 800) = 0;
      (*pcVar20)(lVar25 + 0x338);
    }
    if (local_100 != (code *)0x0) {
      (*local_100)(&lStack_f0,lVar25 + 0x338);
      *(code **)(lVar25 + 0x330) = local_f8;
      *(undefined8 *)(lVar25 + 0x318) = local_110;
      *(code **)(lVar25 + 800) = local_108;
      *(code **)(lVar25 + 0x328) = local_100;
    }
    do {
      lVar29 = *plVar32;
      lVar30 = *(long *)(lVar25 + 0x90);
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar14) {
        *plVar32 = lVar29;
        *(long *)(lVar25 + 0x90) = lVar30;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar24 = *plVar32;
      lVar10 = *(long *)(lVar25 + 0x90);
      if (lVar24 != lVar29 || lVar10 != lVar30) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto LAB_0100f584;
      }
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar14) {
        *plVar32 = 0;
        *(long *)(lVar25 + 0x8c) = lVar30;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar14 = true;
LAB_0100f584:
    if (!bVar14) {
      do {
        lVar29 = *plVar32;
        lVar30 = *(long *)(lVar25 + 0x90);
        if (lVar29 != lVar24 || lVar30 != lVar10) {
          bVar14 = false;
          ClearExclusiveLocal();
          goto joined_r0x0100fa34;
        }
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar32,0x10);
        if (bVar14) {
          *plVar32 = 0;
          *(long *)(lVar25 + 0x8c) = lVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar14 = true;
joined_r0x0100fa34:
      if (!bVar14) {
        do {
          lVar24 = *plVar32;
          lVar10 = *(long *)(lVar25 + 0x90);
          if (lVar24 != lVar29 || lVar10 != lVar30) {
            bVar14 = false;
            ClearExclusiveLocal();
            lVar29 = lVar24;
            lVar30 = lVar10;
            goto joined_r0x0100fa34;
          }
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar14) {
            *plVar32 = 0;
            *(long *)(lVar25 + 0x8c) = lVar30;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar14 = true;
        lVar29 = lVar24;
        lVar30 = lVar10;
        goto joined_r0x0100fa34;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0x98));
    pcVar20 = local_108;
    if (local_108 != (code *)0x0) {
      local_100 = (code *)0x0;
      local_f8 = (code *)0x0;
      local_110 = (long *)0x0;
      local_108 = (code *)0x0;
      (*pcVar20)(&lStack_f0);
    }
    plVar32 = local_128;
    if (local_128 != (long *)0x0) {
      plVar26 = local_128 + 3;
      do {
        sVar22 = (short)*plVar26;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar14) {
          *(short *)plVar26 = sVar22 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar22 == 1) {
        piVar2 = (int *)((long)local_128 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar29 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar29;
          local_70[0] = *plVar32;
          FUN_00c44438(lVar29 + 0x8040,local_70);
        }
      }
      else if (sVar22 == 0) goto LAB_0100ea44;
    }
    goto LAB_0100edf4;
  }
LAB_0100e914:
  do {
    lVar25 = *plVar28;
    lVar29 = *(long *)(param_2 + 0x288);
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar14) {
      *plVar28 = lVar25;
      *(long *)(param_2 + 0x288) = lVar29;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar30 = *plVar28;
    lVar24 = *(long *)(param_2 + 0x288);
    if (lVar30 != lVar25 || lVar24 != lVar29) {
      bVar14 = false;
      ClearExclusiveLocal();
      goto LAB_0100e99c;
    }
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar14) {
      *plVar28 = 0;
      *(long *)(param_2 + 0x284) = lVar29;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar14 = true;
LAB_0100e99c:
  if (!bVar14) {
    do {
      lVar25 = *plVar28;
      lVar29 = *(long *)(param_2 + 0x288);
      if (lVar25 != lVar30 || lVar29 != lVar24) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto joined_r0x0100efc8;
      }
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar14) {
        *plVar28 = 0;
        *(long *)(param_2 + 0x284) = lVar24;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar14 = true;
joined_r0x0100efc8:
    if (!bVar14) {
      do {
        lVar30 = *plVar28;
        lVar24 = *(long *)(param_2 + 0x288);
        if (lVar30 != lVar25 || lVar24 != lVar29) {
          bVar14 = false;
          ClearExclusiveLocal();
          lVar25 = lVar30;
          lVar29 = lVar24;
          goto joined_r0x0100efc8;
        }
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar14) {
          *plVar28 = 0;
          *(long *)(param_2 + 0x284) = lVar29;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar14 = true;
      lVar25 = lVar30;
      lVar29 = lVar24;
      goto joined_r0x0100efc8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x290));
  if (local_78 != (long *)0x0) {
    plVar28 = local_78 + 5;
    do {
      lVar25 = *plVar28;
      iVar8 = (int)lVar25 + -1;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar14) {
        *(int *)plVar28 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    else if ((int)lVar25 == 0) {
      pcVar9 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar11 = "DecrementReferenceInternal";
      pcVar12 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar13 = "Reference counter underflows.";
LAB_0100f0a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar9,pcVar11,pcVar12,0x58,pcVar13);
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x60))();
  }
  return;
code_r0x0100eb80:
  sVar22 = sVar3;
  if (sVar3 == 0) goto LAB_0100e914;
  goto LAB_0100eb54;
}


