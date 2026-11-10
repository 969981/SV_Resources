/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01032970; name: FUN_01032970
 */


ulong FUN_01032970(long param_1,long param_2)

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
  
  plVar8 = (long *)(param_1 + 0xd0);
  lVar6 = *plVar8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar6) {
    lVar3 = nn::os::GetCurrentThread();
LAB_010329a8:
    if (*plVar8 == 0) goto code_r0x010329b0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd8));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd8));
          while (*plVar8 == 0) {
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar9) {
              *plVar8 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_010329b8;
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
LAB_010329b8:
    bVar9 = false;
    goto LAB_010329bc;
  }
  plVar8 = (long *)0x0;
  bVar9 = true;
LAB_010329bc:
  do {
    lVar3 = *(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158);
    if (lVar3 == 0) {
      uVar7 = (*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 3) * -0x3333333333333333;
      FUN_01032ae8(param_1 + 0xe8,param_2);
      goto LAB_01032a4c;
    }
    uVar7 = *(ulong *)(*(long *)(param_1 + 0x160) + -8);
    *(long *)(param_1 + 0x160) = lVar3 + *(long *)(param_1 + 0x158) + -8;
    uVar5 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_1 + 0x120) + uVar5) =
         *(ulong *)(*(long *)(param_1 + 0x120) + uVar5) &
         (1L << (uVar7 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)((*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 3) *
                  -0x3333333333333333) <= uVar7);
  lVar3 = *(long *)(param_1 + 0xe8) + uVar7 * 0x28;
  FUN_00dd9f00(lVar3,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  if (*(ulong *)(param_1 + 400) <= uVar7) {
LAB_01032a4c:
    *(ulong *)(param_1 + 400) = uVar7 + 1;
  }
  if (!bVar9) {
    *plVar8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
  }
  return uVar7;
code_r0x010329b0:
  cVar2 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar9) {
    *plVar8 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_010329b8;
  goto LAB_010329a8;
}


