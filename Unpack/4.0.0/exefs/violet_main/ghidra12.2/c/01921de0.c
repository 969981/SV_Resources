/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01921de0; name: FUN_01921de0
 */


void FUN_01921de0(undefined8 *param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  ushort *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  piVar3 = (int *)*param_1;
  puVar5 = (ushort *)((long)piVar3 - (long)*piVar3);
  uVar1 = *puVar5;
  if (uVar1 < 0xb) {
    iVar7 = 0;
    iVar8 = 0;
    iVar2 = 0;
    if (uVar1 < 9) goto LAB_01921e1c;
  }
  else {
    iVar2 = 0;
    if ((ulong)puVar5[5] != 0) {
      iVar2 = *(int *)((long)piVar3 + (ulong)puVar5[5]);
    }
  }
  iVar7 = iVar2;
  iVar8 = 0;
  if ((ulong)puVar5[4] != 0) {
    iVar8 = *(int *)((long)piVar3 + (ulong)puVar5[4]);
  }
LAB_01921e1c:
  if (iVar7 - iVar8 != 1) {
    uVar9 = 0;
    if (((0x16 < uVar1) && ((ulong)puVar5[0xb] != 0)) &&
       (puVar4 = (uint *)((long)piVar3 + (ulong)puVar5[0xb]),
       piVar3 = (int *)((long)puVar4 + (ulong)*puVar4), *piVar3 != 0)) {
      puVar4 = (uint *)(piVar3 + 1);
      piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar6 != 0)) {
        uVar9 = *(undefined4 *)((long)piVar3 + uVar6);
      }
    }
    local_30 = 0x757527f9d900520e;
    pcStack_28 = "Global";
    local_20 = 6;
    uStack_18 = 0;
    FUN_0113e964(uVar9,param_1,"PfxFeedbackBlendWeight",&local_30);
  }
  return;
}


