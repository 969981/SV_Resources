/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a8564; name: FUN_017a8564
 */


ulong FUN_017a8564(long param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  if ((((*(long *)(param_1 + 0x160) == 0) || (*(short *)(*(long *)(param_1 + 0x160) + 0x1a) == 0))
      || (lVar9 = *(long *)(param_1 + 0x160), lVar9 == 0)) || (*(short *)(lVar9 + 0x1a) == 0)) {
LAB_017a859c:
    uVar8 = 0;
    uVar13 = 0;
  }
  else {
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
        if (cVar4 != '\0') goto LAB_017a85f0;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_017a85f0:
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          plVar12 = (long *)(lVar9 + -0x28);
          FUN_00d9ec44(auStack_50,2,*param_2);
          local_78 = (undefined8 *)0x0;
          uStack_70 = 0;
          FUN_00ca1a48(&local_78,param_1 + 0x150);
          local_68[0] = 2;
          local_60 = 0;
          uStack_58 = 0;
          FUN_00ca1ea4(&local_60,&local_78);
          uVar13 = FUN_0155c280(plVar12,auStack_50,local_68);
          FUN_00cecfd8(local_68);
          puVar6 = local_78;
          if (local_78 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_78 + 3);
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
              piVar2 = (int *)((long)local_78 + 0x1c);
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
                local_38 = *puVar6;
                FUN_00c44438(lVar10 + 0x8040,&local_38);
              }
            }
            else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          lVar9 = *(long *)(lVar9 + 8);
          uVar13 = uVar13 >> 0x20;
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
          }
          else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          uVar8 = 1;
          break;
        }
        goto LAB_017a859c;
      }
      uVar8 = 0;
      uVar13 = 0;
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  return uVar8 | uVar13 << 0x20;
}


