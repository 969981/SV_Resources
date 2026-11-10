/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00793890; name: FUN_00793890
 */


void FUN_00793890(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = (param_2 & 0xff00ff00ff00ff00) >> 8 | (param_2 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  *param_1 = uVar1 >> 0x20 | uVar1 << 0x20;
  return;
}


