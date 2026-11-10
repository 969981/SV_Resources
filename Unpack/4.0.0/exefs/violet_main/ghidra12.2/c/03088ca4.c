/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03088ca4; name: FUN_03088ca4
 */


void FUN_03088ca4(long param_1,int *param_2,int *param_3,long param_4,long param_5,int *param_6,
                 int *param_7,long param_8,long param_9,long param_10)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  
  iVar6 = *(int *)(param_9 + 0x28);
  lVar8 = (long)iVar6;
  if ((int)(*(uint *)(param_9 + 0x2c) & 0x7fffffff) <= iVar6) {
    FUN_03088678(param_9 + 0x20,PTR_PTR_047d1a50,lVar8 + 1);
    iVar6 = *(int *)(param_9 + 0x28);
  }
  *(int *)(param_9 + 0x28) = (int)(lVar8 + 1);
  piVar9 = (int *)(*(long *)(param_9 + 0x20) + (long)iVar6 * 0x10);
  iVar6 = *param_3;
  *piVar9 = *param_2;
  piVar9[1] = iVar6;
  iVar6 = *param_7;
  piVar9[2] = *param_6;
  piVar9[3] = iVar6;
  if ((param_4 != 0) && (param_8 != 0)) {
    sVar1 = *(short *)(*(long *)(param_1 + 0x18) + (long)*param_2 * 0x10 + 0xc);
    if (sVar1 != -1) {
      sVar2 = *(short *)(*(long *)(param_5 + 0x18) + (long)*param_6 * 0x10 + 0xc);
      if (sVar2 != -1) {
        uVar7 = *(uint *)(param_10 + 0x38);
        if (0 < (int)uVar7) {
          uVar10 = 0;
          piVar9 = (int *)(*(long *)(param_10 + 0x30) + 4);
          do {
            if ((piVar9[-1] == (int)sVar1) && (*piVar9 == (int)sVar2)) {
              if (-1 < (int)uVar10) {
                return;
              }
              break;
            }
            uVar10 = uVar10 + 1;
            piVar9 = piVar9 + 5;
          } while (uVar7 != uVar10);
        }
        lVar8 = (long)(int)uVar7;
        if ((int)(*(uint *)(param_10 + 0x3c) & 0x7fffffff) <= (int)uVar7) {
          FUN_03088788(param_10 + 0x30,PTR_PTR_047d1a50,lVar8 + 1);
          uVar7 = *(uint *)(param_10 + 0x38);
        }
        piVar9 = (int *)(*(long *)(param_10 + 0x30) + (long)(int)uVar7 * 0x14);
        *(int *)(param_10 + 0x38) = (int)(lVar8 + 1);
        piVar9[2] = 0;
        piVar9[3] = 0;
        piVar9[4] = -0x407f4080;
        *piVar9 = (int)sVar1;
        piVar9[1] = (int)sVar2;
        puVar4 = (undefined8 *)(*(long *)(param_4 + 0x18) + (long)(int)sVar1 * 0x10);
        uVar12 = *puVar4;
        puVar5 = (undefined8 *)(*(long *)(param_8 + 0x18) + (long)(int)sVar2 * 0x10);
        uVar15 = *puVar5;
        fVar11 = (float)uVar12 - (float)uVar15;
        fVar13 = (float)((ulong)uVar12 >> 0x20) - (float)((ulong)uVar15 >> 0x20);
        fVar14 = (float)puVar4[1] - (float)puVar5[1];
        uVar3 = (undefined2)
                ((uint)(SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar14 * fVar14) * 1.0039062) >>
                0x10);
        *(undefined2 *)(piVar9 + 4) = uVar3;
        *(undefined2 *)((long)piVar9 + 0x12) = uVar3;
      }
    }
  }
  return;
}


