/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03493838; name: FUN_03493838
 */


bool FUN_03493838(long param_1,code *param_2,ulong *param_3,undefined8 param_4,ulong *param_5,
                 undefined8 param_6,uint param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if (((((param_7 & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')) &&
      (uVar5 = (*param_2)(param_1 + 8,param_4,param_6), (uVar5 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar3 = PTR_DAT_047e2fd0;
  uVar5 = *param_3;
  if (uVar5 == 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      do {
        *param_5 = puVar11[5];
        uVar5 = FUN_03493acc(puVar11,param_2,param_3 + 1,param_4,param_5 + 1,param_6);
        if ((uVar5 & 1) == 0) {
          uVar8 = *(uint *)(param_1 + 0x20);
          puVar11 = puVar11 + 6;
        }
        else {
          FUN_034916b4(puVar11);
          puVar12 = (undefined8 *)
                    (*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30 + -0x30);
          puVar2 = puVar11;
          while (puVar2 < puVar12) {
            puVar2[5] = puVar2[0xb];
            puVar6 = (undefined8 *)puVar2[3];
            puVar2[1] = puVar2[7];
            *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar2 + 8);
            if (puVar6 != (undefined8 *)0x0) {
              if (*(uint *)(puVar2 + 4) != 0) {
                lVar7 = (ulong)*(uint *)(puVar2 + 4) * 0x30;
                do {
                  (**(code **)*puVar6)(puVar6);
                  lVar7 = lVar7 + -0x30;
                  puVar6 = puVar6 + 6;
                } while (lVar7 != 0);
                puVar6 = (undefined8 *)puVar2[3];
              }
              *(undefined4 *)(puVar2 + 4) = 0;
              (**(code **)(puVar3 + 0x30))(0,puVar6);
              puVar2[3] = 0;
              *(undefined4 *)((long)puVar2 + 0x24) = 0;
            }
            puVar2[3] = puVar2[9];
            *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar2 + 10);
            *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)((long)puVar2 + 0x54);
            puVar2[9] = 0;
            puVar2[10] = 0;
            puVar2 = puVar2 + 6;
          }
          (**(code **)*puVar12)(puVar12);
          uVar8 = *(int *)(param_1 + 0x20) - 1;
          *(uint *)(param_1 + 0x20) = uVar8;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar8 * 0x30) != puVar11);
    }
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x20);
    if (uVar8 != 0) {
      lVar7 = *(long *)(param_1 + 0x18);
      iVar9 = 0;
      do {
        iVar1 = iVar9 + (uVar8 >> 1);
        uVar10 = *(ulong *)(lVar7 + (long)iVar1 * 0x30 + 0x28);
        if (uVar10 == uVar5) {
          *param_5 = uVar5;
          lVar7 = lVar7 + (long)iVar1 * 0x30;
          uVar5 = FUN_03493acc(lVar7,param_2,param_3 + 1,param_4,param_5 + 1,param_6);
          if ((uVar5 & 1) != 0) {
            FUN_034916b4(lVar7);
            FUN_034931fc((long *)(param_1 + 0x18),*param_3);
          }
          break;
        }
        if (uVar10 < uVar5) {
          iVar9 = iVar1 + 1;
        }
        uVar8 = uVar8 - (uVar10 < uVar5) >> 1;
      } while (uVar8 != 0);
    }
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar4 = *(int *)(param_1 + 0x20) == 0;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}


