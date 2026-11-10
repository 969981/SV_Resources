/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024f8c98; name: FUN_024f8c98
 */


void FUN_024f8c98(undefined1 *param_1,double param_2,double param_3,double param_4,double param_5,
                 undefined8 *param_6)

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
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  fVar1 = (float)param_3;
  uVar2 = 0;
  uVar3 = 0;
  fVar4 = (float)param_4;
  uVar5 = 0;
  uVar6 = 0;
  fVar7 = (float)param_5;
  uVar8 = 0;
  uVar9 = 0;
  (*(code *)*param_6)((float)param_2);
  *param_1 = 1;
  local_60 = CONCAT44(extraout_var,extraout_s0);
  uStack_50 = CONCAT44(uVar2,fVar1);
  local_40 = CONCAT44(uVar5,fVar4);
  uStack_30 = CONCAT44(uVar8,fVar7);
  uStack_58 = extraout_var_00;
  uStack_48 = uVar3;
  uStack_38 = uVar6;
  uStack_28 = uVar9;
  FUN_00d319d0(param_1 + 8,&local_60);
  return;
}


