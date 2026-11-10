/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d8cac; name: FUN_019d8cac
 */


undefined4 FUN_019d8cac(long param_1,long *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  code *local_130;
  code *local_128;
  code *local_120;
  undefined1 *local_118;
  long *aplStack_110 [12];
  code *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [96];
  
  lVar3 = FUN_019d8b6c();
  plVar4 = (long *)(lVar3 + 0x28);
  if (((*plVar4 != param_1) && (plVar4 = (long *)(lVar3 + 0x48), *plVar4 != param_1)) &&
     (plVar4 = (long *)(lVar3 + 0x68), *plVar4 != param_1)) {
    plVar4 = (long *)0x0;
  }
  local_120 = (code *)0x0;
  local_118 = (undefined1 *)0x0;
  local_130 = (code *)0x0;
  local_128 = (code *)0x0;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,aplStack_110);
    local_118 = (undefined1 *)param_2[3];
    local_128 = (code *)param_2[1];
    local_130 = (code *)*param_2;
    local_120 = (code *)param_2[2];
  }
  if (((plVar4 == (long *)0x0) || ((int)plVar4[3] == 0)) || (*(int *)((long)plVar4 + 0x1c) == 0)) {
    uVar2 = 0xffffffff;
    goto LAB_019d8d70;
  }
  if (local_130 == (code *)0x0) {
    if (local_128 != (code *)0x0) {
      (*local_128)(aplStack_110);
    }
    local_130 = FUN_00a3caf8;
    local_128 = (code *)&LAB_00a3cc04;
    local_120 = FUN_00a3cc08;
    local_118 = &LAB_00a3cc14;
    aplStack_110[0] = plVar4;
LAB_019d8df4:
    puStack_98 = (undefined1 *)0x0;
    local_a0 = (code *)0x0;
    local_a8 = (code *)0x0;
    local_b0 = (code *)0x0;
    (*local_120)(aplStack_110,auStack_90);
    local_b0 = local_130;
    local_a8 = local_128;
    local_a0 = local_120;
    puStack_98 = local_118;
  }
  else {
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
    local_a0 = (code *)0x0;
    puStack_98 = (undefined1 *)0x0;
    if (local_120 != (code *)0x0) goto LAB_019d8df4;
  }
  uVar2 = FUN_00a3ba6c(plVar4,0,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(auStack_90);
  }
LAB_019d8d70:
  if (local_128 != (code *)0x0) {
    (*local_128)(aplStack_110);
  }
  return uVar2;
}


