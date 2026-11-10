/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d88d88; name: FUN_01d88d88
 */


void FUN_01d88d88(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((DAT_048371d8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_048371d8);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00a8a92c,&DAT_048371c8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048371d8);
    }
  }
  DAT_048371e0 = DAT_048371c8;
  FUN_01df5a80(DAT_048371c8,param_1,param_2);
  return;
}


