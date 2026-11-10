/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003cd8a0; name: FUN_003cd8a0
 */


undefined8 FUN_003cd8a0(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x696) >> 1 & 1) == 0) {
    uVar1 = FUN_003af490(param_1,0xf,0,0,0);
    return uVar1;
  }
  return 0;
}


