/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d4c110; name: FUN_01d4c110
 */


undefined * FUN_01d4c110(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if (((DAT_0482fb40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0482fb40), iVar1 != 0)) {
      memset(&DAT_0482f330,0,0x810);
      FUN_011d2100(&DAT_0482f330);
      FUN_00100190(FUN_013e6dc0,&DAT_0482f330,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0482fb40);
      puVar2 = &DAT_0482f330;
    }
    else {
      puVar2 = &DAT_0482f330;
    }
  }
  return puVar2;
}


