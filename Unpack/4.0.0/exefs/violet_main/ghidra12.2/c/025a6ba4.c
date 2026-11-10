/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025a6ba4; name: FUN_025a6ba4
 */


undefined8 FUN_025a6ba4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if ((*param_1 != 0) && (puVar5 = *(undefined8 **)(*param_1 + 8), puVar5 != (undefined8 *)0x0)) {
    puVar6 = (undefined8 *)PTR_DAT_047d91f0;
    if (((*PTR_DAT_047d91e8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d91e8), puVar3 = PTR_DAT_047d3ab0,
       puVar6 = (undefined8 *)PTR_DAT_047d91f0, iVar4 != 0)) {
      if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar1 = PTR_DAT_047d39b8, iVar4 != 0)) {
        if (((*PTR_DAT_047d39b0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar2 = PTR_DAT_047d39c8, iVar4 != 0)) {
          if (((*PTR_DAT_047d39c0 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar4 != 0)) {
            *(undefined8 *)puVar2 = 0;
            __cxa_guard_release(PTR_DAT_047d39c0);
          }
          *(undefined **)puVar1 = puVar2;
          __cxa_guard_release(PTR_DAT_047d39b0);
        }
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(PTR_DAT_047d3aa8);
      }
      puVar6 = (undefined8 *)PTR_DAT_047d91f0;
      *(undefined **)PTR_DAT_047d91f0 = puVar3;
      __cxa_guard_release(PTR_DAT_047d91e8);
    }
    do {
      if (puVar5 == puVar6) {
        return 1;
      }
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)0x0);
  }
  return 0;
}


