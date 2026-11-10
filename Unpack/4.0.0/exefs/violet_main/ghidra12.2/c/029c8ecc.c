/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029c8ecc; name: FUN_029c8ecc
 */


undefined8 * FUN_029c8ecc(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_0486aef0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_0486aef0), puVar1 = PTR_DAT_047d9278, iVar2 != 0)) {
    if (((*PTR_DAT_047d9270 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9270), iVar2 != 0)) {
      uVar3 = FUN_01e19d1c();
      *(undefined8 *)puVar1 = uVar3;
      __cxa_guard_release(PTR_DAT_047d9270);
    }
    DAT_0486aee8 = puVar1;
    __cxa_guard_release(&DAT_0486aef0);
  }
  return &DAT_0486aee8;
}


