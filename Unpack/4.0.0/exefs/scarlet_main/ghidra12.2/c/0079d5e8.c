/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079d5e8; name: FUN_0079d5e8
 */


void FUN_0079d5e8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_60 [24];
  undefined *local_48;
  long *local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  if ((uVar1 & 1) != 0) {
    local_28 = 0;
    local_38 = 0x4d8;
    local_40 = param_1 + 0x52;
    local_34 = 0x30;
    local_48 = PTR_DAT_047d0a78 + 0x10;
    local_30 = 4;
    FUN_007a3050(&local_48);
    FUN_007a4c48(auStack_60,param_1 + 0x188,0x4d8);
    FUN_007a4c58(auStack_60,local_40,local_30._4_4_ + (int)local_30,0x30);
    (**(code **)(*param_1 + 0x140))(param_1,auStack_60,param_2,0);
  }
  return;
}


