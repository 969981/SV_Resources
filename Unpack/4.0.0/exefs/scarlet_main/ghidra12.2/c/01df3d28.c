/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df3d28; name: FUN_01df3d28
 */


void FUN_01df3d28(long param_1,int param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [96];
  
  if (param_2 - 1U < 6) {
    uVar2 = *(undefined4 *)(&DAT_03d3033c + (long)(int)(param_2 - 1U) * 4);
  }
  else {
    uVar2 = 0x27;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,auStack_90);
    local_98 = param_3[3];
    local_a8 = (code *)param_3[1];
    local_b0 = *param_3;
    local_a0 = param_3[2];
  }
  FUN_01dda320(uVar3,uVar2,&local_b0,0,0,1,0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar1)(auStack_90);
  }
  return;
}


