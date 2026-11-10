/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034943f0; name: FUN_034943f0
 */


bool FUN_034943f0(long param_1,code *param_2,byte *param_3,undefined8 param_4,byte *param_5,
                 undefined8 param_6)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar6 = (*param_2)(param_1 + 8,param_4,param_6), (uVar6 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar4 = PTR_DAT_047e2fd0;
  bVar2 = *param_3;
  if (bVar2 == 0xff) {
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar13 = *(undefined8 **)(param_1 + 0x18);
      do {
        *param_5 = *(byte *)(puVar13 + 5);
        uVar6 = FUN_03494694(puVar13,param_2,param_3 + 8,param_4,param_5 + 8,param_6);
        if ((uVar6 & 1) == 0) {
          uVar8 = *(uint *)(param_1 + 0x20);
          puVar13 = puVar13 + 6;
        }
        else {
          if (puVar13[3] != 0) {
            *(undefined4 *)(puVar13 + 4) = 0;
            (**(code **)(puVar4 + 0x30))(0);
            puVar13[3] = 0;
            *(undefined4 *)((long)puVar13 + 0x24) = 0;
          }
          puVar15 = (undefined8 *)
                    (*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30 + -0x30);
          if (puVar13 < puVar15) {
            puVar11 = puVar13 + 7;
            do {
              *(undefined1 *)(puVar11 + -2) = *(undefined1 *)(puVar11 + 4);
              puVar11[-6] = *puVar11;
              *(undefined1 *)(puVar11 + -5) = *(undefined1 *)(puVar11 + 1);
              if (puVar11[-4] != 0) {
                *(undefined4 *)(puVar11 + -3) = 0;
                (**(code **)(puVar4 + 0x30))(0);
                puVar11[-4] = 0;
                *(undefined4 *)((long)puVar11 + -0x14) = 0;
              }
              puVar11[-4] = puVar11[2];
              *(undefined4 *)(puVar11 + -3) = *(undefined4 *)(puVar11 + 3);
              *(undefined4 *)((long)puVar11 + -0x14) = *(undefined4 *)((long)puVar11 + 0x1c);
              puVar7 = puVar11 + -1;
              puVar11[2] = 0;
              puVar11[3] = 0;
              puVar11 = puVar11 + 6;
            } while (puVar7 < puVar15);
          }
          (**(code **)*puVar15)(puVar15);
          uVar8 = *(int *)(param_1 + 0x20) - 1;
          *(uint *)(param_1 + 0x20) = uVar8;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar8 * 0x30) != puVar13);
    }
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x20);
    if (uVar8 != 0) {
      lVar14 = *(long *)(param_1 + 0x18);
      iVar9 = 0;
      do {
        iVar1 = iVar9 + (uVar8 >> 1);
        lVar10 = (long)iVar1;
        bVar3 = *(byte *)(lVar14 + (long)iVar1 * 0x30 + 0x28);
        if (bVar3 == bVar2) {
          *param_5 = bVar2;
          uVar6 = FUN_03494694(lVar14 + lVar10 * 0x30,param_2,param_3 + 8,param_4,param_5 + 8,
                               param_6);
          if ((uVar6 & 1) != 0) {
            plVar12 = (long *)(lVar14 + lVar10 * 0x30 + 0x18);
            if (*plVar12 != 0) {
              lVar14 = lVar14 + lVar10 * 0x30;
              *(undefined4 *)(lVar14 + 0x20) = 0;
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
              *plVar12 = 0;
              *(undefined4 *)(lVar14 + 0x24) = 0;
            }
            FUN_0349372c((long *)(param_1 + 0x18),*param_3);
          }
          break;
        }
        if (bVar3 < bVar2) {
          iVar9 = iVar1 + 1;
        }
        uVar8 = uVar8 - (bVar3 < bVar2) >> 1;
      } while (uVar8 != 0);
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


