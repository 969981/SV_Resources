/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026feb78; name: FUN_026feb78
 */


void FUN_026feb78(long param_1)

{
  undefined *puVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar6 = PTR_DAT_047d3928;
  pcVar10 = *(code **)(PTR_DAT_047d3928 + 8);
  if (pcVar10 != (code *)0x0) {
    puVar1 = PTR_DAT_047d3928 + 0x20;
    *(undefined8 *)(PTR_DAT_047d3928 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    *(undefined8 *)puVar6 = 0;
    *(undefined8 *)(puVar6 + 8) = 0;
    (*pcVar10)(puVar1);
  }
  plVar7 = *(long **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_026fecf8;
  }
  plVar7 = *(long **)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_026fecf8;
  }
  plVar7 = *(long **)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_026fecf8;
  }
  plVar7 = *(long **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_026fecf8;
  }
  plVar7 = *(long **)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_026fecf8;
  }
  plVar7 = *(long **)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_026fecf8;
  }
  plVar7 = *(long **)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_026fecf8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_026feee4((undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  lVar9 = *(long *)(param_1 + 0x378);
  *(undefined8 *)(param_1 + 0x378) = 0;
  if (lVar9 != 0) {
    FUN_024c372c(param_1 + 0x380);
  }
  lVar9 = *(long *)(param_1 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  if (lVar9 != 0) {
    FUN_024c372c(param_1 + 0x3b0);
  }
  plVar7 = *(long **)(param_1 + 0x370);
  uVar11 = *(undefined8 *)(param_1 + 0x398);
  uVar12 = *(undefined8 *)(param_1 + 0x3a0);
  uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
    (**(code **)(*plVar7 + 0x18))(plVar7,uVar11,uVar12,8);
  }
  else {
    FUN_00c48fe8(plVar7,uVar11,uVar12,8);
  }
  plVar7 = *(long **)(param_1 + 0x370);
  uVar12 = *(undefined8 *)(param_1 + 0x3c8);
  uVar11 = *(undefined8 *)(param_1 + 0x3d0);
  uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x026feca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))(plVar7,uVar12,uVar11,8);
    return;
  }
  FUN_00c48fe8(plVar7,uVar12,uVar11,8);
  return;
}


