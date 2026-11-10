/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029825b0; name: FUN_029825b0
 */


void FUN_029825b0(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined8 uVar1;
  undefined2 local_e0;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_60 = param_3;
  uStack_58 = param_4;
  local_50 = param_5;
  uStack_48 = param_6;
  local_40 = FUN_029829e4(param_1,param_7,param_8);
  uVar1 = 0;
  if (param_8 == 0) {
    FUN_01582534(param_1);
    uVar1 = FUN_0297f1a0();
  }
  local_e0 = 0;
  local_38 = uVar1;
  memset((void *)((ulong)&local_e0 | 4),0,0x78);
  FUN_01461214(param_1);
  uVar1 = FUN_02982a6c();
  FUN_01635c8c(uVar1,&local_e0,&local_60);
  *param_2 = (undefined1)local_e0;
  param_2[1] = local_e0._1_1_;
  memcpy(param_2 + 4,(void *)((ulong)&local_e0 | 4),0x78);
  return;
}


