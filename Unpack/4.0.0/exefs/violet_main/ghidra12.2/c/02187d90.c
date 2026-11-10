/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02187d90; name: FUN_02187d90
 */


undefined8 * FUN_02187d90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((DAT_048417f8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_048417f8), puVar2 = PTR_DAT_047d8d38, iVar3 != 0)) {
    if (((*PTR_DAT_047d8d30 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8d30), puVar1 = PTR_DAT_047d3988, iVar3 != 0)) {
      if (((*PTR_DAT_047d3980 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar3 != 0)) {
        uVar4 = FUN_01adab84();
        *(undefined8 *)puVar1 = uVar4;
        __cxa_guard_release(PTR_DAT_047d3980);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_047d8d30);
    }
    DAT_048417f0 = puVar2;
    __cxa_guard_release(&DAT_048417f8);
  }
  return &DAT_048417f0;
}


