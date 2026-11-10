/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02294d00; name: FUN_02294d00
 */


undefined8 * FUN_02294d00(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_04842d60 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04842d60);
      if (iVar1 != 0) {
        DAT_04842cd8 = 1;
        DAT_04842cc8 = PTR_DAT_047dde08 + 0x10;
        DAT_04842cd0 = 0xffffffff;
        memset(&DAT_04842ce0,0,0x80);
        FUN_00100190(&LAB_02b8067c,&DAT_04842cc8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04842d60);
      }
      puVar2 = &DAT_04842cc8;
    }
    else {
      puVar2 = &DAT_04842cc8;
    }
  }
  return puVar2;
}


