/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025448e0; name: FUN_025448e0
 */


undefined8 FUN_025448e0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_0484f850 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0484f850), iVar2 != 0)) {
    DAT_04850540 = '\x01';
    __cxa_guard_release(&DAT_0484f850);
  }
  uVar3 = FUN_02544150(param_1,1);
  uVar1 = 0x74;
  if (DAT_04850540 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  iVar2 = FUN_02544798(uVar3,uVar1);
  FUN_00c5d960(param_1,(long)iVar2);
  return 1;
}


