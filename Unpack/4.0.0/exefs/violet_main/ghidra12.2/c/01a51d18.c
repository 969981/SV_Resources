/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a51d18; name: FUN_01a51d18
 */


undefined1  [16]
FUN_01a51d18(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5,
            code *param_6,ulong param_7)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  undefined8 uVar10;
  undefined1 auVar9 [16];
  
  lVar5 = *param_5;
  if ((lVar5 == 0) || (*(short *)(lVar5 + 0x1a) == 0)) {
LAB_01a51d34:
    param_1 = 0xc4700000;
    uVar10 = 0;
  }
  else {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01a51dac;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a51dac:
        bVar7 = false;
      }
      if (bVar7) {
        plVar6 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
        if (*(long *)(lVar5 + 0x10) == 0) goto LAB_01a51d34;
        if ((param_7 & 1) != 0) {
          param_6 = *(code **)(param_6 + *(long *)((long)plVar6 + ((long)param_7 >> 1)));
        }
        puVar4 = (uint *)(*param_6)(param_1,param_2,param_3,param_4);
        param_1 = (ulong)*puVar4;
        uVar10 = 0;
        (**(code **)(*plVar6 + 0x60))(plVar6);
        break;
      }
      param_4 = 0x44070000;
      param_3 = 0xc4070000;
      param_2 = 0x44700000;
      param_1 = 0xc4700000;
      uVar10 = 0;
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  auVar9._8_8_ = uVar10;
  auVar9._0_8_ = param_1;
  return auVar9;
}


