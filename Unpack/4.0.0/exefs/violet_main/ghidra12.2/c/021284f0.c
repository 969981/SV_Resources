/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021284f0; name: FUN_021284f0
 */


void FUN_021284f0(undefined8 param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  short sVar12;
  long *plVar13;
  long lVar14;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  puVar6 = (undefined8 *)FUN_0140f310();
  local_78 = *puVar6;
  uStack_70 = puVar6[1];
  local_68 = puVar6[2];
  local_60 = (long *)puVar6[3];
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x18))();
  }
  FUN_0140f318(local_58,param_1,&local_78);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_58[0] == (undefined8 *)0x0) {
    return;
  }
  puVar6 = local_58[0];
  if (*(short *)((long)local_58[0] + 0x1a) == 0) goto LAB_021286dc;
  psVar1 = (short *)((long)local_58[0] + 0x1a);
  sVar12 = *(short *)((long)local_58[0] + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar12) {
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_021285b0;
      bVar11 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_021285b0:
      bVar11 = false;
    }
    if (bVar11) {
      lVar10 = local_58[0][2];
      plVar13 = (long *)(lVar10 + -0x28);
      if (lVar10 == 0) goto LAB_021286dc;
      sVar12 = *psVar1;
      goto joined_r0x021285e0;
    }
    sVar12 = sVar3;
  } while (sVar3 != 0);
  goto LAB_021286d8;
code_r0x02128640:
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar11) {
    *plVar8 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_02128648;
  goto LAB_02128638;
joined_r0x021285e0:
  do {
    if (sVar12 == 0) goto LAB_021286c4;
    sVar3 = *psVar1;
    if (sVar3 == sVar12) {
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02128608;
      bVar11 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02128608:
      bVar11 = false;
    }
    sVar12 = sVar3;
  } while (!bVar11);
  plVar8 = (long *)(lVar10 + 0xe8);
  lVar14 = *plVar8;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar14) {
    lVar7 = nn::os::GetCurrentThread();
LAB_02128638:
    if (*plVar8 == 0) goto code_r0x02128640;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
          while (*plVar8 == 0) {
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar11) {
              *plVar8 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_02128648;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar11) {
        *plVar8 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_02128648:
    bVar11 = false;
    goto LAB_0212864c;
  }
  bVar11 = true;
LAB_0212864c:
  plVar8 = (long *)FUN_02127fe0(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
  if ((*(long **)(lVar10 + 0x108) == plVar8) || (*plVar8 == 0)) {
    plVar8 = (long *)FUN_02127fe0(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140));
    if (*(long **)(lVar10 + 0x140) == plVar8) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (*plVar8 != 0) {
        lVar7 = *plVar8 + -0x20;
      }
    }
  }
  else {
    lVar7 = *plVar8 + -0x20;
  }
  if (!bVar11) {
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
  }
  if (((lVar7 != 0) && (uVar9 = FUN_02128460(lVar7), (uVar9 & 1) != 0)) &&
     (lVar10 = FUN_0156b930(lVar10 + 0xe0,&local_48), lVar10 != 0)) {
    FUN_0155ced8(lVar10,0);
  }
  (**(code **)(*plVar13 + 0x60))(plVar13);
LAB_021286c4:
  (**(code **)(*plVar13 + 0x60))(plVar13);
LAB_021286d8:
  puVar6 = local_58[0];
  if (local_58[0] == (undefined8 *)0x0) {
    return;
  }
LAB_021286dc:
  psVar1 = (short *)(puVar6 + 3);
  do {
    sVar12 = *psVar1;
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar11) {
      *psVar1 = sVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar12 == 1) {
    piVar2 = (int *)((long)puVar6 + 0x1c);
    do {
      iVar5 = *piVar2;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar11) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar5 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar10 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar10;
      local_48 = *puVar6;
      FUN_00c44438(lVar10 + 0x8040,&local_48);
    }
  }
  else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
}


