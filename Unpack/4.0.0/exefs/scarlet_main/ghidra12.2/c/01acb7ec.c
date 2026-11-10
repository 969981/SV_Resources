/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01acb7ec; name: FUN_01acb7ec
 */


void FUN_01acb7ec(long param_1,int param_2,int param_3,int param_4,int param_5,byte *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  long *plVar17;
  undefined2 local_68;
  
  lVar16 = *(long *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(lVar16 + 8);
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar5 + 0x30) = DAT_04859430;
  }
  puVar15 = &DAT_cbf29ce484222645;
  uVar1 = *(undefined8 *)(lVar5 + 0x30);
  uVar2 = *(undefined8 *)(lVar5 + 0x38);
  *(undefined8 *)(lVar5 + 0x30) = uVar7;
  *(undefined2 *)(lVar5 + 0x38) = 1;
  snprintf((char *)param_6,0xb,"%04d_%02d_%02d",param_2,param_3,param_4);
  plVar17 = (long *)(lVar16 + (long)param_5 * 8 + 0x98);
  bVar3 = *param_6;
  puVar8 = &DAT_cbf29ce484222645;
  if (bVar3 != 0) {
    puVar8 = &DAT_cbf29ce484222645;
    pbVar10 = param_6;
    do {
      pbVar10 = pbVar10 + 1;
      puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
    } while (bVar3 != 0);
  }
  puVar9 = *(undefined1 **)(*plVar17 + 0x48);
  if (puVar9 != (undefined1 *)0x0) {
    uVar11 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar12 = (undefined1 *)((ulong)(puVar9 + -1) & (ulong)puVar8);
    }
    else {
      puVar12 = puVar8;
      if (puVar9 <= puVar8) {
        uVar4 = 0;
        if (puVar9 != (undefined1 *)0x0) {
          uVar4 = (ulong)puVar8 / (ulong)puVar9;
        }
        puVar12 = puVar8 + -(uVar4 * (long)puVar9);
      }
    }
    plVar13 = *(long **)(*(long *)(*plVar17 + 0x40) + (long)puVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((undefined1 *)plVar13[1] == puVar8) {
            if ((undefined1 *)plVar13[2] == puVar8) goto LAB_01acb95c;
          }
          else if ((undefined1 *)((ulong)plVar13[1] & (ulong)(puVar9 + -1)) != puVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          puVar14 = (undefined1 *)plVar13[1];
          if (puVar14 == puVar8) {
            if ((undefined1 *)plVar13[2] == puVar8) goto LAB_01acb95c;
          }
          else {
            if (puVar9 <= puVar14) {
              uVar11 = 0;
              if (puVar9 != (undefined1 *)0x0) {
                uVar11 = (ulong)puVar14 / (ulong)puVar9;
              }
              puVar14 = puVar14 + -(uVar11 * (long)puVar9);
            }
            if (puVar14 != puVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  snprintf((char *)param_6,0xb,"%04d_%02d_%02d",param_2,param_3,(uint)(param_4 == 0));
  puVar8 = &DAT_cbf29ce484222645;
  bVar3 = *param_6;
  if (bVar3 != 0) {
    puVar8 = &DAT_cbf29ce484222645;
    pbVar10 = param_6;
    do {
      pbVar10 = pbVar10 + 1;
      puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
    } while (bVar3 != 0);
  }
  puVar9 = *(undefined1 **)(*plVar17 + 0x48);
  if (puVar9 != (undefined1 *)0x0) {
    uVar11 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar12 = (undefined1 *)((ulong)(puVar9 + -1) & (ulong)puVar8);
    }
    else {
      puVar12 = puVar8;
      if (puVar9 <= puVar8) {
        uVar4 = 0;
        if (puVar9 != (undefined1 *)0x0) {
          uVar4 = (ulong)puVar8 / (ulong)puVar9;
        }
        puVar12 = puVar8 + -(uVar4 * (long)puVar9);
      }
    }
    plVar13 = *(long **)(*(long *)(*plVar17 + 0x40) + (long)puVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((undefined1 *)plVar13[1] == puVar8) {
            if ((undefined1 *)plVar13[2] == puVar8) goto LAB_01acb95c;
          }
          else if ((undefined1 *)((ulong)plVar13[1] & (ulong)(puVar9 + -1)) != puVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          puVar14 = (undefined1 *)plVar13[1];
          if (puVar14 == puVar8) {
            if ((undefined1 *)plVar13[2] == puVar8) goto LAB_01acb95c;
          }
          else {
            if (puVar9 <= puVar14) {
              uVar11 = 0;
              if (puVar9 != (undefined1 *)0x0) {
                uVar11 = (ulong)puVar14 / (ulong)puVar9;
              }
              puVar14 = puVar14 + -(uVar11 * (long)puVar9);
            }
            if (puVar14 != puVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  snprintf((char *)param_6,0xb,"%04d_00_%02d",param_2,param_4);
  puVar8 = &DAT_cbf29ce484222645;
  bVar3 = *param_6;
  if (bVar3 != 0) {
    puVar8 = &DAT_cbf29ce484222645;
    pbVar10 = param_6;
    do {
      pbVar10 = pbVar10 + 1;
      puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
    } while (bVar3 != 0);
  }
  puVar9 = *(undefined1 **)(*plVar17 + 0x48);
  if (puVar9 != (undefined1 *)0x0) {
    uVar11 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar12 = (undefined1 *)((ulong)(puVar9 + -1) & (ulong)puVar8);
    }
    else {
      puVar12 = puVar8;
      if (puVar9 <= puVar8) {
        uVar4 = 0;
        if (puVar9 != (undefined1 *)0x0) {
          uVar4 = (ulong)puVar8 / (ulong)puVar9;
        }
        puVar12 = puVar8 + -(uVar4 * (long)puVar9);
      }
    }
    plVar13 = *(long **)(*(long *)(*plVar17 + 0x40) + (long)puVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((undefined1 *)plVar13[1] == puVar8) {
            if ((undefined1 *)plVar13[2] == puVar8) goto LAB_01acb95c;
          }
          else if ((undefined1 *)((ulong)plVar13[1] & (ulong)(puVar9 + -1)) != puVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          puVar14 = (undefined1 *)plVar13[1];
          if (puVar14 == puVar8) {
            if ((undefined1 *)plVar13[2] == puVar8) goto LAB_01acb95c;
          }
          else {
            if (puVar9 <= puVar14) {
              uVar11 = 0;
              if (puVar9 != (undefined1 *)0x0) {
                uVar11 = (ulong)puVar14 / (ulong)puVar9;
              }
              puVar14 = puVar14 + -(uVar11 * (long)puVar9);
            }
            if (puVar14 != puVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  snprintf((char *)param_6,0xb,"%04d_00_%02d",param_2,(uint)(param_4 == 0));
  bVar3 = *param_6;
  pbVar10 = param_6;
  while (bVar3 != 0) {
    pbVar10 = pbVar10 + 1;
    puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar3) * 0x100000001b3);
    bVar3 = *pbVar10;
  }
  puVar8 = *(undefined1 **)(*plVar17 + 0x48);
  if (puVar8 != (undefined1 *)0x0) {
    uVar11 = (long)puVar8 - ((ulong)puVar8 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar9 = (undefined1 *)((ulong)(puVar8 + -1) & (ulong)puVar15);
    }
    else {
      puVar9 = puVar15;
      if (puVar8 <= puVar15) {
        uVar4 = 0;
        if (puVar8 != (undefined1 *)0x0) {
          uVar4 = (ulong)puVar15 / (ulong)puVar8;
        }
        puVar9 = puVar15 + -(uVar4 * (long)puVar8);
      }
    }
    plVar17 = *(long **)(*(long *)(*plVar17 + 0x40) + (long)puVar9 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((undefined1 *)plVar17[1] == puVar15) {
            if ((undefined1 *)plVar17[2] == puVar15) goto LAB_01acb95c;
          }
          else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar8 + -1)) != puVar9) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          puVar12 = (undefined1 *)plVar17[1];
          if (puVar12 == puVar15) {
            if ((undefined1 *)plVar17[2] == puVar15) goto LAB_01acb95c;
          }
          else {
            if (puVar8 <= puVar12) {
              uVar11 = 0;
              if (puVar8 != (undefined1 *)0x0) {
                uVar11 = (ulong)puVar12 / (ulong)puVar8;
              }
              puVar12 = puVar12 + -(uVar11 * (long)puVar8);
            }
            if (puVar12 != puVar9) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  param_6[7] = 0x5f;
  param_6[8] = 0x30;
  param_6[9] = 0x30;
  param_6[10] = 0;
  *(undefined8 *)param_6 = s_0025_00_00_03c27655._0_8_;
LAB_01acb95c:
  *(undefined8 *)(lVar5 + 0x30) = uVar1;
  local_68 = (undefined2)uVar2;
  *(undefined2 *)(lVar5 + 0x38) = local_68;
  return;
}


