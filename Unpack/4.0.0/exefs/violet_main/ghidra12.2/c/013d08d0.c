/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013d08d0; name: FUN_013d08d0
 */


undefined8 FUN_013d08d0(undefined8 param_1)

{
  short *psVar1;
  int *piVar2;
  code *pcVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  char *pcVar14;
  bool bVar15;
  long lVar16;
  char local_88 [8];
  long local_80 [2];
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_38;
  
  puVar8 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar8 == (undefined8 *)0x0) || (pcVar14 = (char *)*puVar8, (char *)*puVar8 == (char *)0x0))
  {
    if ((*PTR_DAT_047d38e8 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_047d38e8);
      pcVar14 = PTR_DAT_047d38f0;
      if (iVar7 != 0) {
        *PTR_DAT_047d38f0 = 0;
        *(undefined8 *)(pcVar14 + 8) = 0;
        FUN_00100190(PTR_FUN_047d44a0,pcVar14,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38e8);
      }
    }
    else {
      pcVar14 = PTR_DAT_047d38f0;
    }
  }
  if (((DAT_04831550 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04831550), iVar7 != 0)) {
    DAT_048321d8 = '\x01';
    __cxa_guard_release(&DAT_04831550);
  }
  cVar5 = *pcVar14;
  pcVar3 = FUN_0125efbc;
  if (DAT_048321d8 == '\0') {
    pcVar3 = (code *)0x0;
  }
  if (cVar5 == '\x02') {
    if ((*(long *)(pcVar14 + 8) == 0) ||
       (lVar11 = *(long *)(*(long *)(pcVar14 + 8) + 0x10), lVar11 == 0)) {
LAB_013d0bb0:
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
    }
    else {
      lVar11 = lVar11 + -0x28;
LAB_013d094c:
      (*pcVar3)(&local_70,lVar11);
    }
  }
  else {
    if (cVar5 != '\x03') {
      if (((cVar5 != '\x01') && (cVar5 != '\0')) || (lVar11 = *(long *)(pcVar14 + 8), lVar11 == 0))
      goto LAB_013d0bb0;
      goto LAB_013d094c;
    }
    FUN_013d1080(&local_70,pcVar14 + 8,pcVar3,0);
  }
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_011750c4(&local_60,&local_70);
  local_88[0] = '\x02';
  local_80[0] = 0;
  local_80[1] = 0;
  FUN_00f5a410(local_80,&local_60);
  puVar8 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = *puVar8;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar4 == 0) goto LAB_013d0b08;
  }
  puVar8 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_70 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_60 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar11 + 0x8040,&local_60);
      }
    }
    else if (sVar4 == 0) {
LAB_013d0b08:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if ((local_88[0] == '\x02') || (local_88[0] == '\x03')) {
    if ((local_80[0] == 0) || (*(short *)(local_80[0] + 0x1a) == 0)) goto LAB_013d0bd4;
  }
  else if (((local_88[0] != '\x01') && (local_88[0] != '\0')) || (local_80[0] == 0)) {
LAB_013d0bd4:
    FUN_00ca1a30(param_1);
    goto LAB_013d0a80;
  }
  puVar8 = (undefined8 *)FUN_00c5e120(param_1,8,1);
  if (((*PTR_DAT_047d38a0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d38a0), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d3db0,PTR_DAT_047d38a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d38a0);
  }
  lVar16 = *(long *)PTR_DAT_047d38a8;
  *(long *)PTR_DAT_047d38b0 = lVar16;
  puVar6 = PTR_DAT_047d38f8;
  lVar13 = *(long *)PTR_DAT_047d38f8;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar13) {
    uVar10 = nn::os::GetCurrentThread();
LAB_013d0b38:
    if (*(long *)puVar6 == 0) goto code_r0x013d0b40;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
    do {
      if (*(long *)puVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar6 + 8));
          while (*(long *)puVar6 == 0) {
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar15) {
              *(undefined8 *)puVar6 = uVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_013d0b48;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar15) {
        *(undefined8 *)puVar6 = uVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_013d0b48:
    bVar15 = false;
    goto LAB_013d0a10;
  }
  bVar15 = true;
LAB_013d0a10:
  if (*(long *)(lVar16 + 0x28) == *(long *)(lVar16 + 0x30)) {
    pcVar14 = (char *)FUN_00d97840(0x40,8);
  }
  else {
    puVar12 = (undefined8 *)(*(long *)(lVar16 + 0x30) + -8);
    pcVar14 = (char *)*puVar12;
    *(undefined8 **)(lVar16 + 0x30) = puVar12;
  }
  if (!bVar15) {
    *(undefined8 *)puVar6 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar6 + 8));
  }
  lVar11 = local_80[0];
  *pcVar14 = '\0';
  plVar9 = (long *)(pcVar14 + 8);
  *plVar9 = 0;
  *pcVar14 = local_88[0];
  if ((local_88[0] == '\x02') || (local_88[0] == '\x03')) {
    FUN_00f5a410(plVar9,local_80);
  }
  else {
    if (local_88[0] == '\x01') {
      *plVar9 = 0;
      local_80[0] = 0;
    }
    else if (local_88[0] != '\0') goto LAB_013d0a58;
    *plVar9 = lVar11;
  }
LAB_013d0a58:
  *puVar8 = pcVar14;
  FUN_00c5fc50(param_1,0xfff0b9d8,(long)DAT_0453bf74);
  FUN_00c5e190(param_1,0xfffffffe);
LAB_013d0a80:
  FUN_013d0e1c(local_88);
  return 1;
code_r0x013d0b40:
  cVar5 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(puVar6,0x10);
  if (bVar15) {
    *(undefined8 *)puVar6 = uVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_013d0b48;
  goto LAB_013d0b38;
}


