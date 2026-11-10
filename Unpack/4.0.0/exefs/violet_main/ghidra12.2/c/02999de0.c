/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02999de0; name: FUN_02999de0
 */


void FUN_02999de0(long *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1d0))();
  FUN_0181cac8((long)param_1 + 0x3f4,param_2,iVar1 - param_3);
  FUN_0181cb20(param_1,param_2);
  return;
}


