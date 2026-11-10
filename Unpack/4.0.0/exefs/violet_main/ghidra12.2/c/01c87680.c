/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c87680; name: FUN_01c87680
 */


byte FUN_01c87680(void)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *local_48;
  
  uVar10 = FUN_0126a9c0();
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar13 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar13;
  puVar7 = PTR_DAT_047d8f00;
  puVar6 = PTR_DAT_047d8ef8;
  plVar1 = *(long **)(lVar13 + 0x1c0);
  plVar2 = *(long **)(lVar13 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar13 = *plVar1;
    plVar11 = (long *)(*(code *)**(undefined8 **)(lVar13 + 0x28))((undefined8 *)(lVar13 + 0x28));
    if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
      uVar12 = FUN_01b3fb0c();
      *(undefined8 *)puVar7 = uVar12;
      __cxa_guard_release(puVar6);
    }
    for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11 == (long *)puVar7) goto LAB_01c8772c;
    }
  }
  lVar13 = 0;
LAB_01c8772c:
  iVar9 = FUN_01edab28(lVar13,uVar10);
  FUN_0174fbdc(&local_48);
  bVar8 = (**(code **)(*local_48 + 0x70))();
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 5;
    do {
      lVar13 = *plVar1;
      iVar5 = (int)lVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return iVar9 == 0 & bVar8;
}


