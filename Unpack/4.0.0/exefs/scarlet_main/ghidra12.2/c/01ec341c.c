/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec341c; name: FUN_01ec341c
 */


void FUN_01ec341c(int *param_1,long param_2,long *param_3)

{
  undefined8 local_40;
  int local_38 [2];
  
  local_40 = 6;
  FUN_0111b0ac(local_38,&local_40);
  if (local_38[0] == 0) {
    *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
    param_3[2] = param_3[2] + 1;
    FUN_01ec3800(&local_40,param_2,param_3);
    local_38[0] = (int)local_40;
    if ((int)local_40 == 0) {
      *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
      param_3[2] = param_3[2] + 1;
      FUN_01ec3800(&local_40,param_2 + 0x10,param_3);
      local_38[0] = (int)local_40;
      if ((int)local_40 == 0) {
        *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
        param_3[2] = param_3[2] + 1;
        FUN_01ec3800(&local_40,param_2 + 0x20,param_3);
        local_38[0] = (int)local_40;
        if ((int)local_40 == 0) {
          *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
          param_3[2] = param_3[2] + 1;
          FUN_01ec3800(&local_40,param_2 + 0x30,param_3);
          local_38[0] = (int)local_40;
          if ((int)local_40 == 0) {
            *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
            param_3[2] = param_3[2] + 1;
            FUN_01ec3800(&local_40,param_2 + 0x40,param_3);
            local_38[0] = (int)local_40;
            if ((int)local_40 == 0) {
              *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
              param_3[2] = param_3[2] + 1;
              FUN_01ec3800(&local_40,param_2 + 0x50,param_3);
              local_38[0] = (int)local_40;
              if ((int)local_40 == 0) {
                *param_1 = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
  *param_1 = local_38[0];
  return;
}


