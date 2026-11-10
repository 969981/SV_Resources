/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bfc8dc; name: FUN_01bfc8dc
 */


undefined * FUN_01bfc8dc(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if (((DAT_04810928 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04810928), iVar1 != 0)) {
      memset(&DAT_048108b0,0,0x78);
      __cxa_guard_release(&DAT_04810928);
      puVar2 = &DAT_048108b0;
    }
    else {
      puVar2 = &DAT_048108b0;
    }
  }
  return puVar2;
}


