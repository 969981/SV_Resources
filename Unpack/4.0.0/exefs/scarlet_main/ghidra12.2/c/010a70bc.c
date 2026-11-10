/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a70bc; name: FUN_010a70bc
 */


long FUN_010a70bc(long *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,long *param_5,
                 undefined1 *param_6,undefined4 *param_7,undefined1 *param_8,undefined4 *param_9,
                 undefined8 *param_10,undefined1 *param_11)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *local_70;
  long *local_68;
  
  puVar6 = (undefined4 *)FUN_01053840();
  lVar7 = nn::os::GetTlsValue(*puVar6);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_1;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  lVar8 = (**(code **)(*param_1 + 0x10))(param_1,0x138,8);
  if (lVar8 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  uVar9 = *param_2;
  uVar10 = *param_3;
  local_68 = (long *)*param_4;
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 5;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_010a7284;
  }
  local_70 = (long *)*param_5;
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 5;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) {
LAB_010a7284:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_010a8bec(lVar8,uVar9,uVar10,&local_68,&local_70,*param_6,*param_7,*param_8,*param_9,*param_10,
               *param_11);
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_010a72ac;
  }
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
LAB_010a72ac:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(undefined4 *)(lVar8 + 0x18) = 0x80138;
  *(long **)(lVar8 + 8) = param_1;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  return lVar8;
}


