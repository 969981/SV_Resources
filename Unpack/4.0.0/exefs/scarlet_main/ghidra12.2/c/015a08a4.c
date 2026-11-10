/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a08a4; name: FUN_015a08a4
 */


void FUN_015a08a4(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  uVar1 = (**(code **)(*plVar2 + 0x778))(plVar2,param_3);
  iVar3 = -1;
  if (((uVar1 & 0xff) + 1 & 0x100) == 0) {
    iVar3 = (uVar1 & 0xff) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x015a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x780))(plVar2,param_3,iVar3);
  return;
}


