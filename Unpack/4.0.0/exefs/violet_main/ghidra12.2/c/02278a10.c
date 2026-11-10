/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02278a10; name: FUN_02278a10
 */


ulong FUN_02278a10(undefined8 param_1,long param_2,undefined8 *param_3,long param_4)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *local_d8;
  char local_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined1 local_78;
  uint7 uStack_77;
  undefined8 local_70;
  undefined8 *local_68;
  char local_60;
  undefined8 local_58;
  
  FUN_0227cab4(&local_68);
  local_70 = 0xffffffffffffffff;
  local_78 = 0;
  do {
    lVar9 = *(long *)(param_2 + 0xc0) - *(long *)(param_2 + 0xb8);
    if (lVar9 == 0) {
      uVar11 = *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 4;
      FUN_0227ccc4((long *)(param_2 + 0x48),&local_78);
      goto LAB_02278a80;
    }
    uVar11 = *(ulong *)(*(long *)(param_2 + 0xc0) + -8);
    *(long *)(param_2 + 0xc0) = lVar9 + *(long *)(param_2 + 0xb8) + -8;
    uVar10 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_2 + 0x80) + uVar10) =
         *(ulong *)(*(long *)(param_2 + 0x80) + uVar10) &
         (1L << (uVar11 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 4) <= uVar11);
  plVar3 = (long *)(*(long *)(param_2 + 0x48) + uVar11 * 0x10);
  *plVar3 = (ulong)uStack_77 << 8;
  plVar3[1] = -1;
  if (*(ulong *)(param_2 + 0xf0) <= uVar11) {
LAB_02278a80:
    *(ulong *)(param_2 + 0xf0) = uVar11 + 1;
  }
  if (local_60 != '\0') {
    *local_68 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_68 + 1));
  }
  local_68 = (undefined8 *)0x0;
  local_60 = '\0';
  uVar12 = *(undefined8 *)(param_2 + 0x40);
  FUN_0227ccec(&local_d8,param_2);
  uStack_c0 = *param_3;
  local_b8 = param_3[1];
  local_b0 = (undefined8 *)0x0;
  local_a8 = 0;
  local_c8 = uVar11;
  FUN_00c96b7c(&local_b0,param_4);
  local_a0 = *(undefined8 *)(param_4 + 0x10);
  uStack_98 = *(undefined8 *)(param_4 + 0x18);
  local_90 = *(undefined8 *)(param_4 + 0x20);
  local_88 = *(long **)(param_4 + 0x28);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x18))();
  }
  local_80 = *(undefined8 *)(param_4 + 0x30);
  uVar12 = FUN_0227ce54(param_1,uVar12,&local_d8);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  puVar7 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b0 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_58 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_58);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_0227cf4c(&local_d8);
  FUN_0227cab4(&local_d8,param_2);
  if (local_60 != '\0') {
    *local_68 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_68 + 1));
  }
  local_68 = local_d8;
  local_60 = local_d0;
  *(undefined8 *)(*(long *)(param_2 + 0x48) + uVar11 * 0x10 + 8) = uVar12;
  if (local_d0 != '\0') {
    *local_d8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_d8 + 1));
  }
  return uVar11;
}


