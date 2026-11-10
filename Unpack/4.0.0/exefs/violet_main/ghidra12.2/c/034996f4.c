/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034996f4; name: FUN_034996f4
 */


void FUN_034996f4(long *param_1,ulong *param_2,long param_3,long param_4,long param_5,uint *param_6,
                 uint *param_7)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    do {
      if ((param_1[1] != 0) && ((int)param_1[3] != 0)) {
        pfVar5 = (float *)param_1[2];
        do {
          if ((*param_2 >> ((ulong)(uint)pfVar5[2] & 0x3f) & 1) != 0) {
            lVar6 = param_1[1];
            lVar7 = 0;
            if (*(long **)(lVar6 + 0x60) != (long *)0x0) {
              if (*(int *)(lVar6 + 0x88) == 0) {
                lVar7 = 0;
              }
              else {
                lVar7 = **(long **)(lVar6 + 0x60);
                if (lVar7 != 0 && uVar4 < *param_6) {
                  *(long *)(param_5 + (ulong)uVar4 * 8) = lVar7;
                  *(undefined8 *)(param_3 + (ulong)uVar4 * 8) = *(undefined8 *)pfVar5;
                  uVar4 = uVar4 + 1;
                  goto LAB_034997bc;
                }
              }
            }
            if ((lVar7 == 0) && (uVar3 < *param_7)) {
              pfVar1 = (float *)(param_4 + (ulong)uVar3 * 8);
              uVar3 = uVar3 + 1;
              *pfVar1 = *pfVar5 + *(float *)(lVar6 + 0x80) * pfVar5[1];
              lVar7 = *(long *)(param_1[1] + 0x60);
              pfVar2 = (float *)(param_1[1] + 0x80);
              if (lVar7 != 0) {
                pfVar2 = (float *)(lVar7 + 0xc);
              }
              pfVar1[1] = *pfVar5 + *pfVar2 * pfVar5[1];
            }
          }
LAB_034997bc:
          pfVar5 = pfVar5 + 3;
        } while (pfVar5 != (float *)(param_1[2] + (ulong)*(uint *)(param_1 + 3) * 0xc));
      }
      param_1 = (long *)*param_1;
    } while (param_1 != (long *)0x0);
  }
  *param_6 = uVar4;
  *param_7 = uVar3;
  return;
}


