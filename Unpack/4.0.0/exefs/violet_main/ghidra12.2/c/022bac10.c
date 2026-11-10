/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022bac10; name: FUN_022bac10
 */


undefined8 FUN_022bac10(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  
  uVar3 = FUN_0196e0e0(param_1,1);
  if ((DAT_04844098 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04844098);
    if (iVar2 != 0) {
      DAT_04845900 = '\x01';
      DAT_04845908 = 1;
      __cxa_guard_release(&DAT_04844098);
    }
  }
  uVar1 = 0x108;
  if (DAT_04845900 == '\0') {
    uVar1 = 0;
  }
  fVar4 = (float)FUN_022ba1d4(uVar3,uVar1,DAT_04845908);
  FUN_00c46da0((double)fVar4,param_1);
  return 1;
}


