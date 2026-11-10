/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019fa9b4; name: FUN_019fa9b4
 */


void FUN_019fa9b4(long param_1,undefined8 param_2)

{
  short *psVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  code *pcVar13;
  long lVar14;
  bool bVar15;
  short sVar16;
  long lVar17;
  code *local_130;
  code *local_128;
  undefined1 *local_120;
  long *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long *local_100;
  uint *puStack_f8;
  undefined1 **local_f0;
  long *plStack_e8;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 *local_78 [2];
  undefined1 *local_68;
  uint local_5c;
  undefined8 local_58;
  
  local_130 = (code *)0x261133e138a7696b;
  local_128 = (code *)0x3c71d7f;
  local_120 = (undefined1 *)0x6;
  local_118 = (long *)0x0;
  uVar8 = FUN_01470908(param_2,&local_130);
  local_5c = (uint)(uVar8 >> 0x20);
  if ((uVar8 & 0xff) == 0) {
    local_5c = 0xffffffff;
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (-1 < (int)local_5c) {
    if (local_5c < 0x1a) {
      local_68 = (&PTR_DAT_04594d60)[(int)local_5c];
    }
    else {
      local_68 = &DAT_03c886bc;
    }
    puVar9 = (undefined8 *)FUN_0140f310(param_2);
    local_98 = *puVar9;
    uStack_90 = puVar9[1];
    local_88 = puVar9[2];
    local_80 = (long *)puVar9[3];
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x18))();
    }
    FUN_0140f318(local_78,param_2,&local_98);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_78[0] != (undefined8 *)0x0) {
      puVar9 = local_78[0];
      if (*(short *)((long)local_78[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_78[0] + 0x1a);
        sVar16 = *(short *)((long)local_78[0] + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar16) {
            cVar6 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar15) {
              *psVar1 = sVar16 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_019fab04;
            bVar15 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_019fab04:
            bVar15 = false;
          }
          if (bVar15) {
            lVar14 = local_78[0][2];
            if (lVar14 == 0) goto LAB_019fad2c;
            local_a0 = FUN_01410e94(lVar14 + 0xe0,&local_130);
            if (local_a0 == 0) goto LAB_019fad14;
            plVar12 = (long *)(lVar14 + 0xe8);
            lVar17 = *plVar12;
            lVar10 = nn::os::GetCurrentThread();
            if (lVar10 != lVar17) {
              lVar10 = nn::os::GetCurrentThread();
              bVar15 = false;
              goto LAB_019faed4;
            }
            bVar15 = true;
            goto LAB_019fab58;
          }
          sVar16 = sVar4;
        } while (sVar4 != 0);
LAB_019fad28:
        puVar9 = local_78[0];
        if (local_78[0] == (undefined8 *)0x0) {
          return;
        }
      }
LAB_019fad2c:
      psVar1 = (short *)(puVar9 + 3);
      do {
        sVar16 = *psVar1;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
        piVar2 = (int *)((long)puVar9 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar6 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_130 = (code *)*puVar9;
          FUN_00c44438(lVar14 + 0x8040,&local_130);
        }
      }
      else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
LAB_019faed4:
  if (*plVar12 == 0) goto code_r0x019faedc;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0xf0));
  bVar15 = false;
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0xf0));
        while (*plVar12 == 0) {
          cVar6 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar15) {
            *plVar12 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
          bVar15 = false;
          if (cVar6 == '\0') goto LAB_019fab58;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_019fab58:
  plVar11 = (long *)FUN_02132b90(*(undefined8 *)(lVar14 + 0x100),*(undefined8 *)(lVar14 + 0x108));
  if ((*(long **)(lVar14 + 0x108) == plVar11) || (*plVar11 == 0)) {
    plVar11 = (long *)FUN_02132b90(*(undefined8 *)(lVar14 + 0x138),*(undefined8 *)(lVar14 + 0x140));
    if (*(long **)(lVar14 + 0x140) == plVar11) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      if (*plVar11 != 0) {
        lVar10 = *plVar11 + -0x20;
      }
    }
  }
  else {
    lVar10 = *plVar11 + -0x20;
  }
  if (!bVar15) {
    *(undefined8 *)(lVar14 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0xf0));
  }
  local_a8 = lVar10;
  if (lVar10 != 0) {
    lVar17 = *plVar12;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar17) {
      lVar10 = nn::os::GetCurrentThread();
LAB_019fabb8:
      if (*plVar12 == 0) goto code_r0x019fabc0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0xf0));
      do {
        if (*plVar12 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0xf0));
            while (*plVar12 == 0) {
              cVar6 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar15) {
                *plVar12 = lVar10;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_019fabc8;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar15) {
          *plVar12 = lVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_019fabc8:
      bVar15 = false;
      goto LAB_019fabcc;
    }
    bVar15 = true;
LAB_019fabcc:
    plVar12 = (long *)FUN_02132cb0(*(undefined8 *)(lVar14 + 0x100),*(undefined8 *)(lVar14 + 0x108));
    if ((*(long **)(lVar14 + 0x108) == plVar12) || (*plVar12 == 0)) {
      plVar12 = (long *)FUN_02132cb0(*(undefined8 *)(lVar14 + 0x138),*(undefined8 *)(lVar14 + 0x140)
                                    );
      if (*(long **)(lVar14 + 0x140) == plVar12) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        if (*plVar12 != 0) {
          lVar10 = *plVar12 + -0x20;
        }
      }
    }
    else {
      lVar10 = *plVar12 + -0x20;
    }
    if (!bVar15) {
      *(undefined8 *)(lVar14 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0xf0));
    }
    if (lVar10 != 0) {
      uStack_108 = *(undefined8 *)(param_1 + 8);
      local_100 = &local_a8;
      puStack_f8 = &local_5c;
      local_f0 = &local_68;
      plStack_e8 = &local_a0;
      local_130 = FUN_0133d97c;
      local_128 = FUN_02b240a4;
      local_120 = &LAB_02b240a8;
      local_118 = (long *)&LAB_02b240bc;
      puVar9 = *(undefined8 **)(lVar10 + 0x178);
      puVar3 = *(undefined8 **)(lVar10 + 0x180);
      pcVar13 = FUN_02b240a4;
      local_110 = param_2;
      if (puVar9 != puVar3) {
        local_58 = *puVar9;
        FUN_0133d97c(&local_110,&local_58);
        if (puVar9 + 1 != puVar3) {
          local_58 = puVar9[1];
          (*local_130)(&local_110,&local_58);
          if (puVar9 + 2 != puVar3) {
            local_58 = puVar9[2];
            (*local_130)(&local_110,&local_58);
            if (puVar9 + 3 != puVar3) {
              local_58 = puVar9[3];
              (*local_130)(&local_110,&local_58);
              for (puVar9 = puVar9 + 4; puVar9 != puVar3; puVar9 = puVar9 + 1) {
                local_58 = *puVar9;
                (*local_130)(&local_110,&local_58);
              }
            }
          }
        }
        pcVar13 = local_128;
        if (local_128 == (code *)0x0) goto LAB_019fad14;
      }
      local_120 = (undefined1 *)0x0;
      local_118 = (long *)0x0;
      local_130 = (code *)0x0;
      local_128 = (code *)0x0;
      (*pcVar13)(&local_110);
    }
  }
LAB_019fad14:
  (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))((long *)(lVar14 + -0x28));
  goto LAB_019fad28;
code_r0x019faedc:
  cVar6 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar5) {
    *plVar12 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_019fab58;
  goto LAB_019faed4;
code_r0x019fabc0:
  cVar6 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar15) {
    *plVar12 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_019fabc8;
  goto LAB_019fabb8;
}


