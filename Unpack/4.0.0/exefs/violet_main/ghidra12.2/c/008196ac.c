/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008196ac; name: FUN_008196ac
 */


void FUN_008196ac(undefined4 *param_1)

{
  void *__dest;
  long lVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  __dest = (void *)FUN_0049e7b0(PTR_FUN_047cba38,0x1000);
  memcpy(__dest,*(void **)(param_1 + 6),*(size_t *)(param_1 + 2));
  lVar1 = *(long *)(param_1 + 6);
  *(void **)(param_1 + 6) = __dest;
  if (lVar1 != 0) {
    FUN_0049e800(lVar1);
    FUN_0049e7e0(PTR_LAB_047cba48,lVar1);
  }
  *(undefined8 *)(param_1 + 4) = 0x1000;
  return;
}


