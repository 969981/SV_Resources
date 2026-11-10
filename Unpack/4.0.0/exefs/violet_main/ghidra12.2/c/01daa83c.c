/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01daa83c; name: FUN_01daa83c
 */


void FUN_01daa83c(byte *param_1)

{
  int iVar1;
  
  if ((((*param_1 < 2) && (*(long *)(param_1 + 8) != 0)) || ((*PTR_DAT_047d42e0 & 1) != 0)) ||
     (iVar1 = __cxa_guard_acquire(PTR_DAT_047d42e0), iVar1 == 0)) {
    return;
  }
  *(undefined8 *)PTR_DAT_047d42e8 = 0;
  __cxa_guard_release(PTR_DAT_047d42e0);
  return;
}


