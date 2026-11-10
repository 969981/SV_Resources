/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03398304; name: FUN_03398304
 */


uint FUN_03398304(long *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  int iVar10;
  uint *puVar11;
  long lVar12;
  
  puVar8 = (undefined8 *)*param_1;
  puVar11 = (uint *)*puVar8;
  if ((puVar8[5] - puVar8[2]) + (long)puVar11 < param_1[1]) {
    if (puVar8[1] - (long)puVar11 < 8) {
      plVar6 = (long *)puVar8[7];
      if ((plVar6 != (long *)0x0) &&
         (lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,puVar8,8), 7 < lVar7)) {
        puVar8 = (undefined8 *)*param_1;
        puVar11 = (uint *)*puVar8;
        goto LAB_03398378;
      }
    }
    else {
LAB_03398378:
      uVar5 = puVar11[1];
      if (uVar5 != 0) {
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((param_2 != 0) && (uVar5 != param_2)) goto LAB_03398390;
        uVar3 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
        uVar4 = uVar3 >> 0x10;
        uVar3 = uVar3 << 0x10;
        lVar7 = (puVar8[5] - puVar8[2]) + (long)puVar11;
        uVar2 = uVar4 | uVar3 & 0x3fffffff;
        uVar1 = lVar7 + (ulong)uVar2;
        if (7 < uVar2 && uVar1 <= (ulong)param_1[1]) {
          iVar10 = (int)param_1[3];
          lVar12 = (long)iVar10;
          if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) <= iVar10) {
            FUN_03398474(param_1 + 2,lVar12 + 1);
            iVar10 = (int)param_1[3];
          }
          *(int *)(param_1 + 3) = (int)(lVar12 + 1);
          puVar11 = (uint *)(param_1[2] + (long)iVar10 * 0x18);
          *(long *)(puVar11 + 2) = lVar7;
          *puVar11 = uVar5;
          puVar11[1] = uVar4 | uVar3;
          *(long *)(puVar11 + 4) = param_1[1];
          puVar9 = (ulong *)*param_1;
          param_1[1] = uVar1;
          if (puVar9[1] < *puVar9 + 8) {
            plVar6 = (long *)puVar9[7];
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x30))(plVar6,puVar9,8);
            }
          }
          else {
            *puVar9 = *puVar9 + 8;
          }
          return *puVar11;
        }
      }
      *(byte *)(puVar8 + 4) = *(byte *)(puVar8 + 4) | 2;
    }
    uVar5 = 1;
  }
  else {
LAB_03398390:
    uVar5 = 0;
  }
  return uVar5;
}


