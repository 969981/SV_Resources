/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021145d4; name: FUN_021145d4
 */


void FUN_021145d4(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((DAT_04840c80 & 1) != 0) ||
     (iVar2 = __cxa_guard_acquire(&DAT_04840c80), puVar1 = PTR_DAT_047d39c8, iVar2 == 0)) {
    return;
  }
  if (((*PTR_DAT_047d39c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar2 != 0))
  {
    *(undefined8 *)puVar1 = 0;
    __cxa_guard_release(PTR_DAT_047d39c0);
  }
  DAT_04840c78 = puVar1;
  __cxa_guard_release(&DAT_04840c80);
  return;
}


