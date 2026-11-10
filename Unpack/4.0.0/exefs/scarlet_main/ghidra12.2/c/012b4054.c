/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012b4054; name: FUN_012b4054
 */


void FUN_012b4054(undefined8 param_1,undefined8 param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  if (((*PTR_DAT_047d8af8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8af8), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047dd260,PTR_DAT_047d8b00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8af8);
  }
  *(undefined8 *)PTR_DAT_047d8b08 = *(undefined8 *)PTR_DAT_047d8b00;
  FUN_00fac970(local_40);
  if (local_40[0] == (undefined8 *)0x0) {
    lVar8 = 0x400;
  }
  else {
    lVar8 = 0;
    if (local_40[0][2] != 0) {
      lVar8 = local_40[0][2] + -0x28;
    }
    psVar1 = (short *)(local_40[0] + 3);
    lVar8 = lVar8 + 0x400;
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
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_18 = *local_40[0];
        FUN_00c44438(lVar7 + 0x8040,&local_18);
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
  FUN_012b422c(lVar8,&DAT_03d61eb4,PTR_DAT_047d8ae8);
  FUN_012b4bd8(param_1);
  FUN_012b46f0(param_2);
  return;
}


