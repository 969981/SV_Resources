/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aba1f0; name: FUN_01aba1f0
 */


void FUN_01aba1f0(undefined8 param_1)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  short sVar13;
  ulong *puVar14;
  long *plVar15;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined8 *local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  ulong *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  ulong *local_50 [2];
  undefined8 local_28;
  
  puVar7 = (undefined8 *)FUN_0140f310();
  local_70 = *puVar7;
  uStack_68 = puVar7[1];
  local_60 = puVar7[2];
  local_58 = (long *)puVar7[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  FUN_0140f318(local_50,param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_50[0] != (ulong *)0x0) {
    puVar14 = local_50[0];
    if (*(short *)((long)local_50[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50[0] + 0x1a);
      sVar13 = *(short *)((long)local_50[0] + 0x1a);
LAB_01aba28c:
      sVar4 = *psVar1;
      if (sVar4 == sVar13) {
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01aba2b0;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01aba2b0:
        bVar12 = false;
      }
      if (!bVar12) goto code_r0x01aba2b8;
      uVar9 = local_50[0][2];
      if (uVar9 == 0) goto LAB_01aba3b8;
      local_80 = (ulong *)0x0;
      uStack_78 = 0;
      local_c8 = (undefined8 *)&DAT_94ed70272cac328;
      pcStack_c0 = "Target";
      local_b8 = 6;
      local_b0 = (long *)0x0;
      FUN_01315eac(&local_a8,param_1,&local_c8);
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      if ((char)local_a8 != '\0') {
        local_e8 = local_a0;
        uStack_e0 = uStack_98;
        local_d8 = local_90;
        local_d0 = local_88;
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x18))();
        }
        FUN_0140f318(&local_c8,param_1,&local_e8);
        FUN_00d0a34c(&local_80,&local_c8);
        puVar7 = local_c8;
        if (local_c8 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_c8 + 3);
          do {
            sVar13 = *psVar1;
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar12) {
              *psVar1 = sVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar13 == 1) {
            piVar3 = (int *)((long)local_c8 + 0x1c);
            do {
              iVar6 = *piVar3;
              cVar5 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar12) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar6 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_28 = *puVar7;
              FUN_00c44438(lVar10 + 0x8040,&local_28);
            }
          }
          else if (sVar13 == 0) goto LAB_01aba3d8;
        }
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
        if ((char)local_a8 != '\0') {
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
          local_a8 = local_a8 & 0xffffffffffffff00;
        }
      }
      lVar10 = FUN_01491340(uVar9 + 0xe0,&local_a8);
      if (((lVar10 != 0) && (local_80 != (ulong *)0x0)) && (*(short *)((long)local_80 + 0x1a) != 0))
      {
        psVar1 = (short *)((long)local_80 + 0x1a);
        sVar13 = *(short *)((long)local_80 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar13) {
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar12) {
              *psVar1 = sVar13 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_01aba608;
            bVar12 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01aba608:
            bVar12 = false;
          }
          if (bVar12) {
            uVar11 = local_80[2];
            if (uVar11 != 0) {
              lVar10 = FUN_0104b474(uVar11 + 0xe0,&local_a8);
              if (lVar10 != 0) {
                plVar15 = *(long **)(lVar10 + 0x170);
                if (plVar15 != (long *)0x0) {
                  lVar10 = plVar15[6];
                  if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("m_object != nullptr","AddReference",
                               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                               ,0x3d);
                  }
                  psVar1 = (short *)(lVar10 + 0x1a);
                  do {
                    sVar13 = *psVar1;
                    cVar5 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar12) {
                      *psVar1 = sVar13 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (sVar13 == 0) {
                    uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
                    *(undefined8 *)(lVar10 + 8) = uVar8;
                    *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
                  }
                  else if (sVar13 == -1) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != 0","AddReference",
                               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                               ,0x58,"Reference counter overflows.");
                  }
                }
                local_c8 = (undefined8 *)0x5bfad84d1b58751c;
                pcStack_c0 = "PicturePaneName";
                local_b8 = 0xf;
                local_b0 = (long *)0x0;
                FUN_01315eac(&local_a8,param_1,&local_c8);
                if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
                  FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3e28);
                }
                puVar7 = (undefined8 *)PTR_DAT_047d3e30;
                if ((char)local_a8 != '\0') {
                  puVar7 = &local_a0;
                }
                FUN_0113cf30(plVar15,puVar7);
                if ((char)local_a8 != '\0') {
                  if (local_88 != (long *)0x0) {
                    (**(code **)(*local_88 + 0x20))();
                  }
                  local_a8 = local_a8 & 0xffffffffffffff00;
                }
                if (local_b0 != (long *)0x0) {
                  (**(code **)(*local_b0 + 0x20))();
                }
                if (plVar15 != (long *)0x0) {
                  lVar10 = plVar15[6];
                  psVar1 = (short *)(lVar10 + 0x1a);
                  do {
                    sVar13 = *psVar1;
                    cVar5 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar12) {
                      *psVar1 = sVar13 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (sVar13 == 1) {
                    *(undefined8 *)(lVar10 + 0x10) = 0;
                    (**(code **)(*plVar15 + 0x50))(plVar15);
                  }
                  else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                               ,0x60,"Reference counter underflows.");
                  }
                }
              }
              (**(code **)(*(long *)(uVar11 - 0x28) + 0x60))((long *)(uVar11 - 0x28));
            }
            break;
          }
          sVar13 = sVar4;
        } while (sVar4 != 0);
      }
      puVar14 = local_80;
      if (local_80 != (ulong *)0x0) {
        puVar2 = local_80 + 3;
        do {
          sVar13 = (short)*puVar2;
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar12) {
            *(short *)puVar2 = sVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar13 == 1) {
          piVar3 = (int *)((long)local_80 + 0x1c);
          do {
            iVar6 = *piVar3;
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar12) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_a8 = *puVar14;
            FUN_00c44438(lVar10 + 0x8040,&local_a8);
          }
        }
        else if (sVar13 == 0) goto LAB_01aba3d8;
      }
      (**(code **)(*(long *)(uVar9 - 0x28) + 0x60))((long *)(uVar9 - 0x28));
LAB_01aba3b4:
      puVar14 = local_50[0];
      if (local_50[0] == (ulong *)0x0) {
        return;
      }
    }
LAB_01aba3b8:
    puVar2 = puVar14 + 3;
    do {
      sVar13 = (short)*puVar2;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar12) {
        *(short *)puVar2 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)puVar14 + 0x1c);
      do {
        iVar6 = *piVar3;
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar12) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_a8 = *puVar14;
        FUN_00c44438(lVar10 + 0x8040,&local_a8);
      }
    }
    else if (sVar13 == 0) {
LAB_01aba3d8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x01aba2b8:
  sVar13 = sVar4;
  if (sVar4 == 0) goto LAB_01aba3b4;
  goto LAB_01aba28c;
}


