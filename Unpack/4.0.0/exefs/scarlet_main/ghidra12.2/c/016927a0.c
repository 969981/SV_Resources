/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016927a0; name: FUN_016927a0
 */


undefined4 FUN_016927a0(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong *puVar5;
  ushort uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x46) = 1;
  if ((param_2 != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar4 = FUN_01692a74(param_1);
    puVar5 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar5) < 8) {
      FUN_0157184c(param_1,8);
      puVar5 = *(ulong **)(param_1 + 0x38);
    }
    *puVar5 = uVar4 & 0xffffffff | 0x400000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar6 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar6 < 5) {
      uVar6 = 4;
    }
    *(ushort *)(param_1 + 0x44) = uVar6;
  }
  uVar3 = FUN_01571a80(param_1,((int)uVar7 - (int)uVar2) + (int)uVar1);
  return uVar3;
}


