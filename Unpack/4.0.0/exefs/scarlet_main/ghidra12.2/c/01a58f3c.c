/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a58f3c; name: FUN_01a58f3c
 */


void FUN_01a58f3c(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00ccbb30(param_1,0);
  *puVar1 = 0x10000;
  *(undefined2 *)(puVar1 + 1) = 2;
  FUN_00ccbb18(param_1,0);
  return;
}


