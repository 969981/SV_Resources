/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00311a20; name: FUN_00311a20
 */


void FUN_00311a20(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 local_40;
  undefined1 local_38;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(lVar3 + 0x20) - *(long *)(param_1 + 2);
  if (*(ulong *)(param_1 + 0xc) < (ulong)(lVar5 + param_2)) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined1 *)((long)param_1 + 0x39);
    }
    lVar9 = *(long *)(param_1 + 4);
    lVar3 = *(long *)(lVar3 + 8);
    if (*(long *)(lVar3 + lVar9 * 0x20) == 0) {
      puVar8 = (undefined1 *)(lVar3 + lVar9 * 0x20 + 9);
    }
    else {
      puVar8 = *(undefined1 **)(lVar3 + lVar9 * 0x20 + 0x10);
    }
    iVar2 = param_1[6];
    *puVar8 = (char)((ulong)lVar5 >> 0x10);
    puVar8[2] = (char)lVar5;
    uVar7 = 9;
    if (iVar1 != 0) {
      uVar7 = 1;
    }
    puVar8[1] = (char)((ulong)lVar5 >> 8);
    puVar8[3] = uVar7;
    puVar8[4] = uVar6;
    puVar8[8] = (char)iVar2;
    puVar8[5] = (char)((uint)iVar2 >> 0x18);
    puVar8[6] = (char)((uint)iVar2 >> 0x10);
    puVar8[7] = (char)((uint)iVar2 >> 8);
    **(long **)(param_1 + 10) = **(long **)(param_1 + 10) + 9;
    *param_1 = 0;
    local_40 = 0;
    local_38 = 9;
    uVar4 = FUN_00368650(*(undefined8 *)(param_1 + 8),&local_40);
    *(undefined8 *)(param_1 + 4) = uVar4;
    lVar3 = *(long *)(param_1 + 8);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(lVar3 + 0x20);
  }
  *(long *)(*(long *)(param_1 + 10) + 0x10) = *(long *)(*(long *)(param_1 + 10) + 0x10) + param_2;
  FUN_00368590(lVar3,param_2);
  return;
}


