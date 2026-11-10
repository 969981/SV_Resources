/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079c92c; name: FUN_0079c92c
 */


uint FUN_0079c92c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00796784(param_1 + 0xb8);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_00796784(param_1 + 0x98);
    if ((uVar2 & 1) != 0) {
      uVar1 = FUN_007967e8(param_1 + 0x98,param_1 + 0xb8);
      return (uVar1 ^ 1) & 1;
    }
  }
  return 0;
}


