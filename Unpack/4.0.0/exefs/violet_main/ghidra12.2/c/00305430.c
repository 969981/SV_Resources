/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00305430; name: FUN_00305430
 */


void FUN_00305430(long param_1)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  if (param_1 != 0) {
    __ptr = *(undefined8 **)(param_1 + 0x18);
    while (__ptr != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*__ptr;
      free((void *)__ptr[1]);
      free(__ptr);
      __ptr = puVar1;
    }
  }
  return;
}


