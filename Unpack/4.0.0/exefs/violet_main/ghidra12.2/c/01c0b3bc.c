/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c0b3bc; name: FUN_01c0b3bc
 */


undefined * FUN_01c0b3bc(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) ||
     (puVar2 = *(undefined **)(param_1 + 8), *(undefined **)(param_1 + 8) == (undefined *)0x0)) {
    if (((*PTR_DAT_047d5b30 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d5b30), puVar2 = PTR_DAT_047d5b38, iVar1 != 0)) {
      memset(PTR_DAT_047d5b38,0,0x100);
      __cxa_guard_release(PTR_DAT_047d5b30);
    }
    else {
      puVar2 = PTR_DAT_047d5b38;
    }
  }
  return puVar2;
}


