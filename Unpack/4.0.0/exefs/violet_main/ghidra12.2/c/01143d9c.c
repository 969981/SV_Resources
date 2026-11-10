/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01143d9c; name: FUN_01143d9c
 */


void FUN_01143d9c(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 *param_5,char *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [104];
  long local_58;
  long local_38;
  
  if (*param_1 == 0) {
    local_58 = 0;
  }
  else {
    FUN_01bab324(&local_38);
    local_58 = local_38;
    if (local_38 != 0) {
      uVar1 = *param_4;
      uVar4 = *param_5;
      cVar2 = *param_6;
      local_d0 = 0;
      local_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      if ((code *)param_7[3] != (code *)0x0) {
        (*(code *)param_7[3])(param_7 + 4,auStack_c0);
        local_d0 = param_7[2];
        local_c8 = param_7[3];
        local_e0 = *param_7;
        local_d8 = (code *)param_7[1];
        pcVar3 = (code *)param_7[1];
        if (pcVar3 != (code *)0x0) {
          param_7[2] = 0;
          param_7[3] = 0;
          *param_7 = 0;
          param_7[1] = 0;
          (*pcVar3)(param_7 + 4);
        }
      }
      FUN_01bab434(&local_58,param_2,param_3,uVar1,uVar4,cVar2 != '\0',&local_e0);
      pcVar3 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = 0;
        local_c8 = 0;
        local_e0 = 0;
        local_d8 = (code *)0x0;
        (*pcVar3)(auStack_c0);
      }
    }
  }
  FUN_01bab3b0(&local_58);
  return;
}


