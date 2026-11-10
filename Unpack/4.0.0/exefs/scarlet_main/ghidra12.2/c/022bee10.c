/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022bee10; name: FUN_022bee10
 */


undefined8 FUN_022bee10(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  
  uVar3 = FUN_022bdf40(param_1,1);
  if ((DAT_04844168 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04844168);
    if (iVar2 != 0) {
      DAT_048459f8 = '\x01';
      DAT_04845a00 = 1;
      __cxa_guard_release(&DAT_04844168);
    }
  }
  uVar1 = 0xf0;
  if (DAT_048459f8 == '\0') {
    uVar1 = 0;
  }
  fVar4 = (float)FUN_022beec4(uVar3,uVar1,DAT_04845a00);
  FUN_00c46da0((double)fVar4,param_1);
  return 1;
}


