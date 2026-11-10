/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0155c254; name: FUN_0155c254
 */


undefined8 FUN_0155c254(undefined1 param_1 [16],long param_2)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 0x540);
  if (uVar2 < 2) {
    lVar1 = param_2 + (ulong)uVar2 * 0x10;
    *(uint *)(param_2 + 0x540) = uVar2 + 1;
    *(long *)(lVar1 + 0x528) = param_1._8_8_;
    *(long *)(lVar1 + 0x520) = param_1._0_8_;
    return 1;
  }
  return 0;
}


