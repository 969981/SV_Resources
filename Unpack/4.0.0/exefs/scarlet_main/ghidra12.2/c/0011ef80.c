/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0011ef80; name: FUN_0011ef80
 */


void FUN_0011ef80(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined1 auStack_50 [16];
  
  uVar1 = FUN_0011e000(param_3,*param_5);
  *param_5 = uVar1;
  FUN_0011e4c0(auStack_50,param_4,param_3);
  FUN_0011f1c0(param_1,param_2,uVar1,4,param_3,param_4,&DAT_03cb4dc0,auStack_50,0x8000);
  return;
}


