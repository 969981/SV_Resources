/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eeb8d0; name: FUN_00eeb8d0
 */


void FUN_00eeb8d0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  short sVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *unaff_x21;
  undefined1 auStack_c0 [128];
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar11 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar11;
  puVar6 = PTR_DAT_047d8f00;
  puVar5 = PTR_DAT_047d8ef8;
  plVar1 = *(long **)(lVar11 + 0x1c0);
  plVar2 = *(long **)(lVar11 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar11 = *plVar1;
    plVar9 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x28))((undefined8 *)(lVar11 + 0x28));
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
      uVar10 = FUN_01b3fb0c();
      *(undefined8 *)puVar6 = uVar10;
      __cxa_guard_release(puVar5);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar6) goto LAB_00eeb978;
    }
  }
  lVar11 = 0;
LAB_00eeb978:
  FUN_00eebacc(auStack_c0 + 0xa8,lVar11,0x20,0);
  if (((*(byte *)(*(long *)(unaff_x21[0xe] + 0x10) + 4) >> 2 & 1) == 0) &&
     (sVar7 = FUN_00cf44f4(), sVar7 == 0)) {
    FUN_00eebc24(param_1,lVar11);
    if (unaff_x21 != (long *)0x0) {
      plVar1 = unaff_x21 + 5;
      do {
        lVar11 = *plVar1;
        iVar8 = (int)lVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
      }
      else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  else {
    *param_1 = unaff_x21;
  }
  return;
}


