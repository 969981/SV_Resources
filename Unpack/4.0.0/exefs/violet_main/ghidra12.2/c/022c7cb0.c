/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022c7cb0; name: FUN_022c7cb0
 */


undefined8 FUN_022c7cb0(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_022c7d70(param_1,1);
  if ((DAT_04844300 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04844300);
    if (iVar3 != 0) {
      DAT_04845ba8 = '\x01';
      DAT_04845bb0 = 1;
      __cxa_guard_release(&DAT_04844300);
    }
  }
  uVar1 = 0x70;
  if (DAT_04845ba8 == '\0') {
    uVar1 = 0;
  }
  uVar2 = FUN_022c7dfc(uVar4,uVar1,DAT_04845bb0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


