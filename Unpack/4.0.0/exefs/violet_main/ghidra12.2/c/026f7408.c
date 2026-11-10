/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f7408; name: FUN_026f7408
 */


void FUN_026f7408(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((DAT_04859c70 & 1) != 0) ||
     (iVar3 = __cxa_guard_acquire(&DAT_04859c70), puVar2 = PTR_DAT_047d8a90, iVar3 == 0)) {
    return;
  }
  if (((*PTR_DAT_047d8a88 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8a88), puVar1 = PTR_DAT_047d39c8, iVar3 != 0)) {
    if (((*PTR_DAT_047d39c0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar3 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_047d39c0);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_047d8a88);
  }
  DAT_04859c68 = puVar2;
  __cxa_guard_release(&DAT_04859c70);
  return;
}


