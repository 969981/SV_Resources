/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f4acc; name: FUN_004f4acc
 */


void FUN_004f4acc(long *param_1,long param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  size_t sVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  param_3[1] = *param_3;
  if (param_1[1] == param_2) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 4);
  lVar3 = 0;
  if (uVar5 != 0xffffffff) {
    lVar3 = param_2 + (ulong)uVar5;
  }
  lVar16 = param_1[3];
  if ((ulong)(param_3[2] - *param_3 >> 3) < (ulong)(long)*(int *)(*param_1 + 0x68)) {
    lVar14 = (long)*(int *)(*param_1 + 0x68) * 8;
    lVar8 = FUN_0049e770(PTR_FUN_047cba38,lVar14);
    pvVar10 = (void *)*param_3;
    sVar11 = param_3[1] - (long)pvVar10;
    if (0 < (long)sVar11) {
      memcpy((void *)(lVar8 - sVar11),pvVar10,sVar11);
      pvVar10 = (void *)*param_3;
    }
    *param_3 = (long)(lVar8 - sVar11);
    param_3[1] = lVar8;
    param_3[2] = lVar8 + lVar14;
    if (pvVar10 != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  if (-1 < (int)param_1[9]) {
    lVar8 = 0;
    lVar14 = 0;
    do {
      lVar2 = *(long *)(*param_1 + 0x28) + lVar8;
      if (*(int *)(lVar2 + 0x3c) == 3) {
        iVar7 = FUN_004f48a0(param_1,param_2,lVar2);
        if (0 < iVar7) goto LAB_004f4c88;
      }
      else {
        lVar15 = *(long *)(lVar2 + 0x58);
        if ((lVar15 == 0) ||
           ((*(int *)(lVar15 + 0x18) == 1 && (*(char *)(**(long **)(lVar15 + 0x20) + 0x41) != '\0'))
           )) {
          if ((uVar5 == 0xffffffff) || (uVar6 = *(uint *)(lVar16 + lVar14 * 4), uVar6 == 0xffffffff)
             ) {
            uVar9 = FUN_004f4588(param_1,param_2,lVar2);
            if ((uVar9 & 1) != 0) {
LAB_004f4c88:
              plVar4 = (long *)param_3[1];
              if (plVar4 == (long *)param_3[2]) {
                lVar15 = (long)plVar4 - *param_3 >> 3;
                uVar9 = lVar15 + 1;
                if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar12 = param_3[2] - *param_3;
                uVar13 = lVar12 >> 2;
                if (uVar9 <= uVar13) {
                  uVar9 = uVar13;
                }
                if (0xffffffffffffffe < (ulong)(lVar12 >> 3)) {
                  uVar9 = 0x1fffffffffffffff;
                }
                if (uVar9 == 0) {
                  lVar12 = 0;
                }
                else {
                  lVar12 = FUN_0049e770(PTR_FUN_047cba38,uVar9 << 3);
                }
                plVar4 = (long *)(lVar12 + lVar15 * 8);
                *plVar4 = lVar2;
                pvVar10 = (void *)*param_3;
                sVar11 = param_3[1] - (long)pvVar10;
                if (0 < (long)sVar11) {
                  memcpy((void *)((long)plVar4 - sVar11),pvVar10,sVar11);
                  pvVar10 = (void *)*param_3;
                }
                *param_3 = (long)((long)plVar4 - sVar11);
                param_3[1] = (long)(plVar4 + 1);
                param_3[2] = lVar12 + uVar9 * 8;
                if (pvVar10 != (void *)0x0) {
                  FUN_0049e790(PTR_LAB_047cba48);
                }
              }
              else {
                *plVar4 = lVar2;
                param_3[1] = (long)(plVar4 + 1);
              }
            }
          }
          else if ((*(uint *)(lVar3 + ((ulong)(uVar6 >> 3) & 0x1ffffffc)) >> (ulong)(uVar6 & 0x1f) &
                   1) != 0) goto LAB_004f4c88;
        }
        else {
          uVar6 = (int)((ulong)(lVar15 - *(long *)(*(long *)(lVar15 + 0x10) + 0x30)) >> 4) *
                  -0x55555555;
          if (*(int *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x2c) +
                      (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2)) ==
              *(int *)(lVar2 + 0x44)) goto LAB_004f4c88;
        }
      }
      lVar8 = lVar8 + 0x98;
      bVar1 = lVar14 < (int)param_1[9];
      lVar14 = lVar14 + 1;
    } while (bVar1);
  }
  if (*(uint *)(param_1 + 5) != 0xffffffff) {
    FUN_004ee024(param_2 + (ulong)*(uint *)(param_1 + 5),*param_1,param_1[7],param_3);
  }
  FUN_004fae80(*param_3,param_3[1]);
  return;
}


