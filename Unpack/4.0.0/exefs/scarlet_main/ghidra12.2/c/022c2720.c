/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022c2720; name: FUN_022c2720
 */


undefined8 FUN_022c2720(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  
  uVar3 = FUN_022c24d0(param_1,1);
  if ((DAT_048441f8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048441f8);
    if (iVar2 != 0) {
      DAT_04845a78 = '\x01';
      DAT_04845a80 = 1;
      __cxa_guard_release(&DAT_048441f8);
    }
  }
  uVar1 = 0x80;
  if (DAT_04845a78 == '\0') {
    uVar1 = 0;
  }
  fVar4 = (float)FUN_022c27d4(uVar3,uVar1,DAT_04845a80);
  FUN_00c46da0((double)fVar4,param_1);
  return 1;
}


