/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ac944; name: FUN_008ac944
 */


void FUN_008ac944(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_008a6694(*param_2,3);
  uVar2 = FUN_008a6694(*param_2,4);
  FUN_008ab9cc(param_1,param_2,param_3,param_4,uVar1,uVar2,*(byte *)(param_2 + 0x45) >> 2 & 1,
               *(byte *)(param_2 + 0x45) >> 3 & 1);
  return;
}


