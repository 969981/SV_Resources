/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0116df44; name: FUN_0116df44
 */


void FUN_0116df44(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((*param_2 != 0) && (puVar9 = *(undefined8 **)(*param_2 + 8), puVar9 != (undefined8 *)0x0)) {
    puVar10 = (undefined8 *)PTR_DAT_047ddc88;
    if (((*PTR_DAT_047ddc80 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047ddc80), puVar5 = PTR_DAT_047d9278,
       puVar10 = (undefined8 *)PTR_DAT_047ddc88, iVar6 != 0)) {
      if (((*PTR_DAT_047d9270 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d9270), iVar6 != 0)) {
        uVar7 = FUN_01e19d1c();
        *(undefined8 *)puVar5 = uVar7;
        __cxa_guard_release(PTR_DAT_047d9270);
      }
      puVar10 = (undefined8 *)PTR_DAT_047ddc88;
      *(undefined **)PTR_DAT_047ddc88 = puVar5;
      __cxa_guard_release(PTR_DAT_047ddc80);
    }
    do {
      if (puVar9 == puVar10) {
        lVar11 = param_2[1];
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        uVar7 = *(undefined8 *)PTR_DAT_047d3910;
        *(undefined8 *)PTR_DAT_047d3918 = uVar7;
        FUN_00c44204(&local_38,uVar7,lVar11);
        if (local_38 == 0) {
          FUN_0116e22c(param_1);
        }
        else {
          lVar8 = *param_1;
          *param_1 = 0;
          if (lVar8 != 0) {
            psVar1 = (short *)(lVar8 + 0x18);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 1) {
              FUN_0116e168();
            }
            else if (sVar2 == 0) goto LAB_0116e060;
          }
          lVar8 = local_38;
          local_38 = 0;
          *param_1 = lVar8;
          param_1[1] = lVar11;
        }
        if (local_38 == 0) {
          return;
        }
        psVar1 = (short *)(local_38 + 0x18);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          FUN_0116e168();
          return;
        }
        if (sVar2 != 0) {
          return;
        }
LAB_0116e060:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      puVar9 = (undefined8 *)*puVar9;
    } while (puVar9 != (undefined8 *)0x0);
  }
  return;
}


