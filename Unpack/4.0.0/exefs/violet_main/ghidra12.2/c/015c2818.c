/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c2818; name: FUN_015c2818
 */


ulong FUN_015c2818(long param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  
  plVar8 = (long *)(param_1 + 8);
  lVar6 = *plVar8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar6) {
    lVar3 = nn::os::GetCurrentThread();
LAB_015c2850:
    if (*plVar8 == 0) goto code_r0x015c2858;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar9) {
              *plVar8 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_015c2860;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *plVar8 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_015c2860:
    bVar9 = false;
    goto LAB_015c2864;
  }
  plVar8 = (long *)0x0;
  bVar9 = true;
LAB_015c2864:
  do {
    lVar3 = *(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90);
    if (lVar3 == 0) {
      uVar7 = (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) * -0x3333333333333333;
      FUN_015c2990(param_1 + 0x20,param_2);
      goto LAB_015c28f4;
    }
    uVar7 = *(ulong *)(*(long *)(param_1 + 0x98) + -8);
    *(long *)(param_1 + 0x98) = lVar3 + *(long *)(param_1 + 0x90) + -8;
    uVar5 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_1 + 0x58) + uVar5) =
         *(ulong *)(*(long *)(param_1 + 0x58) + uVar5) &
         (1L << (uVar7 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)((*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) *
                  -0x3333333333333333) <= uVar7);
  lVar3 = *(long *)(param_1 + 0x20) + uVar7 * 0x28;
  FUN_00dd9f00(lVar3,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  if (*(ulong *)(param_1 + 200) <= uVar7) {
LAB_015c28f4:
    *(ulong *)(param_1 + 200) = uVar7 + 1;
  }
  if (!bVar9) {
    *plVar8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
  }
  return uVar7;
code_r0x015c2858:
  cVar2 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar9) {
    *plVar8 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_015c2860;
  goto LAB_015c2850;
}


