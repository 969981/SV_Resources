/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a47768; name: FUN_01a47768
 */


void FUN_01a47768(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  bool bVar12;
  short sVar13;
  long lVar14;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_78 = *(undefined8 *)(param_1 + 0x110);
  uStack_70 = *(undefined8 *)(param_1 + 0x118);
  local_68 = *(undefined8 *)(param_1 + 0x120);
  plVar10 = *(long **)(param_1 + 0x128);
  local_60 = plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_58,param_1 + 0x30,&local_78);
    plVar10 = local_60;
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (local_58 != (undefined8 *)0x0) {
    if (*(short *)((long)local_58 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_58 + 0x1a);
      sVar13 = *(short *)((long)local_58 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar13) {
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01a4783c;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01a4783c:
          bVar12 = false;
        }
        if (bVar12) {
          lVar11 = local_58[2];
          if (lVar11 == 0) goto LAB_01a47900;
          plVar10 = (long *)(lVar11 + 0xe8);
          lVar14 = *plVar10;
          lVar9 = nn::os::GetCurrentThread();
          if (lVar9 == lVar14) {
            bVar12 = true;
            goto LAB_01a4787c;
          }
          lVar9 = nn::os::GetCurrentThread();
          bVar12 = false;
          goto LAB_01a47a14;
        }
        sVar13 = sVar3;
      } while (sVar3 != 0);
LAB_01a478fc:
      if (local_58 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_01a47900:
    puVar6 = local_58;
    psVar1 = (short *)(local_58 + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = *puVar6;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_01a47a14:
  if (*plVar10 == 0) goto code_r0x01a47a1c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
  bVar12 = false;
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
        while (*plVar10 == 0) {
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar12) {
            *plVar10 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar12 = false;
          if (cVar5 == '\0') goto LAB_01a4787c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01a4787c:
  plVar10 = (long *)FUN_022380d0(*(undefined8 *)(lVar11 + 0x100),*(undefined8 *)(lVar11 + 0x108));
  if ((*(long **)(lVar11 + 0x108) == plVar10) || (*plVar10 == 0)) {
    plVar10 = (long *)FUN_022380d0(*(undefined8 *)(lVar11 + 0x138),*(undefined8 *)(lVar11 + 0x140));
    if (*(long **)(lVar11 + 0x140) == plVar10) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      if (*plVar10 != 0) {
        lVar9 = *plVar10 + -0x20;
      }
    }
  }
  else {
    lVar9 = *plVar10 + -0x20;
  }
  if (!bVar12) {
    *(undefined8 *)(lVar11 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xf0));
  }
  if ((lVar9 != 0) && (uVar7 = FUN_012595d8(param_1,1), (uVar7 & 0xff) != 0)) {
    FUN_00c705b8(lVar9,0xff < uVar7);
  }
  (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))((long *)(lVar11 + -0x28));
  goto LAB_01a478fc;
code_r0x01a47a1c:
  cVar5 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar4) {
    *plVar10 = lVar9;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01a4787c;
  goto LAB_01a47a14;
}


