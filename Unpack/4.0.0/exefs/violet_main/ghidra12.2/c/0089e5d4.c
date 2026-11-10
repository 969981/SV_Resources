/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089e5d4; name: FUN_0089e5d4
 */


undefined * FUN_0089e5d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((*PTR_DAT_047d21e8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d21e8), puVar2 = PTR_DAT_047d2208,
     puVar1 = PTR_DAT_047d21f0, iVar3 != 0)) {
    if (((*PTR_DAT_047d2200 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d2200), iVar3 != 0)) {
      *(undefined8 *)puVar2 = 0;
      __cxa_guard_release(PTR_DAT_047d2200);
    }
    *(undefined **)puVar1 = puVar2;
    __cxa_guard_release(PTR_DAT_047d21e8);
  }
  return PTR_DAT_047d21f0;
}


