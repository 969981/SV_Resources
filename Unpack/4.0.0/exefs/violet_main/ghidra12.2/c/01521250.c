/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01521250; name: FUN_01521250
 */


void FUN_01521250(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *param_4;
  lVar10 = *(long *)(lVar11 + (ulong)*(uint *)(param_2 + 0xe4));
  if ((lVar10 == 0) && (lVar10 = *(long *)(lVar11 + (ulong)*(uint *)(param_2 + 8)), lVar10 != 0)) {
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))((undefined8 *)(lVar10 + 0x28));
    if (((*PTR_DAT_047db160 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047db160), iVar5 != 0)) {
      uVar7 = FUN_01fb90e4();
      *(undefined8 *)PTR_DAT_047db168 = uVar7;
      __cxa_guard_release(PTR_DAT_047db160);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_047db168) goto LAB_015212c4;
    }
    lVar10 = 0;
LAB_015212c4:
    *(long *)(lVar11 + (ulong)*(uint *)(param_2 + 0xe4)) = lVar10;
  }
  if ((((*(long *)(lVar10 + 0x88) == 0) || (*(short *)(*(long *)(lVar10 + 0x88) + 0x1a) == 0)) &&
      (uVar8 = FUN_013f7d04(lVar10 + 0x70), (uVar8 & 1) == 0)) ||
     ((*(long *)(lVar10 + 0x80) == 0 ||
      (plVar6 = *(long **)(*(long *)(lVar10 + 0x80) + 0x1f0), plVar6 == (long *)0x0)))) {
    puVar9 = (undefined1 *)FUN_00f6866c();
    *param_1 = *puVar9;
  }
  else {
    lVar10 = plVar6[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    FUN_015214ac(plVar6,*(undefined4 *)(*param_4 + (ulong)*(uint *)(param_2 + 0xe8)),
                 *(undefined1 *)(*param_4 + (ulong)*(uint *)(param_2 + 0xec)));
    *param_1 = *PTR_DAT_047dca60;
    lVar10 = plVar6[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x015213e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x50))(plVar6);
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
  return;
}


