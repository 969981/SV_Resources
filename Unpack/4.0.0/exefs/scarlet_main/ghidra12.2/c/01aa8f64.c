/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aa8f64; name: FUN_01aa8f64
 */


void FUN_01aa8f64(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  short sVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  uVar10 = *(ulong *)(param_1 + 0x160);
  uVar16 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0xa957e3270a9644aa;
    }
    else {
      uVar12 = 0xa957e3270a9644aa;
      if (uVar10 < 0xa957e3270a9644ab) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0xa957e3270a9644aa / uVar10;
        }
        uVar12 = 0xa957e3270a9644aa - uVar12 * uVar10;
      }
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x158) + uVar12 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar15[1] == 0xa957e3270a9644aa) {
            if (plVar15[2] == -0x56a81cd8f569bb56) goto LAB_01aa9084;
          }
          else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar15[1];
          if (uVar11 == 0xa957e3270a9644aa) {
            if (plVar15[2] == -0x56a81cd8f569bb56) goto LAB_01aa9084;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar5 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01aa9088:
  local_60 = *(undefined8 *)(param_1 + 0x110);
  uStack_58 = *(undefined8 *)(param_1 + 0x118);
  local_50 = *(undefined8 *)(param_1 + 0x120);
  plVar15 = *(long **)(param_1 + 0x128);
  local_48 = plVar15;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_40,param_1 + 0x30,&local_60);
    plVar15 = local_48;
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (local_40 != (undefined8 *)0x0) {
    if (*(short *)((long)local_40 + 0x1a) != 0) {
      if (local_40 == (undefined8 *)0x0) {
        return;
      }
      if (*(short *)((long)local_40 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_40 + 0x1a);
        sVar14 = *(short *)((long)local_40 + 0x1a);
LAB_01aa9104:
        sVar3 = *psVar1;
        if (sVar3 == sVar14) {
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01aa9128;
          bVar13 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01aa9128:
          bVar13 = false;
        }
        if (!bVar13) goto code_r0x01aa9130;
        plVar15 = (long *)(local_40[2] + -0x28);
        if (local_40[2] != 0) {
          local_70 = (undefined8 *)0x0;
          uStack_68 = 0;
          FUN_00d0a71c(&local_70,&local_40);
          lVar8 = FUN_01180e7c(param_1,&local_70);
          puVar6 = local_70;
          if (local_70 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_70 + 3);
            do {
              sVar14 = *psVar1;
              cVar4 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar13) {
                *psVar1 = sVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar14 == 1) {
              piVar2 = (int *)((long)local_70 + 0x1c);
              do {
                iVar7 = *piVar2;
                cVar4 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar13) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar9 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar9;
                local_18 = *puVar6;
                FUN_00c44438(lVar9 + 0x8040,&local_18);
              }
            }
            else if (sVar14 == 0) goto LAB_01aa92b8;
          }
          if (lVar8 != 0) {
            *(undefined1 *)(lVar8 + 0xe0) = 1;
            *(undefined8 *)(lVar8 + 0x58) = *(undefined8 *)(lVar8 + 0x58);
            *(ulong *)(lVar8 + 0x50) = CONCAT44(uVar16,(int)*(undefined8 *)(lVar8 + 0x50));
          }
          (**(code **)(*plVar15 + 0x60))(plVar15);
        }
      }
    }
LAB_01aa91e0:
    puVar6 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40 + 3);
      do {
        sVar14 = *psVar1;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar14 == 1) {
        piVar2 = (int *)((long)local_40 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar13) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_18 = *puVar6;
          FUN_00c44438(lVar8 + 0x8040,&local_18);
        }
      }
      else if (sVar14 == 0) {
LAB_01aa92b8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
LAB_01aa9084:
  uVar16 = (undefined4)plVar15[6];
  goto LAB_01aa9088;
code_r0x01aa9130:
  sVar14 = sVar3;
  if (sVar3 == 0) goto LAB_01aa91e0;
  goto LAB_01aa9104;
}


