/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089e0dc; name: FUN_0089e0dc
 */


undefined * FUN_0089e0dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (((*PTR_DAT_047d2318 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047d2318), puVar3 = PTR_DAT_047d2320,
     puVar1 = PTR_DAT_047d20b0, iVar4 != 0)) {
    if (((*PTR_DAT_047d20a8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d20a8), puVar2 = PTR_DAT_047d20c0, iVar4 != 0)) {
      if (((*PTR_DAT_047d20b8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d20b8), iVar4 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_047d20b8);
      }
      *(undefined **)puVar1 = puVar2;
      __cxa_guard_release(PTR_DAT_047d20a8);
    }
    *(undefined **)puVar3 = puVar1;
    __cxa_guard_release(PTR_DAT_047d2318);
  }
  return PTR_DAT_047d2320;
}


