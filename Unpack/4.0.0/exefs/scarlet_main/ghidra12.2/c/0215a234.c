/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215a234; name: FUN_0215a234
 */


void FUN_0215a234(long param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long local_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined8 local_18;
  
  local_18 = 0;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
  if (0 < iVar1) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x148) + 0x68))(*(long **)(param_1 + 0x148),uVar4);
      if ((uVar2 & 1) == 0) {
        if (uVar4 != uVar3) {
          FUN_0215b59c(param_1,uVar4,auStack_40);
          FUN_0215b59c(param_1,uVar3,auStack_50);
          local_58 = param_1;
          FUN_0215b614(*(undefined8 *)(param_1 + 0x900),&local_18,(long)&local_18 + 4,&local_58);
        }
        uVar3 = uVar3 + 1;
        local_18 = (ulong)uVar3 << 0x20;
      }
      uVar4 = uVar4 + 1;
      local_18 = CONCAT44(local_18._4_4_,uVar4);
      iVar1 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
    } while ((int)uVar4 < iVar1);
  }
  return;
}


