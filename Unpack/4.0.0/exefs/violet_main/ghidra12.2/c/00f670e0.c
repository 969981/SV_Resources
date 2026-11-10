/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f670e0; name: FUN_00f670e0
 */


void FUN_00f670e0(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 local_28;
  
  plVar13 = (long *)param_2[0x8c];
  if (plVar13 != (long *)0x0) {
    lVar14 = plVar13[6];
    if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar15;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    FUN_00e60f40(plVar13,param_2);
    lVar14 = plVar13[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar13 = (long *)(param_1 + 0x138);
  lVar14 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = lVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00f67184;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
        while (*plVar13 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar14;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00f67184;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = lVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00f67184:
  FUN_00dfa020(param_1,param_2,0);
  (**(code **)(*param_2 + 0x18))(&local_68,param_2);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  plVar13 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar13 = param_2 + 5;
  }
  if ((long *)local_68[2] == plVar13) {
    FUN_00c9ea00(&local_78,&local_68);
  }
  puVar10 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_28 = *puVar10;
        FUN_00c44438(lVar14 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_00f6730c;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x98);
  puVar10 = (undefined8 *)(param_1 + 0xa8);
  if (puVar12 < *(undefined8 **)(param_1 + 0xa0)) {
    uVar15 = *puVar10;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar14 == 0) {
      *puVar12 = 0;
      puVar12[1] = 0;
      FUN_00d0a34c(puVar12,&local_78);
    }
    else {
      if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_00f67734:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar15;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      *puVar12 = 0;
      puVar12[1] = 0;
      FUN_00d0a34c(puVar12,&local_78);
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x98) = puVar12 + 2;
  }
  else {
    uVar11 = *(ulong *)(param_1 + 0xb0);
    lVar14 = (long)puVar12 - *(long *)(param_1 + 0x90) >> 4;
    uVar7 = lVar14 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (long)*(undefined8 **)(param_1 + 0xa0) - *(long *)(param_1 + 0x90);
    uVar9 = lVar8 >> 3;
    local_50 = (undefined8 *)0x0;
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (uVar11 >> 1 <= (ulong)(lVar8 >> 4)) {
      uVar7 = uVar11;
    }
    puStack_48 = puVar10;
    if (uVar7 == 0) {
      local_68 = (undefined8 *)0x0;
    }
    else {
      local_68 = (undefined8 *)
                 (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,uVar7 << 4,8);
      if (local_68 == (undefined8 *)0x0) {
        (**(code **)(*(long *)*puVar10 + 0xe8))();
      }
    }
    puVar12 = local_68 + lVar14 * 2;
    local_50 = local_68 + uVar7 * 2;
    uVar15 = *puVar10;
    local_60 = puVar12;
    local_58 = puVar12;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar14 == 0) {
      *puVar12 = 0;
      puVar12[1] = 0;
      FUN_00d0a34c(puVar12,&local_78);
    }
    else {
      if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00f67734;
      *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar15;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      *puVar12 = 0;
      puVar12[1] = 0;
      FUN_00d0a34c(puVar12,&local_78);
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      puVar12 = local_58;
    }
    local_58 = puVar12 + 2;
    FUN_00f67ed0(puVar10,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),&local_60);
    local_68 = *(undefined8 **)(param_1 + 0x90);
    puVar12 = *(undefined8 **)(param_1 + 0x98);
    *(undefined8 **)(param_1 + 0x90) = local_60;
    *(undefined8 **)(param_1 + 0x98) = local_58;
    puVar10 = *(undefined8 **)(param_1 + 0xa0);
    *(undefined8 **)(param_1 + 0xa0) = local_50;
    local_60 = local_68;
    local_58 = puVar12;
    local_50 = puVar10;
    FUN_00f68004(&local_68);
    puVar10 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      lVar14 = (long)local_50 - (long)local_68;
      plVar13 = (long *)*puStack_48;
      uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar10,lVar14,8);
      }
      else {
        FUN_00c48fe8(plVar13,puVar10,lVar14,8);
      }
    }
  }
  puVar10 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_68 = (undefined8 *)*puVar10;
        FUN_00c44438(lVar14 + 0x8040,&local_68);
      }
    }
    else if (sVar3 == 0) {
LAB_00f6730c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
  return;
}


