/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b4108; name: FUN_008b4108
 */


undefined * FUN_008b4108(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (((*PTR_DAT_047d2440 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047d2440), puVar3 = PTR_DAT_047d2458,
     puVar2 = PTR_DAT_047d2448, iVar4 != 0)) {
    if (((*PTR_DAT_047d2450 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d2450), puVar1 = PTR_DAT_047d2380, iVar4 != 0)) {
      if (((*PTR_DAT_047d2378 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d2378), iVar4 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(PTR_DAT_047d2378);
      }
      *(undefined **)puVar3 = puVar1;
      __cxa_guard_release(PTR_DAT_047d2450);
    }
    *(undefined **)puVar2 = puVar3;
    __cxa_guard_release(PTR_DAT_047d2440);
  }
  return PTR_DAT_047d2448;
}


