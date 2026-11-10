/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb3398; name: FUN_00fb3398
 */


void FUN_00fb3398(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  iVar2 = *(int *)(param_1 + 0xf0);
  if (iVar2 == 0) {
    uVar1 = FUN_00fb9ab8(param_1);
    if ((uVar1 & 1) == 0) {
      return;
    }
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    iVar2 = 3;
    goto LAB_00fb355c;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  FUN_00fb443c(*(undefined8 *)(param_1 + 0x40));
  FUN_00fb4dd0(auStack_38);
  FUN_00fb50b4(uVar3,auStack_38);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  FUN_00fb443c(*(undefined8 *)(param_1 + 0x48));
  FUN_00fb4dd0(auStack_38);
  FUN_00fb50b4(uVar3,auStack_38);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  FUN_00fb443c(*(undefined8 *)(param_1 + 0x50));
  FUN_00fb4dd0(auStack_38);
  FUN_00fb50b4(uVar3,auStack_38);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  FUN_00fb443c(*(undefined8 *)(param_1 + 0x58));
  FUN_00fb4dd0(auStack_38);
  FUN_00fb50b4(uVar3,auStack_38);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  FUN_00fb443c(*(undefined8 *)(param_1 + 0x60));
  FUN_00fb4dd0(auStack_38);
  FUN_00fb50b4(uVar3,auStack_38);
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  FUN_00fb443c(*(undefined8 *)(param_1 + 0x68));
  FUN_00fb4dd0(auStack_38);
  FUN_00fb50b4(uVar3,auStack_38);
  uVar3 = *(undefined8 *)(param_1 + 200);
  FUN_00fb443c(*(undefined8 *)(param_1 + 0x70));
  FUN_00fb4dd0(auStack_38);
  FUN_00fb50b4(uVar3,auStack_38);
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  FUN_00fb443c(*(undefined8 *)(param_1 + 0x78));
  FUN_00fb4dd0(auStack_38);
  FUN_00fb50b4(uVar3,auStack_38);
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  FUN_00fb443c(*(undefined8 *)(param_1 + 0x80));
  FUN_00fb4dd0(auStack_38);
  FUN_00fb50b4(uVar3,auStack_38);
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  FUN_00fb443c(*(undefined8 *)(param_1 + 0x88));
  FUN_00fb4dd0(auStack_38);
  FUN_00fb50b4(uVar3,auStack_38);
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  FUN_00fb443c(*(undefined8 *)(param_1 + 0x90));
  FUN_00fb4dd0(auStack_38);
  FUN_00fb50b4(uVar3,auStack_38);
  iVar2 = *(int *)(param_1 + 0xf0) + 2;
  *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
LAB_00fb355c:
  *(undefined1 *)(param_1 + 0xf4) = 1;
  *(int *)(param_1 + 0xf0) = iVar2;
  return;
}


