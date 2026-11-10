/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0225c4c8; name: FUN_0225c4c8
 */


ulong FUN_0225c4c8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *local_98;
  char local_90;
  ulong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined1 local_60;
  uint7 uStack_5f;
  undefined8 local_58;
  undefined8 *local_50;
  char local_48;
  
  FUN_022615b4(&local_50);
  local_58 = 0xffffffffffffffff;
  local_60 = 0;
  do {
    lVar6 = *(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8);
    if (lVar6 == 0) {
      uVar8 = *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 4;
      FUN_017fbcc4((long *)(param_1 + 0x48),&local_60);
      goto LAB_0225c52c;
    }
    uVar8 = *(ulong *)(*(long *)(param_1 + 0xc0) + -8);
    *(long *)(param_1 + 0xc0) = lVar6 + *(long *)(param_1 + 0xb8) + -8;
    uVar7 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_1 + 0x80) + uVar7) =
         *(ulong *)(*(long *)(param_1 + 0x80) + uVar7) &
         (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 4) <= uVar8);
  plVar2 = (long *)(*(long *)(param_1 + 0x48) + uVar8 * 0x10);
  *plVar2 = (ulong)uStack_5f << 8;
  plVar2[1] = -1;
  if (*(ulong *)(param_1 + 0xf0) <= uVar8) {
LAB_0225c52c:
    *(ulong *)(param_1 + 0xf0) = uVar8 + 1;
  }
  if (local_48 != '\0') {
    *local_50 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_50 + 1));
  }
  local_50 = (undefined8 *)0x0;
  local_48 = '\0';
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  FUN_022617c4(&local_98,param_1);
  uStack_80 = *param_2;
  local_78 = param_2[1];
  uStack_70 = *param_3;
  local_68 = (long *)param_3[1];
  param_3[1] = 0;
  local_88 = uVar8;
  uVar9 = FUN_02267fb4(uVar9,&local_98);
  if (local_68 != (long *)0x0) {
    lVar6 = local_68[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_68 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_02261a24(&local_98);
  FUN_022615b4(&local_98,param_1);
  if (local_48 != '\0') {
    *local_50 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_50 + 1));
  }
  local_50 = local_98;
  local_48 = local_90;
  *(undefined8 *)(*(long *)(param_1 + 0x48) + uVar8 * 0x10 + 8) = uVar9;
  if (local_90 != '\0') {
    *local_98 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_98 + 1));
  }
  return uVar8;
}


