/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0221ecdc; name: FUN_0221ecdc
 */


void FUN_0221ecdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *local_98;
  undefined1 auStack_80 [96];
  
  local_98 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_80);
    local_98 = *(code **)(param_3 + 8);
  }
  FUN_0221ed64(param_2);
  if (local_98 != (code *)0x0) {
    (*local_98)(auStack_80);
  }
  return;
}


