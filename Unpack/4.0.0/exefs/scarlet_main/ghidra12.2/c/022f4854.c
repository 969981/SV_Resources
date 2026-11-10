/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022f4854; name: FUN_022f4854
 */


undefined4 FUN_022f4854(void)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_022f47e8();
  uVar2 = (undefined4)(uVar1 >> 0x20);
  if ((uVar1 & 0xff) == 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


