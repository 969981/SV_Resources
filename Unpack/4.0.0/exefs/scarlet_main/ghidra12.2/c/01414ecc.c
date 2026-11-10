/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01414ecc; name: FUN_01414ecc
 */


void FUN_01414ecc(undefined4 param_1,long *param_2)

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
  long lVar13;
  long *local_38;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar12 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar12;
  puVar8 = PTR_DAT_047d4a88;
  puVar7 = PTR_DAT_047d4a80;
  plVar3 = *(long **)(lVar12 + 0x1c0);
  plVar4 = *(long **)(lVar12 + 0x1c8);
  for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
    lVar12 = *plVar3;
    plVar10 = (long *)(*(code *)**(undefined8 **)(lVar12 + 0x28))((undefined8 *)(lVar12 + 0x28));
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      uVar11 = FUN_01b5c440();
      *(undefined8 *)puVar8 = uVar11;
      __cxa_guard_release(puVar7);
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)puVar8) goto LAB_01414f7c;
    }
  }
  lVar12 = 0;
LAB_01414f7c:
  local_38 = (long *)*param_2;
  if (local_38 == (long *)0x0) {
    FUN_01415150(lVar12,param_1,&local_38);
  }
  else {
    lVar13 = local_38[6];
    if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar13 + 0x1a);
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
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar11;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar3 = local_38;
    FUN_01415150(lVar12,param_1,&local_38);
    if (plVar3 != (long *)0x0) {
      lVar12 = plVar3[6];
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0141505c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x50))(plVar3);
        return;
      }
      if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


