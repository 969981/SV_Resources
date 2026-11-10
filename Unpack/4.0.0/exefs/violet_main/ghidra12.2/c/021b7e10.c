/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021b7e10; name: FUN_021b7e10
 */


undefined1  [16] FUN_021b7e10(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ushort *puVar11;
  long *plVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined1 auVar17 [16];
  long *local_38;
  
  plVar12 = *(long **)(param_2 + 0x10);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("obj","operator()",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/shared_function_registry.cpp"
               ,0x486);
  }
  piVar3 = (int *)((long)*param_3 + (ulong)*(uint *)*param_3);
  puVar11 = (ushort *)((long)piVar3 - (long)*piVar3);
  if (((*puVar11 < 5) || ((ulong)puVar11[2] == 0)) ||
     (iVar13 = *(int *)((long)piVar3 + (ulong)puVar11[2]), iVar13 < 0)) {
    iVar13 = 0;
  }
  if ((*puVar11 < 7) || ((ulong)puVar11[3] == 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = *(char *)((long)piVar3 + (ulong)puVar11[3]) != '\0';
  }
  plVar15 = (long *)plVar12[1];
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
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar15;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x140,0x10);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar15 + 0xe8))(plVar15);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00d1a240(plVar10,0x80008080);
  puVar6 = PTR_DAT_047dd740;
  puVar1 = PTR_DAT_047dd740 + 0x2f0;
  plVar14 = plVar10 + 4;
  *plVar14 = (long)(PTR_DAT_047dd740 + 0x170);
  plVar10[5] = (long)(puVar6 + 0x298);
  plVar10[6] = (long)puVar1;
  plVar10[7] = (long)(puVar6 + 0x318);
  plVar10[0x24] = (long)(puVar6 + 0x350);
  *(int *)(plVar10 + 0x25) = iVar13 + -1;
  *(bool *)((long)plVar10 + 300) = bVar7;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  *(undefined4 *)((long)plVar10 + 0x114) = 0;
  plVar10[2] = (long)plVar10;
  *(undefined4 *)(plVar10 + 3) = 0x100140;
  *plVar10 = (long)(puVar6 + 0x10);
  plVar10[1] = (long)plVar15;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  (**(code **)(*plVar10 + 0x58))(plVar10);
  (**(code **)(*plVar14 + 0xe8))(plVar14,plVar12);
  (**(code **)(*plVar14 + 0x68))(plVar14);
  local_38 = plVar10;
  FUN_00df8c30(plVar12 + 0x21,&local_38);
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0x13];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*plVar12 + 0x100))(plVar12,plVar14);
  plVar15 = plVar12 + 0x88;
  lVar16 = *plVar15;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 == lVar16) {
    plVar15 = (long *)0x0;
    bVar7 = true;
LAB_021b7fdc:
    if ((*(byte *)(plVar12 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(plVar12,0,0);
    }
    else {
      (**(code **)(*plVar14 + 0xf8))(plVar14);
    }
    if (!bVar7) {
      *plVar15 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
    }
    auVar17._8_8_ = plVar12;
    auVar17._0_8_ = 2;
    return auVar17;
  }
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar15 == 0) {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_021b7fd8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x89));
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x89));
        while (*plVar15 == 0) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *plVar15 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_021b7fd8;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *plVar15 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_021b7fd8:
  bVar7 = false;
  goto LAB_021b7fdc;
}


