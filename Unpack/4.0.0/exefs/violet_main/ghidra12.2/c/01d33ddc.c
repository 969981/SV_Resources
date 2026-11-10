/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d33ddc; name: FUN_01d33ddc
 */


undefined * FUN_01d33ddc(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if (((DAT_0482da68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0482da68), iVar1 != 0)) {
      FUN_01941afc(&DAT_0482d9e0);
      __cxa_guard_release(&DAT_0482da68);
      puVar2 = &DAT_0482d9e0;
    }
    else {
      puVar2 = &DAT_0482d9e0;
    }
  }
  return puVar2;
}


