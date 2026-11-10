/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004014b0; name: FUN_004014b0
 */


void FUN_004014b0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x40);
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
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (pcVar6 = *(code **)(*(long *)(param_1 + 0x50) + 0x38), pcVar6 != (code *)0x0)) {
    (*pcVar6)(param_1);
  }
  FUN_00444c10(7,param_1,param_1 + 0x48);
  FUN_0047e620(*(undefined8 *)(param_1 + 0x60));
  FUN_003eb490(*(undefined8 *)(param_1 + 8));
  FUN_003eb490(*(undefined8 *)(param_1 + 0x10));
  FUN_003eb490(*(undefined8 *)(param_1 + 0x18));
  FUN_003eb490(*(undefined8 *)(param_1 + 0x20));
  FUN_003eb490(*(undefined8 *)(param_1 + 0x28));
  FUN_00452f80(param_1,"external/openssl/crypto/dsa/dsa_lib.c",0x83);
  return;
}


