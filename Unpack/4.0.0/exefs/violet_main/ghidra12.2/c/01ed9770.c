/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ed9770; name: FUN_01ed9770
 */


undefined8 FUN_01ed9770(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  if (((*PTR_DAT_047daa38 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_047daa38), puVar4 = PTR_DAT_047d4850, iVar5 != 0)) {
    if (((*PTR_DAT_047d4848 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4848), puVar3 = PTR_DAT_047d3ab0, iVar5 != 0)) {
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
      __cxa_guard_release(PTR_DAT_047d4848);
    }
    *(undefined **)PTR_DAT_047daa40 = puVar4;
    __cxa_guard_release(PTR_DAT_047daa38);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047daa40) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


