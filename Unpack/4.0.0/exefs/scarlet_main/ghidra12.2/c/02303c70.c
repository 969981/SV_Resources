/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02303c70; name: FUN_02303c70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02303c70(void *param_1,long *param_2,code *param_3,ulong param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *__src;
  long lVar8;
  short sVar9;
  long local_8;
  
  lVar8 = *param_2;
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02303cc8;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02303cc8:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar8 + 0x10) != 0) {
          local_8 = *(long *)(lVar8 + 0x10) + -0x28;
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)(local_8 + ((long)param_4 >> 1)));
          }
          __src = (void *)(*param_3)();
          memcpy(param_1,__src,0x60);
          FUN_02302320(&local_8);
          return;
        }
        break;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  local_8 = 0;
  FUN_02302320(&local_8);
  memset(param_1,0,0x60);
  uVar7 = _DAT_03cabe60;
  uVar6 = DAT_03cab628;
  uVar5 = DAT_03cab620;
  *(undefined8 *)((long)param_1 + 0x18) = _UNK_03cabe68;
  *(undefined8 *)((long)param_1 + 0x10) = uVar7;
  *(undefined8 *)((long)param_1 + 0x28) = uVar6;
  *(undefined8 *)((long)param_1 + 0x20) = uVar5;
  uVar6 = _UNK_03caa5b8;
  uVar5 = _DAT_03caa5b0;
  *(undefined1 *)((long)param_1 + 0x40) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0x40490fdb40490fdb;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x40490fdb40490fdb;
  *(undefined4 *)((long)param_1 + 4) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x38) = uVar6;
  *(undefined8 *)((long)param_1 + 0x30) = uVar5;
  return;
}


