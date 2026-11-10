/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a9edc; name: FUN_010a9edc
 */


void FUN_010a9edc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = *param_2;
  uVar11 = param_2[1];
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 2);
  plVar9 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x78) = uVar10;
  *(undefined8 *)(param_1 + 0x80) = uVar11;
  puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x48,8);
  if (puVar6 == (undefined8 *)0x0) {
    plVar9 = (long *)0x0;
    uVar11 = 0;
    uVar10 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar9;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *puVar6 = uVar11;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[8] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    FUN_0136ba88(puVar6,plVar9,uVar10,uVar11);
    FUN_0136b590(puVar6,plVar9,uVar10);
    uVar10 = 8;
    uVar11 = 0x48;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  lVar7 = *(long *)(param_1 + 0x38);
  *(undefined8 **)(param_1 + 0x38) = puVar6;
  if (lVar7 != 0) {
    FUN_010aa124(param_1 + 0x40);
    puVar6 = *(undefined8 **)(param_1 + 0x38);
  }
  *(long **)(param_1 + 0x40) = plVar9;
  *(undefined8 *)(param_1 + 0x48) = uVar11;
  uVar2 = *(undefined1 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  lVar7 = *(long *)(param_1 + 0x78);
  uVar10 = *(undefined8 *)(param_1 + 0x80);
  uVar11 = *(undefined8 *)(lVar7 + 0x48);
  plVar9 = *(long **)(lVar7 + 400);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    do {
      lVar8 = *plVar1;
      iVar5 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar8 = *(long *)(param_1 + 0x30);
  *(long *)(lVar8 + 0x30) = lVar7;
  *(undefined1 *)(lVar8 + 0x38) = uVar2;
  *(undefined8 *)(lVar8 + 0x40) = uVar11;
  *(undefined8 *)(lVar8 + 0x48) = uVar10;
  *(undefined8 **)(lVar8 + 0x50) = puVar6;
  *(long **)(lVar8 + 0x58) = plVar9;
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  lVar7 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(lVar7 + 0x10) = uVar10;
  return;
}


