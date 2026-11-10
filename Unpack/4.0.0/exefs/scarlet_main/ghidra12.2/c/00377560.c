/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00377560; name: FUN_00377560
 */


void FUN_00377560(long *param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  
  puVar7 = (ulong *)param_1[(param_2 & 0xffffffff) + 4];
  param_1[1] = param_1[1] + -1;
  param_1[(param_2 & 0xffffffff) + 4] = 0;
  uVar9 = puVar7[1];
  uVar4 = puVar7[2];
  if (uVar4 == 0) {
    param_1[2] = uVar9;
  }
  else {
    *(ulong *)(uVar4 + 8) = uVar9;
    uVar9 = puVar7[1];
  }
  puVar3 = (ulong *)(param_1 + 3);
  if (uVar9 != 0) {
    puVar3 = (ulong *)(uVar9 + 0x10);
  }
  *puVar3 = uVar4;
  *param_1 = *param_1 + -1;
  uVar2 = (uint)*puVar7 & 3;
  if (1 < uVar2) {
    uVar9 = *puVar7 & 0xfffffffffffffffc;
    plVar1 = (long *)(uVar9 + 0x40);
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 + -1 == 0) {
      FUN_00376de0(uVar2,uVar9,*(undefined4 *)(uVar9 + 0x48));
      return;
    }
  }
  return;
}


