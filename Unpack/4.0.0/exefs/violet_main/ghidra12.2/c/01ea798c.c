/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea798c; name: FUN_01ea798c
 */


undefined4 FUN_01ea798c(long param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  long local_50 [4];
  undefined1 auStack_18 [4];
  undefined1 local_14 [4];
  
  if (*(byte *)(param_1 + 0x144) - 1 < 0x10) {
    pbVar1 = (byte *)(param_1 + 0x144);
    FUN_017522c8(local_50,param_2,param_3);
    local_14[0] = 1;
    if (local_50[0] != 0) {
      FUN_01ea7d7c(auStack_18,local_14,local_50[0] + 8);
      if (local_50[0] != 0) {
        FUN_019236f4(auStack_18,pbVar1,local_50[0] + 8);
      }
    }
    uVar3 = (ulong)*pbVar1;
    if (*pbVar1 != 0) {
      uVar4 = 0;
      param_1 = param_1 + 0x88;
      do {
        if ((*(char *)(param_1 + -4) != '\0') && (local_50[0] != 0)) {
          FUN_01ea7df0(auStack_18,param_1,local_50[0] + 8);
          uVar3 = (ulong)*pbVar1;
        }
        uVar4 = uVar4 + 1;
        param_1 = param_1 + 0xc;
      } while (uVar4 < uVar3);
    }
    uVar2 = FUN_014c27c8(local_50);
    FUN_01694aa8(local_50);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


