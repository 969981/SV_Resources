/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027067ec; name: FUN_027067ec
 */


undefined8 FUN_027067ec(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_1 = (long *)*param_1;
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)param_1[2];
    if ((puVar1 == (undefined8 *)0x0 || puVar2 == (undefined8 *)0x0) ||
       (((puVar1 != puVar2 && ((long *)*puVar1 == param_1)) && ((long *)*puVar2 == param_1)))) {
      return 0;
    }
  }
  return 1;
}


