/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6d4c0; name: FUN_00c6d4c0
 */


void FUN_00c6d4c0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long local_48;
  undefined8 uStack_40;
  long local_38;
  
  plVar7 = (long *)(param_1 + 0xa0);
  uVar2 = *(ulong *)(param_1 + 0x98);
  uVar5 = *(long *)(param_1 + 0xa8) - *plVar7 >> 2;
  if (uVar5 <= uVar2 && uVar2 - uVar5 != 0) {
    FUN_00c6d688(plVar7,uVar2 - uVar5);
    uVar2 = (ulong)*(uint *)(param_1 + 0x98);
  }
  else if (uVar5 > uVar2) {
    *(ulong *)(param_1 + 0xa8) = *plVar7 + uVar2 * 4;
  }
  if ((int)uVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0xa0);
    uVar5 = 0;
    uVar2 = *(long *)(param_1 + 0xa8) - lVar3 >> 2;
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    do {
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x60) + uVar4 * 8) + 0x28) != '\0') {
        *(int *)(*(long *)(param_1 + 0xa0) + uVar5 * 4) = (int)uVar4;
        uVar2 = (ulong)*(uint *)(param_1 + 0x98);
        uVar5 = uVar5 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uVar2 & 0xffffffff));
    lVar3 = *(long *)(param_1 + 0xa0);
    uVar2 = *(long *)(param_1 + 0xa8) - lVar3 >> 2;
    if (uVar2 <= uVar5 && uVar5 - uVar2 != 0) {
      FUN_00c6d688(plVar7,uVar5 - uVar2);
      goto LAB_00c6d550;
    }
  }
  if (uVar5 < uVar2) {
    *(ulong *)(param_1 + 0xa8) = lVar3 + uVar5 * 4;
  }
LAB_00c6d550:
  if (*(int *)(param_1 + 0x1e0) != 0) {
    local_48 = param_1;
    FUN_00c6d9f0(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),&local_48);
  }
  lVar3 = *(long *)(param_1 + 0xd8);
  uVar2 = uVar5 * 2;
  uVar4 = *(long *)(param_1 + 0xe0) - lVar3 >> 3;
  if (uVar4 <= uVar2 && uVar2 - uVar4 != 0) {
    FUN_00c6e61c((long *)(param_1 + 0xd8),uVar2 - uVar4);
  }
  else if (uVar4 > uVar2) {
    *(ulong *)(param_1 + 0xe0) = lVar3 + uVar5 * 0x10;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x30);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x110);
  lVar6 = *(long *)(param_1 + 0x1a8) - *(long *)(param_1 + 0x1a0);
  if (lVar6 == 0x30) {
    uVar2 = uVar2 & 1;
  }
  else {
    uVar5 = (lVar6 >> 3) * -0x5555555555555555;
    iVar1 = 0;
    if (uVar5 != 0) {
      iVar1 = (int)(uVar2 / uVar5);
    }
    uVar2 = (ulong)(uint)((int)uVar2 - iVar1 * (int)uVar5);
  }
  *(int *)(param_1 + 0x1d8) = (int)uVar2;
  if (*(char *)(*(long *)(param_1 + 0x1a0) + uVar2 * 0x18) == '\0') {
    *(long *)(param_1 + 0x198) = lVar3;
    local_48 = *(long *)(lVar3 + 8);
    uStack_40 = *(undefined8 *)(lVar3 + 0x6098);
    local_38 = lVar3 + 0x10;
    auVar8 = FUN_00c53d38(*(undefined8 *)(lVar3 + 0x6100),&local_48);
    *(undefined1 (*) [16])(*(long *)(param_1 + 0x1a0) + (ulong)*(uint *)(param_1 + 0x1d8) * 0x18) =
         auVar8;
  }
  return;
}


