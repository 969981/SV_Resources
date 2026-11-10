/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cd80d8; name: FUN_01cd80d8
 */


undefined8
FUN_01cd80d8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *local_60;
  undefined8 uStack_58;
  long *local_50;
  long local_48;
  long local_28;
  
  if (*param_1 == 0) {
    local_48 = 0;
  }
  else {
    FUN_0196c128(&local_28);
    local_48 = local_28;
    if (local_28 != 0) {
      local_60 = (long *)0x0;
      uStack_58 = 0;
      FUN_00d334b4(&local_60,param_4);
      local_50 = *(long **)(param_4 + 0x10);
      *(undefined8 *)(param_4 + 0x10) = 0;
      uVar9 = FUN_01cd82e8(*param_5,&local_48,param_2,param_3,&local_60,*param_6);
      if (local_50 != (long *)0x0) {
        lVar10 = local_50[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*local_50 + 0x50))();
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar7 = local_60;
      if (local_60 != (long *)0x0) {
        plVar2 = local_60 + 3;
        do {
          sVar4 = (short)*plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(short *)plVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_60 + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_28 = *plVar7;
            FUN_00c44438(lVar10 + 0x8040,&local_28);
          }
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      FUN_0196c0b0(&local_48);
      return uVar9;
    }
  }
  FUN_0196c0b0(&local_48);
  return 0;
}


