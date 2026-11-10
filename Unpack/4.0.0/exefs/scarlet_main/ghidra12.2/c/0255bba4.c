/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0255bba4; name: FUN_0255bba4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0255bba4(undefined8 *param_1,long *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = _UNK_03cabe58;
  uVar3 = _DAT_03cabe50;
  if ((*param_2 == 0) || (lVar5 = *(long *)(*param_2 + 0x10), lVar5 == 0)) {
    param_1[2] = 0;
    param_1[3] = 0;
    uVar2 = _UNK_03caa988;
    uVar1 = _DAT_03caa980;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar5 + ((long)param_4 >> 1) + -0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x0255bbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


