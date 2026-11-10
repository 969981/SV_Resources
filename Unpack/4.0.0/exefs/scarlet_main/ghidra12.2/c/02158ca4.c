/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02158ca4; name: FUN_02158ca4
 */


undefined * FUN_02158ca4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  
  if (((*PTR_DAT_047dd1c8 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_047dd1c8), puVar7 = PTR_DAT_047dd1d0,
     puVar5 = PTR_DAT_047d9048, iVar8 != 0)) {
    if (((*PTR_DAT_047d9040 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d9040), puVar6 = PTR_DAT_047d9058, iVar8 != 0)) {
      if (((*PTR_DAT_047d9050 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d9050), puVar4 = PTR_DAT_047d9028, iVar8 != 0)) {
        if (((*PTR_DAT_047d9020 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d9020), puVar3 = PTR_DAT_047d3ab0, iVar8 != 0)) {
          if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar1 = PTR_DAT_047d39b8, iVar8 != 0))
          {
            if (((*PTR_DAT_047d39b0 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar2 = PTR_DAT_047d39c8, iVar8 != 0
               )) {
              if (((*PTR_DAT_047d39c0 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar8 != 0)) {
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
    *(undefined **)puVar7 = puVar5;
    __cxa_guard_release(PTR_DAT_047dd1c8);
  }
  return PTR_DAT_047dd1d0;
}


