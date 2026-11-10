/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0347f9cc; name: FUN_0347f9cc
 */


int FUN_0347f9cc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0347eeb8();
  if (iVar1 == 1) {
    iVar1 = FUN_0347d824(param_1 + 0x14,param_2,param_3);
  }
  (**(code **)(*param_1 + 0x40))(param_1);
  return iVar1;
}


