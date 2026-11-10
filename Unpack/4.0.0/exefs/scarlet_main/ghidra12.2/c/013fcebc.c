/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013fcebc; name: FUN_013fcebc
 */


void FUN_013fcebc(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long local_68;
  char local_60;
  long local_58;
  
  plVar7 = *(long **)(param_1 + 0x1d0);
  plVar13 = *(long **)(param_1 + 0x1c8);
  if (*(long **)(param_1 + 0x1c8) != plVar7) {
    do {
      plVar12 = plVar13 + 0x1a;
      if (*plVar13 == *param_2) {
        plVar11 = plVar13;
        if (plVar12 != plVar7) {
          *plVar13 = plVar13[0x1a];
          memcpy(plVar13 + 1,plVar13 + 0x1b,0xc6);
          if (plVar13 + 0x34 == plVar7) {
            plVar11 = plVar13 + 0x1a;
          }
          else {
            plVar13[0x1a] = plVar13[0x34];
            memcpy(plVar13 + 0x1b,plVar13 + 0x35,0xc6);
            plVar11 = plVar13 + 0x34;
            if (plVar13 + 0x4e != plVar7) {
              plVar12 = plVar13;
              do {
                plVar11 = plVar12;
                plVar11[0x34] = plVar11[0x4e];
                memcpy(plVar11 + 0x35,plVar11 + 0x4f,0xc6);
                plVar12 = plVar11 + 0x1a;
              } while (plVar7 + -0x4e != plVar11 + 0x1a);
              plVar11 = plVar11 + 0x4e;
            }
          }
        }
        plVar7 = plVar11;
        *(long **)(param_1 + 0x1d0) = plVar7;
        plVar12 = plVar13;
      }
      plVar13 = plVar12;
    } while (plVar12 != plVar7);
  }
  plVar13 = *(long **)(param_1 + 0x208);
  plVar7 = *(long **)(param_1 + 0x200);
  if (*(long **)(param_1 + 0x200) != plVar13) {
    do {
      plVar12 = plVar7 + 0x15;
      if (*plVar7 == *param_2) {
        plVar11 = plVar7;
        if (plVar12 != plVar13) {
          *plVar7 = plVar7[0x15];
          memcpy(plVar7 + 1,plVar7 + 0x16,0xa0);
          if (plVar7 + 0x2a == plVar13) {
            plVar11 = plVar7 + 0x15;
          }
          else {
            plVar7[0x15] = plVar7[0x2a];
            memcpy(plVar7 + 0x16,plVar7 + 0x2b,0xa0);
            plVar11 = plVar7 + 0x2a;
            if (plVar7 + 0x3f != plVar13) {
              plVar12 = plVar7;
              do {
                plVar11 = plVar12;
                plVar11[0x2a] = plVar11[0x3f];
                memcpy(plVar11 + 0x2b,plVar11 + 0x40,0xa0);
                plVar12 = plVar11 + 0x15;
              } while (plVar13 + -0x3f != plVar11 + 0x15);
              plVar11 = plVar11 + 0x3f;
            }
          }
        }
        plVar13 = plVar11;
        *(long **)(param_1 + 0x208) = plVar13;
        plVar12 = plVar7;
      }
      plVar7 = plVar12;
    } while (plVar12 != plVar13);
  }
  plVar13 = *(long **)(param_1 + 0x240);
  plVar7 = *(long **)(param_1 + 0x238);
  while (plVar7 != plVar13) {
    if (*plVar7 == *param_2) {
      plVar12 = plVar7;
      if (plVar7 + 2 != plVar13) {
        plVar11 = plVar7;
        do {
          plVar12 = plVar11 + 2;
          *plVar11 = *plVar12;
          *(char *)(plVar11 + 1) = (char)plVar11[3];
          plVar11 = plVar12;
        } while (plVar13 + -2 != plVar12);
      }
      plVar13 = plVar12;
      *(long **)(param_1 + 0x240) = plVar13;
    }
    else {
      plVar7 = plVar7 + 2;
    }
  }
  plVar13 = *(long **)(param_1 + 0x278);
  plVar7 = *(long **)(param_1 + 0x270);
  while (plVar7 != plVar13) {
    if (*plVar7 == *param_2) {
      plVar12 = plVar7;
      if (plVar7 + 3 != plVar13) {
        plVar7[2] = plVar7[5];
        *plVar7 = plVar7[3];
        plVar7[1] = plVar7[4];
        plVar12 = plVar7 + 3;
        if (plVar7 + 6 != plVar13) {
          plVar7[5] = plVar7[8];
          plVar7[3] = plVar7[6];
          plVar7[4] = plVar7[7];
          plVar12 = plVar7 + 6;
          if (plVar7 + 9 != plVar13) {
            plVar12 = plVar7;
            do {
              plVar11 = plVar12;
              plVar11[6] = plVar11[9];
              plVar11[7] = plVar11[10];
              plVar11[8] = plVar11[0xb];
              plVar12 = plVar11 + 3;
            } while (plVar13 + -9 != plVar11 + 3);
            plVar12 = plVar11 + 9;
          }
        }
      }
      plVar13 = plVar12;
      *(long **)(param_1 + 0x278) = plVar13;
    }
    else {
      plVar7 = plVar7 + 3;
    }
  }
  plVar13 = *(long **)(param_1 + 0x2e8);
  plVar7 = *(long **)(param_1 + 0x2e0);
  while (plVar7 != plVar13) {
    if (*plVar7 == *param_2) {
      plVar12 = plVar7;
      if (plVar7 + 2 != plVar13) {
        plVar11 = plVar7;
        do {
          plVar12 = plVar11 + 2;
          *plVar11 = *plVar12;
          *(char *)(plVar11 + 1) = (char)plVar11[3];
          plVar11 = plVar12;
        } while (plVar13 + -2 != plVar12);
      }
      plVar13 = plVar12;
      *(long **)(param_1 + 0x2e8) = plVar13;
    }
    else {
      plVar7 = plVar7 + 2;
    }
  }
  plVar7 = *(long **)(param_1 + 0x40);
  plVar13 = *(long **)(param_1 + 0x48);
  if (plVar7 != plVar13) {
    lVar1 = param_1 + 0x238;
    do {
      lVar9 = *(long *)(*plVar7 + 0x170);
      lVar10 = *(long *)(*plVar7 + 0x178);
      if (lVar9 != lVar10) {
        if (*(long *)(lVar9 + 8) != *param_2) {
          do {
            lVar8 = lVar9 + 0x10;
            if (lVar10 == lVar8) {
              lVar9 = lVar10;
              break;
            }
            plVar12 = (long *)(lVar9 + 0x18);
            lVar9 = lVar8;
          } while (*plVar12 != *param_2);
        }
      }
      if (lVar10 != lVar9) {
        cVar5 = FUN_013fcabc();
        lVar9 = *(long *)(param_1 + 0x2a8);
        lVar8 = *(long *)(param_1 + 0x2b0);
        lVar10 = lVar9;
        if (lVar9 != lVar8) {
          do {
            if ((*(char *)(lVar9 + 8) == cVar5) &&
               (lVar10 = lVar9, *(long *)(lVar9 + 0x10) == *param_2)) break;
            lVar9 = lVar9 + 0x18;
            lVar10 = lVar8;
          } while (lVar8 != lVar9);
        }
        if (lVar8 == lVar10) {
          local_68 = *param_2;
          local_60 = cVar5;
          local_58 = local_68;
          FUN_013fd4f0(param_1 + 0x2a8,&local_68);
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar13);
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    puVar4 = *(undefined8 **)(param_1 + 0x48);
    if (puVar3 != puVar4) {
      lVar9 = FUN_01a45624(*puVar3);
      if (lVar9 == *param_2) {
        uVar6 = FUN_0289cb9c(*puVar3);
        if ((uVar6 & 1) == 0) {
          local_60 = FUN_013fcabc(*puVar3);
          local_68 = *param_2;
          FUN_0289b700(lVar1,&local_68);
        }
        else {
          FUN_0289cba4(param_1,param_2,puVar3);
        }
      }
      puVar2 = puVar3 + 1;
      if (puVar2 != puVar4) {
        lVar9 = FUN_01a45624(*puVar2);
        if (lVar9 == *param_2) {
          uVar6 = FUN_0289cb9c(*puVar2);
          if ((uVar6 & 1) == 0) {
            local_60 = FUN_013fcabc(*puVar2);
            local_68 = *param_2;
            FUN_0289b700(lVar1,&local_68);
          }
          else {
            FUN_0289cba4(param_1,param_2,puVar2);
          }
        }
        for (puVar3 = puVar3 + 2; puVar3 != puVar4; puVar3 = puVar3 + 1) {
          lVar9 = FUN_01a45624(*puVar3);
          if (lVar9 == *param_2) {
            uVar6 = FUN_0289cb9c(*puVar3);
            if ((uVar6 & 1) == 0) {
              local_60 = FUN_013fcabc(*puVar3);
              local_68 = *param_2;
              FUN_0289b700(lVar1,&local_68);
            }
            else {
              FUN_0289cba4(param_1,param_2,puVar3);
            }
          }
        }
      }
    }
  }
  plVar13 = *(long **)(param_1 + 0x358);
  plVar7 = *(long **)(param_1 + 0x350);
  while (plVar7 != plVar13) {
    if (*plVar7 == *param_2) {
      plVar12 = plVar7;
      if (plVar7 + 2 != plVar13) {
        plVar11 = plVar7;
        do {
          plVar12 = plVar11 + 2;
          *plVar11 = *plVar12;
          *(char *)(plVar11 + 1) = (char)plVar11[3];
          plVar11 = plVar12;
        } while (plVar13 + -2 != plVar12);
      }
      plVar13 = plVar12;
      *(long **)(param_1 + 0x358) = plVar13;
    }
    else {
      plVar7 = plVar7 + 2;
    }
  }
  return;
}


