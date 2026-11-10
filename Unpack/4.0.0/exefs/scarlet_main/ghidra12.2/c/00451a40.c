/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00451a40; name: FUN_00451a40
 */


undefined8 FUN_00451a40(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  code *pcVar12;
  
  *(undefined4 *)(param_1 + 0x15) = 0;
  uVar6 = (*(code *)param_1[2])(param_2);
  plVar1 = param_1 + 0xc;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar8 = (ulong)*(uint *)((long)param_1 + 0x24);
  uVar9 = 0;
  if (uVar8 != 0) {
    uVar9 = uVar6 / uVar8;
  }
  uVar8 = uVar6 - uVar9 * uVar8;
  if (uVar8 < *(uint *)(param_1 + 4)) {
    uVar9 = (ulong)*(uint *)((long)param_1 + 0x1c);
    uVar8 = 0;
    if (uVar9 != 0) {
      uVar8 = uVar6 / uVar9;
    }
    uVar8 = uVar6 - uVar8 * uVar9;
  }
  puVar10 = (undefined8 *)(*param_1 + ((long)(uVar8 << 0x20) >> 0x1d));
  puVar11 = (undefined8 *)*puVar10;
  if (puVar11 != (undefined8 *)0x0) {
    pcVar12 = (code *)param_1[1];
    plVar1 = param_1 + 0xd;
    plVar2 = param_1 + 0x14;
    do {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11[2] == uVar6) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        iVar5 = (*pcVar12)(*puVar11,param_2);
        if (iVar5 == 0) {
          if ((undefined8 *)*puVar10 != (undefined8 *)0x0) {
            uVar7 = *(undefined8 *)*puVar10;
            param_1 = param_1 + 0x12;
            goto LAB_00451b30;
          }
          break;
        }
      }
      puVar10 = puVar11 + 1;
      puVar11 = (undefined8 *)*puVar10;
    } while (puVar11 != (undefined8 *)0x0);
  }
  uVar7 = 0;
  param_1 = param_1 + 0x13;
LAB_00451b30:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = *param_1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return uVar7;
}


