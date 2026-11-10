/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a8bec; name: FUN_010a8bec
 */


void FUN_010a8bec(long *param_1,long param_2,long param_3,long *param_4,long *param_5,
                 undefined8 param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9,
                 undefined8 param_10,undefined1 param_11)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  long *local_58;
  
  puVar6 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar16 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045ff198;
  param_1[1] = lVar16;
  param_1[4] = (long)&PTR_LAB_045ff1d0;
  param_1[0xe] = 0;
  param_1[6] = param_2;
  param_1[7] = param_3;
  plVar10 = param_1 + 8;
  *plVar10 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar8 = *param_4;
  param_1[0xf] = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) goto LAB_010a8f64;
  }
  lVar8 = *param_5;
  param_1[0x10] = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) goto LAB_010a8f64;
  }
  param_1[0x15] = (long)(PTR_DAT_047dcd38 + 0x10);
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x13] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x16] = 0xf4b17a579f18960;
  param_1[0x17] = -0x7d5d4e8add6295a5;
  *(undefined1 *)((long)param_1 + 0xe2) = param_7;
  *(undefined1 *)((long)param_1 + 0xe3) = param_8;
  *(undefined1 *)((long)param_1 + 0xe4) = param_9;
  *(undefined2 *)(param_1 + 0x25) = 0x505;
  *(undefined2 *)(param_1 + 0x21) = 0x505;
  *(undefined2 *)((long)param_1 + 0xe5) = 0;
  *(undefined2 *)(param_1 + 0x26) = 1;
  param_1[0x23] = 0;
  *(undefined1 *)((long)param_1 + 0x132) = 0;
  *(undefined4 *)((long)param_1 + 0x134) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = (long)&LAB_01059e54;
  param_1[0x1b] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_010a9134(&local_58,param_1[1]);
  FUN_010a9200(param_1 + 9,&local_58);
  if (local_58 != (long *)0x0) {
    plVar9 = local_58 + 5;
    do {
      lVar8 = *plVar9;
      iVar7 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_58 + 0x10))();
      goto LAB_010a8da4;
    }
    if ((int)lVar8 != 0) goto LAB_010a8da4;
LAB_010a8fc8:
    pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar13 = "DecrementReferenceInternal";
    pcVar14 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
    ;
    pcVar15 = "Reference counter underflows.";
    goto LAB_010a8f40;
  }
LAB_010a8da4:
  lVar8 = FUN_0137d65c(&local_58,param_1[1]);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) {
LAB_010a8f64:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 5;
    do {
      lVar16 = *plVar10;
      iVar7 = (int)lVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar16 == 0) goto LAB_010a8fc8;
  }
  param_1[8] = lVar8;
  lVar8 = FUN_010ae198(&local_58,param_1[1],&param_11);
  if (lVar8 == 0) goto LAB_010a8de0;
  lVar16 = *(long *)(lVar8 + 0x30);
  if (*(long *)(lVar16 + 0x10) == 0) goto LAB_010a9108;
  psVar2 = (short *)(lVar16 + 0x1a);
  do {
    sVar3 = *psVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar5) {
      *psVar2 = sVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 != 0) {
    if (sVar3 != -1) goto LAB_010a8de0;
LAB_010a8f20:
    pcVar11 = "count != 0";
    pcVar13 = "AddReference";
    pcVar14 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar15 = "Reference counter overflows.";
LAB_010a8f40:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar11,pcVar13,pcVar14,0x58,pcVar15);
  }
  uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
  *(undefined8 *)(lVar16 + 8) = uVar12;
  *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
LAB_010a8de0:
  plVar10 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar10 != (long *)0x0) {
    lVar16 = plVar10[6];
    psVar2 = (short *)(lVar16 + 0x1a);
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
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_010a90cc;
  }
  param_1[0xd] = lVar8;
  lVar8 = FUN_010ae198(&local_58,param_1[1],&param_11);
  if (lVar8 != 0) {
    lVar16 = *(long *)(lVar8 + 0x30);
    if (*(long *)(lVar16 + 0x10) == 0) {
LAB_010a9108:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar12;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_010a8f20;
  }
  plVar10 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar10 != (long *)0x0) {
    lVar16 = plVar10[6];
    psVar2 = (short *)(lVar16 + 0x1a);
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
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_010a90cc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[0xe] = lVar8;
  FUN_010a93b4(param_1);
  FUN_010a91a0(param_1);
  FUN_010a9ba8(param_1 + 0x15,param_10);
  local_58 = (long *)param_1[6];
  FUN_010a9128(param_1[8],&local_58);
  FUN_010a98b8(param_1,param_10);
  return;
}


