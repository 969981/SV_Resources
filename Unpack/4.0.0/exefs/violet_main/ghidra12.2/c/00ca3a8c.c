/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ca3a8c; name: FUN_00ca3a8c
 */


undefined * FUN_00ca3a8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (((*PTR_DAT_047ddf78 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047ddf78), puVar3 = PTR_DAT_047ddf80,
     puVar2 = PTR_DAT_047d9258, iVar4 != 0)) {
    if (((*PTR_DAT_047d9250 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d9250), puVar1 = PTR_DAT_047d8b80, iVar4 != 0)) {
      if (((*PTR_DAT_047d8b78 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8b78), iVar4 != 0)) {
        uVar5 = FUN_01df5d9c();
        *(undefined8 *)puVar1 = uVar5;
        __cxa_guard_release(PTR_DAT_047d8b78);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_047d9250);
    }
    *(undefined **)puVar3 = puVar2;
    __cxa_guard_release(PTR_DAT_047ddf78);
  }
  return PTR_DAT_047ddf80;
}


