/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00345f78; name: FUN_00345f78
 */


void FUN_00345f78(long *param_1,undefined4 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 2) = param_2;
  param_1[3] = -1;
  *param_1 = (long)(PTR_DAT_047ccd78 + 0x10);
  param_1[1] = 1;
  lVar3 = param_3[1];
  lVar2 = *param_3;
  param_1[6] = param_3[2];
  param_1[5] = lVar3;
  param_1[4] = lVar2;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
                    /* try { // try from 00345fc0 to 00345fcb has its CatchHandler @ 00345fd8 */
  uVar1 = FUN_0034ad58();
  FUN_0034ad64(uVar1,param_1);
  return;
}


