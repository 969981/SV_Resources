/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c4484; name: FUN_014c4484
 */


void FUN_014c4484(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  lVar13 = *param_4;
  lVar11 = *(long *)(lVar13 + (ulong)*(uint *)(param_2 + 0xe4));
  if ((lVar11 == 0) && (lVar11 = *(long *)(lVar13 + (ulong)*(uint *)(param_2 + 8)), lVar11 != 0)) {
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x28))((undefined8 *)(lVar11 + 0x28));
    if (((*PTR_DAT_047db160 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047db160), iVar5 != 0)) {
      uVar8 = FUN_01fb90e4();
      *(undefined8 *)PTR_DAT_047db168 = uVar8;
      __cxa_guard_release(PTR_DAT_047db160);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_047db168) goto LAB_014c44fc;
    }
    lVar11 = 0;
LAB_014c44fc:
    *(long *)(lVar13 + (ulong)*(uint *)(param_2 + 0xe4)) = lVar11;
  }
  if ((((*(long *)(lVar11 + 0xd8) == 0) || (*(short *)(*(long *)(lVar11 + 0xd8) + 0x1a) == 0)) &&
      (uVar7 = FUN_01473a8c(lVar11 + 0xc0), (uVar7 & 1) == 0)) ||
     ((*(long *)(lVar11 + 0xd0) == 0 ||
      (plVar6 = *(long **)(*(long *)(lVar11 + 0xd0) + 0x600), plVar6 == (long *)0x0)))) {
    puVar9 = (undefined1 *)FUN_00f6866c();
    *param_1 = *puVar9;
  }
  else {
    lVar11 = plVar6[6];
    if (*(long *)(lVar11 + 0x10) == 0) {
      pcVar10 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
LAB_014c47a8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("m_object != nullptr","AddReference",pcVar10,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar8;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
      pcVar10 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      goto LAB_014c47d0;
    }
    plVar12 = *(long **)(*(long *)(*param_4 + (ulong)*(uint *)(param_2 + 8)) + 0x58);
    if (plVar12 == (long *)0x0) {
      puVar9 = (undefined1 *)FUN_00f6866c();
      *param_1 = *puVar9;
    }
    else {
      lVar11 = plVar12[6];
      if (*(long *)(lVar11 + 0x10) == 0) {
        pcVar10 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        goto LAB_014c47a8;
      }
      psVar1 = (short *)(lVar11 + 0x1a);
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
        uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar8;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
        pcVar10 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
LAB_014c47d0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",pcVar10,0x58,"Reference counter overflows.");
      }
      uVar7 = FUN_00d60828(plVar12,*param_4 + (ulong)*(uint *)(param_2 + 0xe8));
      if ((uVar7 & 1) == 0) {
        FUN_014c47d8(plVar6);
      }
      else {
        FUN_014c4904(plVar6);
      }
      *param_1 = *PTR_DAT_047dca60;
      lVar11 = plVar12[6];
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
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar2 == 0) goto LAB_014c4728;
    }
    lVar11 = plVar6[6];
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
                    /* WARNING: Could not recover jumptable at 0x014c46a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x50))(plVar6);
      return;
    }
    if (sVar2 == 0) {
LAB_014c4728:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


