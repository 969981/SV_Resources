/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0142eef4; name: FUN_0142eef4
 */


void FUN_0142eef4(long param_1,uint param_2,uint param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined4 local_70;
  uint uStack_6c;
  uint local_68;
  
  local_70 = *(undefined4 *)(param_1 + 0x40);
  plVar12 = *(long **)(param_1 + 8);
  uStack_6c = param_2;
  local_68 = param_3;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_0142f41c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar12;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x60,8);
  if (plVar8 == (long *)0x0) {
    lVar7 = *plVar12;
LAB_0142f434:
    (**(code **)(lVar7 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_0142f6e8(plVar8,&local_70);
  puVar5 = PTR_DAT_047e2f78;
  *plVar8 = (long)(PTR_DAT_047e2f78 + 0x10);
  plVar8[1] = (long)plVar12;
  plVar8[4] = (long)(puVar5 + 0x90);
  plVar8[5] = (long)(puVar5 + 0xe0);
  plVar8[0xb] = 0;
  plVar8[2] = (long)plVar8;
  *(undefined4 *)(plVar8 + 3) = 0x80060;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  lVar7 = plVar8[6];
  if (*(long *)(lVar7 + 0x10) == 0) {
LAB_0142f3ac:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar7 + 0x1a);
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
    uVar11 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    *(undefined8 *)(lVar7 + 8) = uVar11;
    *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) goto LAB_0142f3cc;
  plVar12 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_0142f41c;
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar12;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x58,8);
  if (plVar9 == (long *)0x0) {
    lVar7 = *plVar12;
    goto LAB_0142f434;
  }
  FUN_0142f598(plVar9,&local_70);
  puVar5 = PTR_DAT_047e2f80;
  plVar9[2] = (long)plVar9;
  plVar9[4] = (long)(puVar5 + 0x90);
  plVar9[5] = (long)(puVar5 + 0xe0);
  *plVar9 = (long)(puVar5 + 0x10);
  plVar9[1] = (long)plVar12;
  *(undefined4 *)(plVar9 + 3) = 0x80058;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  lVar7 = plVar9[6];
  if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0142f3ac;
  psVar1 = (short *)(lVar7 + 0x1a);
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
    uVar11 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    *(undefined8 *)(lVar7 + 8) = uVar11;
    *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) goto LAB_0142f3cc;
  lVar7 = plVar9[6];
  if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0142f3ac;
  psVar1 = (short *)(lVar7 + 0x1a);
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
    uVar11 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    *(undefined8 *)(lVar7 + 8) = uVar11;
    *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) goto LAB_0142f3cc;
  FUN_0142f45c(plVar8 + 0xb,plVar9);
  lVar7 = plVar9[6];
  psVar1 = (short *)(lVar7 + 0x1a);
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
    *(undefined8 *)(lVar7 + 0x10) = 0;
    (**(code **)(*plVar9 + 0x50))(plVar9);
  }
  else if (sVar2 == 0) goto LAB_0142f3f4;
  lVar7 = plVar8[6];
  if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0142f3ac;
  plVar12 = (long *)(param_1 + (ulong)param_2 * 0x28 + (ulong)param_3 * 8 + 0x48);
  psVar1 = (short *)(lVar7 + 0x1a);
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
    uVar11 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    *(undefined8 *)(lVar7 + 8) = uVar11;
    *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
LAB_0142f3cc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar10 = (long *)*plVar12;
  *plVar12 = (long)plVar8;
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_0142f3f4;
  }
  FUN_0142f45c(param_1 + (ulong)param_2 * 0x28 + (ulong)param_3 * 8 + 0x138,plVar9);
  lVar7 = plVar9[6];
  psVar1 = (short *)(lVar7 + 0x1a);
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
    *(undefined8 *)(lVar7 + 0x10) = 0;
    (**(code **)(*plVar9 + 0x50))(plVar9);
  }
  else if (sVar2 == 0) goto LAB_0142f3f4;
  lVar7 = plVar8[6];
  psVar1 = (short *)(lVar7 + 0x1a);
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
    *(undefined8 *)(lVar7 + 0x10) = 0;
    (**(code **)(*plVar8 + 0x50))(plVar8);
  }
  else if (sVar2 == 0) {
LAB_0142f3f4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


