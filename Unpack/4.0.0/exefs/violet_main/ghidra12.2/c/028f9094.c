/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028f9094; name: FUN_028f9094
 */


undefined8 * FUN_028f9094(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04866078 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_04866078), puVar1 = PTR_DAT_047dd5e0, iVar2 != 0)) {
    if (((*PTR_DAT_047dd5d8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd5d8), iVar2 != 0)) {
      uVar3 = FUN_0219eba8();
      *(undefined8 *)puVar1 = uVar3;
      __cxa_guard_release(PTR_DAT_047dd5d8);
    }
    DAT_04866070 = puVar1;
    __cxa_guard_release(&DAT_04866078);
  }
  return &DAT_04866070;
}


