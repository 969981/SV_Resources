/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03499cdc; name: FUN_03499cdc
 */


undefined8 FUN_03499cdc(long *param_1,long param_2,long param_3,long *param_4)

{
  uint uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  undefined1 auStack_64 [4];
  
  plVar8 = *(long **)(param_2 + 0x18);
  uVar1 = *(uint *)(plVar8 + 1);
  uVar10 = *(uint *)((long)plVar8 + 0xc);
  if (uVar10 <= uVar1) {
    iVar6 = uVar10 + (uVar10 >> 1);
    if (uVar10 == 0) {
      iVar6 = 1;
    }
    uVar10 = iVar6 + uVar10;
    lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*plVar8,(ulong)uVar10 * 0x28);
    if (lVar4 == 0) goto LAB_03499e24;
    *plVar8 = lVar4;
    *(uint *)((long)plVar8 + 0xc) = uVar10;
  }
  if (uVar1 < uVar10) {
    uVar11 = (ulong)*(uint *)(plVar8 + 1);
    lVar4 = *plVar8;
    *(uint *)(plVar8 + 1) = *(uint *)(plVar8 + 1) + 1;
    if (lVar4 != 0) {
      puVar7 = (undefined8 *)(lVar4 + uVar11 * 0x28);
      pbVar12 = (byte *)((long)puVar7 + 0x12);
      *(undefined2 *)(puVar7 + 2) = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      *pbVar12 = *pbVar12 & 0xfc;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar3 = PTR_DAT_047e2fd0;
      lVar13 = *(long *)(param_3 + 0x88);
      if (*(long *)(lVar13 + 0x18) == 0) {
        puVar7 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x18);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
          *(undefined4 *)(puVar7 + 2) = 1;
        }
        lVar9 = *(long *)(lVar13 + 0x18);
        *(undefined8 **)(lVar13 + 0x18) = puVar7;
        if ((lVar9 != 0) &&
           (iVar6 = *(int *)(lVar9 + 0x10) + -1, *(int *)(lVar9 + 0x10) = iVar6, iVar6 == 0)) {
          FUN_034783fc(lVar9);
          (**(code **)(puVar3 + 0x30))(0,lVar9);
        }
      }
      if (*(long *)(*(long *)(param_3 + 0x88) + 0x18) != 0) {
        plVar8 = (long *)(lVar4 + uVar11 * 0x28 + 0x20);
        *plVar8 = *param_4;
        if (param_1 != (long *)0x0) {
          (**(code **)(*param_1 + 0x28))(param_1);
        }
        lVar13 = lVar4 + uVar11 * 0x28;
        plVar5 = *(long **)(lVar13 + 0x18);
        *(long **)(lVar13 + 0x18) = param_1;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x30))();
        }
        plVar5 = *(long **)(*(long *)(param_3 + 0x88) + 0x18);
        if ((int)plVar5[1] == 0) {
          *pbVar12 = *pbVar12 & 0xfc;
          *(undefined2 *)(lVar4 + uVar11 * 0x28 + 0x10) = 1;
        }
        else {
          lVar13 = *plVar5;
          lVar4 = lVar4 + uVar11 * 0x28;
          uVar2 = *(undefined2 *)(lVar13 + 0x10);
          *(undefined1 *)(lVar4 + 0x12) = *(undefined1 *)(lVar13 + 0x12);
          *(undefined2 *)(lVar4 + 0x10) = uVar2;
        }
        lVar4 = *plVar8;
        if ((lVar4 != 0) && (lVar13 = FUN_0349a150(param_1 + 0x22,lVar4,auStack_64), lVar13 != 0)) {
          iVar6 = *(int *)(lVar13 + 8);
          if (iVar6 == 0) {
            *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
            iVar6 = *(int *)(lVar13 + 8);
          }
          *(int *)(lVar13 + 8) = iVar6 + 1;
        }
        return 1;
      }
    }
  }
LAB_03499e24:
  lVar4 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  if ((lVar4 != 0) &&
     (iVar6 = *(int *)(lVar4 + 0x10) + -1, *(int *)(lVar4 + 0x10) = iVar6, iVar6 == 0)) {
    FUN_034783fc(lVar4);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar4);
  }
  return 0x34;
}


