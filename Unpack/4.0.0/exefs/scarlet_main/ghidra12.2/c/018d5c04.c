/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018d5c04; name: FUN_018d5c04
 */


void FUN_018d5c04(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_58;
  undefined1 auStack_50 [32];
  
  puVar2 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8) + 0x50
                                 ),param_3);
  if (puVar2 == (uint *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *puVar2;
    if (4 < (int)uVar1) {
      uVar1 = 0;
    }
    uVar5 = (ulong)uVar1;
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x210) + uVar5 * 8 + 0xa8) == 0) {
    uVar3 = FUN_018d5ce0(param_1,param_3);
    uVar4 = FUN_0124e480(param_1);
    FUN_01247754(auStack_50,uVar4,*(undefined8 *)(param_1 + 0x10));
    while (uVar5 = FUN_01460dbc(auStack_50,&local_58), (uVar5 & 1) != 0) {
      uVar5 = FUN_018d5d98(param_1,uVar3,local_58);
      if ((uVar5 & 1) != 0) {
        FUN_019672a0(param_1,param_2,param_3,local_58);
      }
    }
  }
  return;
}


