/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e76aec; name: FUN_01e76aec
 */


undefined * FUN_01e76aec(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047da858 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047da858), puVar1 = PTR_DAT_047da860, iVar2 != 0)) {
    uVar3 = FUN_01d100e0();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047da858);
  }
  return PTR_DAT_047da860;
}


