/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c5334; name: FUN_008c5334
 */


void FUN_008c5334(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4,long param_5,
                 long param_6)

{
  ulong uVar1;
  char *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = (ulong)*(ushort *)(param_6 + 2);
  if (*(ushort *)(param_6 + 2) < *(ushort *)(param_5 + 0x10)) {
    fVar5 = 0.0;
    fVar4 = 1.0;
    do {
      pcVar2 = *(char **)(*(long *)(param_5 + 0x18) + uVar1 * 8);
      if ((((pcVar2[1] & 1U) == 0) && (*pcVar2 == '\x02')) &&
         ((*(byte *)(param_6 + 4) >> 2 & 1) != 0)) {
        fVar3 = (float)FUN_008bea60(param_1,pcVar2 + 8);
        fVar6 = fVar5 + (fVar4 - fVar5) * fVar3;
        fVar3 = (float)FUN_008bea60(param_1,pcVar2 + 0x18);
        fVar3 = fVar5 + (fVar4 - fVar5) * fVar3;
        fVar5 = fVar3;
        fVar4 = fVar6;
        if (fVar6 <= fVar3) {
          fVar5 = fVar6;
          fVar4 = fVar3;
        }
        if (fVar4 - fVar5 < 1.0) {
          fVar6 = (float)FUN_008bea60(param_1,pcVar2 + 0x28);
          fVar3 = fVar6 - (float)(int)fVar6;
          if (fVar6 <= 1.0) {
            fVar3 = fVar6;
          }
          fVar6 = fVar3 + 1.0;
          if (0.0 <= fVar3) {
            fVar6 = fVar3;
          }
          fVar5 = fVar5 + fVar6;
          fVar4 = fVar4 + fVar6;
          if (1.0 < fVar5) {
            fVar5 = 1.0;
          }
          if (1.0 < fVar4) {
            fVar4 = 1.0;
          }
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(param_5 + 0x10));
  }
  else {
    fVar5 = 0.0;
    fVar4 = 1.0;
  }
  *param_3 = fVar5;
  *param_4 = fVar4;
  return;
}


