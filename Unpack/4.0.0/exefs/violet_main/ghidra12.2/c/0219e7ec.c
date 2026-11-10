/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219e7ec; name: FUN_0219e7ec
 */


undefined * FUN_0219e7ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_047da9f8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047da9f8), puVar2 = PTR_DAT_047daa10,
     puVar1 = PTR_DAT_047daa00, iVar3 != 0)) {
    if (((*PTR_DAT_047daa08 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047daa08), iVar3 != 0)) {
      uVar4 = FUN_01ea9d54();
      *(undefined8 *)puVar2 = uVar4;
      __cxa_guard_release(PTR_DAT_047daa08);
    }
    *(undefined **)puVar1 = puVar2;
    __cxa_guard_release(PTR_DAT_047da9f8);
  }
  return PTR_DAT_047daa00;
}


