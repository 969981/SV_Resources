/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dc9030; name: FUN_00dc9030
 */


undefined4 FUN_00dc9030(void *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  uVar1 = *(undefined4 *)((long)param_1 + 0x24);
  free(*(void **)((long)param_1 + 0x40));
  free(*(void **)((long)param_1 + 0x58));
  free(param_1);
  return uVar1;
}


