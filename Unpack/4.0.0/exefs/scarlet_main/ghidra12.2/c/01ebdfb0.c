/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ebdfb0; name: FUN_01ebdfb0
 */


void FUN_01ebdfb0(long param_1,long *param_2)

{
  char cVar1;
  int local_8 [2];
  
  local_8[1] = 0;
  param_2 = (long *)*param_2;
  if ((((param_2 != (long *)0x0) &&
       (cVar1 = *(char *)(*param_2 + param_2[2]), param_2[2] = param_2[2] + 1, cVar1 == -0x47)) &&
      (FUN_01ebf2ac(local_8,local_8 + 1), local_8[0] == 0)) &&
     ((*(char *)(param_1 + 0x3e0) != '\0' &&
      (FUN_01ebe3a4(param_1,param_1 + 0x3f0), *(char *)(param_1 + 0x3e0) != '\0')))) {
    *(undefined1 *)(param_1 + 0x3e0) = 0;
  }
  return;
}


