/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b0128; name: FUN_007b0128
 */


undefined4 FUN_007b0128(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [16];
  int local_18 [2];
  
  uVar1 = FUN_00796784(*(long *)(param_1 + 0x30) + (param_2 & 0xffff) * 0x20);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_00796868(auStack_50,*(long *)(param_1 + 0x30) + (param_2 & 0xffff) * 0x20);
    local_18[0] = 0;
    FUN_0078a244(auStack_30,auStack_50,local_18);
    uVar2 = 0;
    if (local_18[0] != *(int *)(param_1 + 0x108)) {
      if (local_18[0] == *(int *)(param_1 + 0x148)) {
        uVar2 = 1;
      }
      else if (local_18[0] == *(int *)(param_1 + 0x188)) {
        uVar2 = 2;
      }
      else if (local_18[0] == *(int *)(param_1 + 0x1c8)) {
        uVar2 = 3;
      }
      else if (local_18[0] == *(int *)(param_1 + 0x208)) {
        uVar2 = 4;
      }
      else if (local_18[0] == *(int *)(param_1 + 0x248)) {
        uVar2 = 5;
      }
      else if (local_18[0] == *(int *)(param_1 + 0x288)) {
        uVar2 = 6;
      }
      else {
        uVar2 = 7;
        if (local_18[0] != *(int *)(param_1 + 0x2c8)) {
          uVar2 = 0xffffffff;
        }
      }
    }
    FUN_0284e3d4(auStack_50);
  }
  return uVar2;
}


