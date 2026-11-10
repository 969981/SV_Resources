/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01707c24; name: FUN_01707c24
 */


void FUN_01707c24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  
  if (((DAT_0485c158 & 1) != 0) ||
     (iVar7 = __cxa_guard_acquire(&DAT_0485c158), puVar6 = PTR_DAT_047e1370, iVar7 == 0)) {
    return;
  }
  if (((*PTR_DAT_047e1368 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_047e1368), puVar5 = PTR_DAT_047dd328, iVar7 != 0)) {
    if (((*PTR_DAT_047dd320 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047dd320), puVar4 = PTR_DAT_047d9108, iVar7 != 0)) {
      if (((*PTR_DAT_047d9100 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d9100), puVar3 = PTR_DAT_047d3ab0, iVar7 != 0)) {
        if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar1 = PTR_DAT_047d39b8, iVar7 != 0)) {
          if (((*PTR_DAT_047d39b0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar2 = PTR_DAT_047d39c8, iVar7 != 0))
          {
            if (((*PTR_DAT_047d39c0 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar7 != 0)) {
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
    *(undefined **)puVar6 = puVar5;
    __cxa_guard_release(PTR_DAT_047e1368);
  }
  DAT_0485c150 = puVar6;
  __cxa_guard_release(&DAT_0485c158);
  return;
}


