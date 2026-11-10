/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00880f90; name: FUN_00880f90
 */


undefined8 FUN_00880f90(int *param_1,int *param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  void *__s;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = 0x80260201;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    if (*param_2 == 0x1020003) {
      iVar1 = param_2[2];
      param_1[0x12] = iVar1;
      param_1[0x13] = param_2[7];
      if (iVar1 == 0) {
        lVar4 = -0x30;
        do {
          fVar6 = exp2f((float)param_2[3] * 0.1660964);
          *(float *)((long)param_1 + lVar4 + 0x80) = fVar6;
          fVar6 = exp2f((float)param_2[6] * 0.1660964);
          *(float *)((long)param_1 + lVar4 + 0x110) = fVar6;
          fVar6 = 1.0;
          if ((float)param_2[4] != 0.0) {
            fVar6 = (float)NEON_ucvtf(param_1[0x10]);
            fVar6 = expf(-2.2 / ((float)param_2[4] * fVar6));
            fVar6 = 1.0 - fVar6;
          }
          *(float *)((long)param_1 + lVar4 + 0xb0) = fVar6;
          fVar6 = 1.0;
          if ((float)param_2[5] != 0.0) {
            fVar6 = (float)NEON_ucvtf(param_1[0x10]);
            fVar6 = expf(-2.2 / ((float)param_2[5] * fVar6));
            fVar6 = 1.0 - fVar6;
          }
          *(float *)((long)param_1 + lVar4 + 0xe0) = fVar6;
          lVar4 = lVar4 + 4;
        } while (lVar4 != 0);
      }
      else {
        lVar4 = 0;
        do {
          while( true ) {
            fVar6 = exp2f((float)param_2[3] * 0.1660964);
            *(float *)((long)param_1 + lVar4 + 0x50) = fVar6;
            fVar6 = exp2f((float)param_2[6] * 0.1660964);
            *(float *)((long)param_1 + lVar4 + 0xe0) = fVar6;
            if (iVar1 == 2) break;
            if (iVar1 != 1) {
              return 0x80800005;
            }
            *(undefined4 *)((long)param_1 + lVar4 + 0x80) = 0x3f800000;
            *(undefined4 *)((long)param_1 + lVar4 + 0xb0) = 0x3f800000;
            lVar4 = lVar4 + 4;
            if (lVar4 == 0x30) goto LAB_008812e0;
          }
          *(undefined4 *)((long)param_1 + lVar4 + 0x80) = 0x3d3b91d0;
          fVar6 = 1.0;
          if ((float)param_2[5] != 0.0) {
            fVar6 = (float)NEON_ucvtf(param_1[0x10]);
            fVar6 = expf(-2.2 / ((float)param_2[5] * fVar6));
            fVar6 = 1.0 - fVar6;
          }
          *(float *)((long)param_1 + lVar4 + 0xb0) = fVar6;
          *(float *)((long)param_1 + lVar4 + 0x290) = fVar6;
          *(undefined4 *)((long)param_1 + lVar4 + 0x260) = 0x3c8b98c0;
          *(int *)((long)param_1 + lVar4 + 0x230) = param_2[4];
          *(float *)((long)param_1 + lVar4 + 0x2c0) = fVar6;
          lVar4 = lVar4 + 4;
        } while (lVar4 != 0x30);
      }
    }
    else {
      if (*param_2 != 0x1010003) {
        return 0x80260202;
      }
      lVar4 = 0;
      do {
        iVar1 = param_2[2];
        param_1[0x12] = iVar1;
        param_1[0x13] = 0;
        fVar6 = exp2f((float)param_2[3] * 0.1660964);
        *(float *)((long)param_1 + lVar4 + 0x50) = fVar6;
        if (iVar1 == 2) {
          *(undefined4 *)((long)param_1 + lVar4 + 0x80) = 0x3d3b91d0;
          fVar6 = 1.0;
          if ((float)param_2[5] != 0.0) {
            fVar6 = (float)NEON_ucvtf(param_1[0x10]);
            fVar6 = expf(-2.2 / ((float)param_2[5] * fVar6));
            fVar6 = 1.0 - fVar6;
          }
          *(float *)((long)param_1 + lVar4 + 0xb0) = fVar6;
          *(float *)((long)param_1 + lVar4 + 0x290) = fVar6;
          *(undefined4 *)((long)param_1 + lVar4 + 0x260) = 0x3c8b98c0;
          *(int *)((long)param_1 + lVar4 + 0x230) = param_2[4];
          *(float *)((long)param_1 + lVar4 + 0x2c0) = fVar6;
        }
        else {
          if (iVar1 == 1) {
            *(undefined4 *)((long)param_1 + lVar4 + 0x80) = 0x3f800000;
          }
          else {
            if (iVar1 != 0) {
              return 0x80800005;
            }
            if ((float)param_2[4] == 0.0) {
              *(undefined4 *)((long)param_1 + lVar4 + 0x80) = 0x3f800000;
              fVar6 = (float)param_2[5];
            }
            else {
              fVar6 = (float)NEON_ucvtf(param_1[0x10]);
              fVar6 = expf(-2.2 / ((float)param_2[4] * fVar6));
              *(float *)((long)param_1 + lVar4 + 0x80) = 1.0 - fVar6;
              fVar6 = (float)param_2[5];
            }
            if (fVar6 != 0.0) {
              fVar7 = (float)NEON_ucvtf(param_1[0x10]);
              fVar6 = expf(-2.2 / (fVar6 * fVar7));
              *(float *)((long)param_1 + lVar4 + 0xb0) = 1.0 - fVar6;
              goto LAB_0088104c;
            }
          }
          *(undefined4 *)((long)param_1 + lVar4 + 0xb0) = 0x3f800000;
        }
LAB_0088104c:
        lVar4 = lVar4 + 4;
      } while (lVar4 != 0x30);
    }
LAB_008812e0:
    iVar1 = *param_1;
    iVar5 = param_1[0xf];
    if (*(long *)(param_1 + 0xe0) == 0) {
      iVar2 = param_1[1];
      __s = (void *)(**(code **)(*param_4 + 0x10))
                              (param_4,(ulong)(uint)(iVar2 << 9),
                               "../audiomaster/include/modules\\limiter.h",0x6f);
      *(void **)(param_1 + 0xe0) = __s;
      if (__s == (void *)0x0) {
        return 0x8080000a;
      }
      memset(__s,0,(ulong)(uint)(iVar2 << 9));
    }
    if (((char)iVar5 != '\0') && (iVar1 != 0)) {
      iVar5 = 0;
      do {
        if ((iVar5 == 0) && (*(long *)(param_1 + 0xe2) == 0)) {
          lVar4 = (**(code **)(*param_4 + 0x10))
                            (param_4,0x400,"../audiomaster/include/modules\\limiter.h",0x7c);
          *(long *)(param_1 + 0xe2) = lVar4;
          if (lVar4 == 0) {
            return 0x8080000a;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
    }
    uVar3 = 0;
  }
  return uVar3;
}


