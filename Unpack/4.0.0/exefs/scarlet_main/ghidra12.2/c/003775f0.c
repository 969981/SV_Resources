/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003775f0; name: FUN_003775f0
 */


void FUN_003775f0(ulong *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  uVar8 = *param_1;
  puVar7 = (undefined8 *)(uVar8 & 0xfffffffffffffffc);
  if (((undefined8 *)*puVar7 != (undefined8 *)0x0) &&
     (plVar5 = *(long **)*puVar7, plVar5 != (long *)0x0)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = FUN_00376460(puVar7);
  *param_1 = uVar4;
  uVar1 = (uint)uVar8 & 3;
  if (1 < uVar1) {
    plVar5 = puVar7 + 8;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      FUN_00376de0(uVar1,puVar7,*(undefined4 *)(puVar7 + 9));
      return;
    }
  }
  return;
}


