/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e6baa8; name: FUN_01e6baa8
 */


undefined8 FUN_01e6baa8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_019c7a40(param_1 + 0x108);
  if (((uVar2 & 1) == 0) ||
     (uVar1 = FUN_01419468(param_1 + 0x108), *(uint *)(param_1 + 0xf8) != (uVar1 & 0xffff))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


