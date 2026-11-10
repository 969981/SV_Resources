/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029848a8; name: FUN_029848a8
 */


void FUN_029848a8(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x200))(param_2);
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_01246e90(param_1);
    FUN_02930330(uVar2,param_2);
    return;
  }
  return;
}


