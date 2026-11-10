/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01adab84; name: FUN_01adab84
 */


undefined * FUN_01adab84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  if (((*PTR_DAT_047d3990 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3990), puVar2 = PTR_DAT_047d39a8,
     puVar1 = PTR_DAT_047d3998, iVar5 != 0)) {
    if (((*PTR_DAT_047d39a0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d39a0), puVar3 = PTR_DAT_047d39b8, iVar5 != 0)) {
      if (((*PTR_DAT_047d39b0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar4 = PTR_DAT_047d39c8, iVar5 != 0)) {
        if (((*PTR_DAT_047d39c0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar5 != 0)) {
          *(undefined8 *)puVar4 = 0;
          __cxa_guard_release(PTR_DAT_047d39c0);
        }
        *(undefined **)puVar3 = puVar4;
        __cxa_guard_release(PTR_DAT_047d39b0);
      }
      *(undefined **)puVar2 = puVar3;
      __cxa_guard_release(PTR_DAT_047d39a0);
    }
    *(undefined **)puVar1 = puVar2;
    __cxa_guard_release(PTR_DAT_047d3990);
  }
  return PTR_DAT_047d3998;
}


