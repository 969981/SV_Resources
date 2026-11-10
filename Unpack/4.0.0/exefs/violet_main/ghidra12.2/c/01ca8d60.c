/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ca8d60; name: FUN_01ca8d60
 */


undefined8 FUN_01ca8d60(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_01ca8e10(param_1,1);
  if ((DAT_04817550 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04817550);
    if (iVar3 != 0) {
      DAT_0481b540 = '\x01';
      __cxa_guard_release(&DAT_04817550);
    }
  }
  puVar1 = &LAB_0097914c;
  if (DAT_0481b540 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  uVar2 = FUN_01ca8e9c(uVar4,puVar1,0);
  FUN_00c5d960(param_1,uVar2);
  return 1;
}


