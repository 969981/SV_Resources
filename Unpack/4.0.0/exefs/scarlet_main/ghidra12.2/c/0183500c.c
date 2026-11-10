/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0183500c; name: FUN_0183500c
 */


void FUN_0183500c(long param_1,undefined2 *param_2,long *param_3,uint param_4)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  bool bVar13;
  long lVar14;
  long local_208 [13];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  uint local_190;
  undefined4 uStack_18c;
  undefined1 local_188;
  long *local_180;
  undefined8 auStack_178 [2];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined8 local_108;
  undefined1 local_100;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined1 local_d4;
  long *local_d0;
  long *local_c8;
  undefined8 *local_c0 [2];
  undefined8 *local_b0 [2];
  undefined8 *local_a0 [2];
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80 [2];
  long local_70 [2];
  
  if ((*param_3 != 0) && (local_70[0] = *(long *)(*param_3 + 0x10), local_70[0] != 0)) {
    local_70[0] = local_70[0] + -0x28;
    local_180 = local_70;
    FUN_018372d8(local_80,&local_180);
    lVar12 = local_70[0];
    plVar10 = (long *)(local_70[0] + 0x110);
    lVar14 = *plVar10;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 != lVar14) {
      lVar9 = nn::os::GetCurrentThread();
LAB_0183508c:
      if (*plVar10 == 0) goto code_r0x01835094;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
      do {
        if (*plVar10 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
            while (*plVar10 == 0) {
              cVar5 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar13) {
                *plVar10 = lVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_0183509c;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar13) {
          *plVar10 = lVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_0183509c:
      bVar13 = false;
      goto LAB_018350a0;
    }
    bVar13 = true;
LAB_018350a0:
    plVar10 = (long *)FUN_01835b80(lVar12 + 0x128);
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)FUN_01835b80(lVar12 + 0x160);
    }
    if (!bVar13) {
      *(undefined8 *)(lVar12 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x118));
    }
    if (plVar10 == (long *)0x0) {
      local_90 = (undefined8 *)0x0;
      uStack_88 = 0;
    }
    else {
      lVar12 = plVar10[0x13];
      if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        *(undefined8 *)(lVar12 + 8) = uVar11;
        *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      local_180 = (long *)0x0;
      auStack_178[0] = 0;
      FUN_00c43ef0(&local_180,plVar10 + 0x13);
      local_90 = (undefined8 *)0x0;
      uStack_88 = 0;
      if ((long *)local_180[2] == plVar10 + 5) {
        FUN_00d94688(&local_90,&local_180);
      }
      plVar6 = local_180;
      if (local_180 != (long *)0x0) {
        plVar2 = local_180 + 3;
        do {
          sVar4 = (short)*plVar2;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar13) {
            *(short *)plVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_180 + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar13) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_208[0] = *plVar6;
            FUN_00c44438(lVar12 + 0x8040,local_208);
          }
        }
        else if (sVar4 == 0) goto LAB_018354f8;
      }
      lVar12 = plVar10[0x13];
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
      }
      else if (sVar4 == 0) goto LAB_018353d4;
    }
    local_180 = local_70;
    FUN_01836f94(local_a0,&local_180);
    local_180 = local_70;
    FUN_01835fcc(local_b0,&local_180);
    local_180 = local_70;
    FUN_018375f8(local_c0,&local_180);
    if ((local_90 == (undefined8 *)0x0) || (*(short *)((long)local_90 + 0x1a) == 0)) {
      local_c8 = (long *)0x0;
    }
    else {
      FUN_018368ac(&local_c8,*(undefined8 *)(param_1 + 8),&local_90);
      if (local_c8 != (long *)0x0) {
        FUN_01839634();
      }
    }
    if ((local_a0[0] == (undefined8 *)0x0) || (*(short *)((long)local_a0[0] + 0x1a) == 0)) {
      local_d0 = (long *)0x0;
    }
    else {
      FUN_01835abc(&local_d0,*(undefined8 *)(param_1 + 8),param_3);
    }
    local_180 = (long *)((ulong)local_180 & 0xffffffffffff0000);
    memset(auStack_178,0,0x74);
    local_f8 = 0;
    local_f6 = 0;
    local_108 = CONCAT44(0x904,(undefined4)local_108);
    local_100 = 1;
    local_f4 = 0;
    local_ec = 0;
    local_e4 = 0;
    local_dc = 0;
    local_d4 = 0;
    local_208[0] = CONCAT62(local_208[0]._2_6_,*param_2);
    local_208[1] = 0;
    local_208[2] = 0;
    FUN_00ca1a48(local_208 + 1,param_3);
    local_208[3] = 0;
    local_208[4] = 0;
    FUN_00c6c994(local_208 + 3,local_80);
    local_208[5] = 0;
    local_208[6] = 0;
    FUN_00d4ca00(local_208 + 5,&local_90);
    local_208[7] = 0;
    local_208[8] = 0;
    FUN_01277088(local_208 + 7,local_a0);
    local_208[9] = 0;
    local_208[10] = 0;
    FUN_01084328(local_208 + 9,local_b0);
    local_208[0xb] = 0;
    local_208[0xc] = 0;
    FUN_0112bdf8(local_208 + 0xb,local_c0);
    FUN_01835e4c(auStack_1a0,&local_c8);
    FUN_01835f0c(auStack_198,&local_d0);
    uStack_18c = 0x904;
    local_188 = 1;
    local_180 = (long *)CONCAT62(local_180._2_6_,(undefined2)local_208[0]);
    local_190 = param_4;
    FUN_00ca1ea4(auStack_178,local_208 + 1);
    FUN_00cacc64(auStack_168,local_208 + 3);
    FUN_00d48230(auStack_158,local_208 + 5);
    FUN_0127739c(auStack_148,local_208 + 7);
    FUN_0108458c(auStack_138,local_208 + 9);
    FUN_010f6758(auStack_128,local_208 + 0xb);
    FUN_00dea484(auStack_118,auStack_1a0);
    FUN_00dea51c(auStack_110,auStack_198);
    local_108 = CONCAT44(uStack_18c,local_190);
    local_100 = local_188;
    FUN_01836250(local_208);
    if ((param_4 < 7) && ((1 << (ulong)(param_4 & 0x1f) & 0x46U) != 0)) {
      local_100 = 0;
    }
    FUN_01835a68(param_1 + 0x4058,&local_180);
    FUN_01836250(&local_180);
    if (local_d0 != (long *)0x0) {
      lVar12 = local_d0[6];
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*local_d0 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_018353d4;
    }
    if (local_c8 != (long *)0x0) {
      lVar12 = local_c8[6];
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*local_c8 + 0x50))();
      }
      else if (sVar4 == 0) {
LAB_018353d4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (local_c0[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_c0[0] + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_c0[0] + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_180 = (long *)*local_c0[0];
          FUN_00c44438(lVar12 + 0x8040,&local_180);
        }
      }
      else if (sVar4 == 0) goto LAB_018354f8;
    }
    if (local_b0[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_b0[0] + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_b0[0] + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_180 = (long *)*local_b0[0];
          FUN_00c44438(lVar12 + 0x8040,&local_180);
        }
      }
      else if (sVar4 == 0) goto LAB_018354f8;
    }
    if (local_a0[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a0[0] + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_a0[0] + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_180 = (long *)*local_a0[0];
          FUN_00c44438(lVar12 + 0x8040,&local_180);
        }
      }
      else if (sVar4 == 0) goto LAB_018354f8;
    }
    puVar7 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_90 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_90 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_180 = (long *)*puVar7;
          FUN_00c44438(lVar12 + 0x8040,&local_180);
        }
      }
      else if (sVar4 == 0) goto LAB_018354f8;
    }
    if (local_80[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80[0] + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_80[0] + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_180 = (long *)*local_80[0];
          FUN_00c44438(lVar12 + 0x8040,&local_180);
        }
      }
      else if (sVar4 == 0) {
LAB_018354f8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x01835094:
  cVar5 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar13) {
    *plVar10 = lVar9;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_0183509c;
  goto LAB_0183508c;
}


