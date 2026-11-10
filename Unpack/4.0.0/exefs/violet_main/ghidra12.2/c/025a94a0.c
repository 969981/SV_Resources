/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025a94a0; name: FUN_025a94a0
 */


undefined1 * FUN_025a94a0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04851868 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04851868);
      if (iVar1 != 0) {
        DAT_04851850 = 0;
        DAT_04851858 = 0;
        FUN_00100190(FUN_025a9654,&DAT_04851850,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04851868);
      }
      puVar3 = &DAT_04851850;
    }
    else {
      puVar3 = &DAT_04851850;
    }
  }
  return puVar3;
}


