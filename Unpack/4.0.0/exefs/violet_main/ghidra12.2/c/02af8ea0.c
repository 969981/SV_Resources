/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02af8ea0; name: FUN_02af8ea0
 */


undefined * FUN_02af8ea0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  if (((*PTR_DAT_047d4a70 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4a70), puVar4 = PTR_DAT_047d4a78,
     puVar3 = PTR_DAT_047d3ab0, iVar5 != 0)) {
    if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar1 = PTR_DAT_047d39b8, iVar5 != 0)) {
      if (((*PTR_DAT_047d39b0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar2 = PTR_DAT_047d39c8, iVar5 != 0)) {
        if (((*PTR_DAT_047d39c0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar5 != 0)) {
          *(undefined8 *)puVar2 = 0;
          __cxa_guard_release(PTR_DAT_047d39c0);
        }
        *(undefined **)puVar1 = puVar2;
        __cxa_guard_release(PTR_DAT_047d39b0);
      }
      *(undefined **)puVar3 = puVar1;
      __cxa_guard_release(PTR_DAT_047d3aa8);
    }
    *(undefined **)puVar4 = puVar3;
    __cxa_guard_release(PTR_DAT_047d4a70);
  }
  return PTR_DAT_047d4a78;
}


