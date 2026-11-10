/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002fb140; name: FUN_002fb140
 */


void FUN_002fb140(long param_1,long *param_2,ulong param_3)

{
  void *__dest;
  ulong uVar1;
  long lVar2;
  
  if ((param_1 == 0) || (param_2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*param_2 == 0) {
    uVar1 = (ulong)(byte)param_2[1];
  }
  else {
    uVar1 = param_2[1];
  }
  if (uVar1 == param_3) {
    return;
  }
  *(ulong *)(param_1 + 0x20) = uVar1 - param_3;
  __dest = (void *)FUN_0038c7b0();
  *(void **)(param_1 + 0x18) = __dest;
  if (*param_2 == 0) {
    lVar2 = (long)param_2 + 9;
  }
  else {
    lVar2 = param_2[2];
  }
  memcpy(__dest,(void *)(lVar2 + param_3),*(size_t *)(param_1 + 0x20));
  return;
}


