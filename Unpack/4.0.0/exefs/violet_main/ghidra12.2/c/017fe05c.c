/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017fe05c; name: FUN_017fe05c
 */


void FUN_017fe05c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  if (((DAT_048660b8 & 1) != 0) ||
     (iVar6 = __cxa_guard_acquire(&DAT_048660b8), puVar5 = PTR_DAT_047dd328, iVar6 == 0)) {
    return;
  }
  if (((*PTR_DAT_047dd320 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_047dd320), puVar4 = PTR_DAT_047d9108, iVar6 != 0)) {
    if (((*PTR_DAT_047d9100 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d9100), puVar3 = PTR_DAT_047d3ab0, iVar6 != 0)) {
      if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar1 = PTR_DAT_047d39b8, iVar6 != 0)) {
        if (((*PTR_DAT_047d39b0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar2 = PTR_DAT_047d39c8, iVar6 != 0)) {
          if (((*PTR_DAT_047d39c0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar6 != 0)) {
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
      __cxa_guard_release(PTR_DAT_047d9100);
    }
    *(undefined **)puVar5 = puVar4;
    __cxa_guard_release(PTR_DAT_047dd320);
  }
  DAT_048660b0 = puVar5;
  __cxa_guard_release(&DAT_048660b8);
  return;
}


