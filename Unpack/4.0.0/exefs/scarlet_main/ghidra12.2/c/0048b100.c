/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048b100; name: FUN_0048b100
 */


void FUN_0048b100(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0xd0) + 0x18);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  uVar1 = FUN_00483b50(param_3);
  uVar2 = FUN_00483ac0(param_3);
                    /* WARNING: Could not recover jumptable at 0x0048b15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar1,uVar2);
  return;
}


