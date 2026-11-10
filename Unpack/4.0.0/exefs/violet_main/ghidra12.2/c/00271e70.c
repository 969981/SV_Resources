/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00271e70; name: _INIT_7
 */


void _INIT_7(void)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)PTR_DAT_047cbe70 == 0) {
    if (((*PTR_DAT_047cc340 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047cc340), iVar1 != 0)) {
      __cxa_guard_release(PTR_DAT_047cc340);
    }
    *(undefined **)PTR_DAT_047cbe70 = PTR_PTR_047cc348;
    lVar2 = *(long *)PTR_DAT_047cbb08;
  }
  else {
    lVar2 = *(long *)PTR_DAT_047cbb08;
  }
  if (lVar2 != 0) {
    return;
  }
  if (((*PTR_DAT_047cc350 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047cc350), iVar1 != 0))
  {
    __cxa_guard_release(PTR_DAT_047cc350);
  }
  *(undefined **)PTR_DAT_047cbb08 = PTR_PTR_047cc358;
  return;
}


