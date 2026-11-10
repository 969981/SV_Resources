/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e97ebc; name: FUN_00e97ebc
 */


undefined8 FUN_00e97ebc(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((param_2 & 0xff) < 6) {
    uVar1 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
    if (((uVar1 & 0xff) >> (ulong)(param_2 & 0x1f) & 1) != 0) {
      return 0x1f;
    }
  }
  uVar2 = FUN_00e97f14(param_1,param_2);
  return uVar2;
}


