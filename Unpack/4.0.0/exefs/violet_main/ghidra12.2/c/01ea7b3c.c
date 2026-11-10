/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea7b3c; name: FUN_01ea7b3c
 */


undefined4 FUN_01ea7b3c(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long local_40 [4];
  undefined1 auStack_8 [4];
  undefined1 local_4 [4];
  
  if (*(char *)(param_1 + 0x146) == '\0') {
    uVar1 = 0;
  }
  else {
    FUN_017522c8(local_40,param_2,param_3);
    local_4[0] = 2;
    if (local_40[0] != 0) {
      FUN_01ea7d7c(auStack_8,local_4,local_40[0] + 8);
      if (local_40[0] != 0) {
        FUN_01ea7e70(auStack_8,param_1 + 0x148,local_40[0] + 8);
      }
    }
    uVar1 = FUN_014c27c8(local_40);
    FUN_01694aa8(local_40);
  }
  return uVar1;
}


