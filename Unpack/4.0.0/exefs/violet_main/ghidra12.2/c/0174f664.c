/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0174f664; name: FUN_0174f664
 */


undefined1 FUN_0174f664(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0174f6b0(param_2,param_3,*(undefined8 *)(param_1[1] + 0xc0),param_1[2],param_1[3],
                       param_1[4],param_1[5]);
  *(undefined2 *)*param_1 = uVar1;
  return *(undefined1 *)*param_1;
}


