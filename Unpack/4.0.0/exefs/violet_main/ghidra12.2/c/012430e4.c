/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012430e4; name: FUN_012430e4
 */


void FUN_012430e4(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x200))(param_2);
  if ((uVar1 & 1) == 0) {
    FUN_012438e4(param_1,param_2,6,1,3,1);
    FUN_012438e4(param_1,param_2,7,2,4,2);
    return;
  }
  return;
}


