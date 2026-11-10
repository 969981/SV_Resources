/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b303c; name: FUN_034b303c
 */


undefined8
FUN_034b303c(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,long param_5,
            undefined8 param_6,uint param_7,undefined4 param_8)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  void *__s;
  long lVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  float fVar13;
  
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  __s = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x78);
  if (__s == (void *)0x0) {
    uVar8 = 2;
    goto LAB_034b3244;
  }
  memset(__s,0,0x78);
  *(undefined4 *)((long)__s + 0x30) = 1;
  *(undefined4 *)((long)__s + 0x34) = param_8;
  *(undefined8 *)((long)__s + 0x38) = param_3;
  *(undefined4 *)((long)__s + 0x54) = param_2;
  *(undefined8 *)((long)__s + 0x48) = param_4[1];
  *(undefined4 *)((long)__s + 0x50) = *(undefined4 *)(param_4 + 2);
  piVar6 = (int *)*param_4;
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + 1;
  }
  *(int **)((long)__s + 0x40) = piVar6;
  uVar10 = param_7 & 0xfff02004;
  if (param_5 != 0) {
    uVar10 = param_7;
  }
  *(long *)((long)__s + 0x58) = param_5;
  *(undefined8 *)((long)__s + 0x60) = param_6;
  *(uint *)((long)__s + 0x68) = uVar10;
  puVar3 = PTR_DAT_047e2fd0;
  uVar10 = *(uint *)(param_1 + 1);
  if (uVar10 == 0) {
LAB_034b3140:
    uVar12 = 0x1d;
    goto LAB_034b3144;
  }
  fVar13 = (float)NEON_ucvtf((int)param_1[2]);
  if (fVar13 / (float)uVar10 <= 0.9) {
LAB_034b3214:
    uVar5 = 0;
    if (uVar10 != 0) {
      uVar5 = *(uint *)((long)__s + 0x54) / uVar10;
    }
    uVar10 = *(uint *)((long)__s + 0x54) - uVar5 * uVar10;
    *(undefined8 *)((long)__s + 0x70) = *(undefined8 *)(*param_1 + (ulong)uVar10 * 8);
    *(void **)(*param_1 + (ulong)uVar10 * 8) = __s;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  else {
    if (uVar10 < 0x1d) goto LAB_034b3140;
    if (uVar10 < 0x35) {
      uVar12 = 0x35;
LAB_034b3144:
      lVar9 = *param_1;
      uVar1 = *(undefined4 *)((long)param_1 + 0xc);
      *param_1 = 0;
      param_1[1] = 0;
      lVar4 = (**(code **)(puVar3 + 0x20))(0,0,uVar12 << 3);
      if (lVar4 != 0) {
        uVar11 = (uint)uVar12;
        *param_1 = lVar4;
        *(uint *)((long)param_1 + 0xc) = uVar11;
        uVar5 = uVar11;
        while( true ) {
          uVar5 = uVar5 - 1;
          uVar2 = *(uint *)(param_1 + 1);
          if (uVar2 < (uint)uVar12) {
            *(uint *)(param_1 + 1) = uVar2 + 1;
            if (*param_1 != 0) {
              *(undefined8 *)(*param_1 + (ulong)uVar2 * 8) = 0;
            }
          }
          if (uVar5 == 0) break;
          uVar12 = (ulong)*(uint *)((long)param_1 + 0xc);
        }
        if (uVar10 != 0) {
          uVar12 = 0;
          do {
            lVar4 = *(long *)(lVar9 + uVar12 * 8);
            while (lVar4 != 0) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = *(uint *)(lVar4 + 0x54) / uVar11;
              }
              lVar7 = *(long *)(lVar4 + 0x70);
              uVar5 = *(uint *)(lVar4 + 0x54) - uVar5 * uVar11;
              *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(*param_1 + (ulong)uVar5 * 8);
              *(long *)(*param_1 + (ulong)uVar5 * 8) = lVar4;
              lVar4 = lVar7;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar10);
        }
        if (lVar9 != 0) {
          (**(code **)(puVar3 + 0x30))(0,lVar9);
        }
        goto LAB_034b320c;
      }
      if (*param_1 != 0) {
        *(undefined4 *)(param_1 + 1) = 0;
        (**(code **)(puVar3 + 0x30))(0);
        *param_1 = 0;
        *(undefined4 *)((long)param_1 + 0xc) = 0;
      }
      *param_1 = lVar9;
      *(uint *)(param_1 + 1) = uVar10;
      *(undefined4 *)((long)param_1 + 0xc) = uVar1;
    }
    else {
      if (uVar10 < 0x61) {
        uVar12 = 0x61;
        goto LAB_034b3144;
      }
      if (uVar10 < 0xc1) {
        uVar12 = 0xc1;
        goto LAB_034b3144;
      }
      if (uVar10 < 0x185) {
        uVar12 = 0x185;
        goto LAB_034b3144;
      }
      if (uVar10 < 0x301) {
        uVar12 = 0x301;
        goto LAB_034b3144;
      }
      if (uVar10 < 0x607) {
        uVar12 = 0x607;
        goto LAB_034b3144;
      }
      if (uVar10 < 0xc07) {
        uVar12 = 0xc07;
        goto LAB_034b3144;
      }
      uVar12 = 0x1807;
      if (uVar10 < 0x1807) goto LAB_034b3144;
      if (uVar10 < 0x3001) {
        uVar12 = 0x3001;
        goto LAB_034b3144;
      }
      uVar12 = 0x6011;
      if ((((uVar10 < 0x6011) || (uVar12 = 0xc005, uVar10 < 0xc005)) ||
          (uVar12 = 0x1800d, uVar10 < 0x1800d)) ||
         ((uVar12 = 0x30005, uVar10 < 0x30005 || (uVar12 = 0x60019, uVar10 < 0x60019))))
      goto LAB_034b3144;
      if (uVar10 < 0xc0001) {
        uVar12 = 0xc0001;
        goto LAB_034b3144;
      }
      uVar12 = 0x180005;
      if (((((uVar10 < 0x180005) || (uVar12 = 0x30000b, uVar10 < 0x30000b)) ||
           ((uVar12 = 0x60000d, uVar10 < 0x60000d ||
            (((uVar12 = 0xc00005, uVar10 < 0xc00005 || (uVar12 = 0x1800013, uVar10 < 0x1800013)) ||
             (uVar12 = 0x3000005, uVar10 < 0x3000005)))))) ||
          ((uVar12 = 0x6000017, uVar10 < 0x6000017 || (uVar12 = 0xc000013, uVar10 < 0xc000013)))) ||
         ((uVar12 = 0x18000005, uVar10 < 0x18000005 ||
          ((uVar12 = 0x30000059, uVar10 < 0x30000059 || (uVar12 = 0x60000005, uVar10 < 0x60000005)))
          ))) goto LAB_034b3144;
LAB_034b320c:
      uVar10 = *(uint *)(param_1 + 1);
    }
    if (uVar10 != 0) goto LAB_034b3214;
  }
  uVar8 = 1;
LAB_034b3244:
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return uVar8;
}


