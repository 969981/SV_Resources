/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bc8c9c; name: FUN_01bc8c9c
 */


undefined8 * FUN_01bc8c9c(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0480d9b0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480d9b0);
      if (iVar1 != 0) {
        DAT_0480d9a0 = 0;
        DAT_0480d9a8 = 0;
        FUN_00100190(&LAB_00957a10,&DAT_0480d9a0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480d9b0);
      }
      puVar2 = &DAT_0480d9a0;
    }
    else {
      puVar2 = &DAT_0480d9a0;
    }
  }
  return puVar2;
}


