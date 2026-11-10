/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d4bbc0; name: FUN_00d4bbc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d4bbc0(long param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  long lVar22;
  code *pcVar23;
  short sVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  undefined8 uVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 in_q3 [16];
  undefined8 uVar34;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 auStack_78 [2];
  long *local_68;
  long *local_48;
  
  uVar34 = in_q3._8_8_;
  uVar32 = in_q3._0_8_;
  if ((*(long *)(param_1 + 0x140) == 0) || (*(short *)(*(long *)(param_1 + 0x140) + 0x1a) == 0)) {
    FUN_00d4c514(&local_b0,param_1);
    puVar11 = local_b0;
    if (local_b0 != (undefined8 *)0x0) {
      if (*(short *)((long)local_b0 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_b0 + 0x1a);
        sVar24 = *(short *)((long)local_b0 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar24) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar24 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_00d4bd2c;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00d4bd2c:
            bVar6 = false;
          }
          if (bVar6) {
            plVar25 = (long *)0x0;
            if (local_b0[2] != 0) {
              plVar25 = (long *)(local_b0[2] + -0x28);
            }
            goto LAB_00d4bd54;
          }
          sVar24 = sVar4;
        } while (sVar4 != 0);
      }
      plVar25 = (long *)0x0;
LAB_00d4bd54:
      psVar1 = (short *)(local_b0 + 3);
      do {
        sVar24 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar24 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar24 == 1) {
        piVar2 = (int *)((long)local_b0 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_48 = (long *)*puVar11;
          FUN_00c44438(lVar22 + 0x8040,&local_48);
        }
      }
      else if (sVar24 == 0) goto LAB_00d4c2bc;
      if (plVar25 != (long *)0x0) {
        FUN_00d8fb98(&local_b0,PTR_DAT_047d9c40);
        lVar22 = FUN_01132f14(plVar25,&local_b0);
        if (lVar22 == 0) {
          local_68 = (long *)0x0;
        }
        else {
          FUN_01e2a730(&local_68,lVar22,&local_48);
        }
        if (plStack_98 != (long *)0x0) {
          (**(code **)(*plStack_98 + 0x20))();
        }
        if (local_68 != (long *)0x0) {
          FUN_0180cb98(&local_b0);
          FUN_017981ac((long *)(param_1 + 0x140),&local_b0);
          puVar11 = local_b0;
          if (local_b0 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_b0 + 3);
            do {
              sVar24 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar24 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar24 == 1) {
              piVar2 = (int *)((long)local_b0 + 0x1c);
              do {
                iVar12 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar12 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar22 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar22;
                local_48 = (long *)*puVar11;
                FUN_00c44438(lVar22 + 0x8040,&local_48);
              }
            }
            else if (sVar24 == 0) goto LAB_00d4c2bc;
          }
          if (local_68 != (long *)0x0) {
            lVar22 = local_68[6];
            psVar1 = (short *)(lVar22 + 0x1a);
            do {
              sVar24 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar24 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar24 == 1) {
              *(undefined8 *)(lVar22 + 0x10) = 0;
              (**(code **)(*local_68 + 0x50))();
            }
            else if (sVar24 == 0) goto LAB_00d4bdd8;
          }
        }
        lVar22 = plVar25[0x13];
        psVar1 = (short *)(lVar22 + 0x1a);
        do {
          sVar24 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar24 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar24 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*plVar25 + 0x50))(plVar25);
        }
        else if (sVar24 == 0) goto LAB_00d4bdd8;
      }
    }
  }
  lVar22 = *(long *)(param_1 + 0x140);
  if ((lVar22 == 0) || (*(short *)(lVar22 + 0x1a) == 0)) {
    plVar25 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar22 + 0x1a);
    sVar24 = *(short *)(lVar22 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar24) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar24 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00d4bccc;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d4bccc:
        bVar6 = false;
      }
      if (bVar6) {
        plVar25 = (long *)0x0;
        if (*(long *)(lVar22 + 0x10) != 0) {
          plVar25 = (long *)(*(long *)(lVar22 + 0x10) + -0x28);
        }
        break;
      }
      plVar25 = (long *)0x0;
      sVar24 = sVar4;
    } while (sVar4 != 0);
  }
  FUN_00d4cd14(&local_b0,param_1);
  puVar11 = local_b0;
  if (local_b0 == (undefined8 *)0x0) {
    if (plVar25 == (long *)0x0) {
      return;
    }
  }
  else {
    if (*(short *)((long)local_b0 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_b0 + 0x1a);
      sVar24 = *(short *)((long)local_b0 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar24) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar24 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00d4be34;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d4be34:
          bVar6 = false;
        }
        if (bVar6) {
          plVar26 = (long *)0x0;
          if (local_b0[2] != 0) {
            plVar26 = (long *)(local_b0[2] + -0x28);
          }
          goto LAB_00d4be5c;
        }
        sVar24 = sVar4;
      } while (sVar4 != 0);
    }
    plVar26 = (long *)0x0;
LAB_00d4be5c:
    psVar1 = (short *)(local_b0 + 3);
    do {
      sVar24 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar24 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar24 == 1) {
      piVar2 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_48 = (long *)*puVar11;
        FUN_00c44438(lVar22 + 0x8040,&local_48);
      }
    }
    else if (sVar24 == 0) {
LAB_00d4c2bc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar25 == (long *)0x0) {
      if (plVar26 == (long *)0x0) {
        return;
      }
      pcVar23 = *(code **)(*plVar26 + 0x60);
      goto LAB_00d4bc7c;
    }
    if (plVar26 != (long *)0x0) {
      plVar27 = (long *)plVar25[0xe];
      if (plVar27 != (long *)0x0) {
        lVar22 = plVar27[6];
        if (*(long *)(lVar22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar22 + 0x1a);
        do {
          sVar24 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar24 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar24 == 0) {
          uVar17 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
          *(undefined8 *)(lVar22 + 8) = uVar17;
          *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
        }
        else if (sVar24 == -1) {
          pcVar18 = "count != 0";
          pcVar19 = "AddReference";
          pcVar20 = 
          "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
          ;
          pcVar21 = "Reference counter overflows.";
LAB_00d4c4d0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl(pcVar18,pcVar19,pcVar20,0x58,pcVar21);
        }
      }
      if (((*PTR_DAT_047d8c00 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c00);
      }
      lVar22 = *(long *)PTR_DAT_047d8c08;
      *(long *)PTR_DAT_047d8c10 = lVar22;
      uVar28 = *(undefined8 *)(lVar22 + 0x70);
      iVar12 = (**(code **)(*plVar27 + 0x98))(plVar27);
      puVar10 = PTR_DAT_047d9c48;
      uVar9 = _DAT_03cabe60;
      uVar17 = _DAT_03cab4f0;
      if (iVar12 != 0) {
        uVar29 = 0;
        do {
          (**(code **)(*plVar27 + 0xa0))(&local_48,plVar27,uVar29);
          (**(code **)(*local_48 + 0xa0))(&local_b0);
          puVar11 = local_b0;
          FUN_00d8fb98(&local_b0,puVar10);
          puVar14 = (undefined8 *)FUN_00cb7028(plVar26,&local_b0);
          FUN_01e3c714(&local_68,*puVar14);
          FUN_00d175d0(local_68,(ulong)puVar11 & 0xffffffff);
          uStack_b8 = (undefined4)uVar34;
          uStack_b4 = (undefined4)((ulong)uVar34 >> 0x20);
          uVar33 = uVar32;
          if (local_68 != (long *)0x0) {
            plVar3 = local_68 + 5;
            do {
              lVar22 = *plVar3;
              iVar12 = (int)lVar22 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *(int *)plVar3 = iVar12;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar12 == 0) {
              (**(code **)(*local_68 + 0x10))();
            }
            else if ((int)lVar22 == 0) {
              pcVar18 = "count != std::numeric_limits<uint32_t>::max()";
              pcVar19 = "DecrementReferenceInternal";
              pcVar20 = 
              "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
              ;
              pcVar21 = "Reference counter underflows.";
              goto LAB_00d4c4d0;
            }
          }
          if (plStack_98 != (long *)0x0) {
            (**(code **)(*plStack_98 + 0x20))();
          }
          auVar8._8_4_ = uStack_b8;
          auVar8._0_8_ = uVar32;
          auVar7._8_4_ = uStack_b8;
          auVar7._0_8_ = uVar32;
          auVar7._12_4_ = uStack_b4;
          auVar8._12_4_ = uStack_b4;
          NEON_ext(auVar7,auVar8,8,1);
          (**(code **)(*local_48 + 0xb0))();
          (**(code **)(*local_48 + 200))((int)_DAT_03d31210);
          fVar30 = (float)uVar32;
          fVar31 = fVar30 + (float)uVar9;
          uVar16 = (ulong)uVar32 >> 0x20;
          local_80 = 0;
          auStack_78[0] = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_a0 = 0;
          plStack_98 = (long *)0x0;
          local_68 = (long *)((ulong)local_68 & 0xffffffffff000000);
          local_b0 = (undefined8 *)0x0;
          uStack_a8 = 0;
          uVar15 = FUN_00d6fedc(fVar31,uVar28,0x800,&local_b0,0,&local_68);
          uVar32 = uVar33;
          if ((uVar15 & 1) == 0) {
            FUN_012c7df0(auStack_78);
            local_80 = 0;
            auStack_78[0] = 0;
            local_68 = (long *)((ulong)local_68 & 0xffffffffff000000);
            local_90 = 0;
            uStack_88 = 0;
            local_a0 = 0;
            plStack_98 = (long *)0x0;
            local_b0 = (undefined8 *)0x0;
            uStack_a8 = 0;
            uVar16 = FUN_00d6fedc(fVar31,CONCAT44((float)uVar16 + (float)((ulong)uVar17 >> 0x20),
                                                  fVar30 + (float)uVar17),uVar28,2,&local_b0,0,
                                  &local_68);
            uVar32 = uVar33;
            if ((uVar16 & 1) != 0) goto LAB_00d4c1d8;
          }
          else {
LAB_00d4c1d8:
            (**(code **)(*local_48 + 0xb0))((int)local_b0);
            (**(code **)(*local_48 + 200))((int)local_a0);
          }
          FUN_012c7df0(auStack_78);
          if (local_48 != (long *)0x0) {
            lVar22 = local_48[6];
            psVar1 = (short *)(lVar22 + 0x1a);
            do {
              sVar24 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar24 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar24 == 1) {
              *(undefined8 *)(lVar22 + 0x10) = 0;
              (**(code **)(*local_48 + 0x50))();
            }
            else if (sVar24 == 0) goto LAB_00d4bdd8;
          }
          uVar29 = uVar29 + 1;
          uVar13 = (**(code **)(*plVar27 + 0x98))(plVar27);
        } while (uVar29 < uVar13);
      }
      lVar22 = plVar27[6];
      psVar1 = (short *)(lVar22 + 0x1a);
      do {
        sVar24 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar24 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar24 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar27 + 0x50))(plVar27);
      }
      else if (sVar24 == 0) goto LAB_00d4bdd8;
      (**(code **)(*plVar26 + 0x60))(plVar26);
    }
  }
  lVar22 = plVar25[6];
  psVar1 = (short *)(lVar22 + 0x1a);
  do {
    sVar24 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar24 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar24 != 1) {
    if (sVar24 != 0) {
      return;
    }
LAB_00d4bdd8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  *(undefined8 *)(lVar22 + 0x10) = 0;
  pcVar23 = *(code **)(*plVar25 + 0x50);
  plVar26 = plVar25;
LAB_00d4bc7c:
  (*pcVar23)(plVar26);
  return;
}


