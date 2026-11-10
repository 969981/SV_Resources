/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022c7fc0; name: FUN_022c7fc0
 */


undefined8 FUN_022c7fc0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  
  uVar3 = FUN_022c7d70(param_1,1);
  if ((DAT_04844330 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04844330);
    if (iVar2 != 0) {
      DAT_04845bc8 = '\x01';
      DAT_04845bd0 = 1;
      __cxa_guard_release(&DAT_04844330);
    }
  }
  uVar1 = 0x80;
  if (DAT_04845bc8 == '\0') {
    uVar1 = 0;
  }
  fVar4 = (float)FUN_022c8074(uVar3,uVar1,DAT_04845bd0);
  FUN_00c46da0((double)fVar4,param_1);
  return 1;
}


