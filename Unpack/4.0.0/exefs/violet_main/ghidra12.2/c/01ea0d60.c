/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea0d60; name: FUN_01ea0d60
 */


void FUN_01ea0d60(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*param_1 & 1) != 0) {
    (**(code **)(*(long *)param_1[3] + 0x18))
              ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
  }
  uVar1 = *param_2;
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar2;
  *param_1 = uVar1;
  *(undefined2 *)param_2 = 0;
  return;
}


