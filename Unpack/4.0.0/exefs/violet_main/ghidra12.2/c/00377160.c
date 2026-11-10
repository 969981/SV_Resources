/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00377160; name: FUN_00377160
 */


void FUN_00377160(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  
  for (puVar7 = *(ulong **)(param_1 + 0x10); puVar7 != (ulong *)0x0; puVar7 = (ulong *)puVar7[1]) {
    uVar2 = (uint)*puVar7 & 3;
    if (1 < uVar2) {
      uVar5 = *puVar7 & 0xfffffffffffffffc;
      plVar1 = (long *)(uVar5 + 0x40);
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 + -1 == 0) {
        FUN_00376de0(uVar2,uVar5,*(undefined4 *)(uVar5 + 0x48));
      }
    }
  }
  return;
}


