/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019915c4; name: FUN_019915c4
 */


void FUN_019915c4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  undefined *puVar4;
  short *psVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  uint uVar18;
  code *pcVar19;
  short sVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long *local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char local_c0 [8];
  undefined1 auStack_b8 [24];
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  plVar22 = *(long **)(param_1 + 8);
  FUN_01846b3c(&local_e0,plVar22);
  plVar1 = (long *)(param_1 + 0xf0);
  FUN_02b0f670(plVar1,&local_e0);
  if (local_e0 == (long *)0x0) {
LAB_01991634:
    uVar23 = 0;
    do {
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_01992c20;
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar22;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar11 = (**(code **)(*plVar22 + 0x10))(plVar22,1000,8);
      if (lVar11 == 0) goto LAB_01992c24;
      FUN_017092a4();
      *(long **)(lVar11 + 8) = plVar22;
      *(long *)(lVar11 + 0x10) = lVar11;
      *(undefined4 *)(lVar11 + 0x18) = 0x803e8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      piVar2 = (int *)(lVar11 + 0x28);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = iVar9 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == -1) goto LAB_01992bd0;
      lVar10 = param_1 + uVar23 * 8;
      plVar24 = (long *)(lVar10 + 0x58);
      plVar12 = (long *)*plVar24;
      *plVar24 = 0;
      if (plVar12 != (long *)0x0) {
        plVar21 = plVar12 + 5;
        do {
          lVar8 = *plVar21;
          iVar9 = (int)lVar8 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar7) {
            *(int *)plVar21 = iVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        else if ((int)lVar8 == 0) goto LAB_01992bf8;
      }
      *plVar24 = lVar11;
      lVar11 = FUN_01768c1c(plVar22);
      if (lVar11 != 0) {
        piVar2 = (int *)(lVar11 + 0x28);
        do {
          iVar9 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = iVar9 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 == -1) goto LAB_01992bd0;
      }
      plVar21 = (long *)(lVar10 + 0x80);
      plVar12 = (long *)*plVar21;
      *plVar21 = 0;
      if (plVar12 != (long *)0x0) {
        plVar3 = plVar12 + 5;
        do {
          lVar10 = *plVar3;
          iVar9 = (int)lVar10 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *(int *)plVar3 = iVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        else if ((int)lVar10 == 0) goto LAB_01992bf8;
      }
      *plVar21 = lVar11;
      lVar10 = *plVar1;
      plVar24 = (long *)*plVar24;
      local_68 = plVar24;
      if (plVar24 == (long *)0x0) {
        FUN_017550a4(lVar10,uVar23 & 0xffffffff,&local_68);
      }
      else {
        plVar12 = plVar24 + 5;
        do {
          lVar11 = *plVar12;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar7) {
            *(int *)plVar12 = (int)lVar11 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)lVar11 == -1) goto LAB_01992bd0;
        FUN_017550a4(lVar10,uVar23 & 0xffffffff,&local_68);
        if (plVar24 != (long *)0x0) {
          plVar12 = plVar24 + 5;
          do {
            lVar10 = *plVar12;
            iVar9 = (int)lVar10 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar7) {
              *(int *)plVar12 = iVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
          else if ((int)lVar10 == 0) goto LAB_01992bf8;
        }
      }
      lVar10 = *plVar1;
      plVar21 = (long *)*plVar21;
      local_70 = plVar21;
      if (plVar21 == (long *)0x0) {
        FUN_017558a4(lVar10,uVar23 & 0xffffffff,&local_70);
      }
      else {
        plVar12 = plVar21 + 5;
        do {
          lVar11 = *plVar12;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar7) {
            *(int *)plVar12 = (int)lVar11 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)lVar11 == -1) goto LAB_01992bd0;
        FUN_017558a4(lVar10,uVar23 & 0xffffffff,&local_70);
        if (plVar21 != (long *)0x0) {
          plVar12 = plVar21 + 5;
          do {
            lVar10 = *plVar12;
            iVar9 = (int)lVar10 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar7) {
              *(int *)plVar12 = iVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
          else if ((int)lVar10 == 0) goto LAB_01992bf8;
        }
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != 5);
    if (*(char *)(*(long *)(param_1 + 0xe0) + 0x710) != '\0') {
      if ((*(byte *)(*(long *)(param_1 + 0xe0) + 0x49b) >> 1 & 1) == 0) {
        plVar12 = (long *)FUN_020fbd68(plVar22);
        local_a0 = plVar12;
        if (plVar12 == (long *)0x0) {
LAB_01991904:
          local_e0 = *(long **)(param_1 + 0xa8);
          *(undefined8 *)(param_1 + 0xa8) = 0;
          FUN_01822438(&local_e0);
          local_a0 = (long *)0x0;
          *(long **)(param_1 + 0xa8) = plVar12;
          FUN_01822438(&local_a0);
LAB_01991b5c:
          lVar10 = FUN_01768c1c(plVar22);
          if (lVar10 != 0) {
            piVar2 = (int *)(lVar10 + 0x28);
            do {
              iVar9 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = iVar9 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 == -1) goto LAB_01992bd0;
          }
          plVar12 = *(long **)(param_1 + 0xb0);
          *(undefined8 *)(param_1 + 0xb0) = 0;
          if (plVar12 != (long *)0x0) {
            plVar24 = plVar12 + 5;
            do {
              lVar11 = *plVar24;
              iVar9 = (int)lVar11 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar7) {
                *(int *)plVar24 = iVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 == 0) {
              (**(code **)(*plVar12 + 0x10))();
            }
            else if ((int)lVar11 == 0) goto LAB_01992bf8;
          }
          lVar11 = *(long *)(param_1 + 0xf0);
          *(long *)(param_1 + 0xb0) = lVar10;
          FUN_02b0f6fc(&local_78,param_1 + 0xa8);
          local_e0 = (long *)CONCAT44(local_e0._4_4_,0xff);
          plVar12 = (long *)FUN_01755190(lVar11 + 0x30,&local_e0);
          if (local_78 != (long *)0x0) {
            plVar24 = local_78 + 5;
            do {
              lVar10 = *plVar24;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar7) {
                *(int *)plVar24 = (int)lVar10 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((int)lVar10 != -1) goto LAB_01991c00;
LAB_01992ce4:
            pcVar14 = 
            "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
            ;
            goto LAB_01992bf0;
          }
LAB_01991c00:
          plVar24 = (long *)*plVar12;
          *plVar12 = (long)local_78;
          if (plVar24 != (long *)0x0) {
            plVar12 = plVar24 + 5;
            do {
              lVar10 = *plVar12;
              iVar9 = (int)lVar10 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar7) {
                *(int *)plVar12 = iVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 == 0) {
              (**(code **)(*plVar24 + 0x10))();
              goto LAB_01991c28;
            }
            if ((int)lVar10 != 0) goto LAB_01991c28;
LAB_01992cc0:
            pcVar14 = "count != std::numeric_limits<uint32_t>::max()";
            pcVar15 = "DecrementReferenceInternal";
            pcVar16 = 
            "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
            ;
            pcVar17 = "Reference counter underflows.";
            goto LAB_01992c18;
          }
LAB_01991c28:
          if (local_78 != (long *)0x0) {
            plVar12 = local_78 + 5;
            do {
              lVar10 = *plVar12;
              iVar9 = (int)lVar10 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar7) {
                *(int *)plVar12 = iVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 == 0) {
              (**(code **)(*local_78 + 0x10))();
            }
            else if ((int)lVar10 == 0) goto LAB_01992bf8;
          }
          lVar10 = *(long *)(param_1 + 0xf0);
          plVar12 = *(long **)(param_1 + 0xb0);
          if (plVar12 != (long *)0x0) {
            plVar24 = plVar12 + 5;
            do {
              lVar11 = *plVar24;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar7) {
                *(int *)plVar24 = (int)lVar11 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((int)lVar11 == -1) goto LAB_01992bd0;
          }
          local_e0 = (long *)CONCAT44(local_e0._4_4_,0xff);
          plVar24 = (long *)FUN_01755990(lVar10 + 0x98,&local_e0);
          if (plVar12 != (long *)0x0) {
            plVar21 = plVar12 + 5;
            do {
              lVar10 = *plVar21;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar7) {
                *(int *)plVar21 = (int)lVar10 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((int)lVar10 == -1) goto LAB_01992ce4;
          }
          plVar21 = (long *)*plVar24;
          *plVar24 = (long)plVar12;
          if (plVar21 != (long *)0x0) {
            plVar24 = plVar21 + 5;
            do {
              lVar10 = *plVar24;
              iVar9 = (int)lVar10 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar7) {
                *(int *)plVar24 = iVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 == 0) {
              (**(code **)(*plVar21 + 0x10))();
            }
            else if ((int)lVar10 == 0) goto LAB_01992cc0;
          }
          if (plVar12 != (long *)0x0) {
            plVar24 = plVar12 + 5;
            do {
              lVar10 = *plVar24;
              iVar9 = (int)lVar10 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar7) {
                *(int *)plVar24 = iVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
            else if ((int)lVar10 == 0) goto LAB_01992bf8;
          }
          goto LAB_01991cf4;
        }
        plVar24 = plVar12 + 5;
        do {
          lVar10 = *plVar24;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar7) {
            *(int *)plVar24 = (int)lVar10 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)lVar10 != -1) goto LAB_01991904;
        goto LAB_01992bd0;
      }
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_01992c20;
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar22;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      plVar12 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x48,8);
      if (plVar12 == (long *)0x0) goto LAB_01992c24;
      memset(plVar12,0,0x48);
      FUN_020fbc54(plVar12);
      puVar4 = PTR_DAT_047dccd8;
      plVar12[8] = 0;
      plVar12[2] = (long)plVar12;
      plVar12[4] = (long)(puVar4 + 200);
      plVar12[5] = (long)(puVar4 + 0x118);
      *(undefined4 *)(plVar12 + 3) = 0x80048;
      *plVar12 = (long)(puVar4 + 0x10);
      plVar12[1] = (long)plVar22;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      lVar10 = plVar12[6];
      if (*(long *)(lVar10 + 0x10) == 0) goto LAB_01992c7c;
      psVar5 = (short *)(lVar10 + 0x1a);
      do {
        sVar20 = *psVar5;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar7) {
          *psVar5 = sVar20 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar20 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar13;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
LAB_01991a00:
        lVar10 = plVar12[6];
        if (*(long *)(lVar10 + 0x10) == 0) goto LAB_01992c7c;
        lVar11 = *plVar1;
        psVar5 = (short *)(lVar10 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar13;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar20 == -1) goto LAB_01992c9c;
        FUN_017f6dcc(lVar11 + 0x138,plVar12);
        lVar10 = plVar12[6];
        psVar5 = (short *)(lVar10 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
        }
        else if (sVar20 == 0) goto LAB_01992c54;
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_01992c20:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar22;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        plVar24 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x98,8);
        if (plVar24 == (long *)0x0) {
LAB_01992c24:
          (**(code **)(*plVar22 + 0xe8))(plVar22);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("ptr","Create",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                     ,0x40);
        }
        FUN_01709500();
        plVar24[10] = 0;
        plVar24[0xb] = 0;
        plVar24[9] = 0;
        puVar4 = PTR_DAT_047dcce0 + 0x10;
        plVar24[4] = (long)(PTR_DAT_047dcce0 + 0x78);
        plVar24[0x11] = 0;
        *(undefined4 *)(plVar24 + 0x12) = 0;
        *(undefined2 *)((long)plVar24 + 100) = 0;
        plVar24[2] = (long)plVar24;
        *(undefined4 *)(plVar24 + 3) = 0x80098;
        *plVar24 = (long)puVar4;
        plVar24[1] = (long)plVar22;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        plVar21 = plVar24 + 5;
        do {
          lVar10 = *plVar21;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar7) {
            *(int *)plVar21 = (int)lVar10 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)lVar10 == -1) goto LAB_01992bd0;
        local_e0 = *(long **)(param_1 + 0xa8);
        *(undefined8 *)(param_1 + 0xa8) = 0;
        FUN_01822438(&local_e0);
        *(long **)(param_1 + 0xa8) = plVar24;
        lVar10 = plVar12[6];
        psVar5 = (short *)(lVar10 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
        }
        else if (sVar20 == 0) goto LAB_01992c54;
        goto LAB_01991b5c;
      }
      if (sVar20 != -1) goto LAB_01991a00;
LAB_01992c9c:
      pcVar14 = "count != 0";
      pcVar15 = "AddReference";
      pcVar16 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      pcVar17 = "Reference counter overflows.";
      goto LAB_01992c18;
    }
LAB_01991cf4:
    plVar12 = (long *)FUN_01872c9c(plVar22);
    local_a0 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar24 = plVar12 + 5;
      do {
        lVar10 = *plVar24;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar7) {
          *(int *)plVar24 = (int)lVar10 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((int)lVar10 == -1) goto LAB_01992bd0;
    }
    plVar24 = (long *)(param_1 + 0xc0);
    local_e0 = (long *)*plVar24;
    *plVar24 = 0;
    FUN_01938590(&local_e0);
    local_a0 = (long *)0x0;
    *plVar24 = (long)plVar12;
    FUN_01938590(&local_a0);
    lVar10 = *(long *)(param_1 + 0xf0);
    FUN_02b0f75c(&local_80,plVar24);
    FUN_017f6b18(lVar10 + 0x110,local_80);
    if (local_80 != (long *)0x0) {
      plVar12 = local_80 + 5;
      do {
        lVar10 = *plVar12;
        iVar9 = (int)lVar10 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *(int *)plVar12 = iVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
      else if ((int)lVar10 == 0) goto LAB_01992bf8;
    }
    uVar13 = FUN_01564578(plVar22);
    FUN_02b10010(&local_a0,uVar13);
    local_e0 = *(long **)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    FUN_019385fc(&local_e0);
    plVar12 = local_a0;
    local_a0 = (long *)0x0;
    *(long **)(param_1 + 0xb8) = plVar12;
    FUN_019385fc(&local_a0);
    lVar10 = *(long *)(param_1 + 0xf0);
    plVar12 = *(long **)(param_1 + 0xb8);
    if (plVar12 == (long *)0x0) {
      FUN_02b0f8a4(lVar10 + 0x148,0);
    }
    else {
      lVar11 = plVar12[6];
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_01992c7c;
      psVar5 = (short *)(lVar11 + 0x1a);
      do {
        sVar20 = *psVar5;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar7) {
          *psVar5 = sVar20 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar20 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar13;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar20 == -1) goto LAB_01992c9c;
      FUN_02b0f8a4(lVar10 + 0x148,plVar12);
      lVar10 = plVar12[6];
      psVar5 = (short *)(lVar10 + 0x1a);
      do {
        sVar20 = *psVar5;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar7) {
          *psVar5 = sVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar20 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar20 == 0) goto LAB_01992c54;
    }
    plVar12 = (long *)FUN_016592f0(plVar22);
    if (plVar12 != (long *)0x0) {
      plVar24 = plVar12 + 5;
      do {
        lVar10 = *plVar24;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar7) {
          *(int *)plVar24 = (int)lVar10 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((int)lVar10 != -1) {
        lVar10 = *plVar1;
        plVar24 = plVar12 + 5;
        do {
          lVar11 = *plVar24;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar7) {
            *(int *)plVar24 = (int)lVar11 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)lVar11 != -1) {
          FUN_017f6bd4(lVar10 + 0x140,plVar12);
          do {
            lVar10 = *plVar24;
            iVar9 = (int)lVar10 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar7) {
              *(int *)plVar24 = iVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
          else if ((int)lVar10 == 0) goto LAB_01992bf8;
          plVar24 = plVar12 + 5;
          do {
            lVar10 = *plVar24;
            iVar9 = (int)lVar10 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar7) {
              *(int *)plVar24 = iVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
          else if ((int)lVar10 == 0) goto LAB_01992bf8;
          goto LAB_01991ec4;
        }
      }
LAB_01992bd0:
      pcVar14 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
      ;
LAB_01992bf0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",pcVar14,0x53,
                 "Reference counter overflows.");
    }
    FUN_017f6bd4(*plVar1 + 0x140,0);
LAB_01991ec4:
    if (*(int *)(*(long *)(param_1 + 0xe0) + 0x34) == 2) {
      FUN_01949bf8(&local_e0,plVar22);
      plVar12 = *(long **)(param_1 + 200);
      *(undefined8 *)(param_1 + 200) = 0;
      if (plVar12 != (long *)0x0) {
        lVar10 = plVar12[6];
        psVar5 = (short *)(lVar10 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))();
        }
        else if (sVar20 == 0) goto LAB_01992c54;
      }
      *(long **)(param_1 + 200) = local_e0;
      FUN_018e1b98(&local_e0,plVar22);
      plVar12 = *(long **)(param_1 + 0xd0);
      *(undefined8 *)(param_1 + 0xd0) = 0;
      if (plVar12 != (long *)0x0) {
        lVar10 = plVar12[6];
        psVar5 = (short *)(lVar10 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))();
        }
        else if (sVar20 == 0) goto LAB_01992c54;
      }
      *(long **)(param_1 + 0xd0) = local_e0;
      FUN_01949e10(&local_e0,plVar22);
      plVar12 = *(long **)(param_1 + 0xd8);
      *(undefined8 *)(param_1 + 0xd8) = 0;
      if (plVar12 != (long *)0x0) {
        lVar10 = plVar12[6];
        psVar5 = (short *)(lVar10 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))();
        }
        else if (sVar20 == 0) goto LAB_01992c54;
      }
      *(long **)(param_1 + 0xd8) = local_e0;
      lVar10 = *(long *)(param_1 + 0xf0);
      plVar12 = *(long **)(param_1 + 0xd0);
      if (plVar12 == (long *)0x0) {
        plVar12 = *(long **)(lVar10 + 0x120);
        *(undefined8 *)(lVar10 + 0x120) = 0;
        if (plVar12 != (long *)0x0) {
          lVar10 = plVar12[6];
          psVar5 = (short *)(lVar10 + 0x1a);
          do {
            sVar20 = *psVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar7) {
              *psVar5 = sVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar20 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            pcVar19 = *(code **)(*plVar12 + 0x50);
            goto LAB_01992a64;
          }
          goto LAB_01992008;
        }
      }
      else {
        lVar11 = plVar12[6];
        if (*(long *)(lVar11 + 0x10) == 0) goto LAB_01992c7c;
        psVar5 = (short *)(lVar11 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          *(undefined8 *)(lVar11 + 8) = uVar13;
          *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
        }
        else if (sVar20 == -1) goto LAB_01992c9c;
        FUN_010a4800(lVar10 + 0x120,plVar12);
        lVar10 = plVar12[6];
        psVar5 = (short *)(lVar10 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          pcVar19 = *(code **)(*plVar12 + 0x50);
LAB_01992a64:
          (*pcVar19)(plVar12);
        }
        else {
LAB_01992008:
          if (sVar20 == 0) goto LAB_01992c54;
        }
      }
      lVar10 = *(long *)(param_1 + 0xf0);
      plVar12 = *(long **)(param_1 + 200);
      if (plVar12 == (long *)0x0) {
        plVar12 = *(long **)(lVar10 + 0x118);
        *(undefined8 *)(lVar10 + 0x118) = 0;
        if (plVar12 != (long *)0x0) {
          lVar10 = plVar12[6];
          psVar5 = (short *)(lVar10 + 0x1a);
          do {
            sVar20 = *psVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar7) {
              *psVar5 = sVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar20 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            pcVar19 = *(code **)(*plVar12 + 0x50);
            goto LAB_01992a7c;
          }
          goto LAB_01992084;
        }
      }
      else {
        lVar11 = plVar12[6];
        if (*(long *)(lVar11 + 0x10) == 0) goto LAB_01992c7c;
        psVar5 = (short *)(lVar11 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          *(undefined8 *)(lVar11 + 8) = uVar13;
          *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
        }
        else if (sVar20 == -1) goto LAB_01992c9c;
        FUN_010a4a78(lVar10 + 0x118,plVar12);
        lVar10 = plVar12[6];
        psVar5 = (short *)(lVar10 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          pcVar19 = *(code **)(*plVar12 + 0x50);
LAB_01992a7c:
          (*pcVar19)(plVar12);
        }
        else {
LAB_01992084:
          if (sVar20 == 0) goto LAB_01992c54;
        }
      }
      lVar10 = *(long *)(param_1 + 0xf0);
      plVar12 = *(long **)(param_1 + 0xd8);
      if (plVar12 == (long *)0x0) {
        plVar12 = *(long **)(lVar10 + 0x128);
        *(undefined8 *)(lVar10 + 0x128) = 0;
        if (plVar12 != (long *)0x0) {
          lVar10 = plVar12[6];
          psVar5 = (short *)(lVar10 + 0x1a);
          do {
            sVar20 = *psVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar7) {
              *psVar5 = sVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar20 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            pcVar19 = *(code **)(*plVar12 + 0x50);
            goto LAB_01992a94;
          }
          goto LAB_01992100;
        }
      }
      else {
        lVar11 = plVar12[6];
        if (*(long *)(lVar11 + 0x10) == 0) goto LAB_01992c7c;
        psVar5 = (short *)(lVar11 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          *(undefined8 *)(lVar11 + 8) = uVar13;
          *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
        }
        else if (sVar20 == -1) goto LAB_01992c9c;
        FUN_010a493c(lVar10 + 0x128,plVar12);
        lVar10 = plVar12[6];
        psVar5 = (short *)(lVar10 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          pcVar19 = *(code **)(*plVar12 + 0x50);
LAB_01992a94:
          (*pcVar19)(plVar12);
        }
        else {
LAB_01992100:
          if (sVar20 == 0) goto LAB_01992c54;
        }
      }
    }
    lVar10 = *(long *)(param_1 + 0xe0);
    uVar18 = (uint)*(undefined8 *)(lVar10 + 0x498);
    if ((uVar18 >> 0xb & 1) != 0) {
      lVar10 = *(long *)(param_1 + 0xf0);
      FUN_01a784d8(&local_e0,plVar22);
      local_88 = local_e0;
      FUN_0167121c(lVar10 + 0x130);
      FUN_016712fc(&local_88);
      lVar10 = *(long *)(param_1 + 0xe0);
      uVar18 = (uint)*(undefined8 *)(lVar10 + 0x498);
    }
    if ((uVar18 >> 0xc & 1) != 0) {
      *(ushort *)(lVar10 + 0x1b0) = *(ushort *)(lVar10 + 0x1b0) | 2;
    }
    plVar12 = *(long **)(param_1 + 0xf8);
    if (plVar12 != (long *)0x0) {
      lVar10 = plVar12[6];
      if (*(long *)(lVar10 + 0x10) == 0) goto LAB_01992c7c;
      lVar11 = *plVar1;
      psVar5 = (short *)(lVar10 + 0x1a);
      do {
        sVar20 = *psVar5;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar7) {
          *psVar5 = sVar20 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar20 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar13;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar20 == -1) goto LAB_01992c9c;
      FUN_017f6dcc(lVar11 + 0x138,plVar12);
      lVar10 = plVar12[6];
      psVar5 = (short *)(lVar10 + 0x1a);
      do {
        sVar20 = *psVar5;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar7) {
          *psVar5 = sVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar20 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar20 == 0) goto LAB_01992c54;
    }
    local_98 = (long *)0x0;
    local_90 = (long *)0x0;
    local_a0 = (long *)0x0;
    FUN_01822538(&local_a0,*(undefined8 *)(param_1 + 0xe0));
    FUN_018225f4(&local_98,*(undefined8 *)(param_1 + 0xe8));
    FUN_017af3e8(&local_90,*(undefined8 *)(param_1 + 0xf0));
    lVar10 = *(long *)(param_1 + 0xe0);
    if (*(char *)(lVar10 + 0x8c) != '\0') {
      lVar10 = *plVar1;
      plVar12 = (long *)*param_2;
      if (plVar12 == (long *)0x0) {
        plVar12 = *(long **)(lVar10 + 0x100);
        *(undefined8 *)(lVar10 + 0x100) = 0;
        if (plVar12 != (long *)0x0) {
          lVar10 = plVar12[6];
          psVar5 = (short *)(lVar10 + 0x1a);
          do {
            sVar20 = *psVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar7) {
              *psVar5 = sVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar20 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            pcVar19 = *(code **)(*plVar12 + 0x50);
            goto LAB_019929e0;
          }
          goto LAB_0199227c;
        }
      }
      else {
        lVar11 = plVar12[6];
        if (*(long *)(lVar11 + 0x10) == 0) goto LAB_01992c7c;
        psVar5 = (short *)(lVar11 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          *(undefined8 *)(lVar11 + 8) = uVar13;
          *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
        }
        else if (sVar20 == -1) goto LAB_01992c9c;
        FUN_017a01cc(lVar10 + 0x100,plVar12);
        lVar10 = plVar12[6];
        psVar5 = (short *)(lVar10 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          pcVar19 = *(code **)(*plVar12 + 0x50);
LAB_019929e0:
          (*pcVar19)(plVar12);
        }
        else {
LAB_0199227c:
          if (sVar20 == 0) goto LAB_01992c54;
        }
      }
      FUN_019d9524(&local_e0,*(undefined8 *)(param_1 + 8));
      plVar12 = local_e0;
      uVar13 = *(undefined8 *)(param_1 + 0xe0);
      FUN_01991340(local_c0,param_3);
      FUN_02b1cd74(plVar12,uVar13,local_c0);
      if (local_c0[0] != '\0') {
        FUN_00d8e444(auStack_b8);
        local_c0[0] = '\0';
      }
      lVar10 = *plVar1;
      if (plVar12 == (long *)0x0) {
        FUN_017f6c90(lVar10 + 0x108,0);
      }
      else {
        lVar11 = plVar12[6];
        if (*(long *)(lVar11 + 0x10) == 0) goto LAB_01992c7c;
        psVar5 = (short *)(lVar11 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          *(undefined8 *)(lVar11 + 8) = uVar13;
          *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
        }
        else if (sVar20 == -1) goto LAB_01992c9c;
        FUN_017f6c90(lVar10 + 0x108,plVar12);
        lVar10 = plVar12[6];
        psVar5 = (short *)(lVar10 + 0x1a);
        do {
          sVar20 = *psVar5;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar7) {
            *psVar5 = sVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar20 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
        }
        else if (sVar20 == 0) goto LAB_01992c54;
        if (local_e0 != (long *)0x0) {
          lVar10 = local_e0[6];
          psVar5 = (short *)(lVar10 + 0x1a);
          do {
            sVar20 = *psVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar7) {
              *psVar5 = sVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar20 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*local_e0 + 0x50))();
          }
          else if (sVar20 == 0) goto LAB_01992c54;
        }
      }
      lVar10 = *(long *)(param_1 + 0xe0);
      if ((*(byte *)(lVar10 + 0x499) >> 2 & 1) != 0) {
        FUN_019d47d0(&local_e0,plVar22);
        plVar12 = local_e0;
        lVar10 = *plVar1;
        if (local_e0 == (long *)0x0) {
          FUN_017f6dcc(lVar10 + 0x138,0);
        }
        else {
          lVar11 = local_e0[6];
          if (*(long *)(lVar11 + 0x10) == 0) goto LAB_01992c7c;
          psVar5 = (short *)(lVar11 + 0x1a);
          do {
            sVar20 = *psVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar7) {
              *psVar5 = sVar20 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar20 == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            *(undefined8 *)(lVar11 + 8) = uVar13;
            *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
          }
          else if (sVar20 == -1) goto LAB_01992c9c;
          FUN_017f6dcc(lVar10 + 0x138,plVar12);
          lVar10 = plVar12[6];
          psVar5 = (short *)(lVar10 + 0x1a);
          do {
            sVar20 = *psVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar7) {
              *psVar5 = sVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar20 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar12 + 0x50))(plVar12);
          }
          else if (sVar20 == 0) goto LAB_01992c54;
        }
        if (local_e0 != (long *)0x0) {
          lVar10 = local_e0[6];
          psVar5 = (short *)(lVar10 + 0x1a);
          do {
            sVar20 = *psVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar7) {
              *psVar5 = sVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar20 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*local_e0 + 0x50))();
          }
          else if (sVar20 == 0) goto LAB_01992c54;
        }
        lVar10 = *(long *)(param_1 + 0xe0);
      }
    }
    uVar18 = (uint)*(undefined8 *)(lVar10 + 0x498);
    if ((uVar18 >> 10 & 1) == 0) {
      if (((uVar18 >> 0x19 & 1) == 0) &&
         (((*(short *)(lVar10 + 0x48a) != 0 || (*(short *)(lVar10 + 0x48c) != 0)) ||
          (*(short *)(lVar10 + 0x48e) != 0)))) {
        FUN_020fb950(&local_e0,plVar22);
        plVar1 = local_e0;
        local_e0[8] = param_1;
        lVar10 = *(long *)(param_1 + 0xf0);
        if (local_e0 == (long *)0x0) {
          FUN_017f6dcc(lVar10 + 0x138,0);
        }
        else {
          lVar11 = local_e0[6];
          if (*(long *)(lVar11 + 0x10) == 0) {
LAB_01992c7c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar5 = (short *)(lVar11 + 0x1a);
          do {
            sVar20 = *psVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar7) {
              *psVar5 = sVar20 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar20 == 0) {
            uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            *(undefined8 *)(lVar11 + 8) = uVar13;
            *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
          }
          else if (sVar20 == -1) goto LAB_01992c9c;
          FUN_017f6dcc(lVar10 + 0x138,plVar1);
          lVar10 = plVar1[6];
          psVar5 = (short *)(lVar10 + 0x1a);
          do {
            sVar20 = *psVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar7) {
              *psVar5 = sVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar20 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar1 + 0x50))(plVar1);
          }
          else if (sVar20 == 0) goto LAB_01992c54;
        }
        if (local_e0 != (long *)0x0) {
          lVar10 = local_e0[6];
          psVar5 = (short *)(lVar10 + 0x1a);
          do {
            sVar20 = *psVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar5,0x10);
            if (bVar7) {
              *psVar5 = sVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar20 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*local_e0 + 0x50))();
          }
          else if (sVar20 == 0) {
LAB_01992c54:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
    }
    else {
      local_e0 = (long *)0xb6629f6e8797836c;
      pcStack_d8 = "avalon/data/";
      local_d0 = 0xc;
      uStack_c8 = 0;
      FUN_020fbb68(lVar10,&local_e0);
    }
    if ((*(byte *)(*(long *)(param_1 + 0xe0) + 0x499) >> 2 & 1) == 0) {
      *(undefined2 *)(*(long *)(param_1 + 0xe0) + 0x490) = 0;
    }
    FUN_017af068(&local_e0,plVar22,&local_a0);
    FUN_02b0f7bc(param_1 + 0x48,&local_e0);
    if (local_e0 != (long *)0x0) {
      plVar1 = local_e0 + 5;
      do {
        lVar10 = *plVar1;
        iVar9 = (int)lVar10 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_e0 + 0x10))();
      }
      else if ((int)lVar10 == 0) goto LAB_01992bf8;
    }
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(*(long *)(param_1 + 0xe0) + 0x90);
    if (local_90 != (long *)0x0) {
      plVar1 = local_90 + 5;
      do {
        lVar10 = *plVar1;
        iVar9 = (int)lVar10 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
      else if ((int)lVar10 == 0) goto LAB_01992bf8;
    }
    if (local_98 != (long *)0x0) {
      plVar1 = local_98 + 5;
      do {
        lVar10 = *plVar1;
        iVar9 = (int)lVar10 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
      else if ((int)lVar10 == 0) goto LAB_01992bf8;
    }
    if (local_a0 == (long *)0x0) {
      return;
    }
    plVar1 = local_a0 + 5;
    do {
      lVar10 = *plVar1;
      iVar9 = (int)lVar10 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_a0 + 0x10))();
      return;
    }
    if ((int)lVar10 != 0) {
      return;
    }
  }
  else {
    plVar12 = local_e0 + 5;
    do {
      lVar10 = *plVar12;
      iVar9 = (int)lVar10 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *(int *)plVar12 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_e0 + 0x10))();
      goto LAB_01991634;
    }
    if ((int)lVar10 != 0) goto LAB_01991634;
  }
LAB_01992bf8:
  pcVar14 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar15 = "DecrementReferenceInternal";
  pcVar16 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
  ;
  pcVar17 = "Reference counter underflows.";
LAB_01992c18:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar14,pcVar15,pcVar16,0x58,pcVar17);
}


