/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02491bc4; name: FUN_02491bc4
 */


undefined1  [16] FUN_02491bc4(undefined1 *param_1,code *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  undefined8 uVar10;
  undefined8 uVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar10 = 0;
  uVar14 = 0;
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar7 = (long *)(*(long *)(param_1 + 8) + lVar1);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar7);
      }
      puVar5 = (undefined8 *)(*param_2)(0,plVar7,param_4);
      uVar14 = puVar5[1];
      uVar10 = *puVar5;
    }
  default:
    auVar11._8_8_ = uVar14;
    auVar11._0_8_ = uVar10;
    return auVar11;
  case 2:
    uVar10 = 0;
    uVar14 = 0;
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 != 0)) {
      plVar7 = (long *)(lVar6 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar7);
      }
      puVar5 = (undefined8 *)(*param_2)(0,plVar7,param_4);
      uVar14 = puVar5[1];
      uVar10 = *puVar5;
    }
    auVar12._8_8_ = uVar14;
    auVar12._0_8_ = uVar10;
    return auVar12;
  case 3:
    break;
  }
  lVar6 = *(long *)(param_1 + 8);
  uVar10 = 0;
  uVar14 = 0;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02491cf0;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02491cf0:
        bVar8 = false;
      }
      if (bVar8) {
        plVar7 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        if (*(long *)(lVar6 + 0x10) != 0) {
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *(long *)((long)plVar7 + lVar1));
          }
          puVar5 = (undefined8 *)(*param_2)(0,(long *)((long)plVar7 + lVar1),param_4);
          uVar14 = puVar5[1];
          uVar10 = *puVar5;
          (**(code **)(*plVar7 + 0x60))(plVar7);
        }
        break;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  auVar13._8_8_ = uVar14;
  auVar13._0_8_ = uVar10;
  return auVar13;
}


