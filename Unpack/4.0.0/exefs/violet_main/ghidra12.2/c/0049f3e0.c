/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049f3e0; name: _INIT_50
 */


void _INIT_50(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_047cd708 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047cd708), puVar1 = PTR_DAT_047cd710, iVar2 != 0)) {
    *(undefined **)PTR_DAT_047cd710 = PTR_LAB_047cd718;
    *(undefined8 *)(puVar1 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047cd708);
    FUN_0052d9a0(PTR_DAT_047cd710);
    return;
  }
  FUN_0052d9a0(PTR_DAT_047cd710);
  return;
}


