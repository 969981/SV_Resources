/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aac150; name: FUN_01aac150
 */


undefined8 FUN_01aac150(undefined8 param_1,ulong *param_2,undefined8 *param_3,uint *param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;
  ushort *puVar17;
  ushort uVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  long *local_e0;
  undefined8 local_d8;
  long *local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  long *local_b0;
  undefined1 *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  if (param_4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("pArg","InputTextCheckFunction",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/cmn/applet/software_keyboard.cpp"
               ,0x69);
  }
  *param_2 = 0;
  uVar10 = FUN_01aacb30(*param_3);
  uVar16 = *param_4;
  if ((uVar10 & 1) == 0) {
    if ((uVar16 >> 3 & 1) == 0) {
      plVar20 = (long *)0x0;
LAB_01aac2a4:
      if ((uVar16 >> 1 & 1) != 0) {
        FUN_019205c0(*(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 0x148));
        iVar9 = FUN_019a5bf0(*param_3,*param_4 >> 4 & 1);
        if (iVar9 != 0) {
          if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8ac0);
          }
          uVar19 = *(undefined8 *)PTR_DAT_047d8ac8;
          local_60 = 8;
          local_58 = (long *)0x0;
          local_70 = &DAT_ce02c237861a2a94;
          pcStack_68 = "strinput";
          local_78 = (long *)0xb9e4e36c5c7aa3e9;
          *(undefined8 *)PTR_DAT_047d8ad0 = uVar19;
          FUN_00f1203c(&local_d0,uVar19,&local_70,&local_78,0);
          if (plVar20 != (long *)0x0) {
            plVar11 = plVar20 + 5;
            do {
              lVar21 = *plVar11;
              iVar9 = (int)lVar21 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *(int *)plVar11 = iVar9;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
            else if ((int)lVar21 == 0) goto LAB_01aac80c;
          }
          plVar20 = local_d0;
          local_d0 = (long *)0x0;
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x20))();
          }
          FUN_01920670();
          goto LAB_01aac6f8;
        }
        FUN_01920670();
        uVar16 = *param_4;
      }
      if ((uVar16 >> 5 & 1) != 0) {
        puVar17 = (ushort *)*param_3;
        uVar18 = *puVar17;
        if (uVar18 != 0) {
          uVar16 = (uint)(uVar18 - 0x30 < 10 || (ushort)(uVar18 + 0xf0) < 10);
          uVar18 = puVar17[1];
          if (uVar18 != 0) {
            uVar16 = uVar16 + (uVar18 - 0x30 < 10 || (ushort)(uVar18 + 0xf0) < 10);
            uVar18 = puVar17[2];
            if (uVar18 != 0) {
              uVar16 = uVar16 + (uVar18 - 0x30 < 10 || (ushort)(uVar18 + 0xf0) < 10);
              uVar18 = puVar17[3];
              if (uVar18 != 0) {
                puVar17 = puVar17 + 4;
                do {
                  uVar16 = uVar16 + ((ushort)(uVar18 - 0x30) < 10 || (ushort)(uVar18 + 0xf0) < 10);
                  uVar18 = *puVar17;
                  puVar17 = puVar17 + 1;
                } while (uVar18 != 0);
              }
            }
          }
          if (5 < uVar16) {
            if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d8ac0);
            }
            uVar19 = *(undefined8 *)PTR_DAT_047d8ac8;
            local_60 = 8;
            local_58 = (long *)0x0;
            local_70 = &DAT_ce02c237861a2a94;
            pcStack_68 = "strinput";
            local_78 = (long *)0x4c3c73abc20b23ca;
            *(undefined8 *)PTR_DAT_047d8ad0 = uVar19;
            FUN_00f1203c(&local_d0,uVar19,&local_70,&local_78,0);
            if (plVar20 != (long *)0x0) {
              plVar11 = plVar20 + 5;
              do {
                lVar21 = *plVar11;
                iVar9 = (int)lVar21 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar5) {
                  *(int *)plVar11 = iVar9;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar9 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
              }
              else if ((int)lVar21 == 0) goto LAB_01aac80c;
            }
            goto LAB_01aac49c;
          }
        }
      }
      uVar19 = 0;
      goto joined_r0x01aac40c;
    }
    if (((*PTR_DAT_047db110 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047db110), iVar9 != 0)) {
      FUN_00100190(&LAB_02a44fb4,PTR_DAT_047db118,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047db110);
    }
    uVar19 = *(undefined8 *)PTR_DAT_047db118;
    *(undefined8 *)PTR_DAT_047db120 = uVar19;
    puVar7 = PTR_DAT_047d3a88;
    local_70 = (undefined1 *)*param_3;
    FUN_01a43ab4(&local_78,*(undefined8 *)(*(long *)PTR_DAT_047d3a88 + 8),&local_70);
    FUN_0168d1c0();
    FUN_0147ea90();
    uVar8 = FUN_01fb5eb4();
    FUN_01fb5ed8(&local_70,uVar19);
    uVar22 = *(undefined8 *)(*(long *)puVar7 + 8);
    local_88 = local_78;
    if (local_78 != (long *)0x0) {
      plVar20 = local_78 + 5;
      do {
        lVar21 = *plVar20;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar5) {
          *(int *)plVar20 = (int)lVar21 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar21 == -1) goto LAB_01aacac0;
    }
    local_a8 = local_70;
    pcStack_a0 = pcStack_68;
    local_98 = local_60;
    local_90 = local_58;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
    FUN_0196c2fc(&local_80,uVar19,uVar22,&local_88,&local_a8,uVar8);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if (local_88 == (long *)0x0) {
LAB_01aac27c:
      if (local_80 == (long *)0x0) {
        plVar20 = (long *)0x0;
        bVar5 = true;
      }
      else {
        if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8ac0);
        }
        uVar19 = *(undefined8 *)PTR_DAT_047d8ac8;
        local_c0 = 8;
        local_b8 = (long *)0x0;
        local_d0 = (long *)&DAT_ce02c237861a2a94;
        pcStack_c8 = "strinput";
        local_d8 = 0xb9e4e26c5c7aa236;
        *(undefined8 *)PTR_DAT_047d8ad0 = uVar19;
        FUN_00f1203c(&local_b0,uVar19,&local_d0,&local_d8,0);
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
        local_d0 = *(long **)(*(long *)puVar7 + 8);
        plVar11 = (long *)FUN_01409590(&local_d8,local_d0,&local_d0);
        if (plVar11 != (long *)0x0) {
          lVar21 = plVar11[6];
          if (*(long *)(lVar21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar21 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 0) {
            uVar19 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
            *(undefined8 *)(lVar21 + 8) = uVar19;
            *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
          }
          else if (sVar3 == -1) {
            pcVar12 = "count != 0";
            pcVar13 = "AddReference";
            pcVar14 = 
            "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
            ;
            pcVar15 = "Reference counter overflows.";
            goto LAB_01aac82c;
          }
        }
        thunk_FUN_014f602c(plVar11);
        FUN_019c9d88(plVar11,0,local_80,0,0);
        local_e0 = local_b0;
        if (local_b0 != (long *)0x0) {
          plVar20 = local_b0 + 5;
          do {
            lVar21 = *plVar20;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar5) {
              *(int *)plVar20 = (int)lVar21 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((int)lVar21 == -1) {
LAB_01aacac0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        FUN_01dbf208(&local_d0,plVar11,&local_e0);
        plVar20 = local_d0;
        local_d0 = (long *)0x0;
        if (local_e0 != (long *)0x0) {
          plVar2 = local_e0 + 5;
          do {
            lVar21 = *plVar2;
            iVar9 = (int)lVar21 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*local_e0 + 0x10))();
          }
          else if ((int)lVar21 == 0) goto LAB_01aac80c;
        }
        if (plVar11 != (long *)0x0) {
          lVar21 = plVar11[6];
          psVar1 = (short *)(lVar21 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar21 + 0x10) = 0;
            (**(code **)(*plVar11 + 0x50))(plVar11);
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        if (local_b0 != (long *)0x0) {
          plVar11 = local_b0 + 5;
          do {
            lVar21 = *plVar11;
            iVar9 = (int)lVar21 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *(int *)plVar11 = iVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*local_b0 + 0x10))();
          }
          else if ((int)lVar21 == 0) goto LAB_01aac80c;
        }
        if (local_80 != (long *)0x0) {
          plVar11 = local_80 + 5;
          do {
            iVar9 = (int)*plVar11;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *(int *)plVar11 = iVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 == 1) {
            (**(code **)(*local_80 + 0x10))();
          }
          else if (iVar9 == 0) goto LAB_01aac80c;
        }
        bVar5 = false;
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if (local_78 != (long *)0x0) {
        plVar11 = local_78 + 5;
        do {
          lVar21 = *plVar11;
          iVar9 = (int)lVar21 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *(int *)plVar11 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
        else if ((int)lVar21 == 0) goto LAB_01aac80c;
      }
      if (bVar5) {
        uVar16 = *param_4;
        goto LAB_01aac2a4;
      }
      goto LAB_01aac6f8;
    }
    plVar20 = local_88 + 5;
    do {
      lVar21 = *plVar20;
      iVar9 = (int)lVar21 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *(int *)plVar20 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_88 + 0x10))();
      goto LAB_01aac27c;
    }
    if ((int)lVar21 != 0) goto LAB_01aac27c;
  }
  else {
    if ((uVar16 >> 2 & 1) == 0) {
      return 0;
    }
    if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8ac0);
    }
    uVar19 = *(undefined8 *)PTR_DAT_047d8ac8;
    local_60 = 8;
    local_58 = (long *)0x0;
    local_70 = &DAT_ce02c237861a2a94;
    pcStack_68 = "strinput";
    local_78 = (long *)0xb9e4e56c5c7aa74f;
    *(undefined8 *)PTR_DAT_047d8ad0 = uVar19;
    FUN_00f1203c(&local_d0,uVar19,&local_70,&local_78,0);
LAB_01aac49c:
    plVar20 = local_d0;
    local_d0 = (long *)0x0;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
LAB_01aac6f8:
    if (*(char *)((long)plVar20 + 0x54) == '\0') {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_011b8d00(param_1,plVar20[6],500);
      uVar10 = uVar10 & 0xffffffff;
    }
    *param_2 = uVar10;
    uVar19 = 1;
joined_r0x01aac40c:
    if (plVar20 == (long *)0x0) {
      return uVar19;
    }
    plVar11 = plVar20 + 5;
    do {
      lVar21 = *plVar11;
      iVar9 = (int)lVar21 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      return uVar19;
    }
    if ((int)lVar21 != 0) {
      return uVar19;
    }
  }
LAB_01aac80c:
  pcVar12 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar13 = "DecrementReferenceInternal";
  pcVar14 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
  ;
  pcVar15 = "Reference counter underflows.";
LAB_01aac82c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar12,pcVar13,pcVar14,0x58,pcVar15);
}


