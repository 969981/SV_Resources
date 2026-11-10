/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027027a4; name: FUN_027027a4
 */


uint FUN_027027a4(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  uint unaff_w20;
  
  lVar5 = *(long *)(param_1 + 0x18);
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
        if (cVar3 != '\0') goto LAB_02702808;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02702808:
        bVar7 = false;
      }
      if (bVar7) {
        plVar6 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
        if (*(long *)(lVar5 + 0x10) != 0) {
          lVar5 = FUN_00e895ec(plVar6);
          if (lVar5 != 0) {
            uVar4 = FUN_01992e2c();
            unaff_w20 = uVar4 ^ 1;
          }
          (**(code **)(*plVar6 + 0x60))(plVar6);
          if (lVar5 != 0) goto LAB_027027c0;
        }
        break;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  unaff_w20 = 1;
LAB_027027c0:
  return unaff_w20 & 1;
}


