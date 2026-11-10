/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027d954c; name: FUN_027d954c
 */


void FUN_027d954c(undefined8 *param_1,long param_2)

{
  undefined1 auStack_30 [16];
  
  if (*(long *)(param_2 + 0x40) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_027c8218(auStack_30);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_027c85f0(param_1,auStack_30);
    FUN_027c83f8(auStack_30);
  }
  return;
}


