/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029831c8; name: FUN_029831c8
 */


void FUN_029831c8(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_02980944(param_2);
  uVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x19) - 5;
  uVar2 = (undefined4)(0x30a03080307 >> (((ulong)uVar1 & 3) << 4));
  if (2 < uVar1) {
    uVar2 = 0x237;
  }
  FUN_02943244(param_2,1,uVar2);
  return;
}


