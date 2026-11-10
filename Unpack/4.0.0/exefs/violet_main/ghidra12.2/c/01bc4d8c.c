/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bc4d8c; name: FUN_01bc4d8c
 */


undefined * FUN_01bc4d8c(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if (((DAT_0480d850 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0480d850), iVar1 != 0)) {
      FUN_01bc5388(&DAT_0480d250);
      FUN_00100190(&LAB_00957900,&DAT_0480d250,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0480d850);
      puVar2 = &DAT_0480d250;
    }
    else {
      puVar2 = &DAT_0480d250;
    }
  }
  return puVar2;
}


