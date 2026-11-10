/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025cd68; name: FUN_0025cd68
 */


undefined4 FUN_0025cd68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_70 [8];
  byte local_68;
  undefined8 local_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined1 auStack_38 [24];
  ulong local_18;
  
                    /* try { // try from 0025cd7c to 0025cd8f has its CatchHandler @ 0025ce40 */
  FUN_00362c44(auStack_70,param_2,param_3,&local_18);
  if (local_18 == 0) {
    uVar1 = FUN_0025c1ac(param_1,auStack_70);
  }
  else {
    uVar1 = 0x80141;
    if (4 < local_18) {
                    /* try { // try from 0025cda8 to 0025cdab has its CatchHandler @ 0025ce04 */
      FUN_00350fd0();
    }
  }
  FUN_0025ce4c(auStack_38);
  FUN_0025cef0(auStack_50,local_48);
  if ((local_68 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_58);
  }
  return uVar1;
}


