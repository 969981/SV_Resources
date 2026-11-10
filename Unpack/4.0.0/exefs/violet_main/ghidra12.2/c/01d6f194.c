/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d6f194; name: FUN_01d6f194
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01d6f194(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04831460 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04831460);
      if (iVar1 != 0) {
        DAT_04831430 = 0;
        DAT_04831438 = 0xffffffffffffffff;
        DAT_04831450 = 0;
        DAT_04831458 = 0;
        DAT_04831448 = 0;
        _DAT_04831440 = 0x7f7fffff;
        DAT_04831420 = 0;
        DAT_04831428 = 0;
        FUN_00100190(&LAB_00a0f004,&DAT_04831420,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04831460);
      }
      puVar2 = &DAT_04831420;
    }
    else {
      puVar2 = &DAT_04831420;
    }
  }
  return puVar2;
}


