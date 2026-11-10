/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023597c8; name: FUN_023597c8
 */


void FUN_023597c8(long *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [96];
  
  if ((*param_1 != 0) && (lVar1 = *(long *)(*param_1 + 0x10), lVar1 != 0)) {
    plVar3 = (long *)(lVar1 + ((long)param_3 >> 1) + -0x28);
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar3);
    }
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    if ((code *)param_4[3] != (code *)0x0) {
      (*(code *)param_4[3])(param_4 + 4,auStack_90);
      local_a0 = param_4[2];
      local_98 = param_4[3];
      local_b0 = *param_4;
      local_a8 = (code *)param_4[1];
      pcVar2 = (code *)param_4[1];
      if (pcVar2 != (code *)0x0) {
        param_4[2] = 0;
        param_4[3] = 0;
        *param_4 = 0;
        param_4[1] = 0;
        (*pcVar2)(param_4 + 4);
      }
    }
    (*param_2)(plVar3,&local_b0);
    pcVar2 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = 0;
      local_98 = 0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar2)(auStack_90);
    }
  }
  return;
}


