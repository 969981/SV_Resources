/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0102e1b0; name: FUN_0102e1b0
 */


void FUN_0102e1b0(long param_1,long *param_2,undefined2 *param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  code *pcVar19;
  long *plVar20;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1a0,0x10);
  puVar7 = PTR_DAT_047d66f8;
  if (plVar10 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar10[2] = 0;
  *(undefined4 *)(plVar10 + 3) = 0;
  *plVar10 = (long)(puVar7 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  puVar7 = PTR_DAT_047d8c78;
  if (lVar11 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar18 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *plVar10 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar10[1] = lVar18;
  plVar10[4] = (long)(puVar7 + 0x88);
  plVar12 = plVar10 + 5;
  *plVar12 = (long)(puVar7 + 0xd8);
  plVar20 = plVar10 + 6;
  *plVar20 = 0;
  plVar10[7] = 0;
  FUN_00d1a3f4(plVar20,plVar12);
  *plVar10 = (long)&PTR_FUN_0459fc68;
  plVar10[4] = (long)&PTR_LAB_0459fce0;
  *plVar12 = (long)&PTR_LAB_0459fd30;
  *(undefined2 *)(plVar10 + 8) = *param_3;
  plVar10[9] = *(long *)(param_3 + 4);
  plVar10[10] = *(long *)(param_3 + 8);
  plVar10[0xb] = *(long *)(param_3 + 0xc);
  plVar12 = *(long **)(param_3 + 0x10);
  plVar10[0xc] = (long)plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))();
  }
  plVar10[0xd] = *(long *)(param_3 + 0x14);
  plVar10[0xe] = *(long *)(param_3 + 0x18);
  plVar10[0xf] = *(long *)(param_3 + 0x1c);
  plVar12 = *(long **)(param_3 + 0x20);
  plVar10[0x10] = (long)plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))();
  }
  lVar11 = *(long *)(param_3 + 0x24);
  *(undefined4 *)(plVar10 + 0x12) = *(undefined4 *)(param_3 + 0x28);
  plVar10[0x11] = lVar11;
  *(undefined1 *)(plVar10 + 0x13) = *(undefined1 *)(param_3 + 0x2c);
  plVar10[0x14] = *(long *)(param_3 + 0x30);
  plVar10[0x15] = *(long *)(param_3 + 0x34);
  plVar10[0x16] = *(long *)(param_3 + 0x38);
  plVar12 = *(long **)(param_3 + 0x3c);
  plVar10[0x17] = (long)plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))();
  }
  plVar10[0x18] = *(long *)(param_3 + 0x40);
  plVar10[0x19] = *(long *)(param_3 + 0x44);
  plVar10[0x1a] = *(long *)(param_3 + 0x48);
  plVar12 = *(long **)(param_3 + 0x4c);
  plVar10[0x1b] = (long)plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))();
  }
  lVar11 = *(long *)(param_3 + 0x50);
  lVar18 = *(long *)(param_3 + 0x54);
  lVar4 = *(long *)(param_3 + 0x5c);
  plVar10[0x1e] = *(long *)(param_3 + 0x58);
  plVar10[0x1f] = lVar4;
  plVar10[0x1c] = lVar11;
  plVar10[0x1d] = lVar18;
  plVar10[0x20] = *(long *)(param_3 + 0x60);
  plVar10[0x21] = *(long *)(param_3 + 100);
  plVar10[0x22] = *(long *)(param_3 + 0x68);
  plVar12 = *(long **)(param_3 + 0x6c);
  plVar10[0x23] = (long)plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))();
  }
  plVar10[2] = (long)plVar10;
  *plVar10 = (long)&PTR_FUN_0459fb48;
  plVar10[1] = (long)param_2;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  *(undefined4 *)(plVar10 + 3) = 0x1001a0;
  plVar10[0x24] = 0;
  plVar10[0x25] = 0;
  plVar10[4] = (long)&PTR_LAB_0459fbc0;
  plVar10[5] = (long)&DAT_0459fc10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  lVar9 = plVar10[6];
  if (*(long *)(lVar9 + 0x10) == 0) goto LAB_0102e790;
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar3 != 0) {
    if (sVar3 != -1) goto LAB_0102e444;
LAB_0102e7b0:
    pcVar14 = "count != 0";
    pcVar15 = "AddReference";
    pcVar16 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar17 = "Reference counter overflows.";
LAB_0102e7d0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar14,pcVar15,pcVar16,0x58,pcVar17);
  }
  uVar13 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
  *(undefined8 *)(lVar9 + 8) = uVar13;
  *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
LAB_0102e444:
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar9 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar9;
  plVar12 = *(long **)(*(long *)(lVar9 + 0x38) + 0x50);
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 5;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)lVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar9 == -1) {
LAB_0102e7d8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)lVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar9 == -1) goto LAB_0102e7d8;
  }
  lVar9 = *plVar20;
  if (*(long *)(lVar9 + 0x10) == 0) goto LAB_0102e790;
  psVar1 = (short *)(lVar9 + 0x1a);
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
    uVar13 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar13;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) goto LAB_0102e7b0;
  pcVar19 = *(code **)(param_1 + 0x48);
  if (pcVar19 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    (*pcVar19)(param_1 + 0x60);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(code **)(param_1 + 0x40) = FUN_00e38cfc;
  *(undefined1 **)(param_1 + 0x48) = &LAB_02b4b07c;
  *(undefined1 **)(param_1 + 0x50) = &LAB_02b4b31c;
  *(undefined1 **)(param_1 + 0x58) = &LAB_02b4b444;
  *(long **)(param_1 + 0x60) = plVar12;
  *(long **)(param_1 + 0x68) = plVar10;
  *(undefined8 *)(param_1 + 0xc0) = 0x100000000;
  lVar9 = plVar10[6];
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_0102e790:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar9 + 0x1a);
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
    uVar13 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar13;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) goto LAB_0102e7b0;
  pcVar19 = *(code **)(param_1 + 0xd8);
  if (pcVar19 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar19)(param_1 + 0xf0);
  }
  *(undefined1 **)(param_1 + 0xd0) = &LAB_00c87474;
  *(undefined1 **)(param_1 + 0xd8) = &LAB_02b4b468;
  *(undefined1 **)(param_1 + 0xe0) = &LAB_02b4b4e0;
  *(undefined1 **)(param_1 + 0xe8) = &LAB_02b4b5a0;
  *(long **)(param_1 + 0xf0) = plVar10;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 5;
    do {
      lVar9 = *plVar2;
      iVar8 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar9 == 0) {
      pcVar14 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar15 = "DecrementReferenceInternal";
      pcVar16 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar17 = "Reference counter underflows.";
      goto LAB_0102e7d0;
    }
  }
  lVar9 = *plVar20;
  psVar1 = (short *)(lVar9 + 0x1a);
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
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*plVar10 + 0x50))(plVar10);
    return;
  }
  if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


