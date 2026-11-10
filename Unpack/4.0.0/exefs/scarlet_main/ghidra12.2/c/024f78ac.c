/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024f78ac; name: FUN_024f78ac
 */


void FUN_024f78ac(undefined1 *param_1,double param_2,double param_3,double param_4,
                 undefined8 param_5)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  fVar1 = (float)param_3;
  uVar2 = 0;
  uVar3 = 0;
  fVar4 = (float)param_4;
  uVar5 = 0;
  uVar6 = 0;
  FUN_02500e4c((float)param_2);
  *param_1 = 1;
  local_60 = CONCAT44(extraout_var,extraout_s0);
  uStack_50 = CONCAT44(uVar2,fVar1);
  local_40 = CONCAT44(uVar5,fVar4);
  uStack_58 = extraout_var_00;
  uStack_48 = uVar3;
  uStack_38 = uVar6;
  uStack_30 = param_5;
  FUN_00d319d0(param_1 + 8,&local_60);
  return;
}


