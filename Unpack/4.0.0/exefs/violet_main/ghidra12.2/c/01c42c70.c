/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c42c70; name: FUN_01c42c70
 */


undefined8 FUN_01c42c70(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_01c42ae0(param_1,1);
  if ((DAT_048129c8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_048129c8);
    if (iVar3 != 0) {
      DAT_04812a08 = '\x01';
      __cxa_guard_release(&DAT_048129c8);
    }
  }
  puVar1 = &LAB_00965c04;
  if (DAT_04812a08 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  uVar2 = FUN_01c42d18(uVar4,puVar1,0);
  FUN_00c5d960(param_1,uVar2);
  return 1;
}


