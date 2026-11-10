/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001288f0; name: FUN_001288f0
 */


int FUN_001288f0(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,undefined4 param_5
                )

{
  undefined8 local_58;
  code *pcStack_50;
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  long local_38;
  
  local_58 = param_1;
  pcStack_50 = param_3;
  local_48 = param_4;
  local_40 = param_5;
  local_3c = (*param_3)(param_1,&DAT_03c0eed0,4);
  local_38._0_1_ = 0x54;
  if (local_3c == 0) {
    local_3c = (*param_3)(param_1,&local_38,1,param_4);
    local_38 = (ulong)local_38._1_7_ << 8;
    if ((local_3c == 0) && (local_3c = (*pcStack_50)(local_58,&local_38,1,local_48), local_3c == 0))
    {
      local_3c = (*pcStack_50)(local_58,&DAT_03c9c57d,6,local_48);
      local_38._0_1_ = 4;
      if (local_3c == 0) {
        local_3c = (*pcStack_50)(local_58,&local_38,1,local_48);
        local_38._0_1_ = 8;
        if (local_3c == 0) {
          local_3c = (*pcStack_50)(local_58,&local_38,1,local_48);
          local_38 = CONCAT71(local_38._1_7_,8);
          if (local_3c == 0) {
            local_3c = (*pcStack_50)(local_58,&local_38,1,local_48);
            local_38 = 0x5678;
            if (local_3c == 0) {
              local_3c = (*pcStack_50)(local_58,&local_38,8,local_48);
              local_38 = 0x4077280000000000;
              if (local_3c == 0) {
                local_3c = (*pcStack_50)(local_58,&local_38,8,local_48);
              }
              goto LAB_001289a8;
            }
          }
        }
      }
    }
  }
  local_38 = 0x4077280000000000;
LAB_001289a8:
  local_38 = CONCAT71(local_38._1_7_,(char)*(undefined4 *)(param_2 + 0x10));
  if (local_3c == 0) {
    local_3c = (*pcStack_50)(local_58,&local_38,1,local_48);
  }
  FUN_00128ad0(&local_58,param_2,0);
  return local_3c;
}


