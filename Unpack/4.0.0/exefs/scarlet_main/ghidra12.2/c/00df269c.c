/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00df269c; name: FUN_00df269c
 */


ulong FUN_00df269c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_28;
  
  lVar7 = *(long *)(param_1 + 8);
  plVar1 = (long *)(lVar7 + 0x30);
  lVar9 = *plVar1;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar9) {
    uVar8 = FUN_00df3f8c(lVar7,param_2);
    return uVar8;
  }
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00df26e8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x38));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x38));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00df26e8;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00df26e8:
  lVar5 = *(long *)(lVar7 + 0x198);
  if (lVar5 == 0) {
    local_28 = *(undefined8 *)(lVar7 + 8);
    FUN_00df38f0(&local_60,local_28,&local_28);
    lVar5 = local_60;
    local_60 = 0;
    lVar9 = *(long *)(lVar7 + 0x198);
    *(long *)(lVar7 + 0x198) = lVar5;
    if (lVar9 == 0) {
      *(undefined8 *)(lVar7 + 0x1a8) = uStack_50;
      *(undefined8 *)(lVar7 + 0x1b0) = local_48;
      *(undefined8 *)(lVar7 + 0x1a0) = local_58;
    }
    else {
      FUN_0275d61c(lVar7 + 0x1a0);
      *(undefined8 *)(lVar7 + 0x1a0) = local_58;
      lVar5 = *(long *)(lVar7 + 0x198);
      *(undefined8 *)(lVar7 + 0x1a8) = uStack_50;
      *(undefined8 *)(lVar7 + 0x1b0) = local_48;
    }
  }
  local_58 = FUN_00df28a4(lVar5 + 8,param_2);
  local_60 = 0;
  do {
    lVar5 = *(long *)(lVar7 + 0x160) - *(long *)(lVar7 + 0x158);
    if (lVar5 == 0) {
      uVar8 = *(long *)(lVar7 + 0xf0) - *(long *)(lVar7 + 0xe8) >> 4;
      FUN_00df287c(lVar7 + 0xe8,&local_60);
      goto LAB_00df276c;
    }
    uVar8 = *(ulong *)(*(long *)(lVar7 + 0x160) + -8);
    *(long *)(lVar7 + 0x160) = lVar5 + *(long *)(lVar7 + 0x158) + -8;
    uVar6 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(lVar7 + 0x120) + uVar6) =
         *(ulong *)(*(long *)(lVar7 + 0x120) + uVar6) & (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU)
    ;
  } while ((ulong)(*(long *)(lVar7 + 0xf0) - *(long *)(lVar7 + 0xe8) >> 4) <= uVar8);
  puVar2 = (undefined8 *)(*(long *)(lVar7 + 0xe8) + uVar8 * 0x10);
  *puVar2 = 0;
  puVar2[1] = local_58;
  if (uVar8 < *(ulong *)(lVar7 + 400)) goto LAB_00df2774;
LAB_00df276c:
  *(ulong *)(lVar7 + 400) = uVar8 + 1;
LAB_00df2774:
  *(undefined8 *)(lVar7 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x38));
  return uVar8;
}


