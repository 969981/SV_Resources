/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01250d88; name: FUN_01250d88
 */


bool FUN_01250d88(undefined8 param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar3 = FUN_02988b50(param_1,param_2,param_4);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    FUN_02988b8c(param_1,param_3,uVar2);
    FUN_02988c0c(param_1,uVar2);
    FUN_02988c70(param_1,param_2,param_4,param_5);
  }
  return bVar1;
}


