/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0173b86c; name: FUN_0173b86c
 */


bool FUN_0173b86c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4,undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  float local_24;
  undefined8 local_20;
  float local_18;
  
  local_2c = param_3._0_8_;
  local_38 = param_2._0_8_;
  local_20 = param_1._0_8_;
  local_18 = -param_1._8_4_;
  local_30 = -param_2._8_4_;
  local_24 = -param_3._8_4_;
  plVar2 = *(long **)(*(long *)(param_4 + 0x200) + 0x60);
  iVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,param_5,&local_38);
  return iVar1 == 1;
}


