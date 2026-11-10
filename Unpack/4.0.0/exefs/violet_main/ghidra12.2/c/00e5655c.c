/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5655c; name: FUN_00e5655c
 */


undefined8 FUN_00e5655c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  if (((*PTR_DAT_047dd620 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_047dd620), puVar4 = PTR_DAT_047d8b80, iVar6 != 0)) {
    if (((*PTR_DAT_047d8b78 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8b78), puVar5 = PTR_DAT_047d8b90, iVar6 != 0)) {
      if (((*PTR_DAT_047d8b88 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8b88), puVar3 = PTR_DAT_047d3ab0, iVar6 != 0)) {
        if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar1 = PTR_DAT_047d39b8, iVar6 != 0)) {
          if (((*PTR_DAT_047d39b0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar2 = PTR_DAT_047d39c8, iVar6 != 0))
          {
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
        *(undefined **)puVar5 = puVar3;
        __cxa_guard_release(PTR_DAT_047d8b88);
      }
      *(undefined **)puVar4 = puVar5;
      __cxa_guard_release(PTR_DAT_047d8b78);
    }
    *(undefined **)PTR_DAT_047dd628 = puVar4;
    __cxa_guard_release(PTR_DAT_047dd620);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047dd628) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


