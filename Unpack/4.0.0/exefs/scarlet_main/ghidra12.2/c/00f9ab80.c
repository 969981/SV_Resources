/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f9ab80; name: FUN_00f9ab80
 */


void FUN_00f9ab80(long *param_1,long *param_2,long param_3)

{
  short *psVar1;
  uint *puVar2;
  short sVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  int *piVar17;
  byte *pbVar18;
  ulong uVar19;
  long *plVar20;
  undefined1 *puVar21;
  undefined1 *local_b0;
  char *pcStack_a8;
  size_t local_a0;
  undefined8 uStack_98;
  long *local_90 [4];
  long *local_70;
  
  puVar7 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar7 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar11 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar15 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045d29c8;
  param_1[1] = lVar15;
  param_1[4] = (long)&PTR_LAB_045d2a00;
  lVar11 = *param_2;
  param_1[6] = lVar11;
  if (lVar11 != 0) {
    piVar17 = (int *)(lVar11 + 0x28);
    do {
      iVar10 = *piVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar6) {
        *piVar17 = iVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  param_1[0x11] = 0;
  param_1[0xd] = 0;
  puVar21 = &DAT_cbf29ce484222645;
  param_1[0x10] = 0;
  param_1[7] = (long)&DAT_cbf29ce484222645;
  param_1[8] = (long)&DAT_03c886bc;
  param_1[0xb] = (long)&PTR_FUN_045d2a50;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x12] = 0;
  plVar20 = param_1 + 0xc;
  *plVar20 = 0;
  plVar13 = param_1 + 0xe;
  *plVar13 = 0;
  param_1[0xf] = 0;
  FUN_00f9bac8(plVar20,param_3 + 8);
  lVar11 = *(long *)(param_3 + 0x18);
  if (lVar11 != 0) {
    lVar15 = *(long *)(lVar11 + 0x30);
    if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar14;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar12 = (long *)*plVar13;
  *plVar13 = lVar11;
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_00f9b034;
  }
  FUN_00cef9d0(param_1 + 0xf,param_3 + 0x20);
  FUN_00ceffd4(param_1 + 0x11,param_3 + 0x30);
  param_1[0x14] = 0;
  param_1[0xb] = (long)&PTR_FUN_045d2a30;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = (long)&PTR_FUN_045d2a70;
  param_1[0x1d] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar15 = nn::os::GetTlsValue(DAT_04865a30);
  lVar11 = tpidr_el0;
  if ((((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
      (lVar15 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8), lVar15 == 0)) &&
     (lVar15 = *(long *)(lVar11 + 0x30), lVar15 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar15 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x1e] = lVar15;
  param_1[0x24] = 0;
  param_1[0x1f] = 0x2aaaaaaaaaaaaaa;
  param_1[0x20] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar15 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
      (lVar15 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8), lVar15 == 0)) &&
     (lVar15 = *(long *)(lVar11 + 0x30), lVar15 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar15 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  param_1[0x26] = 0x2aaaaaaaaaaaaaa;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x25] = lVar15;
  FUN_00f9bd28(param_1 + 0x29);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar15 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
      (lVar15 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8), lVar15 == 0)) &&
     (lVar15 = *(long *)(lVar11 + 0x30), lVar15 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar15 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  param_1[0x34] = 0x2aaaaaaaaaaaaaa;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x33] = lVar15;
  puVar8 = PTR_DAT_047d8c48;
  puVar7 = PTR_DAT_047d8c40;
  param_1[0x38] = (long)&DAT_cbf29ce484222645;
  param_1[0x39] = (long)&DAT_03c886bc;
  puVar9 = PTR_DAT_047d8c50;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  plVar12 = (long *)param_1[0xe];
  if ((long *)param_1[0xe] == (long *)0x0) {
    if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    lVar11 = *(long *)puVar8;
    *(long *)puVar9 = lVar11;
    FUN_0110f1c4(local_90,*(undefined8 *)(lVar11 + 0x3a0));
    plVar12 = (long *)*plVar13;
    *plVar13 = 0;
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_00f9b034;
    }
    *plVar13 = (long)local_90[0];
    plVar12 = local_90[0];
  }
  pcVar16 = (code *)plVar12[0x19];
  if (pcVar16 != (code *)0x0) {
    plVar12[0x1a] = 0;
    plVar12[0x1b] = 0;
    plVar12[0x18] = 0;
    plVar12[0x19] = 0;
    (*pcVar16)(plVar12 + 0x1c);
  }
  plVar12[0x18] = (long)&LAB_0271856c;
  plVar12[0x19] = (long)&LAB_02bb5d08;
  plVar12[0x1a] = (long)&LAB_02bb5d0c;
  plVar12[0x1b] = (long)&LAB_02bb5d18;
  plVar12[0x1c] = (long)param_1;
  FUN_00f9b598(local_90,plVar20);
  if ((local_90[0] != (long *)0x0) &&
     (FUN_00cfe35c(local_90[0],plVar13,2), local_90[0] != (long *)0x0)) {
    lVar11 = local_90[0][6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_90[0] + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_00f9b034;
  }
  plVar20 = param_1 + 0x16;
  plVar13 = (long *)*plVar20;
  if ((long *)*plVar20 == (long *)0x0) {
    if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    lVar11 = *(long *)puVar8;
    *(long *)puVar9 = lVar11;
    FUN_0110f1c4(local_90,*(undefined8 *)(lVar11 + 0x3a0));
    plVar13 = (long *)*plVar20;
    *plVar20 = 0;
    if (plVar13 != (long *)0x0) {
      lVar11 = plVar13[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_00f9b034;
    }
    *plVar20 = (long)local_90[0];
    plVar13 = local_90[0];
  }
  pcVar16 = (code *)plVar13[0x19];
  if (pcVar16 != (code *)0x0) {
    plVar13[0x1a] = 0;
    plVar13[0x1b] = 0;
    plVar13[0x18] = 0;
    plVar13[0x19] = 0;
    (*pcVar16)(plVar13 + 0x1c);
  }
  plVar13[0x18] = (long)FUN_0271a0f8;
  plVar13[0x19] = (long)&LAB_02bb5d24;
  plVar13[0x1a] = (long)&LAB_02bb5d28;
  plVar13[0x1b] = (long)&LAB_02bb5d34;
  plVar13[0x1c] = (long)param_1;
  FUN_00f9c388(local_90,param_1 + 0x14);
  if ((local_90[0] != (long *)0x0) &&
     (FUN_00cfe35c(local_90[0],plVar20,2), local_90[0] != (long *)0x0)) {
    lVar11 = local_90[0][6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_90[0] + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_00f9b034:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if ((param_1[0xc] != 0) && ((*(byte *)(param_1[0xc] + 0x1e8) & 1) != 0)) {
    lVar11 = param_1[0xc];
    piVar17 = *(int **)(lVar11 + 0x210);
    if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 7) ||
       (uVar19 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[3], uVar19 == 0)) {
      lVar15 = 0;
    }
    else {
      puVar2 = (uint *)((long)piVar17 + uVar19);
      lVar15 = (long)puVar2 + (ulong)*puVar2;
    }
    local_a0 = strlen((char *)(lVar15 + 4));
    bVar4 = *(byte *)(lVar15 + 4);
    if (bVar4 != 0) {
      pbVar18 = (byte *)(lVar15 + 5);
      do {
        puVar21 = (undefined1 *)(((ulong)puVar21 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar4 != 0);
    }
    uStack_98 = 0;
    local_b0 = puVar21;
    pcStack_a8 = (char *)(lVar15 + 4);
    FUN_00f9be64(local_90,lVar11 + 0x218,&local_b0);
    FUN_00f9c014(param_1 + 0x13,0,local_90,0,param_1[1]);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (local_90[0] != (long *)0x0) {
      (**(code **)(*local_90[0] + 0x20))();
    }
    FUN_00f9d430(param_1,param_1[0xc] + 0x210);
  }
  return;
}


