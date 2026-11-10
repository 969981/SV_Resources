/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc71f8; name: FUN_01dc71f8
 */


long * FUN_01dc71f8(long param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  
  plVar2 = *(long **)(param_1 + 0x30);
  bVar1 = *(byte *)(plVar2 + 0x12);
  uVar4 = (uint)bVar1;
  if (uVar4 != 0) {
    uVar5 = 0;
    while( true ) {
      if (uVar5 < bVar1) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,uVar5);
        plVar6 = plVar2;
      }
      else {
        plVar6 = (long *)0x0;
      }
      uVar3 = FUN_01dc7280(plVar2,plVar6);
      if ((uVar3 & 1) != 0) {
        return plVar6;
      }
      if (uVar4 - 1 == uVar5) break;
      plVar2 = *(long **)(param_1 + 0x30);
      uVar5 = uVar5 + 1;
      bVar1 = *(byte *)(plVar2 + 0x12);
    }
  }
  return (long *)0x0;
}


