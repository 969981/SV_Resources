/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0182db44; name: FUN_0182db44
 */


void FUN_0182db44(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  FUN_00d1a240(param_1,0x80078080);
  *param_1 = &PTR_FUN_0460c408;
  param_1[4] = &PTR_LAB_0460c568;
  param_1[5] = &DAT_0460c690;
  param_1[6] = &PTR_LAB_0460c6e8;
  plVar9 = param_1 + 7;
  *plVar9 = (long)&PTR_LAB_0460c710;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  FUN_0182dd08(local_48,*param_2);
  FUN_0182f5a4(param_1 + 0x24,local_48);
  if (local_48[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_48[0] + 0x1c);
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
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_38 = *local_48[0];
        FUN_00c44438(lVar8 + 0x8040,&local_38);
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
  if ((*(char *)(param_1 + 0xb) != -0x7e) || (*(char *)((long)param_1 + 0x59) != -0x7e)) {
    uVar4 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0x8282;
    if (param_1[9] != 0) {
      FUN_00c6a584(param_1[9],plVar9);
    }
    (**(code **)(*plVar9 + 0x20))(plVar9,uVar4);
  }
  return;
}


