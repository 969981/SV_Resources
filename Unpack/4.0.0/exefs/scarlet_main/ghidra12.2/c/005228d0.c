/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005228d0; name: FUN_005228d0
 */


void FUN_005228d0(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4,undefined8 param_5
                 )

{
  byte *pbVar1;
  undefined1 auVar2 [12];
  
  auVar2 = FUN_00524ad8();
  pbVar1 = auVar2._0_8_;
  *(undefined8 *)(pbVar1 + 0x10) = param_5;
  if ((auVar2._8_4_ & 0xff) != 0) {
    pbVar1[8] = param_3;
    pbVar1[9] = 0;
  }
  pbVar1[10] = pbVar1[10] & 0xf0;
  *pbVar1 = param_4 & 1;
  return;
}


