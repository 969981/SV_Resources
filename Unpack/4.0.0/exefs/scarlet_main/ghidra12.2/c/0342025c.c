/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0342025c; name: FUN_0342025c
 */


void FUN_0342025c(long param_1,long param_2,ulong param_3,long param_4,undefined8 param_5)

{
  void *__dest;
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *__src;
  long *plVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_44 [4];
  
  if (((*(int *)(param_4 + 0x44) == *(int *)(param_1 + 0xa0)) &&
      (*(long *)(*(long *)(*(long *)(param_4 + 8) + 0x58) + 0x68) != *(long *)(param_1 + 0x70))) &&
     (uVar1 = *(uint *)(param_1 + 0x58), uVar1 != 0)) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 0x28) + 0x20) +
            (param_3 & 0xffffffff) * 0x28;
    fVar10 = *(float *)(lVar2 + 0x18);
    fVar11 = *(float *)(lVar2 + 0x1c);
    fVar12 = *(float *)(lVar2 + 0x20);
    plVar3 = *(long **)(param_1 + 0x50);
    plVar4 = plVar3;
    do {
      pfVar5 = (float *)*plVar4;
      if (((*(char *)(pfVar5 + 0x198) != '\0') && (*(float *)(param_4 + 0x44) == pfVar5[0x2e])) &&
         (pfVar5[0x20] != 0.0)) {
        fVar8 = fVar11 - pfVar5[1];
        fVar7 = fVar10 - *pfVar5;
        fVar9 = fVar12 - pfVar5[2];
        fVar13 = pfVar5[3] * fVar7 + fVar8 * pfVar5[4] + fVar9 * pfVar5[5];
        fVar14 = pfVar5[0xc];
        fVar6 = -fVar14;
        if ((-fVar14 <= fVar13) && (fVar6 = fVar14, fVar13 <= fVar14)) {
          fVar6 = fVar13;
        }
        fVar13 = pfVar5[0xd];
        fVar8 = pfVar5[6] * fVar7 + fVar8 * pfVar5[7] + fVar9 * pfVar5[8];
        fVar7 = -fVar13;
        if ((-fVar13 <= fVar8) && (fVar7 = fVar13, fVar8 <= fVar13)) {
          fVar7 = fVar8;
        }
        fVar9 = (*pfVar5 - fVar10) + fVar6 * pfVar5[3] + pfVar5[6] * fVar7;
        fVar8 = (pfVar5[1] - fVar11) + fVar6 * pfVar5[4] + pfVar5[7] * fVar7;
        fVar6 = (pfVar5[2] - fVar12) + fVar6 * pfVar5[5] + pfVar5[8] * fVar7;
        fVar6 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6);
        __src = *(undefined8 **)(pfVar5 + 0x1e);
        do {
          if (((__src[(ulong)(*(int *)(__src + 0x10) - 1) + 8] != param_1) &&
              (__dest = (void *)FUN_03423298(param_5,*__src,auStack_44), __dest != (void *)0x0)) &&
             (*(float *)((long)__src + 0x84) + fVar6 < *(float *)((long)__dest + 0x84))) {
            memcpy(__dest,__src,0x8c);
            *(float *)((long)__dest + 0x84) = *(float *)((long)__src + 0x84) + fVar6;
          }
          __src = __src + 0x12;
        } while (__src != (undefined8 *)
                          (*(long *)(pfVar5 + 0x1e) + (ulong)(uint)pfVar5[0x20] * 0x90));
        plVar3 = *(long **)(param_1 + 0x50);
        uVar1 = *(uint *)(param_1 + 0x58);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3 + uVar1);
  }
  return;
}


