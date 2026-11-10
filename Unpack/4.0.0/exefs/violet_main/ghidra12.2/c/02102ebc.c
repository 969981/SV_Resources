/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02102ebc; name: FUN_02102ebc
 */


uint FUN_02102ebc(long *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*param_2 == 0) {
    DAT_04840be4 = 0;
    DAT_04840be8 = 0;
    *param_2 = 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x128))(param_1,&DAT_04840be4,param_3);
  if (param_3[2] == 2) {
    uVar2 = FUN_01556454(param_1,&DAT_04840be8,*param_3,param_3[3],param_3 + 4);
  }
  else if (param_3[2] == 1) {
    uVar2 = FUN_0191cf38(param_1,&DAT_04840be8,*param_3,param_3[3],param_3 + 4);
  }
  else {
    uVar2 = 1;
  }
  return uVar1 & uVar2 & 1;
}


