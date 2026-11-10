/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6d330; name: FUN_01f6d330
 */


void FUN_01f6d330(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_38;
  undefined2 local_34 [2];
  
  lVar9 = FUN_00fee8fc(&local_70);
  *param_1 = lVar9;
  lVar13 = 0;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar13 = *param_1;
  }
  FUN_00feea48(lVar13,*param_4);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar13 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar13;
  puVar7 = PTR_DAT_047d4ce8;
  puVar6 = PTR_DAT_047d4ce0;
  plVar2 = *(long **)(lVar13 + 0x1c0);
  plVar3 = *(long **)(lVar13 + 0x1c8);
  for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar13 = *plVar2;
    plVar10 = (long *)(*(code *)**(undefined8 **)(lVar13 + 0x28))((undefined8 *)(lVar13 + 0x28));
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      uVar12 = FUN_01b3fb0c();
      *(undefined8 *)puVar7 = uVar12;
      __cxa_guard_release(puVar6);
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)puVar7) goto LAB_01f6d404;
    }
  }
  lVar13 = 0;
LAB_01f6d404:
  FUN_01dbd608(lVar13,&local_70);
  lVar13 = *param_1;
  FUN_01dbd74c(lVar13,&local_70);
  FUN_01f6d52c(lVar13);
  FUN_00deb174(lVar13);
  local_34[0] = 0;
  local_38 = 0;
  uVar11 = FUN_01f6d534(lVar13,*param_3,local_34,&local_38);
  if ((uVar11 & 1) != 0) {
    FUN_0196f62c(lVar13,local_38);
  }
  return;
}


