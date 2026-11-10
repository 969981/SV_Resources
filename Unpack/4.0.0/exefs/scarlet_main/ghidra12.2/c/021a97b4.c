/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021a97b4; name: FUN_021a97b4
 */


void FUN_021a97b4(undefined4 param_1,float param_2,long param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *local_1c0;
  code *pcStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  float local_110;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  float local_8c;
  
  uStack_198 = param_4[1];
  local_1a0 = *param_4;
  local_1c0 = &LAB_02b60558;
  pcStack_1b8 = FUN_02b60590;
  local_1b0 = &LAB_02b60594;
  puStack_1a8 = &LAB_02b605b8;
  local_140 = &LAB_02b605dc;
  local_138 = FUN_02b60614;
  local_130 = &LAB_02b60618;
  puStack_128 = &LAB_02b6063c;
  local_c0 = &LAB_021d2be8;
  local_b8 = FUN_02b60660;
  local_b0 = &LAB_02b60664;
  puStack_a8 = &LAB_02b60688;
  local_190 = param_1;
  local_120 = local_1a0;
  uStack_118 = uStack_198;
  local_110 = param_2;
  local_a0 = local_1a0;
  uStack_98 = uStack_198;
  local_90 = param_1;
  local_8c = param_2;
  FUN_021d11e0(param_3 + 0x100,&local_1c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(&local_a0);
  }
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    puStack_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar1)(&local_120);
  }
  pcVar1 = pcStack_1b8;
  if (pcStack_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    puStack_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    pcStack_1b8 = (code *)0x0;
    (*pcVar1)(&local_1a0);
  }
  uVar3 = CONCAT44(0x7f7fffff,param_2 + (float)*param_4);
  uVar4 = (ulong)(uint)(param_2 + (float)param_4[1]);
  FUN_021d1234(CONCAT44(0xff7fffff,(float)*param_4 - param_2),&local_1c0);
  if (*(char *)(param_3 + 0x170) == '\0') {
    *(code **)(param_3 + 0x188) = pcStack_1b8;
    *(undefined1 **)(param_3 + 0x180) = local_1c0;
    *(undefined1 **)(param_3 + 0x198) = puStack_1a8;
    *(undefined1 **)(param_3 + 400) = local_1b0;
  }
  else {
    auVar2 = FUN_00f1eae4(param_3 + 0x180,&local_1c0);
    *(undefined1 (*) [16])(param_3 + 0x180) = auVar2;
    *(ulong *)(param_3 + 0x198) = uVar4;
    *(undefined8 *)(param_3 + 400) = uVar3;
    if (*(char *)(param_3 + 0x170) != '\0') {
      return;
    }
  }
  *(undefined1 *)(param_3 + 0x170) = 1;
  return;
}


