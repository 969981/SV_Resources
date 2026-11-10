/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b6fb4c; name: FUN_01b6fb4c
 */


undefined * FUN_01b6fb4c(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) ||
     (puVar2 = *(undefined **)(param_1 + 8), *(undefined **)(param_1 + 8) == (undefined *)0x0)) {
    if (((*PTR_DAT_047d4c28 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c28), puVar2 = PTR_DAT_047d4c30, iVar1 != 0)) {
      memset(PTR_DAT_047d4c30,0,0x84e);
      __cxa_guard_release(PTR_DAT_047d4c28);
    }
    else {
      puVar2 = PTR_DAT_047d4c30;
    }
  }
  return puVar2;
}


