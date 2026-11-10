/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c4c2b4; name: FUN_01c4c2b4
 */


undefined * FUN_01c4c2b4(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) ||
     (puVar2 = *(undefined **)(param_1 + 8), *(undefined **)(param_1 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d60c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d60c0);
      puVar2 = PTR_DAT_047d60c8;
      if (iVar1 != 0) {
        *(undefined8 *)PTR_DAT_047d60c8 = 0;
        *(undefined8 *)(puVar2 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d60c0);
      }
    }
    else {
      puVar2 = PTR_DAT_047d60c8;
    }
  }
  return puVar2;
}


