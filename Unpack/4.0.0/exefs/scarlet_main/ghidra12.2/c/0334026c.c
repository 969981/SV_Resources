/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0334026c; name: FUN_0334026c
 */


void FUN_0334026c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  void *__s;
  undefined4 uVar2;
  size_t __n;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  void *local_88;
  void *pvStack_80;
  long local_78;
  long lStack_70;
  undefined4 local_64;
  
  param_1[4] = (long)param_2;
  if (param_2[2] == param_2[3]) {
    FUN_031ca554(&local_88,*param_2,param_2[1]);
    local_64 = *(undefined4 *)(param_2 + 4);
  }
  else {
    FUN_031ca554(&local_88);
    local_64 = *(undefined4 *)((long)param_2 + 0x24);
  }
  FUN_03340498(param_1,&local_88,&local_64);
  if (((ulong)local_88 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(long)local_88 + -1,0);
  }
  uVar3 = *(uint *)(param_2 + 6);
  if (0 < (int)uVar3) {
    lVar6 = (ulong)uVar3 + 1;
    lVar7 = (ulong)uVar3 << 4;
    do {
      if ((*(char *)(param_2[5] + lVar7 + -0x10) == '\a') &&
         (puVar5 = *(undefined8 **)(param_2[5] + lVar7 + -8), puVar5 != (undefined8 *)0x0)) {
        uVar2 = *(undefined4 *)(puVar5 + 2);
        uVar3 = FUN_03340ed4(param_1,puVar5);
        if (*(uint *)(param_1 + 1) == uVar3) {
          uVar4 = uVar3;
          if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (int)uVar3) {
            FUN_0334108c(param_1,PTR_PTR_047d1a50,(long)(int)(uVar3 + 1));
            uVar4 = *(uint *)(param_1 + 1);
          }
          lVar1 = *param_1 + (long)(int)uVar4 * 0x10;
          FUN_031ca554(lVar1,*puVar5,puVar5[1]);
          *(undefined4 *)(lVar1 + 8) = 0;
          *(uint *)(param_1 + 1) = uVar3 + 1;
        }
        *(undefined4 *)(*param_1 + ((long)((ulong)uVar3 << 0x20) >> 0x1c) + 8) = uVar2;
        __s = (void *)*puVar5;
        lVar1 = puVar5[1];
        __n = lVar1 - (long)__s;
        if ((__n == 0) || (pvStack_80 = memchr(__s,0x3c,__n), pvStack_80 == (void *)0x0)) {
          local_88 = (void *)*puVar5;
          pvStack_80 = (void *)puVar5[1];
          local_78 = 0;
          lStack_70 = 0;
        }
        else {
          local_78 = (long)pvStack_80 + 1;
          uVar2 = *(undefined4 *)(puVar5 + 2);
          local_88 = __s;
          lStack_70 = lVar1;
          uVar3 = FUN_03340ed4(param_1,&local_88);
          if (*(uint *)(param_1 + 1) == uVar3) {
            uVar4 = uVar3;
            if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (int)uVar3) {
              FUN_0334108c(param_1,PTR_PTR_047d1a50,(long)(int)(uVar3 + 1));
              uVar4 = *(uint *)(param_1 + 1);
            }
            lVar1 = *param_1 + (long)(int)uVar4 * 0x10;
            FUN_031ca554(lVar1,local_88,pvStack_80);
            *(undefined4 *)(lVar1 + 8) = 0;
            *(uint *)(param_1 + 1) = uVar3 + 1;
          }
          *(undefined4 *)(*param_1 + ((long)((ulong)uVar3 << 0x20) >> 0x1c) + 8) = uVar2;
        }
      }
      lVar6 = lVar6 + -1;
      lVar7 = lVar7 + -0x10;
    } while (1 < lVar6);
  }
  return;
}


