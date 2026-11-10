/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e5cc40; name: FUN_01e5cc40
 */


undefined8 FUN_01e5cc40(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long local_18;
  
  lVar5 = *param_1;
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
        if (cVar3 != '\0') goto LAB_01e5cca4;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e5cca4:
        bVar4 = false;
      }
      if (bVar4) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 != 0) {
          local_18 = lVar5 + -0x28;
          if ((*(uint *)(lVar5 + 0x120) & 0xfffffffe) == 2) {
            FUN_00c7f318(&local_18);
            return 1;
          }
          goto LAB_01e5cc58;
        }
        break;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  local_18 = 0;
LAB_01e5cc58:
  FUN_00c7f318(&local_18);
  return 0;
}


