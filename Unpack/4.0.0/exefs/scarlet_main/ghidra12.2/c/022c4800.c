/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022c4800; name: FUN_022c4800
 */


undefined8 FUN_022c4800(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  
  uVar3 = FUN_022c45b0(param_1,1);
  if ((DAT_04844290 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04844290);
    if (iVar2 != 0) {
      DAT_04845ae8 = '\x01';
      DAT_04845af0 = 1;
      __cxa_guard_release(&DAT_04844290);
    }
  }
  uVar1 = 0x80;
  if (DAT_04845ae8 == '\0') {
    uVar1 = 0;
  }
  fVar4 = (float)FUN_022c48b4(uVar3,uVar1,DAT_04845af0);
  FUN_00c46da0((double)fVar4,param_1);
  return 1;
}


