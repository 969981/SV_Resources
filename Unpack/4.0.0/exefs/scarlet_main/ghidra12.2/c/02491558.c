/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02491558; name: FUN_02491558
 */


undefined1  [16]
FUN_02491558(long *param_1,code *param_2,ulong param_3,undefined2 *param_4,undefined8 param_5)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_50;
  undefined8 uStack_48;
  
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
        if (cVar4 != '\0') goto LAB_024915c8;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_024915c8:
        bVar8 = false;
      }
      if (bVar8) {
        plVar7 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar2 = (long *)((long)plVar7 + ((long)param_3 >> 1));
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *plVar2);
          }
          puVar5 = (undefined8 *)(*param_2)(plVar2,*param_4,param_5);
          uVar12 = puVar5[1];
          uVar11 = *puVar5;
          (**(code **)(*plVar7 + 0x60))(plVar7);
          goto LAB_02491580;
        }
        break;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  FUN_01667884(&local_50);
  uVar11 = local_50;
  uVar12 = uStack_48;
LAB_02491580:
  auVar10._8_8_ = uVar12;
  auVar10._0_8_ = uVar11;
  return auVar10;
}


