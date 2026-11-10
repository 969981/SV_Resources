/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00350548; name: FUN_00350548
 */


void FUN_00350548(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  puVar4 = auStack_20;
  puVar1 = (ulong *)(param_1 + 0x58);
  uVar5 = *puVar1;
  do {
    if (((uVar5 & 1) != 0) && (uVar6 = uVar5 & 0xfffffffffffffffe, uVar6 != 0)) {
      if (4 < uVar6) {
        uVar6 = FUN_00350fb0(uVar6);
      }
      puVar4 = auStack_18;
LAB_0035059c:
      FUN_0035351c(puVar4,param_2,uVar6);
      return;
    }
    while (*puVar1 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = param_2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (uVar5 == 0) {
          return;
        }
        uVar6 = 0;
        param_2 = uVar5;
        goto LAB_0035059c;
      }
    }
    ClearExclusiveLocal();
    uVar5 = *puVar1;
  } while( true );
}


