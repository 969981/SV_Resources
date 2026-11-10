/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011329a0; name: FUN_011329a0
 */


void FUN_011329a0(long *param_1)

{
  undefined *puVar1;
  short *psVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long local_18;
  
  FUN_00d1a240(param_1,0x800a8080);
  *param_1 = (long)&DAT_04595498;
  param_1[4] = (long)&PTR_LAB_04595618;
  param_1[5] = (long)&DAT_04595740;
  param_1[6] = (long)&PTR_LAB_04595798;
  param_1[7] = (long)&PTR_LAB_045957c0;
  param_1[0x24] = (long)&PTR_LAB_045957f8;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  puVar1 = PTR_DAT_047d94a8 + 0x10;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = (long)puVar1;
  param_1[0x2e] = 0;
  param_1[0x2f] = (long)&DAT_cbf29ce484222645;
  param_1[0x32] = 0;
  param_1[0x33] = (long)&DAT_cbf29ce484222645;
  param_1[0x30] = (long)&DAT_03c886bc;
  param_1[0x31] = 0;
  param_1[0x34] = (long)&DAT_03c886bc;
  param_1[0x35] = 0;
  *(undefined4 *)((long)param_1 + 0x1c9) = 1;
  param_1[0x42] = param_1[1];
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0xfffffffffffffff;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined1 *)((long)param_1 + 0x242) = 0;
  param_1[0x49] = 0;
  param_1[0x3d] = param_1[1];
  param_1[0x3e] = 0xfffffffffffffff;
  *(undefined4 *)(param_1 + 0x47) = 0x3f800000;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)((long)param_1 + 0x25c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x4a,0,1);
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0x10100;
  *(undefined2 *)((long)param_1 + 0x26c) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x52) = 1;
  *(undefined2 *)(param_1 + 0x53) = 0x101;
  *(undefined1 *)((long)param_1 + 0x29a) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  FUN_01100b28(param_1 + 0x56);
  *(undefined2 *)(param_1 + 0x5b) = 0x101;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0x3f80000000000000;
  *(undefined1 *)((long)param_1 + 0x2e4) = 1;
  if (((*PTR_DAT_047d8a48 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a48);
  }
  *(undefined8 *)PTR_DAT_047d8a58 = *(undefined8 *)PTR_DAT_047d8a50;
  FUN_01132db0(&local_18);
  plVar9 = (long *)param_1[0x26];
  param_1[0x26] = 0;
  if (plVar9 != (long *)0x0) {
    lVar15 = plVar9[6];
    psVar2 = (short *)(lVar15 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_01132c40;
  }
  param_1[0x26] = local_18;
  lVar15 = FUN_01100a00(param_1[1]);
  if (lVar15 != 0) {
    lVar16 = *(long *)(lVar15 + 0x30);
    if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar11;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
      pcVar10 = "count != 0";
      pcVar12 = "AddReference";
      pcVar13 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar14 = "Reference counter overflows.";
      goto LAB_01132d80;
    }
  }
  plVar9 = (long *)param_1[0x38];
  param_1[0x38] = 0;
  if (plVar9 != (long *)0x0) {
    lVar16 = plVar9[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_01132c40:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[0x38] = lVar15;
  local_18 = lVar15;
  lVar15 = FUN_01100db8(param_1[1],&local_18);
  if (lVar15 != 0) {
    piVar3 = (int *)(lVar15 + 0x28);
    do {
      iVar8 = *piVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = iVar8 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar9 = (long *)param_1[0x4c];
  param_1[0x4c] = 0;
  if (plVar9 != (long *)0x0) {
    plVar4 = plVar9 + 5;
    do {
      lVar16 = *plVar4;
      iVar8 = (int)lVar16 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *(int *)plVar4 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar16 == 0) {
      pcVar10 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar12 = "DecrementReferenceInternal";
      pcVar13 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar14 = "Reference counter underflows.";
LAB_01132d80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar10,pcVar12,pcVar13,0x58,pcVar14);
    }
  }
  param_1[0x4c] = lVar15;
  (**(code **)(*param_1 + 0x70))(param_1,0);
  return;
}


