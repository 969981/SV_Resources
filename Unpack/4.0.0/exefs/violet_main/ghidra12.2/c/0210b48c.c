/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0210b48c; name: FUN_0210b48c
 */


undefined1 FUN_0210b48c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0210b4d4(param_2,param_3,*(undefined8 *)(param_1[1] + 0xc0),param_1[2],param_1[3],
                       param_1[4]);
  *(undefined8 *)*param_1 = uVar1;
  return *(undefined1 *)*param_1;
}


