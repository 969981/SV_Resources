/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02358904; name: FUN_02358904
 */


undefined * FUN_02358904(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined **)(param_1 + 8), puVar2 == (undefined *)0x0)) {
    if (((DAT_04848478 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04848478), iVar1 != 0)) {
      FUN_02357374(&DAT_04848440);
      FUN_00100190(FUN_02b851f4,&DAT_04848440,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04848478);
      puVar2 = &DAT_04848440;
    }
    else {
      puVar2 = &DAT_04848440;
    }
  }
  return puVar2;
}


