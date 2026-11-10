/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010cc838; name: FUN_010cc838
 */


void FUN_010cc838(long *param_1)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar12 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar12;
  puVar8 = PTR_DAT_047d4840;
  puVar7 = PTR_DAT_047d4838;
  plVar3 = *(long **)(lVar12 + 0x1c0);
  plVar4 = *(long **)(lVar12 + 0x1c8);
  do {
    if (plVar3 == plVar4) {
      *param_1 = 0;
      return;
    }
    lVar12 = *plVar3;
    plVar10 = (long *)(*(code *)**(undefined8 **)(lVar12 + 0x28))((undefined8 *)(lVar12 + 0x28));
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      uVar11 = FUN_01b3fb0c();
      *(undefined8 *)puVar8 = uVar11;
      __cxa_guard_release(puVar7);
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)puVar8) {
        *param_1 = lVar12;
        lVar12 = *(long *)(lVar12 + 0x30);
        if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar2 == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          *(undefined8 *)(lVar12 + 8) = uVar11;
          *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
          return;
        }
        if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        return;
      }
    }
    plVar3 = plVar3 + 1;
  } while( true );
}


