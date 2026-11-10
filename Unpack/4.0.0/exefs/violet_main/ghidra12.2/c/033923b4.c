/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033923b4; name: FUN_033923b4
 */


uint FUN_033923b4(ulong *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  
  puVar8 = (uint *)*param_1;
  lVar9 = (long)puVar8 - param_1[2];
  if (lVar9 < (long)param_1[4]) {
    if (7 < (long)(param_1[1] - (long)puVar8)) {
      uVar5 = puVar8[1];
      if (uVar5 != 0) {
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((param_2 != 0) && (uVar5 != param_2)) goto LAB_0339240c;
        uVar3 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
        uVar4 = uVar3 >> 0x10;
        uVar3 = uVar3 << 0x10;
        uVar2 = uVar4 | uVar3 & 0x3fffffff;
        if ((7 < uVar2) && (uVar1 = lVar9 + (ulong)uVar2, uVar1 <= param_1[4])) {
          iVar6 = (int)param_1[6];
          lVar7 = (long)iVar6;
          if ((int)(*(uint *)((long)param_1 + 0x34) & 0x7fffffff) <= iVar6) {
            FUN_033988ec(param_1 + 5,lVar7 + 1);
            iVar6 = (int)param_1[6];
          }
          puVar8 = (uint *)(param_1[5] + (long)iVar6 * 0x18);
          *(int *)(param_1 + 6) = (int)(lVar7 + 1);
          *(long *)(puVar8 + 2) = lVar9;
          *puVar8 = uVar5;
          puVar8[1] = uVar4 | uVar3;
          *(ulong *)(puVar8 + 4) = param_1[4];
          param_1[4] = uVar1;
          if (param_1[1] < *param_1 + 8) {
            *param_1 = param_1[1];
            *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
          }
          else {
            *param_1 = *param_1 + 8;
          }
          return *puVar8;
        }
      }
      *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
    }
    uVar5 = 1;
  }
  else {
LAB_0339240c:
    uVar5 = 0;
  }
  return uVar5;
}


