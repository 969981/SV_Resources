/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008d4160; name: FUN_008d4160
 */


void FUN_008d4160(float param_1,undefined8 *param_2,undefined1 *param_3,long param_4)

{
  uint uVar1;
  float fVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = *(uint *)(param_4 + 4);
  lVar3 = param_4 + (long)(int)(uVar1 - 1) * 0x10;
  pfVar5 = (float *)(lVar3 + 0x18);
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      if (*(char *)(param_4 + 1) != '\0') {
        param_1 = fmodf(param_1,*pfVar5);
      }
      if (*(float *)(param_4 + 0x18) <= param_1) {
        if (*pfVar5 <= param_1) {
          *(undefined4 *)param_2 = *(undefined4 *)(lVar3 + 0xc);
          param_4 = param_4 + (long)(int)(uVar1 - 1) * 0x10;
          *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)(param_4 + 0x10);
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_4 + 0x14);
          *param_3 = 1;
          return;
        }
        lVar3 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) + 1;
        pfVar5 = (float *)(param_4 + 0x14);
        fVar7 = *(float *)(param_4 + 0x18);
        do {
          fVar6 = fVar7;
          pfVar4 = pfVar5;
          lVar3 = lVar3 + -1;
          if (lVar3 == 0) {
            return;
          }
          fVar7 = pfVar4[5];
          pfVar5 = pfVar4 + 4;
        } while ((param_1 < fVar6) || (fVar7 <= param_1));
        fVar2 = *pfVar4;
        fVar6 = (param_1 - fVar6) / (fVar7 - fVar6);
        fVar7 = *pfVar5;
        fVar8 = (float)*(undefined8 *)(pfVar4 + -2);
        fVar9 = (float)((ulong)*(undefined8 *)(pfVar4 + -2) >> 0x20);
        *param_2 = CONCAT44(fVar9 + ((float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) - fVar9) *
                                    fVar6,
                            fVar8 + ((float)*(undefined8 *)(pfVar4 + 2) - fVar8) * fVar6);
        *(float *)(param_2 + 1) = fVar2 + (fVar7 - fVar2) * fVar6;
        return;
      }
    }
    *(undefined4 *)param_2 = *(undefined4 *)(param_4 + 0xc);
    *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)(param_4 + 0x10);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_4 + 0x14);
  }
  return;
}


