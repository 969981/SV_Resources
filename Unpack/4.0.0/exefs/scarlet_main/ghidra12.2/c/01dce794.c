/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dce794; name: FUN_01dce794
 */


void FUN_01dce794(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ulong local_28;
  
  uVar2 = FUN_01195974();
  iVar5 = *(int *)(param_1 + 0x108);
  uVar6 = uVar2 >> 0x20;
  local_28 = uVar2;
  if (iVar5 == 0) {
    lVar3 = FUN_01195854();
    uVar7 = (uint)*(byte *)(lVar3 + 0x570);
    iVar8 = 0;
    iVar5 = *(int *)(param_1 + 0x108);
  }
  else {
    iVar8 = 1;
    if (iVar5 != 1) {
      if (iVar5 != 2) {
        uVar7 = 0xffffffff;
        iVar8 = 3;
        goto LAB_01dce7d4;
      }
      iVar8 = 2;
    }
    uVar7 = *(uint *)(param_1 + 0x2a4);
  }
LAB_01dce7d4:
  if (iVar5 == 0) {
    uVar6 = (ulong)(uint)((int)uVar2 + (int)(uVar2 >> 0x20) * 6);
  }
  else if ((iVar5 != 1) && (iVar5 != 2)) {
    uVar6 = 1;
  }
  FUN_01dc809c(*(undefined8 *)(param_1 + 0x1a0),iVar8,uVar7,uVar6);
  if ((iVar8 - 1U < 2) && ((uint)uVar6 < 6)) {
    do {
      uVar4 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,uVar7,uVar6);
      FUN_014e36f0(param_1,uVar4,uVar6);
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
    } while (uVar1 != 6);
  }
  if (*(char *)(param_1 + 0x19d) != '\0') {
    FUN_014e85a0(param_1,&local_28,0);
  }
  FUN_01dc2a18(*(undefined8 *)(param_1 + 0x1a8),0);
  return;
}


