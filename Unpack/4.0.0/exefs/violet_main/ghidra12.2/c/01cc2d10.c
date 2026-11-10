/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cc2d10; name: FUN_01cc2d10
 */


undefined8 FUN_01cc2d10(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_01cc2dc0(param_1,1);
  if ((DAT_04818ca0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04818ca0);
    if (iVar3 != 0) {
      DAT_0481b698 = '\x01';
      __cxa_guard_release(&DAT_04818ca0);
    }
  }
  puVar1 = &LAB_0097914c;
  if (DAT_0481b698 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  uVar2 = FUN_01cc2e4c(uVar4,puVar1,0);
  FUN_00c5d960(param_1,uVar2);
  return 1;
}


