/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02466710; name: FUN_02466710
 */


void FUN_02466710(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,int *param_5)

{
  uint *puVar1;
  
  if (((param_5 == (int *)0x0) || (param_2 == 0)) || (*param_5 != 0)) {
    *param_1 = 0;
    return;
  }
  puVar1 = (uint *)(param_2 + (param_3 & 0xffffffff) * 4 + 4);
  FUN_028b3cc0((long)puVar1 + (ulong)*puVar1,param_5);
  return;
}


