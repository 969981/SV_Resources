/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159fe94; name: FUN_0159fe94
 */


void FUN_0159fe94(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (((*(byte *)(*(long *)(param_1 + 0x38) + 0x499) >> 2 & 1) != 0) ||
     (1 < *(uint *)(*(long *)(param_1 + 0x38) + 0x30))) {
    return;
  }
  uVar1 = 0x91878d2e67dac9bc;
  if ((param_3 & 1) == 0) {
    uVar1 = 0xed853956cb8c2ca7;
  }
  FUN_014801c0(param_1,param_2,uVar1);
  return;
}


