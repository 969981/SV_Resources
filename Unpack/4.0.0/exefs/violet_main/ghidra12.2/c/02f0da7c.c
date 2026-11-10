/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f0da7c; name: FUN_02f0da7c
 */


undefined8 FUN_02f0da7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) {
    uVar1 = param_1[1];
    *param_2 = *param_1;
    param_2[1] = uVar1;
  }
  return 0x20;
}


