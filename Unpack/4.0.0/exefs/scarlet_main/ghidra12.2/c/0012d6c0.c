/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012d6c0; name: FUN_0012d6c0
 */


void FUN_0012d6c0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  (*(code *)*puVar1)(puVar1[1],param_2,param_3,0);
  puVar1[3] = puVar1[3] - param_3;
  return;
}


