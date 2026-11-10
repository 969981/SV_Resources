/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019ceb70; name: FUN_019ceb70
 */


void FUN_019ceb70(long param_1,undefined8 *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_188;
  undefined1 auStack_180 [142];
  undefined1 local_f2;
  byte local_f1;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined1 auStack_e0 [144];
  
  memcpy(auStack_e0,param_3,0x8e);
  iVar1 = *(int *)(param_1 + 0x1c4);
  uVar3 = *param_2;
  *(int *)(param_1 + 0x1c4) = iVar1 + 1;
  iVar2 = *(int *)(param_1 + 0x1c0);
  *(int *)(param_1 + 0x1c0) = iVar2 + 1;
  local_188 = *param_2;
  memcpy(auStack_180,auStack_e0,0x8e);
  local_f2 = (undefined1)iVar1;
  local_e8 = 0;
  local_f1 = (byte)iVar2 & 0x7f;
  local_f0 = uVar3;
  FUN_019cec20(param_1 + 0x200,&local_188);
  return;
}


