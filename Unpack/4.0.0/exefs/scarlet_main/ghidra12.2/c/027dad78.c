/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027dad78; name: FUN_027dad78
 */


void FUN_027dad78(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)param_1[1];
  if (pcVar1 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(param_1 + 4);
  }
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  uVar2 = param_2[3];
  param_2[3] = 0;
  param_1[7] = uVar2;
  FUN_027dace8(param_1 + 8,param_2 + 4);
  *param_1 = FUN_027db010;
  param_1[1] = FUN_027db18c;
  param_1[2] = FUN_027db1cc;
  param_1[3] = &LAB_027db224;
  return;
}


