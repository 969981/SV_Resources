/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001854a0; name: FUN_001854a0
 */


void FUN_001854a0(undefined8 *param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3,
                 undefined8 param_4,ulong param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long local_60 [4];
  long local_40 [4];
  
  if ((param_5 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00185510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_3);
    return;
  }
  if (param_6 == 0) {
    uVar5 = 0;
    uVar4 = 0;
    if (param_7 == 0) goto LAB_0018551c;
LAB_001854d0:
    iVar3 = uVar4 + 1;
    local_60[uVar4] = param_7;
    if (local_60[0] != 0) goto LAB_001854e4;
LAB_0018552c:
    uVar2 = 0;
  }
  else {
    uVar4 = 1;
    uVar5 = uVar4;
    local_60[0] = param_6;
    if (param_7 != 0) goto LAB_001854d0;
LAB_0018551c:
    if (uVar5 == 0) {
      uVar2 = 0;
      goto LAB_00185540;
    }
    iVar3 = 1;
    if (local_60[0] == 0) goto LAB_0018552c;
LAB_001854e4:
    uVar2 = 1;
    local_40[0] = local_60[0];
  }
  if ((iVar3 != 1) && (local_60[1] != 0)) {
    local_40[uVar2] = local_60[1];
    uVar2 = (ulong)((int)uVar2 + 1);
  }
LAB_00185540:
  uVar1 = (**(code **)PTR_PTR_047cb8a8)(UNRECOVERED_JUMPTABLE,param_3,local_40,uVar2,param_4);
  *param_1 = uVar1;
  return;
}


