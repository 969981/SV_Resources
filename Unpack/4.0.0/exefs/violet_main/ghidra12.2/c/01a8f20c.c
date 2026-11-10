/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a8f20c; name: FUN_01a8f20c
 */


uint FUN_01a8f20c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  long *plVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long *local_60;
  undefined8 uStack_58;
  long local_50;
  long local_48;
  
  if (*param_1 == 0) {
    local_50 = 0;
  }
  else {
    FUN_025bcd58(&local_48);
    local_50 = local_48;
    if (local_48 != 0) {
      local_60 = (long *)0x0;
      uStack_58 = 0;
      FUN_00ca1ea4(&local_60,param_5);
      uVar7 = FUN_025bce5c(&local_50,param_2,param_3,param_4,&local_60,param_6,*param_7);
      plVar6 = local_60;
      if (local_60 != (long *)0x0) {
        plVar1 = local_60 + 3;
        do {
          sVar3 = (short)*plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(short *)plVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_60 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_48 = *plVar6;
            FUN_00c44438(lVar9 + 0x8040,&local_48);
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      FUN_025bcde4(&local_50);
      goto LAB_01a8f2b0;
    }
  }
  FUN_025bcde4(&local_50);
  uVar7 = 0;
LAB_01a8f2b0:
  return uVar7 & 1;
}


