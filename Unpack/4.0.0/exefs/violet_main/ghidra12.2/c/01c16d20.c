/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c16d20; name: FUN_01c16d20
 */


undefined8 FUN_01c16d20(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_01c16de0(param_1,1);
  if ((DAT_04811530 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04811530);
    if (iVar3 != 0) {
      DAT_04812138 = '\x01';
      DAT_04812140 = 1;
      __cxa_guard_release(&DAT_04811530);
    }
  }
  uVar1 = 0x68;
  if (DAT_04812138 == '\0') {
    uVar1 = 0;
  }
  uVar2 = FUN_01c16e6c(uVar4,uVar1,DAT_04812140);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


