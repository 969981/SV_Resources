/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021228d0; name: FUN_021228d0
 */


void FUN_021228d0(long param_1)

{
  short *psVar1;
  int *piVar2;
  long **pplVar3;
  short sVar4;
  char cVar5;
  ulong uVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  long *plVar15;
  short sVar16;
  undefined1 *puVar17;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  
  local_98 = 0xaeb93151982d66a3;
  pcStack_90 = "CueName";
  local_88 = 7;
  local_80 = (long *)0x0;
  FUN_01315eac(&local_78,param_1,&local_98);
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  bVar7 = (char)local_78 != '\0';
  puVar10 = (undefined8 *)PTR_DAT_047d3e30;
  if (bVar7) {
    puVar10 = &local_70;
  }
  local_50 = *puVar10;
  puVar10 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
  if (bVar7) {
    puVar10 = &local_68;
  }
  local_48 = *puVar10;
  puVar10 = (undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  if (bVar7) {
    puVar10 = &local_60;
  }
  local_40 = *puVar10;
  pplVar3 = (long **)(PTR_DAT_047d3e30 + 0x18);
  if (bVar7) {
    pplVar3 = &local_58;
  }
  local_38 = *pplVar3;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  if ((char)local_78 != '\0') {
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_78 = (undefined8 *)((ulong)local_78 & 0xffffffffffffff00);
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  uVar9 = FUN_02122de0(param_1,&local_50);
  if ((uVar9 & 1) == 0) goto LAB_02122c38;
  puVar14 = *(undefined1 **)(param_1 + 0x160);
  if (puVar14 != (undefined1 *)0x0) {
    uVar9 = (long)puVar14 - ((ulong)puVar14 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      puVar12 = (undefined1 *)((ulong)(puVar14 + -1) & 0xda721d99dbe3ab52);
    }
    else {
      puVar12 = &DAT_da721d99dbe3ab52;
      if (puVar14 < (undefined1 *)0xda721d99dbe3ab53) {
        uVar6 = 0;
        if (puVar14 != (undefined1 *)0x0) {
          uVar6 = 0xda721d99dbe3ab52 / (ulong)puVar14;
        }
        puVar12 = &DAT_da721d99dbe3ab52 + -(uVar6 * (long)puVar14);
      }
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x158) + (long)puVar12 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if ((undefined1 *)plVar15[1] == &DAT_da721d99dbe3ab52) {
            if ((undefined1 *)plVar15[2] == &DAT_da721d99dbe3ab52) goto LAB_02122ad0;
          }
          else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar14 + -1)) != puVar12)
          goto LAB_02122bcc;
          plVar15 = (long *)*plVar15;
          bVar7 = false;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          puVar17 = (undefined1 *)plVar15[1];
          if (puVar17 == &DAT_da721d99dbe3ab52) {
            if ((undefined1 *)plVar15[2] == &DAT_da721d99dbe3ab52) goto LAB_02122ad0;
          }
          else {
            if (puVar14 <= puVar17) {
              uVar9 = 0;
              if (puVar14 != (undefined1 *)0x0) {
                uVar9 = (ulong)puVar17 / (ulong)puVar14;
              }
              puVar17 = puVar17 + -(uVar9 * (long)puVar14);
            }
            if (puVar17 != puVar12) goto LAB_02122bcc;
          }
          plVar15 = (long *)*plVar15;
          bVar7 = false;
        } while (plVar15 != (long *)0x0);
      }
      goto LAB_02122adc;
    }
  }
LAB_02122bcc:
  bVar7 = false;
LAB_02122adc:
  uVar9 = FUN_0212310c(param_1);
  if ((!bVar7) && ((uVar9 & 1) != 0)) {
    local_78 = (undefined8 *)&DAT_da721d99dbe3ab52;
    puVar10 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_78);
    *(undefined1 *)(puVar10 + 2) = 1;
    *puVar10 = PTR_LAB_047dcd90;
    if (((*PTR_DAT_047d8918 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8918);
    }
    uVar11 = *(undefined8 *)PTR_DAT_047d8920;
    *(undefined8 *)PTR_DAT_047d8928 = uVar11;
    FUN_017df8a0(&local_78,uVar11,*(undefined4 *)(param_1 + 0x1c0));
    if (local_78 != (undefined8 *)0x0) {
      if (*(short *)((long)local_78 + 0x1a) != 0) {
        if (local_78 == (undefined8 *)0x0) goto LAB_02122c38;
        if (*(short *)((long)local_78 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_78 + 0x1a);
          sVar16 = *(short *)((long)local_78 + 0x1a);
          do {
            sVar4 = *psVar1;
            if (sVar4 == sVar16) {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar16 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_02122b98;
              bVar7 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_02122b98:
              bVar7 = false;
            }
            if (bVar7) {
              lVar13 = local_78[2];
              if (lVar13 != 0) {
                plVar15 = (long *)(lVar13 + -0x28);
                FUN_01802eb4(plVar15,&local_50);
                lVar13 = *(long *)(lVar13 + 8);
                psVar1 = (short *)(lVar13 + 0x1a);
                do {
                  sVar16 = *psVar1;
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar7) {
                    *psVar1 = sVar16 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar16 == 1) {
                  *(undefined8 *)(lVar13 + 0x10) = 0;
                  (**(code **)(*plVar15 + 0x50))(plVar15);
                }
                else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x60,"Reference counter underflows.");
                }
              }
              break;
            }
            sVar16 = sVar4;
          } while (sVar4 != 0);
        }
      }
      puVar10 = local_78;
      if (local_78 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_78 + 3);
        do {
          sVar16 = *psVar1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar16 == 1) {
          piVar2 = (int *)((long)local_78 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_98 = *puVar10;
            FUN_00c44438(lVar13 + 0x8040,&local_98);
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
  }
LAB_02122c38:
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
LAB_02122ad0:
  bVar7 = (char)plVar15[6] != '\0';
  goto LAB_02122adc;
}


