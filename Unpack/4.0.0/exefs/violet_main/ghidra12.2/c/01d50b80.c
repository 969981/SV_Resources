/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d50b80; name: FUN_01d50b80
 */


undefined8 FUN_01d50b80(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_01d50a90(param_1,1);
  if ((DAT_0482fe10 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0482fe10);
    if (iVar2 != 0) {
      DAT_04830dd8 = '\x01';
      __cxa_guard_release(&DAT_0482fe10);
    }
  }
  puVar1 = &LAB_00a0c758;
  if (DAT_04830dd8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  iVar2 = FUN_01d50c28(uVar3,puVar1,0);
  FUN_00c5d960(param_1,(long)iVar2);
  return 1;
}


