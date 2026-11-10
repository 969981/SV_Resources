/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040e5d0; name: FUN_0040e5d0
 */


void FUN_0040e5d0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x30);
  do {
    iVar2 = *piVar1;
    iVar5 = iVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    DataMemoryBarrier(2,1);
  }
  else if (1 < iVar2) {
    return;
  }
  plVar6 = *(long **)(param_1 + 0x20);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    if (lVar7 != 0) {
      do {
        plVar6 = plVar6 + 1;
        FUN_0040caf0(lVar7);
        lVar7 = *plVar6;
      } while (lVar7 != 0);
      plVar6 = *(long **)(param_1 + 0x20);
    }
    FUN_00452f80(plVar6,"external/openssl/crypto/ec/ec_mult.c",0x62);
  }
  FUN_0047e620(*(undefined8 *)(param_1 + 0x38));
  FUN_00452f80(param_1,"external/openssl/crypto/ec/ec_mult.c",0x65);
  return;
}


