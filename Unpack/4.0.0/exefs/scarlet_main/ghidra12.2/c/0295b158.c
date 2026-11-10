/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0295b158; name: FUN_0295b158
 */


bool FUN_0295b158(long *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = (**(code **)(*param_1 + 0x118))();
  uVar2 = (**(code **)(*param_1 + 0x110))(param_1);
  uVar3 = (**(code **)(*param_1 + 0x108))(param_1);
  return 0x13 < bVar1 && (uVar2 >> 2 & 0x3fff) < (uVar3 & 0xffff);
}


