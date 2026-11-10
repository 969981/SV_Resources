/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02151f20; name: FUN_02151f20
 */


void FUN_02151f20(float param_1,long param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *(undefined1 *)(param_2 + 0x219) = 0;
  if (**(char **)(param_2 + 0x170) != '\0') {
    lVar4 = param_2 + 0x168;
    (**(code **)(**(long **)(param_2 + 200) + 0x88))(*(long **)(param_2 + 200),lVar4);
    fVar5 = (float)(**(code **)(**(long **)(param_2 + 200) + 0xb8))(*(long **)(param_2 + 200),lVar4)
    ;
    fVar8 = (float)param_3;
    if (param_1 < fVar8 || *(int *)(param_2 + 0x1e8) != 1) {
      fVar6 = fVar5;
      if (param_3 != 0) {
        fVar6 = (fVar5 * param_1) / fVar8;
        bVar1 = false;
        bVar2 = true;
        bVar3 = false;
        if (fVar6 < 1.0) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(param_1)) {
            bVar1 = param_1 < 0.0;
            bVar2 = param_1 == 0.0;
            bVar3 = false;
          }
        }
        fVar7 = 1.0;
        if (bVar2 || bVar1 != bVar3) {
          fVar7 = fVar6;
        }
        bVar1 = false;
        bVar2 = true;
        bVar3 = false;
        if (fVar5 <= fVar7) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar8) && !NAN(param_1)) {
            bVar1 = fVar8 < param_1;
            bVar2 = fVar8 == param_1;
            bVar3 = false;
          }
        }
        fVar6 = fVar7 + -1.0;
        if (bVar2 || bVar1 != bVar3) {
          fVar6 = fVar7;
        }
      }
      if (fVar5 - fVar6 <= fVar5) {
        fVar5 = fVar5 - fVar6;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
    }
    (**(code **)(**(long **)(param_2 + 200) + 0xa8))(fVar5,*(long **)(param_2 + 200),lVar4);
    if (*(int *)(param_2 + 0x1e8) == 0) {
      if (param_1 <= fVar8 * 0.5) {
        if (param_1 <= fVar8 / 5.0) {
          if (**(char **)(param_2 + 0x1d0) != '\0') {
            (**(code **)(**(long **)(param_2 + 200) + 0x88))
                      (*(long **)(param_2 + 200),param_2 + 0x1c8);
          }
          if (*(char *)(param_2 + 0x218) != '\0') {
            *(undefined1 *)(param_2 + 0x219) = 1;
          }
        }
        else if (**(char **)(param_2 + 0x1b0) != '\0') {
          lVar4 = param_2 + 0x1a8;
          goto LAB_0215202c;
        }
      }
      else if (**(char **)(param_2 + 400) != '\0') {
        lVar4 = param_2 + 0x188;
LAB_0215202c:
                    /* WARNING: Could not recover jumptable at 0x02152048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_2 + 200) + 0x88))(*(long **)(param_2 + 200),lVar4);
        return;
      }
    }
  }
  return;
}


