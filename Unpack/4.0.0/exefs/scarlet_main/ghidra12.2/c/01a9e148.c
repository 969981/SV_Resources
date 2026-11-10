/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a9e148; name: FUN_01a9e148
 */


void FUN_01a9e148(undefined8 param_1)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  bool bVar20;
  short sVar21;
  ulong *puVar22;
  long *plVar23;
  undefined1 local_120 [8];
  undefined8 local_118;
  char *pcStack_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  ulong *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  ulong *local_60 [2];
  long *local_38;
  
  puVar8 = (undefined8 *)FUN_0140f310();
  local_80 = *puVar8;
  uStack_78 = puVar8[1];
  local_70 = puVar8[2];
  local_68 = (long *)puVar8[3];
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  FUN_0140f318(local_60,param_1,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_60[0] != (ulong *)0x0) {
    puVar22 = local_60[0];
    if (*(short *)((long)local_60[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_60[0] + 0x1a);
      sVar21 = *(short *)((long)local_60[0] + 0x1a);
LAB_01a9e1ec:
      sVar5 = *psVar1;
      if (sVar5 == sVar21) {
        cVar6 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar21 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_01a9e210;
        bVar20 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a9e210:
        bVar20 = false;
      }
      if (!bVar20) goto code_r0x01a9e218;
      uVar17 = local_60[0][2];
      if (uVar17 == 0) goto LAB_01a9e318;
      local_90 = (ulong *)0x0;
      uStack_88 = 0;
      local_d8 = (undefined8 *)&DAT_94ed70272cac328;
      pcStack_d0 = "Target";
      local_c8 = 6;
      local_c0 = (long *)0x0;
      FUN_01315eac(&local_b8,param_1,&local_d8);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      if ((char)local_b8 != '\0') {
        local_f8 = local_b0;
        uStack_f0 = uStack_a8;
        local_e8 = local_a0;
        local_e0 = local_98;
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x18))();
        }
        FUN_0140f318(&local_d8,param_1,&local_f8);
        FUN_00d0a34c(&local_90,&local_d8);
        puVar8 = local_d8;
        if (local_d8 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_d8 + 3);
          do {
            sVar21 = *psVar1;
            cVar6 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar20) {
              *psVar1 = sVar21 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar21 == 1) {
            piVar3 = (int *)((long)local_d8 + 0x1c);
            do {
              iVar7 = *piVar3;
              cVar6 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar20) {
                *piVar3 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar18 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar18;
              local_118 = *puVar8;
              FUN_00c44438(lVar18 + 0x8040,&local_118);
            }
          }
          else if (sVar21 == 0) goto LAB_01a9e338;
        }
        if (local_e0 != (long *)0x0) {
          (**(code **)(*local_e0 + 0x20))();
        }
        if ((char)local_b8 != '\0') {
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
          local_b8 = local_b8 & 0xffffffffffffff00;
        }
      }
      lVar18 = FUN_017d3d70(uVar17 + 0xe0,&local_b8);
      if (((lVar18 != 0) && (local_90 != (ulong *)0x0)) && (*(short *)((long)local_90 + 0x1a) != 0))
      {
        psVar1 = (short *)((long)local_90 + 0x1a);
        sVar21 = *(short *)((long)local_90 + 0x1a);
        do {
          sVar5 = *psVar1;
          if (sVar5 == sVar21) {
            cVar6 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar20) {
              *psVar1 = sVar21 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_01a9e56c;
            bVar20 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01a9e56c:
            bVar20 = false;
          }
          if (bVar20) {
            uVar19 = local_90[2];
            if (uVar19 != 0) {
              lVar9 = FUN_0104b474(uVar19 + 0xe0,&local_b8);
              if (lVar9 != 0) {
                plVar23 = *(long **)(lVar9 + 0x170);
                if (plVar23 != (long *)0x0) {
                  lVar9 = plVar23[6];
                  if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("m_object != nullptr","AddReference",
                               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                               ,0x3d);
                  }
                  psVar1 = (short *)(lVar9 + 0x1a);
                  do {
                    sVar21 = *psVar1;
                    cVar6 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar20) {
                      *psVar1 = sVar21 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (sVar21 == 0) {
                    uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
                    *(undefined8 *)(lVar9 + 8) = uVar11;
                    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
                  }
                  else if (sVar21 == -1) {
                    pcVar12 = "count != 0";
                    pcVar13 = "AddReference";
                    pcVar14 = 
                    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                    ;
                    pcVar15 = "Reference counter overflows.";
                    goto LAB_01a9e8e0;
                  }
                }
                local_d8 = (undefined8 *)0x5bfad84d1b58751c;
                pcStack_d0 = "PicturePaneName";
                local_c8 = 0xf;
                local_c0 = (long *)0x0;
                FUN_01315eac(&local_b8,param_1,&local_d8);
                if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3e28);
                }
                local_118 = 0x7f0b22bc9dcc4a70;
                pcStack_110 = "TextureIndex";
                puVar8 = (undefined8 *)PTR_DAT_047d3e30;
                if ((char)local_b8 != '\0') {
                  puVar8 = &local_b0;
                }
                local_108 = 0xc;
                local_100 = (long *)0x0;
                uVar10 = FUN_01470908(param_1,&local_118);
                uVar16 = 0;
                if ((uVar10 & 0xff) != 0) {
                  uVar16 = (undefined4)(uVar10 >> 0x20);
                }
                FUN_02129324(&local_38,lVar18);
                local_120[0] = 0;
                FUN_0113c2d0(plVar23,puVar8,uVar16,&local_38,local_120);
                if (local_38 != (long *)0x0) {
                  plVar4 = local_38 + 5;
                  do {
                    lVar18 = *plVar4;
                    iVar7 = (int)lVar18 + -1;
                    cVar6 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                    if (bVar20) {
                      *(int *)plVar4 = iVar7;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar7 == 0) {
                    (**(code **)(*local_38 + 0x10))();
                  }
                  else if ((int)lVar18 == 0) {
                    pcVar12 = "count != std::numeric_limits<uint32_t>::max()";
                    pcVar13 = "DecrementReferenceInternal";
                    pcVar14 = 
                    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                    ;
                    pcVar15 = "Reference counter underflows.";
LAB_01a9e8e0:
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl(pcVar12,pcVar13,pcVar14,0x58,pcVar15);
                  }
                }
                if (local_100 != (long *)0x0) {
                  (**(code **)(*local_100 + 0x20))();
                }
                if ((char)local_b8 != '\0') {
                  if (local_98 != (long *)0x0) {
                    (**(code **)(*local_98 + 0x20))();
                  }
                  local_b8 = local_b8 & 0xffffffffffffff00;
                }
                if (local_c0 != (long *)0x0) {
                  (**(code **)(*local_c0 + 0x20))();
                }
                if (plVar23 != (long *)0x0) {
                  lVar18 = plVar23[6];
                  psVar1 = (short *)(lVar18 + 0x1a);
                  do {
                    sVar21 = *psVar1;
                    cVar6 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar20) {
                      *psVar1 = sVar21 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (sVar21 == 1) {
                    *(undefined8 *)(lVar18 + 0x10) = 0;
                    (**(code **)(*plVar23 + 0x50))(plVar23);
                  }
                  else if (sVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                               ,0x60,"Reference counter underflows.");
                  }
                }
              }
              (**(code **)(*(long *)(uVar19 - 0x28) + 0x60))((long *)(uVar19 - 0x28));
            }
            break;
          }
          sVar21 = sVar5;
        } while (sVar5 != 0);
      }
      puVar22 = local_90;
      if (local_90 != (ulong *)0x0) {
        puVar2 = local_90 + 3;
        do {
          sVar21 = (short)*puVar2;
          cVar6 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar20) {
            *(short *)puVar2 = sVar21 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar21 == 1) {
          piVar3 = (int *)((long)local_90 + 0x1c);
          do {
            iVar7 = *piVar3;
            cVar6 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar20) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_b8 = *puVar22;
            FUN_00c44438(lVar18 + 0x8040,&local_b8);
          }
        }
        else if (sVar21 == 0) goto LAB_01a9e338;
      }
      (**(code **)(*(long *)(uVar17 - 0x28) + 0x60))((long *)(uVar17 - 0x28));
LAB_01a9e314:
      puVar22 = local_60[0];
      if (local_60[0] == (ulong *)0x0) {
        return;
      }
    }
LAB_01a9e318:
    puVar2 = puVar22 + 3;
    do {
      sVar21 = (short)*puVar2;
      cVar6 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar20) {
        *(short *)puVar2 = sVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar21 == 1) {
      piVar3 = (int *)((long)puVar22 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar6 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar20) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_b8 = *puVar22;
        FUN_00c44438(lVar18 + 0x8040,&local_b8);
      }
    }
    else if (sVar21 == 0) {
LAB_01a9e338:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x01a9e218:
  sVar21 = sVar5;
  if (sVar5 == 0) goto LAB_01a9e314;
  goto LAB_01a9e1ec;
}


