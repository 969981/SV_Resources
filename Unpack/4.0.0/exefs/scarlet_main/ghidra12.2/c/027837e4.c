/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027837e4; name: FUN_027837e4
 */


void FUN_027837e4(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_02784500(param_1 + 3);
  if (param_2 != 0) {
    FUN_02784640(param_1,param_2);
    param_2 = param_2 * 0x70;
    lVar2 = param_1[1];
    lVar1 = lVar2 + param_2;
    do {
      FUN_027846cc(param_1 + 3,lVar2);
      lVar2 = lVar2 + 0x70;
      param_2 = param_2 + -0x70;
    } while (param_2 != 0);
    param_1[1] = lVar1;
  }
  return;
}


