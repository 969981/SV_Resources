/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a9c700; name: FUN_00a9c700
 */


void FUN_00a9c700(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_047d41a8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d41a8), puVar1 = PTR_DAT_047d41b0, iVar2 != 0)) {
    *(undefined8 *)(PTR_DAT_047d41b0 + 8) = 0x3400000034000000;
    *(undefined8 *)puVar1 = 0x3400000034000000;
    __cxa_guard_release(PTR_DAT_047d41a8);
    return;
  }
  return;
}


