/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00875184; name: FUN_00875184
 */


undefined8 FUN_00875184(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = 3;
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x178) != '\0') {
    uVar2 = uVar2 | 2;
  }
  if (uVar2 == 0) {
    return 1;
  }
  *(undefined1 *)(param_1 + 0x411) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x178) = 0;
  if (*(char *)(param_1 + 0x3ed) == '\0') goto LAB_008751fc;
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar3 + 0x8c) == 1) {
    if (*(int *)(lVar3 + 0x16c) != 1) goto LAB_008752bc;
LAB_008751ec:
    iVar1 = *(int *)(lVar3 + 0x158);
  }
  else {
    *(undefined4 *)(lVar3 + 0x8c) = 1;
    lVar3 = *(long *)(param_1 + 0x10);
    if (*(int *)(lVar3 + 0x16c) == 1) goto LAB_008751ec;
LAB_008752bc:
    *(undefined4 *)(lVar3 + 0x16c) = 1;
    lVar3 = *(long *)(param_1 + 0x10);
    iVar1 = *(int *)(lVar3 + 0x158);
  }
  if (iVar1 == 2) {
    *(undefined4 *)(lVar3 + 0x158) = 0;
  }
LAB_008751fc:
  iVar1 = FUN_0087c7c0(*(long *)(param_1 + 0x10) + 8,param_1 + 0x270,0,0);
  uVar4 = 0;
  if (iVar1 == 0) {
    iVar1 = FUN_0087c130(0,0,param_1 + 0x270,*(undefined8 *)(param_1 + 0x28),0,0,
                         *(uint *)(param_1 + 0x3e0) & 0xff,*(undefined4 *)(param_1 + 1000),
                         *(uint *)(param_1 + 0x3e0) >> 0xc,*(long *)(param_1 + 0x418) != 0,uVar2,
                         *(undefined8 *)(param_1 + 0x18));
    uVar4 = 0;
    if (iVar1 == 0) {
      uVar4 = 1;
      *(undefined1 *)(param_1 + 0x411) = 1;
      FUN_00875468(param_1);
    }
  }
  return uVar4;
}


