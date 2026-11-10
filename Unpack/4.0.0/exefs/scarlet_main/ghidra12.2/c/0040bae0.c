/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040bae0; name: FUN_0040bae0
 */


void FUN_0040bae0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar1 = param_1 + 7;
  do {
    lVar5 = *plVar1;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    DataMemoryBarrier(2,1);
  }
  else if (1 < (int)lVar5) {
    return;
  }
  if ((*param_1 != 0) && (pcVar6 = *(code **)(*param_1 + 0x18), pcVar6 != (code *)0x0)) {
    (*pcVar6)(param_1);
  }
  if (((long *)param_1[3] != (long *)0x0) &&
     (pcVar6 = *(code **)(*(long *)param_1[3] + 0x178), pcVar6 != (code *)0x0)) {
    (*pcVar6)(param_1);
  }
  FUN_00444c10(8,param_1,param_1 + 8);
  FUN_0047e620(param_1[9]);
  FUN_0040ca30(param_1[3]);
  FUN_0040caf0(param_1[4]);
  FUN_003eb490(param_1[5]);
  FUN_00453260(param_1,0x50,"external/openssl/crypto/ec/ec_key.c",0x47);
  return;
}


