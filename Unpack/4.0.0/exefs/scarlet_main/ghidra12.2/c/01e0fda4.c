/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e0fda4; name: FUN_01e0fda4
 */


undefined8 FUN_01e0fda4(long param_1)

{
  short *psVar1;
  int *piVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  short sVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 local_180;
  char *pcStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  byte local_160;
  undefined7 uStack_15f;
  undefined8 *local_158;
  
  if (*(int *)(param_1 + 0x294) != -1) {
    plVar8 = (long *)FUN_00d63ba4();
    lVar10 = *plVar8;
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar10 + 0x1a);
      sVar13 = *(short *)(lVar10 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar13) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01e0fe38;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e0fe38:
          bVar6 = false;
        }
        if (bVar6) {
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 == 0) {
            return 0;
          }
          plVar8 = (long *)(lVar10 + -0x28);
          FUN_01e0f388(&local_160,plVar8);
          if (((CONCAT71(uStack_15f,local_160) == 0) || (local_158 == (undefined8 *)0x0)) ||
             (*(short *)((long)local_158 + 0x1a) == 0)) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28),
               puVar9 = (undefined8 *)PTR_DAT_047d3e30, iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            else {
              puVar9 = (undefined8 *)PTR_DAT_047d3e30;
            }
          }
          else {
            puVar9 = (undefined8 *)(**(code **)(*(long *)CONCAT71(uStack_15f,local_160) + 0x18))();
          }
          puVar14 = (undefined1 *)*puVar9;
          if (local_158 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_158 + 3);
            do {
              sVar13 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar13 == 1) {
              piVar2 = (int *)((long)local_158 + 0x1c);
              do {
                iVar7 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar12 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar12;
                local_180 = *local_158;
                FUN_00c44438(lVar12 + 0x8040,&local_180);
              }
            }
            else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          local_180 = 0x6f4cde6416ffe156;
          pcStack_178 = "0281_sleep01_loop";
          local_170 = 0x11;
          uStack_168 = 0;
          puVar15 = &DAT_cbf29ce484222645;
          memset(&local_160,0,0x100);
          FUN_01e0f454(param_1,&local_160,&local_180);
          puVar16 = &DAT_cbf29ce484222645;
          if (local_160 != 0) {
            puVar16 = &DAT_cbf29ce484222645;
            pbVar11 = (byte *)((ulong)&local_160 | 1);
            bVar3 = local_160;
            do {
              puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar3) * 0x100000001b3);
              bVar3 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar3 != 0);
          }
          local_180 = 0xdd678f178ed387d7;
          pcStack_178 = "0280_sleep01_start";
          local_170 = 0x12;
          uStack_168 = 0;
          memset(&local_160,0,0x100);
          FUN_01e0f454(param_1,&local_160,&local_180);
          if (local_160 != 0) {
            pbVar11 = (byte *)((ulong)&local_160 | 1);
            do {
              puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)local_160) * 0x100000001b3);
              local_160 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (local_160 != 0);
          }
          lVar10 = *(long *)(lVar10 + 8);
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar13 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar13 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar8 + 0x50))(plVar8);
          }
          else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          if (puVar14 == puVar16 || puVar14 == puVar15) {
            return 1;
          }
          return 0;
        }
        sVar13 = sVar4;
      } while (sVar4 != 0);
    }
  }
  return 0;
}


