/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d4b320; name: FUN_00d4b320
 */


void FUN_00d4b320(long *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  long local_78;
  long lStack_70;
  long local_68;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  piVar7 = *(int **)(param_2 + 8);
  if (((piVar7 != (int *)0x0) && (0xe < *(ushort *)((long)piVar7 - (long)*piVar7))) &&
     (uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[7], uVar10 != 0)) {
    uVar8 = (ulong)*(uint *)((long)piVar7 + uVar10);
    puVar1 = (uint *)((long)((long)piVar7 + uVar10) + uVar8);
    if (*puVar1 != 0) {
      (**(code **)(*param_3 + 0x38))(&local_78,param_3);
      *param_1 = local_78;
      param_1[1] = lStack_70;
      param_1[2] = local_68;
      if (*puVar1 != 0) {
        puVar9 = puVar1 + 1;
        uVar2 = *puVar9;
        lVar5 = *param_1;
        lVar4 = param_1[2];
        uVar3 = (**(code **)(*param_3 + 0x30))(param_3);
        FUN_00d4b87c(uVar3,param_3,(long)puVar9 + (ulong)uVar2);
        FUN_00d4b674(lVar5,param_3,uVar3,param_4,param_5);
        if (1 < *puVar1) {
          uVar2 = puVar1[2];
          uVar3 = (**(code **)(*param_3 + 0x30))(param_3);
          FUN_00d4b87c(uVar3,param_3,(long)puVar9 + (ulong)uVar2 + 4);
          FUN_00d4b674(lVar5 + lVar4,param_3,uVar3,param_4,param_5);
          if (2 < *puVar1) {
            uVar2 = puVar1[3];
            uVar3 = (**(code **)(*param_3 + 0x30))(param_3);
            FUN_00d4b87c(uVar3,param_3,(long)puVar9 + (ulong)uVar2 + 8);
            FUN_00d4b674(lVar5 + lVar4 * 2,param_3,uVar3,param_4,param_5);
            if (3 < *puVar1) {
              uVar2 = puVar1[4];
              uVar3 = (**(code **)(*param_3 + 0x30))(param_3);
              FUN_00d4b87c(uVar3,param_3,(long)puVar9 + (ulong)uVar2 + 0xc);
              FUN_00d4b674(lVar5 + lVar4 * 3,param_3,uVar3,param_4,param_5);
              if (4 < *puVar1) {
                uVar2 = puVar1[5];
                uVar3 = (**(code **)(*param_3 + 0x30))(param_3);
                FUN_00d4b87c(uVar3,param_3,(long)puVar9 + (ulong)uVar2 + 0x10);
                FUN_00d4b674(lVar5 + lVar4 * 4,param_3,uVar3,param_4,param_5);
                if (5 < *puVar1) {
                  uVar2 = puVar1[6];
                  uVar3 = (**(code **)(*param_3 + 0x30))(param_3);
                  FUN_00d4b87c(uVar3,param_3,(long)puVar9 + (ulong)uVar2 + 0x14);
                  FUN_00d4b674(lVar5 + lVar4 * 5,param_3,uVar3,param_4,param_5);
                  if (6 < *puVar1) {
                    uVar6 = 6;
                    lVar5 = lVar5 + lVar4 * 6;
                    puVar9 = (uint *)((long)piVar7 + uVar8 + uVar10 + 0x1c);
                    do {
                      uVar2 = *puVar9;
                      uVar3 = (**(code **)(*param_3 + 0x30))(param_3);
                      FUN_00d4b87c(uVar3,param_3,(long)puVar9 + (ulong)uVar2);
                      FUN_00d4b674(lVar5,param_3,uVar3,param_4,param_5);
                      uVar6 = uVar6 + 1;
                      lVar5 = lVar5 + lVar4;
                      puVar9 = puVar9 + 1;
                    } while (uVar6 < *puVar1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


