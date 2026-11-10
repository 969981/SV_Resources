/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00262e68; name: FUN_00262e68
 */


void FUN_00262e68(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_00262f48();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0xe8) = param_3[1];
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  *(undefined8 *)(param_1 + 0xf0) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
                    /* try { // try from 00262eb0 to 00262eb7 has its CatchHandler @ 00262ecc */
  FUN_002736c0(param_1 + 0xf8,param_4);
  return;
}


