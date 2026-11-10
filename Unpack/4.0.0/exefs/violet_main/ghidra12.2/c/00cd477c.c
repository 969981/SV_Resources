/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cd477c; name: FUN_00cd477c
 */


undefined8 * FUN_00cd477c(void)

{
  int iVar1;
  
  if (((DAT_0485c9c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0485c9c0), iVar1 != 0)) {
    DAT_0485c9a8 = 0;
    DAT_0485c9bc = 1;
    nn::os::InitializeLightEvent(&DAT_0485c9b0,0,1);
    FUN_00100190(PTR_LAB_047ddce0,&DAT_0485c9a8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0485c9c0);
  }
  return &DAT_0485c9a8;
}


