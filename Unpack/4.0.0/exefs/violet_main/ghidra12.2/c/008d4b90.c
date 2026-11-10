/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d4b90; name: FUN_008d4b90
 */


void FUN_008d4b90(float param_1,float param_2,float param_3,float param_4,float param_5,
                 undefined8 param_6,undefined8 *param_7,undefined8 *param_8,uint param_9)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_9 == 1) {
LAB_008d4c40:
    *(undefined4 *)param_7 = *(undefined4 *)param_8;
    *(undefined4 *)((long)param_7 + 4) = *(undefined4 *)((long)param_8 + 4);
    uVar2 = *(undefined4 *)(param_8 + 1);
  }
  else {
    if (param_9 == 0) {
      *param_7 = 0x3f8000003f800000;
      uVar2 = 0x3f800000;
      goto LAB_008d4c54;
    }
    if (param_3 <= 0.0) {
      param_2 = param_2 / param_5;
      puVar3 = param_8 + ((long)(int)param_9 + -1) * 2;
      if (param_2 < *(float *)((long)puVar3 + 0xc)) goto LAB_008d4c34;
    }
    else {
      param_2 = fmodf(param_1 * param_4 * param_3 + param_2,param_3);
      param_2 = param_2 / param_3;
      puVar3 = param_8 + ((long)(int)param_9 + -1) * 2;
      if (param_2 < *(float *)((long)puVar3 + 0xc)) {
LAB_008d4c34:
        if (*(float *)((long)param_8 + 0xc) <= param_2) {
          lVar4 = (ulong)(param_9 & ((int)param_9 >> 0x1f ^ 0xffffffffU)) + 1;
          fVar6 = *(float *)((long)param_8 + 0xc);
          do {
            fVar5 = fVar6;
            puVar3 = param_8;
            lVar4 = lVar4 + -1;
            if (lVar4 == 0) {
              *param_7 = 0;
              *(undefined4 *)(param_7 + 1) = 0;
              return;
            }
            fVar6 = *(float *)((long)puVar3 + 0x1c);
            param_8 = puVar3 + 2;
          } while ((param_2 < fVar5) || (fVar6 <= param_2));
          fVar1 = *(float *)(puVar3 + 1);
          fVar5 = (param_2 - fVar5) / (fVar6 - fVar5);
          fVar6 = *(float *)(puVar3 + 3);
          fVar7 = (float)*puVar3;
          fVar8 = (float)((ulong)*puVar3 >> 0x20);
          *param_7 = CONCAT44(fVar8 + ((float)((ulong)*param_8 >> 0x20) - fVar8) * fVar5,
                              fVar7 + ((float)*param_8 - fVar7) * fVar5);
          *(float *)(param_7 + 1) = fVar1 + (fVar6 - fVar1) * fVar5;
          return;
        }
        goto LAB_008d4c40;
      }
    }
    *(undefined4 *)param_7 = *(undefined4 *)puVar3;
    *(undefined4 *)((long)param_7 + 4) = *(undefined4 *)((long)puVar3 + 4);
    uVar2 = *(undefined4 *)(puVar3 + 1);
  }
LAB_008d4c54:
  *(undefined4 *)(param_7 + 1) = uVar2;
  return;
}


