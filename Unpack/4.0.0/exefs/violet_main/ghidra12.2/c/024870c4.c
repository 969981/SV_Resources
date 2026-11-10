/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024870c4; name: FUN_024870c4
 */


undefined8 * FUN_024870c4(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0484aa00 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0484aa00);
      if (iVar1 != 0) {
        DAT_0484a9c0 = 0;
        DAT_0484a9c8 = 0;
        DAT_0484a9b0 = &DAT_cbf29ce484222645;
        DAT_0484a9b8 = &DAT_03c886bc;
        DAT_0484a9d0 = &DAT_cbf29ce484222645;
        DAT_0484a9d8 = &DAT_03c886bc;
        DAT_0484a9e0 = 0;
        DAT_0484a9e8 = 0;
        FUN_00100190(&LAB_02b97364,&DAT_0484a9b0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0484aa00);
      }
      puVar2 = &DAT_0484a9b0;
    }
    else {
      puVar2 = &DAT_0484a9b0;
    }
  }
  return puVar2;
}


