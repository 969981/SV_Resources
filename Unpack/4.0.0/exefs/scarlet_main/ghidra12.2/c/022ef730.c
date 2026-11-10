/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022ef730; name: FUN_022ef730
 */


undefined8 FUN_022ef730(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_022ef610(param_1,1);
  if ((DAT_04844d68 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04844d68);
    if (iVar3 != 0) {
      DAT_04845f78 = '\x01';
      DAT_04845f80 = 1;
      __cxa_guard_release(&DAT_04844d68);
    }
  }
  uVar1 = 0x98;
  if (DAT_04845f78 == '\0') {
    uVar1 = 0;
  }
  uVar2 = FUN_022ef69c(uVar4,uVar1,DAT_04845f80);
  FUN_00c5d960(param_1,uVar2);
  return 1;
}


