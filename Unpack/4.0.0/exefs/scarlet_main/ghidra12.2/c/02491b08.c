/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02491b08; name: FUN_02491b08
 */


undefined1  [16] FUN_02491b08(long *param_1,code *param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  undefined8 uVar9;
  undefined8 uVar11;
  undefined1 auVar10 [16];
  
  lVar5 = *param_1;
  uVar9 = 0;
  uVar11 = 0;
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
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
        if (cVar3 != '\0') goto LAB_02491b68;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02491b68:
        bVar7 = false;
      }
      if (bVar7) {
        plVar6 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
        if (*(long *)(lVar5 + 0x10) != 0) {
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *(long *)((long)plVar6 + ((long)param_3 >> 1)));
          }
          puVar4 = (undefined8 *)(*param_2)(0);
          uVar11 = puVar4[1];
          uVar9 = *puVar4;
          (**(code **)(*plVar6 + 0x60))(plVar6);
        }
        break;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  auVar10._8_8_ = uVar11;
  auVar10._0_8_ = uVar9;
  return auVar10;
}


