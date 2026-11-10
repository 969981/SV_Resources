/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0335fce4; name: FUN_0335fce4
 */


void FUN_0335fce4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 local_48;
  
  local_48 = FUN_03342334(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90));
  lVar6 = FUN_03349b40((long *)(param_1 + 0x110),&local_48);
  puVar5 = PTR_PTR_047d1a50;
  if ((lVar6 != 0) && (lVar8 = *(long *)(param_1 + 0x110), lVar8 != 0)) {
    lVar8 = lVar8 + (long)*(int *)(lVar6 + 4) * 0x18;
    iVar4 = *(int *)(lVar8 + 0x10);
    if (iVar4 != 0) {
      piVar11 = *(int **)(lVar8 + 8);
      piVar2 = piVar11 + iVar4;
      uVar9 = (ulong)*(uint *)(param_4 + 1);
      do {
        iVar4 = *piVar11;
        iVar7 = (int)uVar9;
        if (iVar7 < 1) {
LAB_0335fd90:
          uVar1 = iVar7 + 1;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar7) {
            FUN_0133bb88(param_4,puVar5,(long)(int)uVar1);
            uVar9 = (ulong)*(uint *)(param_4 + 1);
          }
          *(int *)(*param_4 + (long)(int)uVar9 * 4) = iVar4;
          uVar9 = (ulong)uVar1;
          *(uint *)(param_4 + 1) = uVar1;
        }
        else {
          uVar10 = 0;
          do {
            iVar3 = *(int *)(*param_4 + uVar10 * 4);
            uVar10 = uVar10 + 1;
            if (uVar9 <= uVar10) break;
          } while (iVar3 != iVar4);
          if (iVar3 != iVar4) goto LAB_0335fd90;
        }
        piVar11 = piVar11 + 1;
      } while (piVar11 != piVar2);
    }
  }
  return;
}


