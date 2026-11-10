/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d56afc; name: FUN_01d56afc
 */


void FUN_01d56afc(undefined8 *param_1,long param_2,code *param_3,ulong param_4,undefined4 *param_5,
                 undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [96];
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar1 = (long *)(param_2 + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar1);
    }
    uVar2 = *param_5;
    uVar4 = *param_6;
    local_b0 = 0;
    local_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    if ((code *)param_7[3] != (code *)0x0) {
      (*(code *)param_7[3])(param_7 + 4,auStack_a0);
      local_b0 = param_7[2];
      local_a8 = param_7[3];
      local_c0 = *param_7;
      local_b8 = (code *)param_7[1];
      pcVar3 = (code *)param_7[1];
      if (pcVar3 != (code *)0x0) {
        param_7[2] = 0;
        param_7[3] = 0;
        *param_7 = 0;
        param_7[1] = 0;
        (*pcVar3)(param_7 + 4);
      }
    }
    (*param_3)(param_1,uVar4,plVar1,uVar2,&local_c0);
    pcVar3 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = 0;
      local_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar3)(auStack_a0);
    }
  }
  return;
}


