/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0184ccb0; name: FUN_0184ccb0
 */


undefined * FUN_0184ccb0(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) ||
     (puVar2 = *(undefined **)(param_1 + 8), *(undefined **)(param_1 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d7bc0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d7bc0);
      puVar2 = PTR_DAT_047d7bc8;
      if (iVar1 != 0) {
        *(undefined8 *)(PTR_DAT_047d7bc8 + 0x10) = 0;
        *(undefined8 *)(puVar2 + 0x18) = 0;
        *(undefined8 *)puVar2 = 0;
        *(undefined8 *)(puVar2 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d7bc0);
      }
    }
    else {
      puVar2 = PTR_DAT_047d7bc8;
    }
  }
  return puVar2;
}


