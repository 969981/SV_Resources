/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b7d8e0; name: FUN_01b7d8e0
 */


undefined8 FUN_01b7d8e0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04809e00 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04809e00);
      puVar4 = &DAT_04809dd8;
      if (iVar1 != 0) {
        DAT_04809dd8 = 0;
        DAT_04809de0 = 0;
        FUN_00100190(&LAB_01b7e960,&DAT_04809dd8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04809e00);
      }
    }
    else {
      puVar4 = &DAT_04809dd8;
    }
  }
  uVar3 = FUN_00c646d0(param_1,2,0);
  if (((DAT_04809e08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04809e08), iVar1 != 0)) {
    DAT_0480a480 = 1;
    __cxa_guard_release(&DAT_04809e08);
  }
  FUN_01b7d9d4(puVar4,uVar3);
  return 0;
}


