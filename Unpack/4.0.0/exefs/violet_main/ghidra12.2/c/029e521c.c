/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e521c; name: FUN_029e521c
 */


undefined * FUN_029e521c(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047e3020 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047e3020), puVar1 = PTR_DAT_047e3028, iVar2 != 0)) {
    uVar3 = FUN_00cf27f8();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047e3020);
  }
  return PTR_DAT_047e3028;
}


