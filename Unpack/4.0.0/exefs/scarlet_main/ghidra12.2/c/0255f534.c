/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0255f534; name: FUN_0255f534
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0255f534(undefined8 *param_1,long param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _UNK_03cabe68;
  uVar2 = _DAT_03cabe60;
  uVar1 = _DAT_03caa5b0;
  if (param_2 == 0) {
    param_1[3] = _UNK_03caa5b8;
    param_1[2] = uVar1;
    param_1[5] = uVar3;
    param_1[4] = uVar2;
    *param_1 = 0x42c800003f800000;
    param_1[1] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_2 + ((long)param_4 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x0255f548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


