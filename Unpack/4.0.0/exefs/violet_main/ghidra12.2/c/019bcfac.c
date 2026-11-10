/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019bcfac; name: FUN_019bcfac
 */


void FUN_019bcfac(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04865a28 & 1) != 0) ||
     (iVar2 = __cxa_guard_acquire(&DAT_04865a28), puVar1 = PTR_DAT_047dd5e0, iVar2 == 0)) {
    return;
  }
  if (((*PTR_DAT_047dd5d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd5d8), iVar2 != 0))
  {
    uVar3 = FUN_0219eba8();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047dd5d8);
  }
  DAT_04865a20 = puVar1;
  __cxa_guard_release(&DAT_04865a28);
  return;
}


