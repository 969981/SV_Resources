/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0051e3c0; name: FUN_0051e3c0
 */


int FUN_0051e3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  byte local_60 [16];
  undefined8 local_50;
  int local_48;
  
  iVar1 = FUN_0051e180();
  uVar2 = FUN_0051e02c(param_5,param_4,param_3);
  if ((uVar2 & 1) != 0) {
    local_48 = 0;
    FUN_004fe9d4(local_60,param_3);
                    /* try { // try from 0051e418 to 0051e42f has its CatchHandler @ 0051e54c */
    FUN_004fe9d4(param_3,param_4);
    FUN_004fe9d4(param_4,local_60);
    if ((local_48 == 9) && ((local_60[0] & 1) != 0)) {
      FUN_0049e790(PTR_LAB_047cba48,local_50);
    }
    uVar2 = FUN_0051e02c(param_5,param_3,param_2);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      local_48 = 0;
      FUN_004fe9d4(local_60,param_2);
                    /* try { // try from 0051e478 to 0051e48f has its CatchHandler @ 0051e548 */
      FUN_004fe9d4(param_2,param_3);
      FUN_004fe9d4(param_3,local_60);
      if ((local_48 == 9) && ((local_60[0] & 1) != 0)) {
        FUN_0049e790(PTR_LAB_047cba48,local_50);
      }
      uVar2 = FUN_0051e02c(param_5,param_2,param_1);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        local_48 = 0;
        FUN_004fe9d4(local_60,param_1);
                    /* try { // try from 0051e4d8 to 0051e4ef has its CatchHandler @ 0051e544 */
        FUN_004fe9d4(param_1,param_2);
        FUN_004fe9d4(param_2,local_60);
        if ((local_48 == 9) && ((local_60[0] & 1) != 0)) {
          FUN_0049e790(PTR_LAB_047cba48,local_50);
        }
        iVar1 = iVar1 + 3;
      }
    }
  }
  return iVar1;
}


