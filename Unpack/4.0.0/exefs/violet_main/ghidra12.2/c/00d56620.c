/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d56620; name: FUN_00d56620
 */


void FUN_00d56620(undefined8 param_1,undefined4 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  switch(param_2) {
  case 0:
    goto switchD_00d56650_caseD_0;
  case 1:
    lVar5 = *param_4;
    if (lVar5 != 0) {
      lVar1 = param_4[2];
      plVar2 = (long *)param_4[3];
      param_4[1] = lVar5;
      uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00d566b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,8);
        return;
      }
      FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,8);
      return;
    }
switchD_00d56650_caseD_0:
    return;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_024a7530();
  }
}


