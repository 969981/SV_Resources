/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02626900; name: FUN_02626900
 */


undefined8
FUN_02626900(byte *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined8 param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long local_28;
  
  if (*param_1 < 4) {
    lVar1 = (long)param_3 >> 1;
    switch(*param_1) {
    default:
      if (*(long *)(param_1 + 8) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 8) + lVar1);
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x0262694c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE_00)(*param_5,plVar2,param_4,*param_6);
        return uVar3;
      }
      break;
    case 2:
      if ((*(long *)(param_1 + 8) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar4 == 0)) {
        return 0;
      }
      plVar2 = (long *)(lVar4 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x026269a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(*param_5,plVar2,param_4,*param_6);
      return uVar3;
    case 3:
      FUN_02626a34(&local_28,param_1 + 8);
      if (local_28 == 0) {
        uVar3 = 0;
      }
      else {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 =
               *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_28 + lVar1));
        }
        uVar3 = (*UNRECOVERED_JUMPTABLE_00)(*param_5,(long *)(local_28 + lVar1),param_4,*param_6);
      }
      FUN_02626778(&local_28);
      return uVar3;
    }
  }
  return 0;
}


