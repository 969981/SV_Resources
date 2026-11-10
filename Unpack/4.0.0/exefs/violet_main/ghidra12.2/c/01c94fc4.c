/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c94fc4; name: FUN_01c94fc4
 */


void FUN_01c94fc4(undefined1 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_28;
  
  *param_1 = 0;
  uVar1 = FUN_01c95020();
  if ((uVar1 & 1) != 0) {
    FUN_01c95110(&local_28,param_2);
    *(undefined8 *)(param_1 + 8) = local_28;
    *param_1 = 1;
  }
  FUN_00c5db00(param_2,0);
  return;
}


