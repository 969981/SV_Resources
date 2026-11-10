/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016fcfa4; name: FUN_016fcfa4
 */


void FUN_016fcfa4(undefined8 *param_1)

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
  undefined4 uVar10;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  piVar3 = (int *)*param_1;
  puVar5 = (ushort *)((long)piVar3 - (long)*piVar3);
  uVar1 = *puVar5;
  if (uVar1 < 0xb) {
    iVar7 = 0;
    iVar8 = 0;
    iVar2 = 0;
    if (uVar1 < 9) goto LAB_016fcff0;
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
LAB_016fcff0:
  if (iVar7 - iVar8 != 1) {
    uVar10 = 0;
    uVar9 = 0;
    if (0x16 < uVar1) {
      uVar9 = 0;
      if ((ulong)puVar5[0xb] != 0) {
        puVar4 = (uint *)((long)piVar3 + (ulong)puVar5[0xb]);
        piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
        uVar9 = 0;
        if (*piVar3 != 0) {
          puVar4 = (uint *)(piVar3 + 1);
          piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
          puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
          piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
          uVar9 = 0;
          if (4 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
            uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
            uVar9 = 0;
            if (uVar6 != 0) {
              uVar9 = *(undefined4 *)((long)piVar3 + uVar6);
            }
          }
        }
      }
    }
    local_50 = 0x757527f9d900520e;
    pcStack_48 = "Global";
    local_40 = 6;
    uStack_38 = 0;
    FUN_01441e4c(uVar9,param_1,&local_50);
    piVar3 = (int *)*param_1;
    if (((0x16 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
        (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xb], uVar6 != 0)) &&
       (puVar4 = (uint *)((long)piVar3 + uVar6), puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4),
       1 < *puVar4)) {
      puVar4 = puVar4 + 2;
      piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar6 != 0)) {
        uVar10 = *(undefined4 *)((long)piVar3 + uVar6);
      }
    }
    local_70 = 0x757527f9d900520e;
    pcStack_68 = "Global";
    local_60 = 6;
    uStack_58 = 0;
    FUN_0113eedc(uVar10,param_1,"PfxChromaticAberrationOffset",&local_70);
  }
  return;
}


