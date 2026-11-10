/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012283e8; name: FUN_012283e8
 */


void FUN_012283e8(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  short sVar6;
  undefined8 *puVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  LightEventType *pLVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long *local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long lStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  long local_60;
  undefined8 *puStack_58;
  
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  local_88 = 0;
  local_80 = 0;
  local_b8 = param_2;
  FUN_00c43ef0(&local_b0,param_3);
  lStack_98 = param_1 + 200;
  local_90 = param_1 + 0x60;
  local_80 = 0;
  local_88 = 0;
  local_a0 = param_4;
  nn::os::GetSystemTick();
  local_88 = nn::os::ConvertToTimeSpan();
  plVar1 = (long *)(param_1 + 400);
  lVar15 = *plVar1;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar15) {
    lVar11 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        goto LAB_01228464;
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar11;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    FUN_010bcd00(param_1,&local_b8);
    *(undefined8 *)(param_1 + 400) = 0;
    pLVar12 = (LightEventType *)(param_1 + 0x198);
LAB_01228544:
    nn::os::SignalLightEvent(pLVar12);
    plVar1 = local_b0;
    if (local_b0 != (long *)0x0) {
      plVar3 = local_b0 + 3;
      do {
        sVar6 = (short)*plVar3;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar9) {
          *(short *)plVar3 = sVar6 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar6 == 1) {
        piVar5 = (int *)((long)local_b0 + 0x1c);
        do {
          iVar10 = *piVar5;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar9) {
            *piVar5 = -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_78 = *plVar1;
          FUN_00c44438(lVar11 + 0x8040,&local_78);
        }
      }
      else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    return;
  }
LAB_01228464:
  plVar1 = (long *)(param_1 + 0x178);
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar11;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_01228484;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
        while (*plVar1 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar11;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_01228484;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar11;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_01228484:
  *param_2 = (*(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 6) +
             (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 6);
  puVar7 = *(undefined8 **)(param_1 + 0x148);
  puVar2 = (undefined8 *)(param_1 + 0x158);
  if (puVar7 == *(undefined8 **)(param_1 + 0x150)) {
    uVar14 = *(ulong *)(param_1 + 0x160);
    lVar11 = (long)puVar7 - *(long *)(param_1 + 0x140) >> 6;
    uVar4 = lVar11 + 1;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = (long)*(undefined8 **)(param_1 + 0x150) - *(long *)(param_1 + 0x140);
    uVar13 = lVar15 >> 5;
    local_60 = 0;
    if (uVar4 <= uVar13) {
      uVar4 = uVar13;
    }
    if (uVar14 >> 1 <= (ulong)(lVar15 >> 6)) {
      uVar4 = uVar14;
    }
    puStack_58 = puVar2;
    if (uVar4 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar4 << 6,8);
      if (local_78 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xe8))();
      }
    }
    puVar7 = (undefined8 *)(local_78 + lVar11 * 0x40);
    local_60 = local_78 + uVar4 * 0x40;
    uVar16 = *puVar2;
    puStack_70 = puVar7;
    local_68 = puVar7;
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_012288ac;
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar16;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    *puVar7 = local_b8;
    puVar7[1] = 0;
    puVar7[2] = 0;
    FUN_00c43ef0(puVar7 + 1,&local_b0);
    memcpy(puVar7 + 3,&local_a0,0x28);
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    local_68 = local_68 + 8;
    FUN_010bd3a0(param_1 + 0x140,&local_78);
    FUN_010bd518(&local_78);
  }
  else {
    uVar16 = *puVar2;
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_012288ac:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar16;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    *puVar7 = local_b8;
    puVar7[1] = 0;
    puVar7[2] = 0;
    FUN_00c43ef0(puVar7 + 1,&local_b0);
    memcpy(puVar7 + 3,&local_a0,0x28);
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x148) = puVar7 + 8;
  }
  pLVar12 = (LightEventType *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = 0;
  goto LAB_01228544;
}


