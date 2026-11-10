/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0051e180; name: FUN_0051e180
 */


undefined8 FUN_0051e180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte local_50 [16];
  undefined8 local_40;
  int local_38;
  
  uVar1 = FUN_0051e02c(param_4,param_2,param_1);
  uVar2 = FUN_0051e02c(param_4,param_3,param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    local_38 = 0;
    FUN_004fe9d4(local_50,param_2);
                    /* try { // try from 0051e22c to 0051e243 has its CatchHandler @ 0051e388 */
    FUN_004fe9d4(param_2,param_3);
    FUN_004fe9d4(param_3,local_50);
    if ((local_38 == 9) && ((local_50[0] & 1) != 0)) {
      FUN_0049e790(PTR_LAB_047cba48,local_40);
    }
    uVar1 = FUN_0051e02c(param_4,param_2,param_1);
    if ((uVar1 & 1) != 0) {
      local_38 = 0;
      FUN_004fe9d4(local_50,param_1);
                    /* try { // try from 0051e28c to 0051e2a3 has its CatchHandler @ 0051e380 */
      FUN_004fe9d4(param_1,param_2);
      FUN_004fe9d4(param_2,local_50);
LAB_0051e330:
      if ((local_38 == 9) && ((local_50[0] & 1) != 0)) {
        FUN_0049e790(PTR_LAB_047cba48,local_40);
      }
      return 2;
    }
  }
  else if ((uVar2 & 1) == 0) {
    local_38 = 0;
    FUN_004fe9d4(local_50,param_1);
                    /* try { // try from 0051e2b8 to 0051e2cf has its CatchHandler @ 0051e384 */
    FUN_004fe9d4(param_1,param_2);
    FUN_004fe9d4(param_2,local_50);
    if ((local_38 == 9) && ((local_50[0] & 1) != 0)) {
      FUN_0049e790(PTR_LAB_047cba48,local_40);
    }
    uVar1 = FUN_0051e02c(param_4,param_3,param_2);
    if ((uVar1 & 1) != 0) {
      local_38 = 0;
      FUN_004fe9d4(local_50,param_2);
                    /* try { // try from 0051e318 to 0051e32f has its CatchHandler @ 0051e37c */
      FUN_004fe9d4(param_2,param_3);
      FUN_004fe9d4(param_3,local_50);
      goto LAB_0051e330;
    }
  }
  else {
    local_38 = 0;
    FUN_004fe9d4(local_50,param_1);
                    /* try { // try from 0051e1d8 to 0051e1ef has its CatchHandler @ 0051e38c */
    FUN_004fe9d4(param_1,param_3);
    FUN_004fe9d4(param_3,local_50);
    if ((local_38 == 9) && ((local_50[0] & 1) != 0)) {
      FUN_0049e790(PTR_LAB_047cba48,local_40);
    }
  }
  return 1;
}


