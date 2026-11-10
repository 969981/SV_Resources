/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03490f40; name: FUN_03490f40
 */


/* WARNING: Removing unreachable block (ram,0x03491470) */
/* WARNING: Removing unreachable block (ram,0x03491480) */
/* WARNING: Removing unreachable block (ram,0x0349149c) */

bool FUN_03490f40(long param_1,code *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar1 = (*param_2)(param_1 + 8,param_3,param_5), (uVar1 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x18);
    do {
      *param_4 = puVar10[5];
      if (((*(char *)(puVar10 + 2) != '\0') &&
          (uVar1 = (*param_2)(puVar10 + 1,param_3,param_5), (uVar1 & 1) != 0)) &&
         (*(char *)(puVar10 + 2) != '\0')) {
        *(undefined1 *)(puVar10 + 2) = 0;
      }
      uVar5 = 0;
      if (*(int *)(puVar10 + 4) != 0) {
        puVar8 = (undefined8 *)puVar10[3];
        do {
          *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar8 + 5);
          if (((*(char *)(puVar8 + 2) != '\0') &&
              (uVar1 = (*param_2)(puVar8 + 1,param_3,param_5), (uVar1 & 1) != 0)) &&
             (*(char *)(puVar8 + 2) != '\0')) {
            *(undefined1 *)(puVar8 + 2) = 0;
          }
          puVar9 = (undefined8 *)puVar8[3];
          uVar5 = 0;
          if (*(int *)(puVar8 + 4) != 0) {
            puVar3 = puVar9;
            do {
              *(undefined4 *)(param_4 + 2) = *(undefined4 *)(puVar3 + 5);
              if (((*(char *)(puVar3 + 2) != '\0') &&
                  (uVar1 = (*param_2)(puVar3 + 1,param_3,param_5), (uVar1 & 1) != 0)) &&
                 (*(char *)(puVar3 + 2) != '\0')) {
                *(undefined1 *)(puVar3 + 2) = 0;
              }
              uVar5 = 0;
              if (*(int *)(puVar3 + 4) != 0) {
                puVar9 = (undefined8 *)puVar3[3];
                do {
                  *(undefined1 *)(param_4 + 3) = *(undefined1 *)(puVar9 + 5);
                  if (((*(char *)(puVar9 + 2) != '\0') &&
                      (uVar1 = (*param_2)(puVar9 + 1,param_3,param_5), (uVar1 & 1) != 0)) &&
                     (*(char *)(puVar9 + 2) != '\0')) {
                    *(undefined1 *)(puVar9 + 2) = 0;
                  }
                  puVar11 = (undefined8 *)puVar9[3];
                  uVar5 = 0;
                  puVar2 = puVar11;
                  if (*(int *)(puVar9 + 4) != 0) {
                    do {
                      *(undefined1 *)(param_4 + 4) = *(undefined1 *)(puVar2 + 5);
                      if (((*(char *)(puVar2 + 2) != '\0') &&
                          (uVar1 = (*param_2)(puVar2 + 1,param_3,param_5), (uVar1 & 1) != 0)) &&
                         (*(char *)(puVar2 + 2) != '\0')) {
                        *(undefined1 *)(puVar2 + 2) = 0;
                      }
                      puVar11 = (undefined8 *)puVar2[3];
                      uVar5 = 0;
                      if (*(int *)(puVar2 + 4) != 0) {
                        puVar4 = puVar11;
                        do {
                          param_4[5] = puVar4[1];
                          uVar1 = (*param_2)(puVar4,param_3,param_5);
                          if ((uVar1 & 1) == 0) {
                            uVar5 = *(uint *)(puVar2 + 4);
                            puVar4 = puVar4 + 2;
                          }
                          else {
                            uVar5 = *(uint *)(puVar2 + 4);
                            puVar6 = (undefined8 *)((puVar2[3] + (ulong)uVar5 * 0x10) - 0x10);
                            puVar11 = puVar4;
                            if (puVar4 < puVar6) {
                              do {
                                puVar7 = puVar11 + 2;
                                *puVar11 = *puVar7;
                                puVar11[1] = puVar11[3];
                                puVar11 = puVar7;
                              } while (puVar7 < puVar6);
                              uVar5 = *(uint *)(puVar2 + 4);
                            }
                            uVar5 = uVar5 - 1;
                            *(uint *)(puVar2 + 4) = uVar5;
                          }
                          puVar11 = (undefined8 *)puVar2[3];
                        } while (puVar11 + (ulong)uVar5 * 2 != puVar4);
                      }
                      if ((puVar11 != (undefined8 *)0x0) && (uVar5 == 0)) {
                        *(undefined4 *)(puVar2 + 4) = 0;
                        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar11);
                        puVar11 = (undefined8 *)0x0;
                        puVar2[3] = 0;
                        *(undefined4 *)((long)puVar2 + 0x24) = 0;
                      }
                      if ((*(char *)(puVar2 + 2) == '\0') && (*(int *)(puVar2 + 4) == 0)) {
                        if (puVar11 != (undefined8 *)0x0) {
                          *(undefined4 *)(puVar2 + 4) = 0;
                          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar11);
                          puVar2[3] = 0;
                          *(undefined4 *)((long)puVar2 + 0x24) = 0;
                        }
                        puVar11 = (undefined8 *)
                                  ((puVar9[3] + (ulong)*(uint *)(puVar9 + 4) * 0x30) - 0x30);
                        if (puVar2 < puVar11) {
                          puVar4 = puVar2 + 7;
                          do {
                            *(undefined1 *)(puVar4 + -2) = *(undefined1 *)(puVar4 + 4);
                            puVar4[-6] = *puVar4;
                            puVar4[-4] = puVar4[2];
                            *(undefined1 *)(puVar4 + -5) = *(undefined1 *)(puVar4 + 1);
                            *(undefined4 *)(puVar4 + -3) = *(undefined4 *)(puVar4 + 3);
                            *(undefined4 *)((long)puVar4 + -0x14) =
                                 *(undefined4 *)((long)puVar4 + 0x1c);
                            puVar6 = puVar4 + -1;
                            puVar4[2] = 0;
                            puVar4[3] = 0;
                            puVar4 = puVar4 + 6;
                          } while (puVar6 < puVar11);
                        }
                        (**(code **)*puVar11)();
                        uVar5 = *(int *)(puVar9 + 4) - 1;
                        *(uint *)(puVar9 + 4) = uVar5;
                      }
                      else {
                        uVar5 = *(uint *)(puVar9 + 4);
                        puVar2 = puVar2 + 6;
                      }
                      puVar11 = (undefined8 *)puVar9[3];
                    } while (puVar11 + (ulong)uVar5 * 6 != puVar2);
                  }
                  if ((uVar5 == 0) && (*(char *)(puVar9 + 2) == '\0')) {
                    if (puVar11 != (undefined8 *)0x0) {
                      *(undefined4 *)(puVar9 + 4) = 0;
                      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar11);
                      puVar9[3] = 0;
                      *(undefined4 *)((long)puVar9 + 0x24) = 0;
                    }
                    puVar2 = (undefined8 *)
                             ((puVar3[3] + (ulong)*(uint *)(puVar3 + 4) * 0x30) - 0x30);
                    if (puVar9 < puVar2) {
                      puVar11 = puVar9 + 7;
                      do {
                        *(undefined1 *)(puVar11 + -2) = *(undefined1 *)(puVar11 + 4);
                        puVar11[-6] = *puVar11;
                        puVar11[-4] = puVar11[2];
                        *(undefined1 *)(puVar11 + -5) = *(undefined1 *)(puVar11 + 1);
                        *(undefined4 *)(puVar11 + -3) = *(undefined4 *)(puVar11 + 3);
                        *(undefined4 *)((long)puVar11 + -0x14) =
                             *(undefined4 *)((long)puVar11 + 0x1c);
                        puVar4 = puVar11 + -1;
                        puVar11[2] = 0;
                        puVar11[3] = 0;
                        puVar11 = puVar11 + 6;
                      } while (puVar4 < puVar2);
                    }
                    (**(code **)*puVar2)();
                    uVar5 = *(int *)(puVar3 + 4) - 1;
                    *(uint *)(puVar3 + 4) = uVar5;
                  }
                  else {
                    uVar5 = *(uint *)(puVar3 + 4);
                    puVar9 = puVar9 + 6;
                  }
                } while ((undefined8 *)(puVar3[3] + (ulong)uVar5 * 0x30) != puVar9);
              }
              if ((uVar5 == 0) && (*(char *)(puVar3 + 2) == '\0')) {
                FUN_034917f0(puVar3);
                puVar9 = (undefined8 *)(puVar8[3] + (ulong)*(uint *)(puVar8 + 4) * 0x30 + -0x30);
                if (puVar3 < puVar9) {
                  puVar2 = puVar3;
                  do {
                    puVar11 = puVar2 + 6;
                    *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(puVar2 + 0xb);
                    puVar4 = (undefined8 *)puVar2[3];
                    puVar2[1] = puVar2[7];
                    *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar2 + 8);
                    if (puVar4 != (undefined8 *)0x0) {
                      if (*(uint *)(puVar2 + 4) != 0) {
                        lVar12 = (ulong)*(uint *)(puVar2 + 4) * 0x30;
                        do {
                          (**(code **)*puVar4)(puVar4);
                          lVar12 = lVar12 + -0x30;
                          puVar4 = puVar4 + 6;
                        } while (lVar12 != 0);
                        puVar4 = (undefined8 *)puVar2[3];
                      }
                      *(undefined4 *)(puVar2 + 4) = 0;
                      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar4);
                      puVar2[3] = 0;
                      *(undefined4 *)((long)puVar2 + 0x24) = 0;
                    }
                    puVar2[3] = puVar2[9];
                    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar2 + 10);
                    *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)((long)puVar2 + 0x54);
                    puVar2[9] = 0;
                    puVar2[10] = 0;
                    puVar2 = puVar11;
                  } while (puVar11 < puVar9);
                }
                (**(code **)*puVar9)(puVar9);
                uVar5 = *(int *)(puVar8 + 4) - 1;
                *(uint *)(puVar8 + 4) = uVar5;
              }
              else {
                puVar3 = puVar3 + 6;
                uVar5 = *(uint *)(puVar8 + 4);
              }
              puVar9 = (undefined8 *)puVar8[3];
            } while (puVar9 + (ulong)uVar5 * 6 != puVar3);
          }
          if ((uVar5 == 0) && (*(char *)(puVar8 + 2) == '\0')) {
            if (puVar9 != (undefined8 *)0x0) {
              *(undefined4 *)(puVar8 + 4) = 0;
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar9);
              puVar8[3] = 0;
              *(undefined4 *)((long)puVar8 + 0x24) = 0;
            }
            puVar3 = (undefined8 *)((puVar10[3] + (ulong)*(uint *)(puVar10 + 4) * 0x30) - 0x30);
            for (puVar9 = puVar8; puVar9 < puVar3; puVar9 = puVar9 + 6) {
              *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(puVar9 + 0xb);
              puVar9[1] = puVar9[7];
              *(undefined1 *)(puVar9 + 2) = *(undefined1 *)(puVar9 + 8);
              puVar9[3] = puVar9[9];
              puVar9[4] = puVar9[10];
              puVar9[9] = 0;
              puVar9[10] = 0;
            }
            (**(code **)*puVar3)();
            uVar5 = *(int *)(puVar10 + 4) - 1;
            *(uint *)(puVar10 + 4) = uVar5;
          }
          else {
            puVar8 = puVar8 + 6;
            uVar5 = *(uint *)(puVar10 + 4);
          }
        } while ((undefined8 *)(puVar10[3] + (ulong)uVar5 * 0x30) != puVar8);
      }
      if ((uVar5 == 0) && (*(char *)(puVar10 + 2) == '\0')) {
        FUN_034916b4(puVar10);
        puVar8 = (undefined8 *)
                 (*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30 + -0x30);
        if (puVar10 < puVar8) {
          puVar9 = puVar10;
          do {
            puVar3 = puVar9 + 6;
            puVar9[5] = puVar9[0xb];
            puVar2 = (undefined8 *)puVar9[3];
            puVar9[1] = puVar9[7];
            *(undefined1 *)(puVar9 + 2) = *(undefined1 *)(puVar9 + 8);
            if (puVar2 != (undefined8 *)0x0) {
              if (*(uint *)(puVar9 + 4) != 0) {
                lVar12 = (ulong)*(uint *)(puVar9 + 4) * 0x30;
                do {
                  (**(code **)*puVar2)(puVar2);
                  lVar12 = lVar12 + -0x30;
                  puVar2 = puVar2 + 6;
                } while (lVar12 != 0);
                puVar2 = (undefined8 *)puVar9[3];
              }
              *(undefined4 *)(puVar9 + 4) = 0;
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar2);
              puVar9[3] = 0;
              *(undefined4 *)((long)puVar9 + 0x24) = 0;
            }
            puVar9[3] = puVar9[9];
            *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar9 + 10);
            *(undefined4 *)((long)puVar9 + 0x24) = *(undefined4 *)((long)puVar9 + 0x54);
            puVar9[9] = 0;
            puVar9[10] = 0;
            puVar9 = puVar3;
          } while (puVar3 < puVar8);
        }
        (**(code **)*puVar8)(puVar8);
        uVar5 = *(int *)(param_1 + 0x20) - 1;
        *(uint *)(param_1 + 0x20) = uVar5;
      }
      else {
        puVar10 = puVar10 + 6;
        uVar5 = *(uint *)(param_1 + 0x20);
      }
    } while ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar5 * 0x30) != puVar10);
  }
  return uVar5 == 0 && *(char *)(param_1 + 0x10) == '\0';
}


