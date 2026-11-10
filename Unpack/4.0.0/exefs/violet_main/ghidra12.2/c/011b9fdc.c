/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b9fdc; name: FUN_011b9fdc
 */


undefined * FUN_011b9fdc(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if (((DAT_04832ef0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04832ef0), iVar1 != 0)) {
      FUN_011b9cec(&DAT_04832ec8,1);
      FUN_00100190(&LAB_01d93c68,&DAT_04832ec8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04832ef0);
      puVar2 = &DAT_04832ec8;
    }
    else {
      puVar2 = &DAT_04832ec8;
    }
  }
  return puVar2;
}


