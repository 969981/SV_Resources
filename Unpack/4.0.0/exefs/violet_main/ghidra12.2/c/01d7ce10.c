/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d7ce10; name: FUN_01d7ce10
 */


undefined8 FUN_01d7ce10(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_01d7cec0(param_1,1);
  if ((DAT_04831b00 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04831b00);
    if (iVar2 != 0) {
      DAT_048320c0 = '\x01';
      __cxa_guard_release(&DAT_04831b00);
    }
  }
  puVar1 = PTR_FUN_047d7fe0;
  if (DAT_048320c0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  iVar2 = FUN_01d7cf4c(uVar3,puVar1,0);
  FUN_00c5d960(param_1,(long)iVar2);
  return 1;
}


