/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0014e9c0; name: FUN_0014e9c0
 */


ulong FUN_0014e9c0(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_00d34290(param_1,2);
  if (iVar1 == 0) {
    uVar2 = FUN_00122260(param_1,param_2,param_3,1);
    return uVar2;
  }
  FUN_00d341e0(param_1,2);
  FUN_00d341e0(param_1,param_2 + -1);
  FUN_00d341e0(param_1,param_3 + -2);
  FUN_00123240(param_1,2,1,0,0);
  uVar2 = FUN_00cc4dc0(param_1,0xffffffff);
  FUN_00c5db00(param_1,0xfffffffe);
  return uVar2 & 0xffffffff;
}


