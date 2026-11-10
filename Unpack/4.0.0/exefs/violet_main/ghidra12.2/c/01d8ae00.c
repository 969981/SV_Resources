/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d8ae00; name: FUN_01d8ae00
 */


void FUN_01d8ae00(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_140 [2];
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 auStack_110 [96];
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long *aplStack_90 [2];
  undefined8 local_80;
  
  local_128 = (code *)0x0;
  local_120 = 0;
  local_118 = 0;
  local_130 = 0;
  local_140[0] = 0;
  local_b0 = (undefined1 *)0x0;
  local_a8 = (code *)0x0;
  local_a0 = (undefined1 *)0x0;
  local_98 = (undefined1 *)0x0;
  plVar3 = (long *)*param_2;
  if (plVar3 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x58))(plVar3);
    uVar2 = *param_2;
  }
  local_b0 = &LAB_01df6314;
  local_a8 = FUN_00a8abcc;
  local_a0 = &LAB_00a8ac00;
  local_98 = &LAB_00a8ac48;
  aplStack_90[0] = plVar3;
  local_80 = param_1;
  FUN_0102825c(uVar2,local_140);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(aplStack_90);
  }
  pcVar1 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = 0;
    local_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar1)(auStack_110);
  }
  return;
}


