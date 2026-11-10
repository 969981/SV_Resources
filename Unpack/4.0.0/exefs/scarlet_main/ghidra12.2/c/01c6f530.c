/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c6f530; name: FUN_01c6f530
 */


undefined8 FUN_01c6f530(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_00c92df0(param_1,1,0);
  uVar2 = FUN_00c92df0(param_1,2,0);
  uVar3 = FUN_00c92df0(param_1,3,0);
  uVar5 = FUN_00c92df0(param_1,4,0);
  if (((DAT_04814c80 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04814c80), iVar4 != 0)) {
    __cxa_guard_release(&DAT_04814c80);
  }
  FUN_01c6f5f0(uVar1,uVar2,uVar3,uVar5);
  return 0;
}


