/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011105b0; name: FUN_011105b0
 */


uint FUN_011105b0(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = *param_2;
  lVar11 = *(long *)(lVar12 + (ulong)*(uint *)(param_1 + 0x5c));
  if ((lVar11 == 0) && (lVar11 = *(long *)(lVar12 + (ulong)*(uint *)(param_1 + 0x4c)), lVar11 != 0))
  {
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x28))((undefined8 *)(lVar11 + 0x28));
    if (((*PTR_DAT_047db160 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047db160), iVar7 != 0)) {
      uVar9 = FUN_01fb90e4();
      *(undefined8 *)PTR_DAT_047db168 = uVar9;
      __cxa_guard_release(PTR_DAT_047db160);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)PTR_DAT_047db168) goto LAB_01110624;
    }
    lVar11 = 0;
LAB_01110624:
    *(long *)(lVar12 + (ulong)*(uint *)(param_1 + 0x5c)) = lVar11;
  }
  if ((((*(long *)(lVar11 + 0x88) == 0) || (*(short *)(*(long *)(lVar11 + 0x88) + 0x1a) == 0)) &&
      (uVar10 = FUN_013f7d04(lVar11 + 0x70), (uVar10 & 1) == 0)) ||
     ((lVar11 = *(long *)(lVar11 + 0x80), lVar11 == 0 ||
      (plVar8 = *(long **)(*(long *)(*param_2 + (ulong)*(uint *)(param_1 + 0x4c)) + 0x58),
      plVar8 == (long *)0x0)))) {
    uVar6 = 0;
  }
  else {
    lVar12 = plVar8[6];
    if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar12 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar9;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    lVar12 = FUN_01073a44(plVar8,*param_2 + (ulong)*(uint *)(param_1 + 0x60));
    uVar5 = FUN_00e03574(plVar8,*param_2 + (ulong)*(uint *)(param_1 + 100));
    uVar6 = FUN_0111084c(lVar11,uVar5,0);
    if (lVar12 != 0x137e8707be8470ef) {
      if (lVar12 == 0x133a8707be4aa423) {
        uVar6 = uVar6 ^ 1;
      }
      else {
        uVar6 = 0;
      }
    }
    lVar11 = plVar8[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))(plVar8);
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return uVar6 & 1;
}


