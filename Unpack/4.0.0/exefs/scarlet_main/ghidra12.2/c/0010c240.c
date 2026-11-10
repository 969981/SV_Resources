/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0010c240; name: FUN_0010c240
 */


void FUN_0010c240(char *param_1,uint param_2,undefined8 param_3,undefined4 param_4,char *param_5,
                 uint param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_0010be60(&local_70,param_3,param_4);
  *param_1 = *param_5 + (char)local_70;
  param_1[1] = param_5[1] + local_70._1_1_;
  param_1[2] = param_5[2] + local_70._4_1_;
  param_1[3] = param_5[3] + local_70._5_1_;
  param_1[4] = param_5[4] + (char)local_68;
  param_1[5] = param_5[5] + local_68._1_1_;
  param_1[6] = param_5[6] + local_68._4_1_;
  param_1[7] = param_5[7] + local_68._5_1_;
  param_5 = param_5 + param_6;
  param_1 = param_1 + param_2;
  *param_1 = *param_5 + local_70._2_1_;
  param_1[1] = param_5[1] + local_70._3_1_;
  param_1[2] = param_5[2] + local_70._6_1_;
  param_1[3] = param_5[3] + local_70._7_1_;
  param_1[4] = param_5[4] + local_68._2_1_;
  param_1[5] = param_5[5] + local_68._3_1_;
  param_1[6] = param_5[6] + local_68._6_1_;
  pcVar1 = param_5 + param_6;
  param_1[7] = param_5[7] + local_68._7_1_;
  param_1 = param_1 + param_2;
  *param_1 = *pcVar1 + (char)local_58;
  param_1[1] = pcVar1[1] + local_58._1_1_;
  param_1[2] = pcVar1[2] + local_48._4_1_;
  param_1[3] = pcVar1[3] + local_48._5_1_;
  param_1[4] = pcVar1[4] + (char)local_60;
  param_1[5] = pcVar1[5] + local_60._1_1_;
  param_1[6] = pcVar1[6] + local_60._4_1_;
  pcVar2 = pcVar1 + param_6;
  param_1[7] = pcVar1[7] + local_60._5_1_;
  param_1 = param_1 + param_2;
  *param_1 = *pcVar2 + local_58._2_1_;
  param_1[1] = pcVar2[1] + local_58._3_1_;
  param_1[2] = pcVar2[2] + local_48._6_1_;
  param_1[3] = pcVar2[3] + local_48._7_1_;
  param_1[4] = pcVar2[4] + local_60._2_1_;
  param_1[5] = pcVar2[5] + local_60._3_1_;
  param_1[6] = pcVar2[6] + local_60._6_1_;
  pcVar1 = pcVar2 + param_6;
  param_1[7] = pcVar2[7] + local_60._7_1_;
  param_1 = param_1 + param_2;
  *param_1 = *pcVar1 + local_58._4_1_;
  param_1[1] = pcVar1[1] + local_58._5_1_;
  param_1[2] = pcVar1[2] + (char)local_50;
  param_1[3] = pcVar1[3] + local_50._1_1_;
  param_1[4] = pcVar1[4] + (char)local_40;
  param_1[5] = pcVar1[5] + local_40._1_1_;
  param_1[6] = pcVar1[6] + local_40._4_1_;
  pcVar2 = pcVar1 + param_6;
  param_1[7] = pcVar1[7] + local_40._5_1_;
  param_1 = param_1 + param_2;
  *param_1 = *pcVar2 + local_58._6_1_;
  param_1[1] = pcVar2[1] + local_58._7_1_;
  param_1[2] = pcVar2[2] + local_50._2_1_;
  param_1[3] = pcVar2[3] + local_50._3_1_;
  param_1[4] = pcVar2[4] + local_40._2_1_;
  param_1[5] = pcVar2[5] + local_40._3_1_;
  param_1[6] = pcVar2[6] + local_40._6_1_;
  pcVar1 = pcVar2 + param_6;
  pcVar3 = pcVar1 + param_6;
  param_1[7] = pcVar2[7] + local_40._7_1_;
  param_1 = param_1 + param_2;
  pcVar2 = param_1 + param_2;
  *param_1 = *pcVar1 + local_50._4_1_;
  param_1[1] = pcVar1[1] + local_50._5_1_;
  param_1[2] = pcVar1[2] + (char)local_48;
  param_1[3] = pcVar1[3] + local_48._1_1_;
  param_1[4] = pcVar1[4] + (char)local_38;
  param_1[5] = pcVar1[5] + local_38._1_1_;
  param_1[6] = pcVar1[6] + local_38._4_1_;
  param_1[7] = pcVar1[7] + local_38._5_1_;
  *pcVar2 = *pcVar3 + local_50._6_1_;
  pcVar2[1] = pcVar3[1] + local_50._7_1_;
  pcVar2[2] = pcVar3[2] + local_48._2_1_;
  pcVar2[3] = pcVar3[3] + local_48._3_1_;
  pcVar2[4] = pcVar3[4] + local_38._2_1_;
  pcVar2[5] = pcVar3[5] + local_38._3_1_;
  pcVar2[6] = pcVar3[6] + local_38._6_1_;
  pcVar2[7] = pcVar3[7] + local_38._7_1_;
  return;
}


