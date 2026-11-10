/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014fced4; name: FUN_014fced4
 */


void FUN_014fced4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  (**(code **)(*plVar2 + 0x2e0))(plVar2,param_3);
  uVar3 = (**(code **)(*plVar2 + 0x200))(plVar2);
  if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x014fcf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x480))(plVar2,param_4,param_5);
    return;
  }
  iVar1 = (**(code **)(*plVar2 + 0x560))(plVar2,6);
  if ((((iVar1 == 0) ||
       (uVar3 = FUN_010a9b4c(*(undefined8 *)(param_1 + 8),0x1000), (uVar3 & 1) == 0)) ||
      (uVar3 = FUN_01242e68(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),plVar2),
      (uVar3 & 1) != 0)) || (uVar3 = (**(code **)(*plVar2 + 0x510))(plVar2,0x19), (uVar3 & 1) == 0))
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014fcfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x528))(plVar2,7);
  return;
}


