/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010e9e10; name: FUN_010e9e10
 */


void FUN_010e9e10(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  (**(code **)(*param_2 + 0x20))(local_48,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  if (local_48[0] != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)local_48[0][1];
    if (puVar8 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)PTR_DAT_047d39b8;
      if (((*PTR_DAT_047d39b0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar6 = PTR_DAT_047d39c8,
         puVar9 = (undefined8 *)PTR_DAT_047d39b8, iVar7 != 0)) {
        if (((*PTR_DAT_047d39c0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar7 != 0)) {
          *(undefined8 *)puVar6 = 0;
          __cxa_guard_release(PTR_DAT_047d39c0);
        }
        puVar9 = (undefined8 *)PTR_DAT_047d39b8;
        *(undefined **)PTR_DAT_047d39b8 = puVar6;
        __cxa_guard_release(PTR_DAT_047d39b0);
      }
      do {
        if (puVar8 == puVar9) {
          FUN_00d30d98(param_1,local_48);
          break;
        }
        puVar8 = (undefined8 *)*puVar8;
      } while (puVar8 != (undefined8 *)0x0);
    }
    if (local_48[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_48[0] + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_48[0] + 0x1c);
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
          local_38 = *local_48[0];
          FUN_00c44438(lVar10 + 0x8040,&local_38);
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
  }
  param_1[2] = param_3;
  return;
}


