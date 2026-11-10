/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00aa5d30; name: FUN_00aa5d30
 */


void FUN_00aa5d30(undefined8 param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  float fVar13;
  undefined8 local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 local_58;
  
  lVar9 = *param_2;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00aa5dac;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00aa5dac:
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        plVar12 = (long *)(lVar9 + -0x28);
        uVar8 = FUN_00e75364(plVar12,*(undefined8 *)(lVar9 + -0x20));
        local_70 = (undefined8 *)0x0;
        uStack_68 = 0;
        FUN_00ca1a48(&local_70,param_2);
        local_b0 = 0x5e152411f5da3b3f;
        pcStack_a8 = "event";
        local_a0 = 5;
        uStack_98 = 0;
        local_90 = 7;
        local_8c = 1;
        local_78 = 1;
        local_88 = 0x3f000000bf800000;
        uStack_80 = 0x13f000000;
        FUN_01e3b40c(&local_60,param_1,&local_70,uVar8,1,&local_b0);
        puVar6 = local_70;
        if (local_70 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_70 + 3);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            piVar2 = (int *)((long)local_70 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
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
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_58 = *puVar6;
              FUN_00c44438(lVar10 + 0x8040,&local_58);
            }
          }
          else if (sVar11 == 0) goto LAB_00aa6194;
        }
        fVar13 = *(float *)(local_60 + 0x30);
        *(float *)(local_60 + 0x30) = fVar13 + 0.8;
        local_60[0x2d] = CONCAT44((int)((ulong)local_60[0x2d] >> 0x20),(fVar13 + 0.8) * 0.5);
        local_60[0x2c] = local_60[0x2c];
        if (local_60 != (long *)0x0) {
          lVar10 = local_60[6];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*local_60 + 0x50))();
          }
          else if (sVar11 == 0) goto LAB_00aa5ff4;
        }
        local_c0 = (undefined8 *)0x0;
        uStack_b8 = 0;
        FUN_00ca1a48(&local_c0,param_2);
        local_100 = 0x86a844a64bc77b7d;
        pcStack_f8 = "attack";
        local_f0 = 6;
        uStack_e8 = 0;
        local_e0 = 7;
        local_dc = 1;
        local_c8 = 1;
        local_d8 = 0x3f000000bf800000;
        uStack_d0 = 0x13f000000;
        FUN_01e3b40c(&local_60,param_1,&local_c0,uVar8,1,&local_100);
        puVar6 = local_c0;
        if (local_c0 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_c0 + 3);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            piVar2 = (int *)((long)local_c0 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
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
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_58 = *puVar6;
              FUN_00c44438(lVar10 + 0x8040,&local_58);
            }
          }
          else if (sVar11 == 0) {
LAB_00aa6194:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        fVar13 = *(float *)(local_60 + 0x30);
        *(float *)(local_60 + 0x30) = fVar13 + 1.5;
        local_60[0x2d] = CONCAT44((int)((ulong)local_60[0x2d] >> 0x20),fVar13 + 1.5);
        local_60[0x2c] = local_60[0x2c];
        *(float *)((long)local_60 + 0x184) = *(float *)((long)local_60 + 0x184) + 1.0;
        if (local_60 != (long *)0x0) {
          lVar10 = local_60[6];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*local_60 + 0x50))();
          }
          else if (sVar11 == 0) goto LAB_00aa5ff4;
        }
        lVar9 = *(long *)(lVar9 + 8);
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
          return;
        }
        if (sVar11 != 0) {
          return;
        }
LAB_00aa5ff4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


