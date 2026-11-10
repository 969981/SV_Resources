/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e9238; name: FUN_021e9238
 */


undefined * FUN_021e9238(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (((*PTR_DAT_047dd9f8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047dd9f8), puVar3 = PTR_DAT_047dda00,
     puVar2 = PTR_DAT_047d8a90, iVar4 != 0)) {
    if (((*PTR_DAT_047d8a88 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8a88), puVar1 = PTR_DAT_047d39c8, iVar4 != 0)) {
      if (((*PTR_DAT_047d39c0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar4 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(PTR_DAT_047d39c0);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_047d8a88);
    }
    *(undefined **)puVar3 = puVar2;
    __cxa_guard_release(PTR_DAT_047dd9f8);
  }
  return PTR_DAT_047dda00;
}


