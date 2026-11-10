/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02187774; name: FUN_02187774
 */


void FUN_02187774(long param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)(param_1 + 400);
  lVar4 = nn::os::GetCurrentThread();
  do {
    if (*plVar6 != 0) {
      ClearExclusiveLocal();
      uVar5 = 1;
      if ((param_2 & 1) == 0) {
        uVar5 = 2;
      }
      *(undefined4 *)(param_1 + 0x1a8) = uVar5;
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = *(long **)(param_1 + 0xd8);
  for (plVar6 = *(long **)(param_1 + 0xd0); plVar6 != plVar1; plVar6 = plVar6 + 1) {
    lVar4 = *plVar6 + 0x68;
    lVar7 = *(long *)(*plVar6 + 0x70);
    if (lVar7 != lVar4) {
      FUN_00e12ca8(*(undefined8 *)(lVar7 + 0x10),param_2 & 1);
      lVar7 = *(long *)(lVar7 + 8);
      if (lVar7 != lVar4) {
        FUN_00e12ca8(*(undefined8 *)(lVar7 + 0x10),param_2 & 1);
        for (lVar7 = *(long *)(lVar7 + 8); lVar7 != lVar4; lVar7 = *(long *)(lVar7 + 8)) {
          FUN_00e12ca8(*(undefined8 *)(lVar7 + 0x10),param_2 & 1);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x198));
  return;
}


