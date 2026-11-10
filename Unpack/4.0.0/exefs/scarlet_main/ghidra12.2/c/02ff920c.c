/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ff920c; name: FUN_02ff920c
 */


void FUN_02ff920c(float param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  
  if (0 < (int)param_4[1]) {
    lVar4 = 0;
    lVar5 = 0xc;
    do {
      *(undefined1 *)(*param_4 + lVar5) = 0;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x30;
    } while (lVar4 < (int)param_4[1]);
  }
  puVar2 = PTR_PTR_047d1a50;
  if (0 < *(int *)(param_2 + 0x28)) {
    lVar4 = 0;
    do {
      plVar1 = (long *)(*(long *)(param_2 + 0x20) + lVar4 * 0x40);
      if (*(float *)(plVar1 + 6) <= param_1) {
        uVar3 = *(uint *)(param_4 + 1);
        if (0 < (int)uVar3) {
          lVar6 = 0;
          lVar5 = 0;
          piVar7 = (int *)(*param_4 + 8);
          do {
            if ((*(long *)(piVar7 + -2) == *plVar1) && (*piVar7 == (int)plVar1[1])) {
              if ((int)lVar6 != 1) {
                lVar5 = *param_4 + (lVar5 >> 0x20) * 0x30;
                *(undefined1 *)(lVar5 + 0xc) = 1;
                lVar6 = plVar1[2];
                *(long *)(lVar5 + 0x18) = plVar1[3];
                *(long *)(lVar5 + 0x10) = lVar6;
                lVar6 = plVar1[4];
                *(long *)(lVar5 + 0x28) = plVar1[5];
                *(long *)(lVar5 + 0x20) = lVar6;
                goto LAB_02ff9348;
              }
              break;
            }
            lVar6 = lVar6 + -1;
            lVar5 = lVar5 + 0x100000000;
            piVar7 = piVar7 + 0xc;
          } while (-lVar6 != (ulong)uVar3);
        }
        lVar5 = (long)(int)uVar3;
        if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= (int)uVar3) {
          FUN_0155a380(param_4,puVar2,lVar5 + 1);
          uVar3 = *(uint *)(param_4 + 1);
        }
        memcpy((void *)(*param_4 + (long)(int)uVar3 * 0x30),plVar1,0x30);
        *(int *)(param_4 + 1) = (int)(lVar5 + 1);
      }
LAB_02ff9348:
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_2 + 0x28));
  }
  puVar2 = PTR_PTR_047d1a50;
  if (0 < *(int *)(param_3 + 0x28)) {
    lVar4 = 0;
    do {
      plVar1 = (long *)(*(long *)(param_3 + 0x20) + lVar4 * 0x40);
      if (*(float *)(plVar1 + 6) <= 0.0) {
        uVar3 = *(uint *)(param_4 + 1);
        if (0 < (int)uVar3) {
          lVar6 = 0;
          lVar5 = 0;
          piVar7 = (int *)(*param_4 + 8);
          do {
            if ((*(long *)(piVar7 + -2) == *plVar1) && (*piVar7 == (int)plVar1[1])) {
              if ((int)lVar6 != 1) {
                lVar5 = *param_4 + (lVar5 >> 0x20) * 0x30;
                *(undefined1 *)(lVar5 + 0xc) = 1;
                lVar6 = plVar1[2];
                *(long *)(lVar5 + 0x18) = plVar1[3];
                *(long *)(lVar5 + 0x10) = lVar6;
                lVar6 = plVar1[4];
                *(long *)(lVar5 + 0x28) = plVar1[5];
                *(long *)(lVar5 + 0x20) = lVar6;
                goto LAB_02ff9458;
              }
              break;
            }
            lVar6 = lVar6 + -1;
            lVar5 = lVar5 + 0x100000000;
            piVar7 = piVar7 + 0xc;
          } while (-lVar6 != (ulong)uVar3);
        }
        lVar5 = (long)(int)uVar3;
        if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= (int)uVar3) {
          FUN_0155a380(param_4,puVar2,lVar5 + 1);
          uVar3 = *(uint *)(param_4 + 1);
        }
        memcpy((void *)(*param_4 + (long)(int)uVar3 * 0x30),plVar1,0x30);
        *(int *)(param_4 + 1) = (int)(lVar5 + 1);
      }
LAB_02ff9458:
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_3 + 0x28));
  }
  return;
}


