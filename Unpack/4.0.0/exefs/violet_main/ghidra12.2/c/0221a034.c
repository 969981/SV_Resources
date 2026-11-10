/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0221a034; name: FUN_0221a034
 */


void FUN_0221a034(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [96];
  
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = (code *)0x0;
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(param_1 + 0x40,auStack_80);
    local_88 = *(undefined8 *)(param_1 + 0x38);
    local_98 = *(code **)(param_1 + 0x28);
    local_a0 = *(undefined8 *)(param_1 + 0x20);
    local_90 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_00f64c9c(param_2,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = 0;
    local_88 = 0;
    local_a0 = 0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  return;
}


