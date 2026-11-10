/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01789ec4; name: FUN_01789ec4
 */


undefined8 * FUN_01789ec4(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0480f108 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480f108);
      if (iVar1 != 0) {
        DAT_0480f0f8 = 0;
        DAT_0480f100 = 0;
        DAT_0480f0e8 = 0;
        DAT_0480f0f0 = 0;
        DAT_0480f0d8 = 0;
        DAT_0480f0e0 = 0;
        DAT_0480f0c8 = 0;
        DAT_0480f0d0 = 0;
        FUN_00100190(FUN_0188e0c0,&DAT_0480f0c8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480f108);
      }
      puVar2 = &DAT_0480f0c8;
    }
    else {
      puVar2 = &DAT_0480f0c8;
    }
  }
  return puVar2;
}


