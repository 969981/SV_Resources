/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043cd00; name: FUN_0043cd00
 */


undefined8
FUN_0043cd00(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[4];
  lVar3 = *plVar4;
  if (*(code **)(lVar3 + 0xd0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043cd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar3 + 0xd0))(param_1,param_2,param_3);
    return uVar2;
  }
  if (param_2 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x78);
    if ((*(byte *)(lVar3 + 4) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0043cdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(plVar4,0,param_3,param_1);
      return uVar2;
    }
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      iVar1 = FUN_0043b720(*param_1);
      if (iVar1 < 0) {
        return 0;
      }
      iVar1 = FUN_0043f250(plVar4,0,param_3,0,iVar1);
    }
    else {
      iVar1 = (*UNRECOVERED_JUMPTABLE)(plVar4,0,param_3,param_1);
    }
    if (0 < iVar1) {
      return 1;
    }
  }
  else {
    iVar1 = FUN_0042bd60(param_1,param_4,param_5);
    if (0 < iVar1) {
      uVar2 = FUN_0043caf0(param_1,param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}


