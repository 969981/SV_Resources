/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01529ba0; name: FUN_01529ba0
 */


void FUN_01529ba0(long param_1,undefined8 param_2,uint param_3,byte param_4)

{
  long lVar1;
  
  if ((param_4 == 0) || (param_4 - 1 == (param_3 & 0xff))) {
    lVar1 = param_1 + 0x120;
    FUN_01529c84(param_1,1,2,param_2,lVar1);
    FUN_01529c84(param_1,1,3,param_2,lVar1);
    FUN_0152a0e8(param_1,1,param_2,lVar1);
    FUN_01529c84(param_1,0,2,param_2,lVar1);
    FUN_01529c84(param_1,0,3,param_2,lVar1);
  }
  else {
    FUN_0152a0e8(param_1,1,param_2,param_1 + 0x120);
  }
  FUN_0152a0e8(param_1,0,param_2,param_1 + 0x120);
  return;
}


