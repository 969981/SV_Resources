/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cfe240; name: FUN_01cfe240
 */


undefined8 * FUN_01cfe240(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0481c4e0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0481c4e0);
      if (iVar1 != 0) {
        DAT_0481c458 = FUN_01cf7e20();
        DAT_0481c440 = 0;
        DAT_0481c448 = 0;
        DAT_0481c450 = 0;
        DAT_0481c480 = FUN_01cf7e20();
        DAT_0481c468 = 0;
        DAT_0481c470 = 0;
        DAT_0481c478 = 0;
        DAT_0481c4a0 = FUN_01cf7e20();
        DAT_0481c498 = 0;
        DAT_0481c488 = 0;
        DAT_0481c490 = 0;
        DAT_0481c4ac = 0;
        DAT_0481c4b4 = 0;
        DAT_0481c4bc = 0;
        DAT_0481c4c4 = 0;
        DAT_0481c4cc = 0;
        DAT_0481c4d4 = 0;
        FUN_00100190(&LAB_009fb18c,&DAT_0481c440,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0481c4e0);
      }
      puVar2 = &DAT_0481c440;
    }
    else {
      puVar2 = &DAT_0481c440;
    }
  }
  return puVar2;
}


