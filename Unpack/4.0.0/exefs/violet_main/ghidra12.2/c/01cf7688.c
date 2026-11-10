/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cf7688; name: FUN_01cf7688
 */


undefined8 * FUN_01cf7688(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0481c1c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0481c1c0);
      if (iVar1 != 0) {
        DAT_0481c1b8 = FUN_01cf7e20();
        DAT_0481c1b0 = 0;
        DAT_0481c1a0 = 0;
        DAT_0481c1a8 = 0;
        FUN_00100190(&LAB_009fa0f8,&DAT_0481c1a0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0481c1c0);
      }
      puVar2 = &DAT_0481c1a0;
    }
    else {
      puVar2 = &DAT_0481c1a0;
    }
  }
  return puVar2;
}


