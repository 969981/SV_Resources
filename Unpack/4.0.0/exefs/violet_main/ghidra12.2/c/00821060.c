/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00821060; name: FUN_00821060
 */


undefined8 FUN_00821060(int param_1,int param_2)

{
  void *pvVar1;
  
  if (param_1 != 1) {
    return 0x16;
  }
  if (DAT_044e8ac8 == 0xffffffff) {
    return 0;
  }
  pvVar1 = pthread_getspecific(DAT_044e8ac8);
  if (pvVar1 != (void *)0x0) {
    *(uint *)((long)pvVar1 + 0x24) = (uint)(param_2 != 0);
  }
  return 0;
}


