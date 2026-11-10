/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03096f6c; name: FUN_03096f6c
 */


void FUN_03096f6c(int *param_1,long param_2,undefined8 *param_3,int *param_4,undefined8 *param_5,
                 long *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_b0;
  undefined8 uStack_a8;
  int local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  int local_78 [2];
  int local_70 [2];
  int local_68 [2];
  
  lVar5 = *(long *)(param_2 + 0x20);
  local_70[0] = *param_4;
  if ((*(int *)(lVar5 + 0x108) != 0) &&
     ((*(byte *)(*(long *)(lVar5 + 0x100) + (long)local_70[0]) & 1) != 0)) {
    *param_1 = -1;
    uStack_a8 = param_5[1];
    local_b0 = *param_5;
    uVar3 = *(uint *)(*(long *)(lVar5 + 0x168) + (long)local_70[0] * 4);
    uVar10 = (ulong)uVar3;
    if (-1 < (int)uVar3) {
      uVar7 = *(uint *)(lVar5 + 0x170);
      lVar6 = (long)(int)uVar7;
      if ((int)uVar7 <= (int)(uVar3 + 1)) {
        uVar7 = uVar3 + 1;
      }
      uVar8 = uVar10;
      do {
        uVar2 = uVar8 + 1;
        if (lVar6 <= (long)uVar2) goto LAB_03097078;
        lVar1 = uVar8 * 4;
        uVar8 = uVar2;
      } while (*(int *)(*(long *)(lVar5 + 0x168) + 4 + lVar1) == local_70[0]);
      uVar7 = (uint)uVar2;
LAB_03097078:
      if ((int)uVar3 < (int)uVar7) {
        fVar14 = 3.40282e+38;
        if (param_6 == (long *)0x0) {
          while( true ) {
            iVar4 = (int)uVar10;
            local_98[0] = iVar4;
            FUN_03096b5c(lVar5,param_3,local_98,&local_90);
            fVar11 = (float)local_90 - (float)*param_3;
            fVar12 = (float)((ulong)local_90 >> 0x20) - (float)((ulong)*param_3 >> 0x20);
            fVar13 = (float)uStack_88 - (float)param_3[1];
            fVar11 = fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13;
            if (fVar11 < fVar14) {
              *param_1 = iVar4;
              uStack_a8 = uStack_88;
              local_b0 = local_90;
              fVar14 = fVar11;
            }
            if (uVar7 - 1 == iVar4) break;
            lVar5 = *(long *)(param_2 + 0x20);
            uVar10 = (ulong)(iVar4 + 1);
          }
        }
        else {
          do {
            iVar9 = (int)uVar10;
            local_78[0] = iVar9;
            iVar4 = (**(code **)(*param_6 + 0x28))(param_6,param_2,local_78,param_7,param_8);
            if (iVar4 != 0) {
              local_98[0] = iVar9;
              FUN_03096b5c(*(undefined8 *)(param_2 + 0x20),param_3,local_98,&local_90);
              fVar11 = (float)local_90 - (float)*param_3;
              fVar12 = (float)((ulong)local_90 >> 0x20) - (float)((ulong)*param_3 >> 0x20);
              fVar13 = (float)uStack_88 - (float)param_3[1];
              fVar11 = fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13;
              if (fVar11 < fVar14) {
                *param_1 = iVar9;
                uStack_a8 = uStack_88;
                local_b0 = local_90;
                fVar14 = fVar11;
              }
            }
            uVar10 = (ulong)(iVar9 + 1U);
          } while (uVar7 != iVar9 + 1U);
        }
      }
    }
    param_5[1] = uStack_a8;
    *param_5 = local_b0;
    return;
  }
  if (param_6 != (long *)0x0) {
    local_68[0] = local_70[0];
    iVar4 = (**(code **)(*param_6 + 0x28))(param_6,param_2,local_68,param_7,param_8);
    if (iVar4 == 0) {
      iVar4 = -1;
      goto LAB_03097120;
    }
    lVar5 = *(long *)(param_2 + 0x20);
    local_70[0] = *param_4;
  }
  FUN_0309684c(*(undefined8 *)(lVar5 + 0x68),param_3,local_70,param_5);
  iVar4 = *param_4;
LAB_03097120:
  *param_1 = iVar4;
  return;
}


