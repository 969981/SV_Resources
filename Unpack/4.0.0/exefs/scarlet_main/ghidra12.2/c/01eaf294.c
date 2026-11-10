/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eaf294; name: FUN_01eaf294
 */


uint FUN_01eaf294(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long local_50 [4];
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  if ((*(long *)(param_1 + 0x50) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar4 == 0)) {
    uVar1 = 0;
  }
  else {
    plVar5 = (long *)(lVar4 + -0x28);
    FUN_016947d8(local_50);
    local_14 = 1;
    if (local_50[0] != 0) {
      FUN_01eaf354(auStack_18,&local_14,local_50[0] + 8);
    }
    uVar2 = FUN_014c27b0(local_50);
    uVar3 = FUN_014c27c8(local_50);
    uVar1 = (**(code **)(*plVar5 + 0x70))(plVar5,uVar2,uVar3);
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 2;
      FUN_01eaf3e0(param_1);
    }
    FUN_01694aa8(local_50);
  }
  return uVar1 & 1;
}


