/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03493e08; name: FUN_03493e08
 */


bool FUN_03493e08(long param_1,code *param_2,uint *param_3,undefined8 param_4,uint *param_5,
                 undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar6 = (*param_2)(param_1 + 8,param_4,param_6), (uVar6 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar4 = PTR_DAT_047e2fd0;
  uVar8 = *param_3;
  if (uVar8 == 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar12 = *(undefined8 **)(param_1 + 0x18);
      do {
        *param_5 = *(uint *)(puVar12 + 5);
        uVar6 = FUN_03494098(puVar12,param_2,param_3 + 2,param_4,param_5 + 2,param_6);
        if ((uVar6 & 1) == 0) {
          uVar8 = *(uint *)(param_1 + 0x20);
          puVar12 = puVar12 + 6;
        }
        else {
          FUN_034917f0(puVar12);
          puVar13 = (undefined8 *)
                    (*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30 + -0x30);
          puVar3 = puVar12;
          while (puVar3 < puVar13) {
            *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(puVar3 + 0xb);
            puVar7 = (undefined8 *)puVar3[3];
            puVar3[1] = puVar3[7];
            *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(puVar3 + 8);
            if (puVar7 != (undefined8 *)0x0) {
              if (*(uint *)(puVar3 + 4) != 0) {
                lVar9 = (ulong)*(uint *)(puVar3 + 4) * 0x30;
                do {
                  (**(code **)*puVar7)(puVar7);
                  lVar9 = lVar9 + -0x30;
                  puVar7 = puVar7 + 6;
                } while (lVar9 != 0);
                puVar7 = (undefined8 *)puVar3[3];
              }
              *(undefined4 *)(puVar3 + 4) = 0;
              (**(code **)(puVar4 + 0x30))(0,puVar7);
              puVar3[3] = 0;
              *(undefined4 *)((long)puVar3 + 0x24) = 0;
            }
            puVar3[3] = puVar3[9];
            *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar3 + 10);
            *(undefined4 *)((long)puVar3 + 0x24) = *(undefined4 *)((long)puVar3 + 0x54);
            puVar3[9] = 0;
            puVar3[10] = 0;
            puVar3 = puVar3 + 6;
          }
          (**(code **)*puVar13)(puVar13);
          uVar8 = *(int *)(param_1 + 0x20) - 1;
          *(uint *)(param_1 + 0x20) = uVar8;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar8 * 0x30) != puVar12);
    }
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x20);
    if (uVar10 != 0) {
      lVar9 = *(long *)(param_1 + 0x18);
      iVar11 = 0;
      do {
        iVar1 = iVar11 + (uVar10 >> 1);
        uVar2 = *(uint *)(lVar9 + (long)iVar1 * 0x30 + 0x28);
        if (uVar2 == uVar8) {
          *param_5 = uVar8;
          lVar9 = lVar9 + (long)iVar1 * 0x30;
          uVar6 = FUN_03494098(lVar9,param_2,param_3 + 2,param_4,param_5 + 2,param_6);
          if ((uVar6 & 1) != 0) {
            FUN_034917f0(lVar9);
            FUN_03493494((long *)(param_1 + 0x18),*param_3);
          }
          break;
        }
        if (uVar2 < uVar8) {
          iVar11 = iVar1 + 1;
        }
        uVar10 = uVar10 - (uVar2 < uVar8) >> 1;
      } while (uVar10 != 0);
    }
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar5 = *(int *)(param_1 + 0x20) == 0;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


