/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02614e44; name: FUN_02614e44
 */


uint * FUN_02614e44(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 local_18;
  
  local_18 = param_2;
  puVar1 = bsearch(&local_18,param_1 + 1,(ulong)*param_1,4,FUN_02614e8c);
  if (puVar1 != (uint *)0x0) {
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  }
  return puVar1;
}


