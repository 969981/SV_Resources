/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d0a5f0; name: FUN_01d0a5f0
 */


undefined1 * FUN_01d0a5f0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_0481d080 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0481d080);
      if (iVar1 != 0) {
        DAT_0481d068 = 0;
        DAT_0481d070 = 0;
        FUN_00100190(FUN_01d0ad28,&DAT_0481d068,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0481d080);
      }
      puVar3 = &DAT_0481d068;
    }
    else {
      puVar3 = &DAT_0481d068;
    }
  }
  return puVar3;
}


