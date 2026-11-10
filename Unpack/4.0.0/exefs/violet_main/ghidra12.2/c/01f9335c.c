/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f9335c; name: FUN_01f9335c
 */


undefined8 * FUN_01f9335c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((DAT_0483ad50 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_0483ad50), puVar2 = PTR_DAT_047d5420, iVar3 != 0)) {
    if (((*PTR_DAT_047d5418 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d5418), puVar1 = PTR_DAT_047d3988, iVar3 != 0)) {
      if (((*PTR_DAT_047d3980 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar3 != 0)) {
        uVar4 = FUN_01adab84();
        *(undefined8 *)puVar1 = uVar4;
        __cxa_guard_release(PTR_DAT_047d3980);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_047d5418);
    }
    DAT_0483ad48 = puVar2;
    __cxa_guard_release(&DAT_0483ad50);
  }
  return &DAT_0483ad48;
}


