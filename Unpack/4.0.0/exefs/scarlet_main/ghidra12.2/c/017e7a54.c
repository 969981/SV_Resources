/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e7a54; name: FUN_017e7a54
 */


void FUN_017e7a54(undefined8 *param_1,long *param_2,code *param_3,ulong param_4)

{
  short *psVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  short sVar10;
  long local_8;
  
  lVar9 = *param_2;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar10) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar10 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_017e7ac4;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_017e7ac4:
        bVar7 = false;
      }
      if (bVar7) {
        if (*(long *)(lVar9 + 0x10) != 0) {
          local_8 = *(long *)(lVar9 + 0x10) + -0x28;
          if ((param_4 & 1) != 0) {
            param_3 = *(code **)(param_3 + *(long *)(local_8 + ((long)param_4 >> 1)));
          }
          puVar8 = (undefined8 *)(*param_3)();
          uVar3 = puVar8[3];
          uVar2 = *puVar8;
          uVar4 = puVar8[1];
          param_1[2] = puVar8[2];
          param_1[3] = uVar3;
          *param_1 = uVar2;
          param_1[1] = uVar4;
          FUN_00c7f318(&local_8);
          return;
        }
        break;
      }
      sVar10 = sVar5;
    } while (sVar5 != 0);
  }
  local_8 = 0;
  FUN_00c7f318(&local_8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3f8000003f800000;
  param_1[3] = 0;
  return;
}


