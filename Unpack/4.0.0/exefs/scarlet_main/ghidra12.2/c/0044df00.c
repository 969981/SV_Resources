/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0044df00; name: FUN_0044df00
 */


undefined8 FUN_0044df00(undefined4 *param_1,undefined4 *param_2)

{
  param_2[10] = 0xffffffff;
  memset((void *)((long)(param_2 + 0xc) + *(long *)(param_2 + 0x1c)),0,
         0x40 - *(long *)(param_2 + 0x1c));
  FUN_0044c8d0(param_2,param_2 + 0xc,*(undefined8 *)(param_2 + 0x1c));
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  FUN_00453300(param_2,0x78);
  return 1;
}


