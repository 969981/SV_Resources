/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0323e530; name: FUN_0323e530
 */


void FUN_0323e530(long *param_1,uint param_2)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  lVar9 = (long)(int)param_1[1] + -1;
  if ((uint)lVar9 == param_2) {
    *(uint *)(param_1 + 1) = param_2;
  }
  else {
    puVar3 = (uint *)(*param_1 + lVar9 * 0x10);
    puVar2 = (uint *)(*param_1 + (long)(int)param_2 * 0x10);
    uVar10 = *puVar3;
    uVar4 = *(undefined8 *)(puVar3 + 2);
    uVar7 = *puVar2;
    *(undefined8 *)puVar2 = *(undefined8 *)puVar3;
    *(undefined8 *)(puVar2 + 2) = uVar4;
    iVar8 = (int)param_1[1] + -1;
    *(int *)(param_1 + 1) = iVar8;
    if (uVar10 <= uVar7) {
      uVar11 = (long)(int)param_2 << 1 | 1;
      lVar9 = (long)(int)((long)(int)param_2 << 1) + 2;
      uVar10 = param_2;
      if (iVar8 <= (int)lVar9) goto LAB_0323e610;
      do {
        uVar10 = (uint)uVar11;
        if (*(uint *)(*param_1 + uVar11 * 0x10) <= *(uint *)(*param_1 + lVar9 * 0x10)) {
          uVar10 = (uint)lVar9;
        }
        uVar11 = (ulong)uVar10;
        uVar10 = param_2;
LAB_0323e610:
        do {
          param_2 = (uint)uVar11;
          if (iVar8 <= (int)param_2) {
            return;
          }
          puVar2 = (uint *)(*param_1 + (long)(int)uVar10 * 0x10);
          puVar3 = (uint *)(*param_1 + (long)(int)param_2 * 0x10);
          if (*puVar3 <= *puVar2) {
            return;
          }
          uVar4 = *(undefined8 *)puVar2;
          uVar5 = *(undefined8 *)(puVar2 + 2);
          uVar6 = *(undefined8 *)(puVar3 + 2);
          *(undefined8 *)puVar2 = *(undefined8 *)puVar3;
          *(undefined8 *)(puVar2 + 2) = uVar6;
          *(undefined8 *)puVar3 = uVar4;
          *(undefined8 *)(puVar3 + 2) = uVar5;
          uVar11 = (long)(int)param_2 << 1 | 1;
          lVar9 = (long)(int)((long)(int)param_2 << 1) + 2;
          uVar10 = param_2;
        } while ((int)param_1[1] <= (int)lVar9);
      } while( true );
    }
    if (0 < (int)param_2) {
      do {
        uVar10 = (int)(param_2 - 1) >> 1;
        puVar2 = (uint *)(*param_1 + (ulong)uVar10 * 0x10);
        puVar3 = (uint *)(*param_1 + (long)(int)param_2 * 0x10);
        if (*puVar3 < *puVar2) {
          return;
        }
        uVar4 = *(undefined8 *)puVar3;
        uVar5 = *(undefined8 *)(puVar3 + 2);
        uVar6 = *(undefined8 *)(puVar2 + 2);
        *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
        *(undefined8 *)(puVar3 + 2) = uVar6;
        *(undefined8 *)puVar2 = uVar4;
        *(undefined8 *)(puVar2 + 2) = uVar5;
        bVar1 = 2 < (int)param_2;
        param_2 = uVar10;
      } while (bVar1);
    }
  }
  return;
}


