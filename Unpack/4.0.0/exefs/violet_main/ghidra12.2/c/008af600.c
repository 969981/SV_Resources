/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008af600; name: FUN_008af600
 */


undefined * FUN_008af600(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((*PTR_DAT_047d2150 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d2150), puVar2 = PTR_DAT_047d2158,
     puVar1 = PTR_DAT_047d20a0, iVar3 != 0)) {
    if (((*PTR_DAT_047d2098 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar3 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_047d2098);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_047d2150);
  }
  return PTR_DAT_047d2158;
}


