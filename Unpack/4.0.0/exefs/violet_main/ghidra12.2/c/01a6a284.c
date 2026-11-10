/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a6a284; name: FUN_01a6a284
 */


void FUN_01a6a284(long param_1,uint *param_2,ulong param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  char *pcVar3;
  short *psVar4;
  int *piVar5;
  long *plVar6;
  short sVar7;
  undefined1 uVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  uint *puVar19;
  undefined1 local_a8 [4];
  undefined4 local_a4;
  long *local_a0;
  long *local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  long *local_48;
  
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar16 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar16 != 0)) {
    puVar12 = (undefined8 *)FUN_01a6a8cc(lVar16 + -0x28);
    plVar17 = (long *)*puVar12;
    if (plVar17 != (long *)0x0) {
      lVar16 = plVar17[6];
      if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar4 = (short *)(lVar16 + 0x1a);
      do {
        sVar7 = *psVar4;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar10) {
          *psVar4 = sVar7 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
        *(undefined8 *)(lVar16 + 8) = uVar13;
        *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
      }
      else if (sVar7 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    if (*param_2 == 0) {
      uVar18 = 0;
      uVar15 = 0;
    }
    else {
      uVar18 = 0;
      puVar19 = param_2 + 1;
      do {
        if ((byte)*puVar19 < 5) {
          uVar8 = *(undefined1 *)((long)puVar19 + 1);
          switch((byte)*puVar19) {
          case 0:
            goto switchD_01a6a35c_caseD_0;
          case 1:
            pcVar3 = (char *)((long)puVar19 + 2);
            local_98 = (long *)CONCAT71(local_98._1_7_,1);
            puVar19 = (uint *)((long)puVar19 + 3);
            uVar18 = uVar18 + 3;
            local_98 = (long *)(ulong)CONCAT14(uVar8,local_98._0_4_);
            FUN_01a6a8d4(plVar17,&local_98,(long)*pcVar3);
            break;
          case 2:
            puVar2 = (undefined4 *)((long)puVar19 + 2);
            local_98 = (long *)CONCAT71(local_98._1_7_,1);
            puVar19 = (uint *)((long)puVar19 + 6);
            uVar18 = uVar18 + 6;
            local_98 = (long *)(ulong)CONCAT14(uVar8,local_98._0_4_);
            FUN_01ea6434(*puVar2,plVar17,&local_98);
            break;
          case 3:
            pbVar1 = (byte *)((long)puVar19 + 2);
            local_98 = (long *)CONCAT71(local_98._1_7_,1);
            puVar19 = (uint *)((long)puVar19 + 3);
            local_98 = (long *)(ulong)CONCAT14(uVar8,local_98._0_4_);
            uVar18 = uVar18 + 3;
            FUN_01ea6510(plVar17,&local_98,*pbVar1 & 1);
            break;
          case 4:
            pbVar1 = (byte *)((long)puVar19 + 2);
            local_98 = (long *)CONCAT71(local_98._1_7_,1);
            puVar19 = (uint *)((long)puVar19 + 3);
            local_98 = (long *)(ulong)CONCAT14(uVar8,local_98._0_4_);
            uVar18 = uVar18 + 3;
            FUN_01ea6208(plVar17,&local_98,*pbVar1 & 1);
          }
        }
        else {
          puVar19 = (uint *)((long)puVar19 + 2);
          uVar18 = uVar18 + 2;
        }
        uVar15 = *param_2;
      } while (uVar18 < uVar15);
    }
    if ((ulong)uVar18 + 8 < (param_3 & 0xffffffff)) {
      pcVar3 = (char *)((long)(param_2 + 1) + (ulong)uVar15);
      local_48 = (long *)0x0;
      if (*pcVar3 == '\0') {
        plVar14 = (long *)FUN_00d44228();
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
        if (local_48 != (long *)0x0) {
          lVar16 = *local_48;
          local_48 = plVar14;
          (**(code **)(lVar16 + 0x20))();
          plVar14 = local_48;
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar13 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar13;
        FUN_00cf9884(&local_98,uVar13,pcVar3);
        plVar14 = local_48;
        local_48 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x20))();
        }
        local_48 = local_98;
        plVar14 = local_48;
      }
      local_48 = plVar14;
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (lVar16 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar16 != 0)) {
        lVar16 = lVar16 + -0x28;
        local_88 = 7;
        local_80 = (long *)0x0;
        local_98 = (long *)&DAT_afc4d6c05abef19e;
        pcStack_90 = "default";
        FUN_00f425a4(&local_78,lVar16,&local_98);
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        if (((local_78 == (long *)0x0) || (local_70 == (undefined8 *)0x0)) ||
           (*(short *)((long)local_70 + 0x1a) == 0)) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), plVar14 = (long *)PTR_DAT_047d3e30,
             iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          else {
            plVar14 = (long *)PTR_DAT_047d3e30;
          }
        }
        else {
          plVar14 = (long *)(**(code **)(*local_78 + 0x10))();
        }
        plVar6 = (long *)PTR_DAT_047d8b70;
        if (local_48 != (long *)0x0) {
          plVar6 = local_48 + 6;
        }
        if (*plVar14 != *plVar6) {
          local_98 = (long *)&DAT_afc4d6c05abef19e;
          pcStack_90 = "default";
          local_88 = 7;
          local_80 = (long *)0x0;
          lVar16 = FUN_01132f14(lVar16,&local_98);
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 0x20))();
          }
          if ((lVar16 != 0) &&
             (FUN_00f42a08(&local_a0,lVar16,&local_98), plVar14 = local_a0, local_a0 != (long *)0x0)
             ) {
            FUN_0135d26c(&local_98,&local_48);
            local_a8[0] = 1;
            local_a4 = 0;
            FUN_01ea65f8(0,plVar14,&local_98,local_a8);
            if (local_80 != (long *)0x0) {
              (**(code **)(*local_80 + 0x20))();
            }
            if (local_a0 != (long *)0x0) {
              lVar16 = local_a0[6];
              psVar4 = (short *)(lVar16 + 0x1a);
              do {
                sVar7 = *psVar4;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(psVar4,0x10);
                if (bVar10) {
                  *psVar4 = sVar7 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (sVar7 == 1) {
                *(undefined8 *)(lVar16 + 0x10) = 0;
                (**(code **)(*local_a0 + 0x50))();
              }
              else if (sVar7 == 0) goto LAB_01a6a3f4;
            }
          }
        }
        if (local_70 != (undefined8 *)0x0) {
          psVar4 = (short *)(local_70 + 3);
          do {
            sVar7 = *psVar4;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar4,0x10);
            if (bVar10) {
              *psVar4 = sVar7 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar7 == 1) {
            piVar5 = (int *)((long)local_70 + 0x1c);
            do {
              iVar11 = *piVar5;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar10) {
                *piVar5 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar16 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar16;
              local_98 = (long *)*local_70;
              FUN_00c44438(lVar16 + 0x8040,&local_98);
            }
          }
          else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      }
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
    }
switchD_01a6a35c_caseD_0:
    if (plVar17 != (long *)0x0) {
      lVar16 = plVar17[6];
      psVar4 = (short *)(lVar16 + 0x1a);
      do {
        sVar7 = *psVar4;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar10) {
          *psVar4 = sVar7 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar7 == 1) {
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*plVar17 + 0x50))(plVar17);
      }
      else if (sVar7 == 0) {
LAB_01a6a3f4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


