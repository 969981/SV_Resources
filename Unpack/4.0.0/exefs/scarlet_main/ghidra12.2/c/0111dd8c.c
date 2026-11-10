/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0111dd8c; name: FUN_0111dd8c
 */


void FUN_0111dd8c(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  (**(code **)(*param_2 + 0x20))(local_40);
  *param_1 = 0;
  param_1[1] = 0;
  if (local_40[0] != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)local_40[0][1];
    if (puVar9 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)PTR_DAT_047dce00;
      if (((*PTR_DAT_047dcdf8 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047dcdf8), puVar6 = PTR_DAT_047d9018,
         puVar11 = (undefined8 *)PTR_DAT_047dce00, iVar7 != 0)) {
        if (((*PTR_DAT_047d9010 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d9010), iVar7 != 0)) {
          uVar8 = FUN_00ea2d24();
          *(undefined8 *)puVar6 = uVar8;
          __cxa_guard_release(PTR_DAT_047d9010);
        }
        puVar11 = (undefined8 *)PTR_DAT_047dce00;
        *(undefined **)PTR_DAT_047dce00 = puVar6;
        __cxa_guard_release(PTR_DAT_047dcdf8);
      }
      do {
        if (puVar9 == puVar11) {
          FUN_0111df88(param_1,local_40);
          break;
        }
        puVar9 = (undefined8 *)*puVar9;
      } while (puVar9 != (undefined8 *)0x0);
    }
    if (local_40[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40[0] + 3);
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
        piVar2 = (int *)((long)local_40[0] + 0x1c);
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
          local_18 = *local_40[0];
          FUN_00c44438(lVar10 + 0x8040,&local_18);
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
  return;
}


