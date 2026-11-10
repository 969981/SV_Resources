/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e438b4; name: FUN_01e438b4
 */


undefined * FUN_01e438b4(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047da008 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047da008), puVar1 = PTR_DAT_047da010, iVar2 != 0)) {
    uVar3 = FUN_01e43674();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047da008);
  }
  return PTR_DAT_047da010;
}


