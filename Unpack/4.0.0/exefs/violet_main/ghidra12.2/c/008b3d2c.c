/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b3d2c; name: FUN_008b3d2c
 */


undefined * FUN_008b3d2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((*PTR_DAT_047d2410 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d2410), puVar2 = PTR_DAT_047d2418,
     puVar1 = PTR_DAT_047d2380, iVar3 != 0)) {
    if (((*PTR_DAT_047d2378 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d2378), iVar3 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_047d2378);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_047d2410);
  }
  return PTR_DAT_047d2418;
}


