/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c5654; name: FUN_002c5654
 */


void FUN_002c5654(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_002c5654(param_1,*param_2);
  FUN_002c5654(param_1,param_2[1]);
  FUN_002c2254(param_2 + 0xd,param_2[0xe]);
  FUN_002c648c(param_2 + 10,param_2[0xb]);
  if ((*(byte *)(param_2 + 7) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_2[9]);
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_2[6]);
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return;
}


