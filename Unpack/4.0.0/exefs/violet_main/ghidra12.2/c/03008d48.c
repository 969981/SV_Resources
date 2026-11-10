/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03008d48; name: FUN_03008d48
 */


void FUN_03008d48(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  
  lVar10 = *param_2;
  if (lVar10 != param_2[1]) {
    if (0 < (int)((ulong)(param_2[1] - lVar10) >> 2)) {
      lVar9 = 0;
      do {
        lVar1 = lVar9 * 4;
        lVar9 = lVar9 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x1690) + (long)*(int *)(lVar10 + lVar1)) = 1;
        lVar10 = *param_2;
      } while (lVar9 < (int)((ulong)(param_2[1] - lVar10) >> 2));
    }
    if (*(long *)(param_1 + 0x1660) != 0) {
      *(undefined1 *)(param_1 + 0x1668) = 1;
      puVar6 = PTR_PTR_047d1a50;
      piVar11 = (int *)*param_2;
      piVar3 = (int *)param_2[1];
      if (piVar11 != piVar3) {
        do {
          iVar4 = *piVar11;
          iVar5 = *(int *)(param_1 + 0x1640);
          iVar7 = iVar5;
          if ((int)(*(uint *)(param_1 + 0x1644) & 0x7fffffff) <= iVar5) {
            FUN_02eaf0f8(param_1 + 0x1638,puVar6,(long)iVar5 + 1);
            iVar7 = *(int *)(param_1 + 0x1640);
          }
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x1638) + (long)iVar7 * 0x10);
          *puVar2 = 0;
          *(undefined4 *)(puVar2 + 1) = 0;
          *(int *)((long)puVar2 + 0xc) = iVar4;
          piVar11 = piVar11 + 1;
          *(int *)(param_1 + 0x1640) = (int)((long)iVar5 + 1);
          *(int *)(*(long *)(param_1 + 0x1648) + (long)iVar4 * 4) = iVar5;
        } while (piVar3 != piVar11);
      }
    }
    uVar8 = (ulong)*(uint *)(param_1 + 0x148) & 0xffffff;
    if (((((uint)uVar8 != 0xffffff) && ((uint)uVar8 < *(uint *)(*(long *)(param_1 + 0x138) + 0x40)))
        && (lVar10 = *(long *)(*(long *)(param_1 + 0x138) + 0x38),
           (*(byte *)(lVar10 + uVar8 * 0xc0 + 0x54) & 3) != 0)) &&
       ((*(uint *)(lVar10 + uVar8 * 0xc0 + 0x50) == *(uint *)(param_1 + 0x148) &&
        ((*(byte *)(lVar10 + uVar8 * 0xc0 + 0x88) & 1) != 0)))) {
      FUN_03008f04(param_1,*param_2,param_2[1]);
    }
    *(int *)(param_1 + 0x15d4) =
         *(int *)(param_1 + 0x15d4) + (int)((ulong)(param_2[1] - *param_2) >> 2);
    *(undefined1 *)(param_1 + 0x16a0) = 1;
  }
  return;
}


