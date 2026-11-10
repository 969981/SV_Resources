/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019b5280; name: FUN_019b5280
 */


undefined8 FUN_019b5280(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_0480fa68 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_0480fa68);
      if (iVar2 != 0) {
        DAT_0480fa58 = 0;
        DAT_0480fa60 = 0;
        FUN_00100190(&LAB_0095f894,&DAT_0480fa58,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480fa68);
      }
      puVar4 = &DAT_0480fa58;
    }
    else {
      puVar4 = &DAT_0480fa58;
    }
  }
  if ((DAT_048101d8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048101d8);
    if (iVar2 != 0) {
      DAT_04810460 = '\x01';
      __cxa_guard_release(&DAT_048101d8);
    }
  }
  puVar1 = PTR_LAB_047d5828;
  if (DAT_04810460 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_019b5380(puVar4,puVar1,0);
  return 0;
}


