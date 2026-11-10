/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021c2aac; name: FUN_021c2aac
 */


ulong FUN_021c2aac(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

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
  undefined8 *local_a8;
  char local_a0;
  ulong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined1 local_70;
  uint7 uStack_6f;
  undefined8 local_68;
  undefined8 *local_60;
  char local_58;
  
  FUN_021c369c(&local_60);
  local_68 = 0xffffffffffffffff;
  local_70 = 0;
  do {
    lVar6 = *(long *)(param_2 + 0xc0) - *(long *)(param_2 + 0xb8);
    if (lVar6 == 0) {
      uVar8 = *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 4;
      FUN_021c3748((long *)(param_2 + 0x48),&local_70);
      goto LAB_021c2b18;
    }
    uVar8 = *(ulong *)(*(long *)(param_2 + 0xc0) + -8);
    *(long *)(param_2 + 0xc0) = lVar6 + *(long *)(param_2 + 0xb8) + -8;
    uVar7 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_2 + 0x80) + uVar7) =
         *(ulong *)(*(long *)(param_2 + 0x80) + uVar7) &
         (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 4) <= uVar8);
  plVar2 = (long *)(*(long *)(param_2 + 0x48) + uVar8 * 0x10);
  *plVar2 = (ulong)uStack_6f << 8;
  plVar2[1] = -1;
  if (*(ulong *)(param_2 + 0xf0) <= uVar8) {
LAB_021c2b18:
    *(ulong *)(param_2 + 0xf0) = uVar8 + 1;
  }
  if (local_58 != '\0') {
    *local_60 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_60 + 1));
  }
  local_60 = (undefined8 *)0x0;
  local_58 = '\0';
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  FUN_021c3770(&local_a8,param_2);
  uStack_90 = *param_3;
  local_88 = param_3[1];
  uStack_80 = *param_4;
  local_78 = (long *)param_4[1];
  param_4[1] = 0;
  local_98 = uVar8;
  uVar9 = FUN_021c38d8(param_1,uVar9,&local_a8);
  if (local_78 != (long *)0x0) {
    lVar6 = local_78[6];
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
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_021c39d0(&local_a8);
  FUN_021c369c(&local_a8,param_2);
  if (local_58 != '\0') {
    *local_60 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_60 + 1));
  }
  local_60 = local_a8;
  local_58 = local_a0;
  *(undefined8 *)(*(long *)(param_2 + 0x48) + uVar8 * 0x10 + 8) = uVar9;
  if (local_a0 != '\0') {
    *local_a8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_a8 + 1));
  }
  return uVar8;
}


