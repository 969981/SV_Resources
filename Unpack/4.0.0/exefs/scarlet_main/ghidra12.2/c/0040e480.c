/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040e480; name: FUN_0040e480
 */


ulong FUN_0040e480(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(code **)(*param_1 + 0x188) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040e4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x188))(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  if (param_1[0x12] == 0) {
LAB_0040e554:
    uVar2 = 0;
  }
  else {
    if (param_4 == 0) {
      param_4 = FUN_003ed220();
      lVar4 = param_4;
      if (param_4 == 0) goto LAB_0040e554;
    }
    else {
      lVar4 = 0;
    }
    FUN_003ed410(param_4);
    lVar3 = FUN_003ed5c0(param_4);
    if (((lVar3 == 0) || (iVar1 = FUN_003eb9f0(lVar3,2), iVar1 == 0)) ||
       (iVar1 = FUN_003f06e0(lVar3,param_1[2],lVar3), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_003fd860(param_2,param_3,lVar3,param_1[2],param_4,param_1[0x12]);
      uVar2 = (ulong)(iVar1 != 0);
    }
    FUN_003ed530(param_4);
    FUN_003ed280(lVar4);
  }
  return uVar2;
}


