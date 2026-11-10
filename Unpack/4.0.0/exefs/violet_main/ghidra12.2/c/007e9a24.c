/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e9a24; name: FUN_007e9a24
 */


void FUN_007e9a24(long param_1,char *param_2,undefined4 param_3)

{
  size_t __n;
  
  FUN_007e9a98();
  FUN_0078cfe4(param_1 + 0x1910,0x1a);
  *(undefined8 *)(param_1 + 0x1930) = 0;
  *(undefined1 *)(param_1 + 0x1938) = 0;
  *(undefined4 *)(param_1 + 0x193c) = param_3;
  __n = strlen(param_2);
  if (0x1e < __n) {
    __n = 0x1f;
  }
  memcpy((void *)(param_1 + 0x1808),param_2,__n);
  *(undefined1 *)(param_1 + 0x1808 + __n) = 0;
  return;
}


