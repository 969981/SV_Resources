/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a74b08; name: FUN_01a74b08
 */


void FUN_01a74b08(undefined4 *param_1,long *param_2,code *param_3,ulong param_4)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined2 *puVar6;
  long lVar7;
  short sVar8;
  long local_8;
  
  lVar7 = *param_2;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01a74b80;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a74b80:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          local_8 = *(long *)(lVar7 + 0x10) + -0x28;
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)(local_8 + ((long)param_4 >> 1)));
          }
          puVar6 = (undefined2 *)(*param_3)();
          *(undefined2 *)param_1 = *puVar6;
          *(undefined2 *)((long)param_1 + 2) = puVar6[1];
          *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar6 + 2);
          *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)puVar6 + 5);
          *(undefined1 *)((long)param_1 + 6) = *(undefined1 *)(puVar6 + 3);
          uVar2 = *(undefined4 *)(puVar6 + 6);
          param_1[2] = *(undefined4 *)(puVar6 + 4);
          param_1[3] = uVar2;
          param_1[4] = *(undefined4 *)(puVar6 + 8);
          FUN_01d5a31c(&local_8);
          return;
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  local_8 = 0;
  FUN_01d5a31c(&local_8);
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 3) = 0;
  param_1[4] = 0xffffffff;
  return;
}


