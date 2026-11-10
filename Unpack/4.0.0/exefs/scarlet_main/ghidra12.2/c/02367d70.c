/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02367d70; name: FUN_02367d70
 */


undefined8 FUN_02367d70(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((DAT_048487d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048487d8), iVar1 != 0)) {
    DAT_048490a8 = 1;
    __cxa_guard_release(&DAT_048487d8);
  }
  uVar2 = FUN_023527f0(param_1,1);
  uVar3 = FUN_00c646d0(param_1,2,0);
  FUN_02367df8(uVar2,uVar3);
  return 0;
}


