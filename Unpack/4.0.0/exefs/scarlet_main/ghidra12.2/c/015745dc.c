/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015745dc; name: FUN_015745dc
 */


undefined8 * FUN_015745dc(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x1c);
  *puVar1 = 0x200000003;
  puVar1[1] = 0x300000002;
  puVar1[2] = 0x100000001;
  *(undefined4 *)(puVar1 + 3) = 0x41f00000;
  FUN_01574924(param_1,puVar1);
  return puVar1;
}


