/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d404f8; name: FUN_00d404f8
 */


void FUN_00d404f8(long param_1,undefined8 param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  code *pcVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined1 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  do {
    lVar8 = param_1;
    param_1 = lVar8;
    if (*(long *)(lVar8 + 0x1a8) != 0) {
      param_1 = *(long *)(lVar8 + 0x1a8);
    }
  } while (param_1 != lVar8);
  if ((*(byte *)(lVar8 + 0x1b8) >> 4 & 1) == 0) {
    return;
  }
  plVar19 = (long *)(lVar8 + 0x270);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar19 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar5) {
      *plVar19 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00d40554;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x278));
  do {
    if (*plVar19 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x278));
        while (*plVar19 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *plVar19 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00d40554;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar5) {
      *plVar19 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00d40554:
  local_110 = (undefined8 *)0x0;
  uStack_108 = 0;
  FUN_00ca1a48(&local_110,param_2);
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (undefined1 *)0x0;
  local_e8 = (code *)0x0;
  local_100 = (undefined1 *)0x0;
  local_f8 = (code *)0x0;
  FUN_00ca1ea4(&local_e0,&local_110);
  local_100 = &LAB_021d59f8;
  local_f8 = FUN_021d5adc;
  local_f0 = &LAB_021d5bec;
  local_e8 = FUN_021d5c00;
  puVar16 = *(undefined8 **)(lVar8 + 0x238);
  puVar13 = (undefined8 *)(lVar8 + 0x248);
  if (puVar16 < *(undefined8 **)(lVar8 + 0x240)) {
    uVar18 = *puVar13;
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 != 0) {
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_00d40ae4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar18;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    }
    puVar16[2] = 0;
    puVar16[3] = 0;
    *puVar16 = 0;
    puVar16[1] = 0;
    if (local_e8 != (code *)0x0) {
      (*local_e8)(&local_e0,puVar16 + 4);
      pcVar14 = local_f8;
      puVar16[3] = local_e8;
      *puVar16 = local_100;
      puVar16[1] = local_f8;
      puVar16[2] = local_f0;
      if (local_f8 != (code *)0x0) {
        local_f0 = (undefined1 *)0x0;
        local_e8 = (code *)0x0;
        local_100 = (undefined1 *)0x0;
        local_f8 = (code *)0x0;
        (*pcVar14)(&local_e0);
      }
    }
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    *(undefined8 **)(lVar8 + 0x238) = puVar16 + 0x10;
  }
  else {
    uVar15 = *(ulong *)(lVar8 + 0x250);
    lVar9 = (long)puVar16 - *(long *)(lVar8 + 0x230) >> 7;
    uVar10 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = (long)*(undefined8 **)(lVar8 + 0x240) - *(long *)(lVar8 + 0x230);
    uVar12 = lVar11 >> 6;
    local_60 = (undefined8 *)0x0;
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    if (uVar15 >> 1 <= (ulong)(lVar11 >> 7)) {
      uVar10 = uVar15;
    }
    local_58 = puVar13;
    if (uVar10 == 0) {
      local_78 = (undefined8 *)0x0;
    }
    else {
      local_78 = (undefined8 *)
                 (**(code **)(*(long *)*puVar13 + 0x10))((long *)*puVar13,uVar10 << 7,0x10);
      if (local_78 == (undefined8 *)0x0) {
        (**(code **)(*(long *)*puVar13 + 0xe8))();
      }
    }
    puVar16 = local_78 + lVar9 * 0x10;
    local_60 = local_78 + uVar10 * 0x10;
    uVar18 = *puVar13;
    local_70 = puVar16;
    local_68 = puVar16;
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 != 0) {
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00d40ae4;
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar18;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    }
    puVar16[2] = 0;
    puVar16[3] = 0;
    *puVar16 = 0;
    puVar16[1] = 0;
    if (local_e8 != (code *)0x0) {
      (*local_e8)(&local_e0,puVar16 + 4);
      pcVar14 = local_f8;
      puVar16[3] = local_e8;
      *puVar16 = local_100;
      puVar16[1] = local_f8;
      puVar16[2] = local_f0;
      if (local_f8 != (code *)0x0) {
        local_f0 = (undefined1 *)0x0;
        local_e8 = (code *)0x0;
        local_100 = (undefined1 *)0x0;
        local_f8 = (code *)0x0;
        (*pcVar14)(&local_e0);
      }
    }
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    local_68 = local_68 + 0x10;
    FUN_00d42c04(puVar13,*(undefined8 *)(lVar8 + 0x230),*(undefined8 *)(lVar8 + 0x238),&local_70);
    puVar16 = *(undefined8 **)(lVar8 + 0x230);
    *(undefined8 **)(lVar8 + 0x230) = local_70;
    puVar13 = *(undefined8 **)(lVar8 + 0x238);
    *(undefined8 **)(lVar8 + 0x238) = local_68;
    puVar17 = *(undefined8 **)(lVar8 + 0x240);
    *(undefined8 **)(lVar8 + 0x240) = local_60;
    local_78 = puVar16;
    local_70 = puVar16;
    local_68 = puVar13;
    local_60 = puVar17;
    while (puVar6 = puVar13, puVar6 != puVar16) {
      puVar13 = puVar6 + -0x10;
      pcVar14 = (code *)puVar6[-0xf];
      local_68 = puVar13;
      if (pcVar14 != (code *)0x0) {
        puVar6[-0xe] = 0;
        puVar6[-0xd] = 0;
        puVar6[-0x10] = 0;
        puVar6[-0xf] = 0;
        (*pcVar14)(puVar6 + -0xc);
      }
    }
    if (puVar16 != (undefined8 *)0x0) {
      lVar9 = (long)puVar17 - (long)puVar16;
      plVar19 = (long *)*local_58;
      uVar10 = (**(code **)(*plVar19 + 0xf8))(plVar19);
      if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar19 + 0x18))(plVar19,puVar16,lVar9,0x10);
      }
      else {
        FUN_00c48fe8(plVar19,puVar16,lVar9,0x10);
      }
    }
  }
  pcVar14 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    local_100 = (undefined1 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar14)(&local_e0);
  }
  puVar13 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_110 + 3);
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
      piVar2 = (int *)((long)local_110 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_100 = (undefined1 *)*puVar13;
        FUN_00c44438(lVar9 + 0x8040,&local_100);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined1 *)(lVar8 + 0x268) = 1;
  *(undefined1 *)(lVar8 + 0x288) = 1;
  *(undefined8 *)(lVar8 + 0x270) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x278));
  return;
}


