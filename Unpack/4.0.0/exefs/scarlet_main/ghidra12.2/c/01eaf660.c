/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eaf660; name: FUN_01eaf660
 */


uint FUN_01eaf660(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_4c;
  long local_48 [4];
  undefined1 auStack_28 [8];
  
  if ((*(long *)(param_1 + 0x50) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar4 == 0)) {
    uVar1 = 0;
  }
  else {
    plVar5 = (long *)(lVar4 + -0x28);
    *(short *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) + 1;
    *(undefined8 *)(param_1 + 0x108) = *param_2;
    FUN_016947d8(local_48);
    local_4c = 5;
    if (local_48[0] != 0) {
      FUN_01eaf354(auStack_28,&local_4c,local_48[0] + 8);
      if (local_48[0] != 0) {
        FUN_01eaf730(auStack_28,param_1 + 0x104,local_48[0] + 8);
      }
    }
    uVar2 = FUN_014c27b0(local_48);
    uVar3 = FUN_014c27c8(local_48);
    uVar1 = (**(code **)(*plVar5 + 0x70))(plVar5,uVar2,uVar3);
    FUN_01694aa8(local_48);
  }
  return uVar1 & 1;
}


