/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a6d0c; name: FUN_024a6d0c
 */


void FUN_024a6d0c(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0xb0);
  if (lVar6 == *(long *)(param_1 + 0xa0)) {
    if (lVar6 == -1) {
      lVar6 = -1;
    }
    else {
      uVar3 = lVar6 + 1U;
      if (lVar6 + 1U <= (ulong)(lVar6 << 2)) {
        uVar3 = lVar6 << 2;
      }
      FUN_024a6dd4(param_1,uVar3);
      lVar6 = *(long *)(param_1 + 0xb0);
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0xa8) + lVar6 * 0x10);
    *puVar2 = *param_2;
    lVar6 = param_2[1];
    puVar2[1] = lVar6;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0xa8) + lVar6 * 0x10);
    *puVar2 = *param_2;
    lVar6 = param_2[1];
    puVar2[1] = lVar6;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
  return;
}


