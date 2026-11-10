/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022c9900; name: FUN_022c9900
 */


undefined8 FUN_022c9900(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0180c930(param_1,1);
  if ((DAT_04844368 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04844368);
    if (iVar2 != 0) {
      DAT_04845c18 = '\x01';
      DAT_04845c20 = 1;
      __cxa_guard_release(&DAT_04844368);
    }
  }
  uVar1 = 0x78;
  if (DAT_04845c18 == '\0') {
    uVar1 = 0;
  }
  iVar2 = FUN_022c99b4(uVar3,uVar1,DAT_04845c20);
  FUN_00c5d960(param_1,(long)iVar2);
  return 1;
}


