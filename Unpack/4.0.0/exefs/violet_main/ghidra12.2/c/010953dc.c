/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010953dc; name: FUN_010953dc
 */


void FUN_010953dc(long param_1)

{
  undefined1 auStack_e8 [96];
  undefined1 auStack_88 [100];
  undefined4 local_24;
  
  (**(code **)(**(long **)(param_1 + 0x210) + 0x10))();
  if (*(long *)(param_1 + 0x10) != 0) {
    memset(auStack_e8,0,0x60);
    (**(code **)(**(long **)(param_1 + 0x210) + 0x18))(*(long **)(param_1 + 0x210),0,auStack_e8);
    memcpy(auStack_88,auStack_e8,0x60);
    local_24 = 0;
    (**(code **)(param_1 + 0x10))(param_1 + 0x30,auStack_88,&local_24);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    memset(auStack_e8,0,0x60);
    (**(code **)(**(long **)(param_1 + 0x210) + 0x18))(*(long **)(param_1 + 0x210),1,auStack_e8);
    memcpy(auStack_88,auStack_e8,0x60);
    local_24 = 1;
    (**(code **)(param_1 + 0x90))(param_1 + 0xb0,auStack_88,&local_24);
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    memset(auStack_e8,0,0x60);
    (**(code **)(**(long **)(param_1 + 0x210) + 0x18))(*(long **)(param_1 + 0x210),2,auStack_e8);
    memcpy(auStack_88,auStack_e8,0x60);
    local_24 = 2;
    (**(code **)(param_1 + 0x110))(param_1 + 0x130,auStack_88,&local_24);
  }
  if (*(long *)(param_1 + 400) != 0) {
    memset(auStack_e8,0,0x60);
    (**(code **)(**(long **)(param_1 + 0x210) + 0x18))(*(long **)(param_1 + 0x210),3,auStack_e8);
    memcpy(auStack_88,auStack_e8,0x60);
    local_24 = 3;
    (**(code **)(param_1 + 400))(param_1 + 0x1b0,auStack_88,&local_24);
  }
  return;
}


