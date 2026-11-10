/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019fb3d8; name: FUN_019fb3d8
 */


void FUN_019fb3d8(long param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  undefined *local_60;
  undefined2 local_58;
  undefined2 local_56;
  
  if (*(byte *)(param_1 + 0x95) == param_2) {
    local_60 = (undefined *)CONCAT44(local_60._4_4_,param_3);
    lVar10 = FUN_019c7b84(*(long *)(*(long *)(param_1 + 0x40) + 0x38) + 0x30,&local_60);
    if (lVar10 == 0) {
      plVar11 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x30),param_3);
      puVar12 = (undefined8 *)(**(code **)plVar11[5])(plVar11 + 5);
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar9 != 0)) {
        uVar14 = FUN_01b07aa4();
        *(undefined8 *)PTR_DAT_047d3f08 = uVar14;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      if (puVar12 != (undefined8 *)0x0) {
        while (puVar12 != (undefined8 *)PTR_DAT_047d3f08) {
          puVar12 = (undefined8 *)*puVar12;
          if (puVar12 == (undefined8 *)0x0) {
            return;
          }
        }
        plVar17 = *(long **)(param_1 + 400);
        if (plVar17 != (long *)0x0) {
          plVar1 = plVar17 + 5;
          do {
            lVar10 = *plVar1;
            cVar6 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = (int)lVar10 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)lVar10 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        uVar8 = (**(code **)(*plVar17 + 0x80))(plVar17,param_4);
        if (plVar17 != (long *)0x0) {
          plVar1 = plVar17 + 5;
          do {
            lVar10 = *plVar1;
            iVar9 = (int)lVar10 + -1;
            cVar6 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
          else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        (**(code **)(*plVar11 + 0x420))(plVar11,uVar8);
        FUN_0143b06c(plVar11,1);
        plVar11 = (long *)(**(code **)(*plVar11 + 0x1d8))(plVar11);
        if ((param_5 & 0xffff) != 0) {
          (**(code **)(*plVar11 + 0x1b8))(plVar11,9,param_5 & 0xffff);
          (**(code **)(*plVar11 + 0x1c8))(plVar11,param_5);
        }
        FUN_019c7a64(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38),param_3,plVar11);
        local_60 = (undefined *)CONCAT44(local_60._4_4_,param_3);
        lVar10 = FUN_019c7b84(*(long *)(*(long *)(param_1 + 0x40) + 0x38) + 0x30,&local_60);
        if ((lVar10 != 0) && (plVar11 = *(long **)(lVar10 + 0x18), plVar11 != (long *)0x0)) {
          puVar12 = (undefined8 *)(**(code **)plVar11[5])(plVar11 + 5);
          if (((*PTR_DAT_047dcd50 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar9 != 0)) {
            uVar14 = FUN_01af5520();
            *(undefined8 *)PTR_DAT_047dcd58 = uVar14;
            __cxa_guard_release(PTR_DAT_047dcd50);
          }
          if (puVar12 != (undefined8 *)0x0) {
            while (puVar12 != (undefined8 *)PTR_DAT_047dcd58) {
              puVar12 = (undefined8 *)*puVar12;
              if (puVar12 == (undefined8 *)0x0) {
                return;
              }
            }
            lVar10 = plVar11[9];
            if (lVar10 != 0) {
              uVar15 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x498);
              if ((uVar15 >> 10 & 1) != 0) {
                if ((param_5 & 0xffff) != 0) {
                  uVar7 = FUN_00cf44f4(*(undefined8 *)(lVar10 + 0x70));
                  local_56 = FUN_00cf41a8(*(undefined8 *)(lVar10 + 0x70));
                  local_60 = PTR_DAT_047d8ee0 + 0x10;
                  local_58 = uVar7;
                  bVar5 = FUN_00c860e0(&local_60);
                  if (((*PTR_DAT_047da7c0 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_047da7c0), iVar9 != 0)) {
                    FUN_00100190(PTR_LAB_047da7d8,PTR_DAT_047da7c8,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047da7c0);
                  }
                  lVar16 = *(long *)PTR_DAT_047da7c8;
                  *(long *)PTR_DAT_047da7d0 = lVar16;
                  puVar13 = (uint *)(**(code **)(**(long **)(lVar16 + 0x30) + 0x70))();
                  if (puVar13 == (uint *)0x0) {
                    uVar8 = 1;
                  }
                  else {
                    piVar2 = (int *)((long)puVar13 + (ulong)*puVar13);
                    uVar15 = param_5;
                    if (99 < (param_5 & 0xff)) {
                      uVar15 = 100;
                    }
                    bVar3 = 0;
                    if (bVar5 < 9) {
                      bVar3 = bVar5;
                    }
                    uVar8 = *(undefined4 *)
                             ((long)piVar2 +
                             ((ulong)uVar15 & 0xff) * 4 +
                             (ulong)bVar3 * 0x194 +
                             (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
                  }
                  FUN_0147a2a8(lVar10,uVar8);
                }
                (**(code **)(*plVar11 + 0x88))(plVar11,1);
                uVar15 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x498);
              }
              if ((uVar15 >> 0x1d & 1) != 0) {
                if ((param_5 & 0xffff) != 0) {
                  uVar7 = FUN_00cf44f4(*(undefined8 *)(lVar10 + 0x70));
                  local_56 = FUN_00cf41a8(*(undefined8 *)(lVar10 + 0x70));
                  local_60 = PTR_DAT_047d8ee0 + 0x10;
                  local_58 = uVar7;
                  bVar5 = FUN_00c860e0(&local_60);
                  if (((*PTR_DAT_047da7c0 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_047da7c0), iVar9 != 0)) {
                    FUN_00100190(PTR_LAB_047da7d8,PTR_DAT_047da7c8,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047da7c0);
                  }
                  lVar16 = *(long *)PTR_DAT_047da7c8;
                  *(long *)PTR_DAT_047da7d0 = lVar16;
                  puVar13 = (uint *)(**(code **)(**(long **)(lVar16 + 0x30) + 0x70))();
                  if (puVar13 == (uint *)0x0) {
                    uVar8 = 1;
                  }
                  else {
                    piVar2 = (int *)((long)puVar13 + (ulong)*puVar13);
                    if (99 < (param_5 & 0xff)) {
                      param_5 = 100;
                    }
                    bVar3 = 0;
                    if (bVar5 < 9) {
                      bVar3 = bVar5;
                    }
                    uVar8 = *(undefined4 *)
                             ((long)piVar2 +
                             ((ulong)param_5 & 0xff) * 4 +
                             (ulong)bVar3 * 0x194 +
                             (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
                  }
                  FUN_0147a2a8(lVar10,uVar8);
                }
                (**(code **)(*plVar11 + 0x88))(plVar11,1);
              }
              cVar6 = FUN_01400ba8(*(undefined8 *)(lVar10 + 0x70));
              if (cVar6 == '\x0e') {
                uVar8 = FUN_00d75438(*(undefined8 *)(lVar10 + 0x70));
                FUN_00f14810(*(undefined8 *)(lVar10 + 0x70),uVar8);
                FUN_00deb388(*(undefined8 *)(lVar10 + 0x70),0);
                FUN_00deb1b4(lVar10);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}


