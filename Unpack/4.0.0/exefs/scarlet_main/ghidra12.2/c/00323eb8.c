/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00323eb8; name: FUN_00323eb8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00323eb8(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  iVar4 = FUN_0038dac0();
  if (iVar4 == 0) {
    return;
  }
  lVar5 = FUN_0033a31c(*(undefined8 *)(param_1 + 0x10));
  bVar1 = *(byte *)(param_1 + 0x28);
  if ((bVar1 & 1) != 0) {
    FUN_00377160(lVar5 + 0xa0);
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_00377160(lVar5 + 0x1c0);
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar1 >> 3 & 1) != 0) {
    FUN_00377160(lVar5 + 0x2a8);
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar1 >> 5 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x10);
  }
  else {
    FUN_00377160(lVar5 + 0x3e0);
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if (lVar5 != 0) {
    FUN_0033a390();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar6 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 200);
  do {
    lVar5 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    FUN_0037af30();
    return;
  }
  return;
}


