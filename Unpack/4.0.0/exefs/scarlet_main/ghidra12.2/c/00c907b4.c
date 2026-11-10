/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c907b4; name: FUN_00c907b4
 */


void FUN_00c907b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  
  if (((*PTR_DAT_047d9030 & 1) != 0) ||
     (iVar7 = __cxa_guard_acquire(PTR_DAT_047d9030), puVar5 = PTR_DAT_047d9048, iVar7 == 0)) {
    return;
  }
  if (((*PTR_DAT_047d9040 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_047d9040), puVar6 = PTR_DAT_047d9058, iVar7 != 0)) {
    if (((*PTR_DAT_047d9050 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d9050), puVar4 = PTR_DAT_047d9028, iVar7 != 0)) {
      if (((*PTR_DAT_047d9020 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d9020), puVar3 = PTR_DAT_047d3ab0, iVar7 != 0)) {
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
        __cxa_guard_release(PTR_DAT_047d9020);
      }
      *(undefined **)puVar6 = puVar4;
      __cxa_guard_release(PTR_DAT_047d9050);
    }
    *(undefined **)puVar5 = puVar6;
    __cxa_guard_release(PTR_DAT_047d9040);
  }
  *(undefined **)PTR_DAT_047d9038 = puVar5;
  __cxa_guard_release(PTR_DAT_047d9030);
  return;
}


