/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b5350; name: FUN_008b5350
 */


void FUN_008b5350(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_00892e08(param_1,param_3,param_4 & 0xff);
  if ((uVar1 & 1) != 0) {
    FUN_00894744(param_3,param_2,param_4);
  }
  FUN_00892df0(param_1,param_2);
  return;
}


