/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022ef550; name: FUN_022ef550
 */


undefined8 FUN_022ef550(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_022ef610(param_1,1);
  if ((DAT_04844d40 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04844d40);
    if (iVar3 != 0) {
      DAT_04845f68 = '\x01';
      DAT_04845f70 = 1;
      __cxa_guard_release(&DAT_04844d40);
    }
  }
  uVar1 = 0x70;
  if (DAT_04845f68 == '\0') {
    uVar1 = 0;
  }
  uVar2 = FUN_022ef69c(uVar4,uVar1,DAT_04845f70);
  FUN_00c5d960(param_1,uVar2);
  return 1;
}


