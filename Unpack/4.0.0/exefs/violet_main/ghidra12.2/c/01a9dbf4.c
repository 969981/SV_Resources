/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a9dbf4; name: FUN_01a9dbf4
 */


undefined4
FUN_01a9dbf4(long *param_1,code *param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  
  lVar6 = *param_1;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01a9dc50;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a9dc50:
        bVar8 = false;
      }
      if (bVar8) {
        plVar7 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        if (*(long *)(lVar6 + 0x10) == 0) {
          return 0;
        }
        plVar2 = (long *)((long)plVar7 + ((long)param_3 >> 1));
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar2);
        }
        uVar5 = (*param_2)(plVar2,param_4,param_5);
        (**(code **)(*plVar7 + 0x60))(plVar7);
        return uVar5;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return 0;
}


