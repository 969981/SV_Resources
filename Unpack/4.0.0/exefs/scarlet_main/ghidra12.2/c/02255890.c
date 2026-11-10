/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02255890; name: FUN_02255890
 */


long * FUN_02255890(undefined8 param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  
  if (param_3 - 2U < 8) {
    uVar6 = *(undefined4 *)(&DAT_03cbf220 + (long)(int)(param_3 - 2U) * 4);
  }
  else {
    uVar6 = 0;
  }
  if (((*PTR_DAT_047db110 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047db110), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047db110);
  }
  uVar7 = *(undefined8 *)PTR_DAT_047db118;
  *(undefined8 *)PTR_DAT_047db120 = uVar7;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = param_2[2];
  local_30 = (long *)param_2[3];
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x18))();
  }
  FUN_00c82174(&local_28,uVar7,&local_48,uVar6);
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 5;
    do {
      lVar4 = *plVar1;
      iVar5 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_28 + 0x10))(local_28);
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  return local_28 + 8;
}


