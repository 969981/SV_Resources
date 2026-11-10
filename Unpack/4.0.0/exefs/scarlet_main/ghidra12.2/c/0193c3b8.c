/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0193c3b8; name: FUN_0193c3b8
 */


void FUN_0193c3b8(undefined8 *param_1)

{
  ushort uVar1;
  int *piVar2;
  uint *puVar3;
  ushort *puVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  piVar2 = (int *)*param_1;
  puVar4 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar1 = *puVar4;
  if (uVar1 < 0xb) {
    iVar6 = 0;
    iVar7 = 0;
    if (uVar1 < 9) goto LAB_0193c404;
  }
  else if ((ulong)puVar4[5] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)((long)piVar2 + (ulong)puVar4[5]);
  }
  if ((ulong)puVar4[4] == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)((long)piVar2 + (ulong)puVar4[4]);
  }
LAB_0193c404:
  if (iVar6 - iVar7 == 1) {
    uVar8 = 0;
    if (((0x16 < uVar1) && ((ulong)puVar4[0xb] != 0)) &&
       (puVar3 = (uint *)((long)piVar2 + (ulong)puVar4[0xb]),
       piVar2 = (int *)((long)puVar3 + (ulong)*puVar3), *piVar2 != 0)) {
      puVar3 = (uint *)(piVar2 + 1);
      piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar3 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
      piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
      if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
         (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar5 != 0)) {
        uVar8 = *(undefined4 *)((long)piVar2 + uVar5);
      }
    }
    local_30 = 0x757527f9d900520e;
    pcStack_28 = "Global";
    local_20 = 6;
    uStack_18 = 0;
    FUN_0113e964(uVar8,param_1,"PfxFeedbackBlendWeight",&local_30);
  }
  else {
    local_50 = 0x757527f9d900520e;
    pcStack_48 = "Global";
    local_40 = 6;
    local_38 = (long *)0x0;
    FUN_017235f4(param_1,"PfxFeedbackBlendWeight",&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


