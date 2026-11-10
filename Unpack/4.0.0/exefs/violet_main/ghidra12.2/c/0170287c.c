/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0170287c; name: FUN_0170287c
 */


undefined * FUN_0170287c(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047d6af0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6af0), puVar1 = PTR_DAT_047d6af8, iVar2 != 0)) {
    uVar3 = FUN_01ca0cfc();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047d6af0);
  }
  return PTR_DAT_047d6af8;
}


