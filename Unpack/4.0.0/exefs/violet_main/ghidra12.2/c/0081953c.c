/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081953c; name: FUN_0081953c
 */


void FUN_0081953c(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puVar1 = param_2;
  }
  param_1[2] = 0;
  *param_1 = puVar1;
  param_1[1] = param_3;
  *puVar1 = 0;
  return;
}


