/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00264f60; name: _INIT_5
 */


void _INIT_5(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_047cc290 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047cc290), puVar1 = PTR_DAT_047cc298, iVar2 != 0)) {
    *(undefined **)PTR_DAT_047cc298 = PTR_LAB_047cc2a0;
    *(undefined8 *)(puVar1 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047cc290);
    FUN_0052d9a0(PTR_DAT_047cc298);
    return;
  }
  FUN_0052d9a0(PTR_DAT_047cc298);
  return;
}


