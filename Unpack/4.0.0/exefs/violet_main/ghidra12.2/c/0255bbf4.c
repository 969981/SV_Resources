/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0255bbf4; name: FUN_0255bbf4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0255bbf4(undefined8 *param_1,long *param_2,code *param_3,ulong param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  short sVar10;
  long local_8;
  
  lVar9 = *param_2;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0255bc7c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0255bc7c:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar9 + 0x10) != 0) {
          local_8 = *(long *)(lVar9 + 0x10) + -0x28;
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)(local_8 + ((long)param_4 >> 1)));
          }
          (*param_3)(param_1);
          FUN_02556068(&local_8);
          return;
        }
        break;
      }
      sVar10 = sVar2;
    } while (sVar2 != 0);
  }
  local_8 = 0;
  FUN_02556068(&local_8);
  uVar8 = _UNK_03cabe58;
  uVar7 = _DAT_03cabe50;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar6 = _UNK_03caa988;
  uVar5 = _DAT_03caa980;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  return;
}


