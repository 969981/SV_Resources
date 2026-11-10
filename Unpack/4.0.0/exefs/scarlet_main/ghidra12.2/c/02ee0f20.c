/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ee0f20; name: FUN_02ee0f20
 */


uint FUN_02ee0f20(long param_1,int param_2,undefined4 *param_3,undefined2 *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined2 local_a0 [2];
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 local_68 [2];
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  lVar8 = *(long *)(param_1 + 0x10);
  piVar1 = (int *)(lVar8 + 0x70);
  if (*(int *)(lVar8 + 0x74) == 2) {
    lVar10 = (long)*piVar1;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x60) | param_2 << 1;
    iVar4 = *piVar1;
    iVar9 = 0;
    iVar12 = *(int *)(lVar8 + 0x74) + -1;
    while( true ) {
      uVar2 = iVar12 + iVar9;
      if ((int)uVar2 < 0) {
        uVar2 = uVar2 + 1;
      }
      uVar3 = (int)uVar2 >> 1;
      lVar5 = (long)((ulong)uVar2 << 0x20) >> 0x21;
      uVar2 = *(uint *)((long)piVar1 +
                       (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3) +
                       (long)iVar4);
      lVar10 = lVar5 + 1;
      if ((uVar2 <= uVar7) && (uVar7 < *(uint *)((long)piVar1 + lVar10 * 8 + (long)iVar4))) break;
      iVar6 = (int)lVar10;
      if (uVar7 <= uVar2) {
        iVar12 = uVar3 - 1;
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
    }
    lVar10 = lVar5 * 8 + (long)iVar4;
  }
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 0xf0) + 0x40))
            ((long *)**(undefined8 **)(param_1 + 0xf0),*(undefined2 *)((long)piVar1 + lVar10 + 4),5,
             **(undefined8 **)(param_1 + 0x18),(*(undefined8 **)(param_1 + 0x18))[1],lVar8,*param_3,
             0,param_4);
  lVar8 = *(long *)(param_1 + 0xf0);
  local_68[0] = *(undefined2 *)(lVar8 + 0x10);
  uStack_5c = *(undefined4 *)(lVar8 + 0x1c);
  local_64 = (undefined4)*(undefined8 *)(lVar8 + 0x14);
  uStack_60 = (undefined4)((ulong)*(undefined8 *)(lVar8 + 0x14) >> 0x20);
  puVar11 = *(undefined8 **)(param_1 + 0x100);
  local_58 = *puVar11;
  local_50 = puVar11[1];
  local_48 = puVar11[2];
  local_40 = *(undefined4 *)(puVar11 + 3);
  local_38 = *(undefined8 *)(lVar8 + 0x38);
  local_a0[0] = *param_4;
  local_9c = *(undefined8 *)(param_4 + 2);
  local_94 = *(undefined4 *)(param_4 + 6);
  local_90 = **(undefined8 **)(param_1 + 0x18);
  local_88 = (*(undefined8 **)(param_1 + 0x18))[1];
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  local_78 = *param_3;
  local_70 = 0;
  uVar7 = (**(code **)(**(long **)(lVar8 + 8) + 0x40))
                    (*(long **)(lVar8 + 8),5,*(char *)(param_1 + 0x158) == '\0',local_68,local_a0);
  return uVar7 & 1;
}


