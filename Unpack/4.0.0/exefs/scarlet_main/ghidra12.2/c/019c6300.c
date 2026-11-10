/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019c6300; name: FUN_019c6300
 */


undefined8 FUN_019c6300(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04833ba0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04833ba0), iVar2 != 0)) {
    DAT_0453ee88 = 0x48;
    __cxa_guard_release(&DAT_04833ba0);
  }
  uVar3 = FUN_018e2090(param_1,1);
  uVar1 = FUN_019c6384(&DAT_0453ee88,uVar3);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


