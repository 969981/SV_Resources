/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02535628; name: FUN_02535628
 */


undefined8 * FUN_02535628(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0484f700 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484f700);
      if (iVar1 != 0) {
        DAT_0484f6f8 = 0;
        FUN_00100190(&LAB_02b9f6d8,&DAT_0484f6f8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484f700);
      }
      puVar2 = &DAT_0484f6f8;
    }
    else {
      puVar2 = &DAT_0484f6f8;
    }
  }
  return puVar2;
}


