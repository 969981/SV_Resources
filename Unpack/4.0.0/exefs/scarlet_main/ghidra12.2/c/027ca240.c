/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027ca240; name: FUN_027ca240
 */


void FUN_027ca240(long param_1,long *param_2)

{
  long lVar1;
  
  if (((*(char *)(param_1 + 0x140) != '\0') && (*param_2 != 0)) &&
     (lVar1 = *(long *)(*param_2 + 0x10), lVar1 != 0)) {
    (**(code **)(*(long *)(lVar1 + -0x28) + 0x78))();
  }
  FUN_0154631c(param_1 + 0x130,param_2);
  return;
}


