/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0166e694; name: FUN_0166e694
 */


void FUN_0166e694(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04841cd8 & 1) != 0) ||
     (iVar2 = __cxa_guard_acquire(&DAT_04841cd8), puVar1 = PTR_DAT_047d3988, iVar2 == 0)) {
    return;
  }
  if (((*PTR_DAT_047d3980 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar2 != 0))
  {
    uVar3 = FUN_01adab84();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047d3980);
  }
  DAT_04841cd0 = puVar1;
  __cxa_guard_release(&DAT_04841cd8);
  return;
}


