/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020a6e08; name: FUN_020a6e08
 */


void FUN_020a6e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  
  uVar1 = FUN_019587b4();
  FUN_019565cc(uVar1,param_1,param_2,param_3,param_4,param_5,1L << (param_6 & 0x3f),param_7,param_8)
  ;
  return;
}


