/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c7c70; name: FUN_008c7c70
 */


undefined8 FUN_008c7c70(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_50;
  undefined8 uStack_48;
  
  lVar6 = param_1[1];
  lVar8 = *(long *)(lVar6 + 0x3f0);
  lVar7 = *(long *)(lVar6 + 1000);
  if (((*(long *)(lVar6 + 0x3e0) == 0) ||
      (pcVar5 = *(code **)(*(long *)(lVar6 + 0x3e0) + 0x50), pcVar5 == (code *)0x0)) ||
     (uVar3 = (*pcVar5)(param_1), (uVar3 & 1) != 0)) {
    if ((lVar7 == 0) || (pcVar5 = *(code **)(lVar7 + 0x50), pcVar5 == (code *)0x0)) {
      lVar6 = *(long *)(param_1[1] + 0x238);
      if (*(long *)(lVar6 + 0x300) != 0) {
        lVar7 = *(long *)(lVar6 + (ulong)*(uint *)(param_1 + 2) * 8 + 0x340);
        uVar4 = *param_1;
        iVar2 = *(int *)(lVar7 + 0x14c);
        iVar1 = *(int *)(lVar7 + 0x150);
        uStack_48 = *(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x198);
        local_50 = *(long *)(*(long *)(lVar6 + 0x20) + 400) + *(long *)(lVar6 + 0x38);
        if (iVar2 != -1) {
          FUN_008f1150(uVar4,iVar2,0,&local_50,*(undefined8 *)(lVar6 + 0x308));
        }
        if (iVar1 != -1) {
          FUN_008f1150(uVar4,iVar1,4,&local_50,*(undefined8 *)(lVar6 + 0x308));
        }
      }
    }
    else {
      uVar3 = (*pcVar5)(param_1);
      if ((uVar3 & 1) == 0) goto LAB_008c7ccc;
    }
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x50) == 0)) {
      uVar4 = *param_1;
      lVar6 = *(long *)(param_1[1] + 0x238);
      if (*(uint *)(param_1 + 2) == 3) {
        lVar7 = 0;
        lVar8 = *(long *)(lVar6 + 0x338);
      }
      else {
        lVar7 = *(long *)(lVar6 + (ulong)*(uint *)(param_1 + 2) * 8 + 0x340);
        lVar8 = *(long *)(lVar6 + 0x338);
      }
      if (lVar8 != 0) {
        iVar2 = *(int *)(lVar7 + 0x150);
        uStack_48 = *(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x198);
        local_50 = *(long *)(*(long *)(lVar6 + 0x20) + 400) + *(long *)(lVar6 + 0x30);
        if (*(int *)(lVar7 + 0x14c) != -1) {
          FUN_008f1150(uVar4,*(int *)(lVar7 + 0x14c),0,&local_50,0x80);
        }
        if (iVar2 != -1) {
          FUN_008f1150(uVar4,iVar2,4,&local_50,0x80);
        }
      }
    }
    uVar4 = 1;
  }
  else {
LAB_008c7ccc:
    uVar4 = 0;
  }
  return uVar4;
}


