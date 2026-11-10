/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019cbee0; name: FUN_019cbee0
 */


undefined8 FUN_019cbee0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_14;
  
  if (((DAT_04819038 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04819038), iVar2 != 0)) {
    DAT_0481aab8 = '\x01';
    __cxa_guard_release(&DAT_04819038);
  }
  uVar3 = FUN_019cbfe0(param_1,1);
  local_14 = FUN_00c92df0(param_1,2,0);
  uVar1 = 0x50;
  if (DAT_0481aab8 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  FUN_019cbf84(uVar3,uVar1,&local_14);
  return 0;
}


