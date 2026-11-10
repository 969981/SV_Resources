/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b7eb4; name: FUN_011b7eb4
 */


void FUN_011b7eb4(long param_1,uint param_2,short param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_18;
  
  uVar10 = (ulong)param_2;
  if (((*PTR_DAT_047d8ac0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ac0);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d8ac8;
  local_40 = 8;
  local_38 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar6;
  local_50 = 0x17f49a8e21bba28e;
  pcStack_48 = "typename";
  FUN_01286898(&local_18,uVar6,&local_50,0);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_18 == (long *)0x0) {
    uVar7 = 0x20000;
  }
  else {
    uVar7 = FUN_00e388b8(local_18,(int)param_3,*(undefined8 *)(param_1 + 0x40));
    uVar7 = uVar7 & 0xffff | 0x20000;
  }
  if (param_2 < *(uint *)(param_1 + 0x58)) {
    lVar11 = uVar10 * 2 + (ulong)param_2;
    lVar9 = *(long *)(param_1 + 0x40);
    *(ulong *)(*(long *)(param_1 + 0x60) + lVar11 * 8 + 8) = uVar7;
    lVar8 = *(long *)(param_1 + 0x60);
    lVar11 = *(long *)(lVar8 + lVar11 * 8);
    if (*(char *)(lVar11 + 0x54) != '\0') {
      uVar4 = FUN_011b8d00(*(undefined8 *)(lVar11 + 0x30),*(undefined8 *)(lVar9 + 0x30),
                           *(undefined2 *)(lVar11 + 0x50));
      *(undefined2 *)(lVar11 + 0x52) = uVar4;
      lVar8 = *(long *)(param_1 + 0x60);
    }
    *(undefined2 *)(lVar8 + uVar10 * 0x18 + 0x10) = 0;
    lVar11 = *(long *)(param_1 + 0x60) + uVar10 * 0x18;
    *(ushort *)(lVar11 + 0x12) = *(ushort *)(lVar11 + 0x12) & 0xfffe;
  }
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 5;
    do {
      lVar11 = *plVar1;
      iVar5 = (int)lVar11 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


