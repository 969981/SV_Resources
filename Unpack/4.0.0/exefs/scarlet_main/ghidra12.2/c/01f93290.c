/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f93290; name: FUN_01f93290
 */


undefined1  [16] FUN_01f93290(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  undefined1 auVar9 [16];
  
  lVar5 = *(long *)(param_1 + 8);
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar6 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar6) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01f932f0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f932f0:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          plVar7 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
          lVar5 = (**(code **)(*plVar7 + 0x68))(plVar7);
          uVar8 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(lVar5 + 0x30) >> 0x20),
                           (float)*(undefined8 *)(param_1 + 0x20) +
                           (float)*(undefined8 *)(lVar5 + 0x30));
          uVar10 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 0.0,
                            (float)*(undefined8 *)(param_1 + 0x28) +
                            (float)*(undefined8 *)(lVar5 + 0x38));
          (**(code **)(*plVar7 + 0x60))(plVar7);
          goto LAB_01f932ac;
        }
        break;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
LAB_01f932ac:
  auVar9._8_8_ = uVar10;
  auVar9._0_8_ = uVar8;
  return auVar9;
}


