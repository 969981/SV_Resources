/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022999d4; name: FUN_022999d4
 */


undefined1  [16] FUN_022999d4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
    uVar3 = 0xffffffff00000000;
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (ulong)*(uint *)(lVar2 + 0x230);
    uVar1 = (ulong)*(uint *)(lVar2 + 0x238);
    uVar3 = (ulong)*(uint *)(lVar2 + 0x234) << 0x20;
  }
  auVar5._0_8_ = uVar4 | uVar3;
  auVar5._8_8_ = uVar1;
  return auVar5;
}


