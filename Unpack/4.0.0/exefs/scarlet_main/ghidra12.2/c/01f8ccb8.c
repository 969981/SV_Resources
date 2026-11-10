/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f8ccb8; name: FUN_01f8ccb8
 */


void FUN_01f8ccb8(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  undefined8 uVar7;
  
  FUN_00ca0ae4(param_1 + 0x128);
  lVar5 = *param_2;
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
        if (cVar3 != '\0') goto LAB_01f8cd1c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f8cd1c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return;
        }
        uVar7 = *(undefined8 *)(lVar5 + 600);
        *(undefined8 *)(param_1 + 0x748) = *(undefined8 *)(lVar5 + 0x260);
        *(undefined8 *)(param_1 + 0x740) = uVar7;
        uVar7 = *(undefined8 *)(lVar5 + 0x278);
        *(undefined8 *)(param_1 + 0x758) = *(undefined8 *)(lVar5 + 0x280);
        *(undefined8 *)(param_1 + 0x750) = uVar7;
        uVar7 = *(undefined8 *)(lVar5 + 600);
        *(undefined8 *)(param_1 + 0xcd8) = *(undefined8 *)(lVar5 + 0x260);
        *(undefined8 *)(param_1 + 0xcd0) = uVar7;
        uVar7 = *(undefined8 *)(lVar5 + 0x278);
        *(undefined8 *)(param_1 + 0xce8) = *(undefined8 *)(lVar5 + 0x280);
        *(undefined8 *)(param_1 + 0xce0) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x01f8cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar5 + -0x28) + 0x60))(lVar5 + -0x28);
        return;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


