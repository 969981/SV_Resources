/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bc9ef0; name: FUN_01bc9ef0
 */


undefined1  [16]
FUN_01bc9ef0(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4,
            undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long local_48;
  long local_38;
  
  if (3 < *param_1) {
LAB_01bc9f5c:
    return ZEXT816(0);
  }
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  default:
    if (*(long *)(param_1 + 8) == 0) goto LAB_01bc9f5c;
    plVar2 = (long *)(*(long *)(param_1 + 8) + lVar1);
    break;
  case 2:
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 == 0)) goto LAB_01bc9f5c;
    plVar2 = (long *)(lVar3 + lVar1 + -0x28);
    break;
  case 3:
    if (*(long *)(param_1 + 8) == 0) {
      local_48 = 0;
    }
    else {
      FUN_01bca00c(&local_38);
      local_48 = local_38;
      if (local_38 != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_38 + lVar1));
        }
        auVar5 = (*UNRECOVERED_JUMPTABLE)((long *)(local_38 + lVar1),param_4,param_5);
        uVar6 = auVar5._8_8_;
        uVar4 = auVar5._0_8_;
        FUN_01bca098(&local_48);
        goto LAB_01bc9ff4;
      }
    }
    FUN_01bca098(&local_48);
    uVar4 = 0;
    uVar6 = 0;
LAB_01bc9ff4:
    auVar5._8_8_ = uVar6;
    auVar5._0_8_ = uVar4;
    return auVar5;
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x01bc9f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar5 = (*UNRECOVERED_JUMPTABLE)(plVar2,param_4,param_5);
  return auVar5;
}


