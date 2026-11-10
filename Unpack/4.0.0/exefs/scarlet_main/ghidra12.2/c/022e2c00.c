/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022e2c00; name: FUN_022e2c00
 */


undefined8 FUN_022e2c00(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_022e2520(param_1,1);
  if ((DAT_04844918 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04844918);
    if (iVar3 != 0) {
      DAT_04845df8 = '\x01';
      __cxa_guard_release(&DAT_04844918);
    }
  }
  pcVar1 = FUN_022e4adc;
  if (DAT_04845df8 == '\0') {
    pcVar1 = (code *)0x0;
  }
  uVar2 = FUN_022e2878(uVar4,pcVar1,0);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


