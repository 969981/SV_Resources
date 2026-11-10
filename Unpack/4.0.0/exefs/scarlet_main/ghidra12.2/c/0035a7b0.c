/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035a7b0; name: FUN_0035a7b0
 */


void FUN_0035a7b0(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  ulong local_190;
  ulong uStack_188;
  undefined *local_160;
  undefined8 uStack_158;
  int *local_130;
  undefined8 uStack_128;
  undefined1 local_100;
  undefined7 local_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  undefined7 uStack_e8;
  undefined1 local_e1;
  undefined7 uStack_e0;
  byte local_d8 [8];
  ulong local_d0;
  ulong local_c8;
  undefined2 local_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  if (*(int *)(param_2 + 0x40) == 0) {
    *param_1 = 0;
    return;
  }
  if (&local_c0 == param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  cVar3 = *(char *)((long)param_2 + 1);
  if (cVar3 == '\x1c') {
    if (*(long *)(param_2 + 4) == 0 && *(int *)(param_2 + 8) == -0x10000) {
      uStack_58 = 0;
      local_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      puVar2 = (undefined4 *)(param_2 + 10);
      puVar1 = param_2 + 1;
      param_2 = &local_c0;
      _local_c0 = CONCAT44(*puVar2,CONCAT22(*puVar1,0x200));
      local_40 = 0x10;
    }
    cVar3 = *(char *)((long)param_2 + 1);
  }
  if (cVar3 == '\x01') {
    piVar4 = &DAT_03c40536;
  }
  else if (cVar3 == '\x02') {
    piVar4 = &DAT_03c0f3a5;
  }
  else {
    if (cVar3 != '\x1c') goto LAB_0035a938;
    piVar4 = &DAT_03c6e5de;
  }
  if (*piVar4 != 0x78696e75 || (char)piVar4[1] != '\0') {
    FUN_0035a410(local_d8,param_2,0);
    uStack_128 = 4;
    local_160 = &DAT_03c9c9c5;
    uStack_158 = 1;
    uStack_188 = (ulong)(local_d8[0] >> 1);
    local_190 = (ulong)local_d8 | 1;
    if ((local_d8[0] & 1) != 0) {
      uStack_188 = local_d0;
      local_190 = local_c8;
    }
    uStack_e0 = 0;
    uStack_e8 = 0;
    local_e1 = 0;
                    /* try { // try from 0035a8e4 to 0035a8f7 has its CatchHandler @ 0035a958 */
    local_130 = piVar4;
    FUN_00395a70(&local_100,&local_130,&local_160,&local_190);
    *(ulong *)(param_1 + 4) = CONCAT71(uStack_f7,uStack_f8);
    *(undefined8 *)(param_1 + 8) = uStack_f0;
    *(undefined1 *)param_1 = local_100;
    *(ulong *)((long)param_1 + 1) = CONCAT17(uStack_f8,local_ff);
    if ((local_d8[0] & 1) == 0) {
      return;
    }
    FUN_0049e790(PTR_LAB_047cba48,local_c8);
    return;
  }
LAB_0035a938:
  FUN_00362320(param_1);
  return;
}


