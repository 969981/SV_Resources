/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d926c; name: FUN_021d926c
 */


undefined * FUN_021d926c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_047dd958 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047dd958), puVar2 = PTR_DAT_047dd960,
     puVar1 = PTR_DAT_047dd940, iVar3 != 0)) {
    if (((*PTR_DAT_047dd938 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047dd938), iVar3 != 0)) {
      uVar4 = FUN_012e29ac();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_047dd938);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_047dd958);
  }
  return PTR_DAT_047dd960;
}


