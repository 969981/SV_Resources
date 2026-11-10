/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b5404; name: FUN_034b5404
 */


undefined8 FUN_034b5404(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  puVar5 = PTR_DAT_047e2fd0;
  if ((int)param_1[1] != 0) {
    lVar12 = *(long *)*param_1;
    if (lVar12 == 0) {
      uVar6 = 0;
      do {
        if ((int)param_1[1] - 1 == uVar6) goto LAB_034b55e0;
        uVar6 = uVar6 + 1;
        lVar12 = ((long *)*param_1)[uVar6 & 0xffffffff];
      } while (lVar12 == 0);
    }
    else {
      uVar6 = 0;
    }
    uVar14 = uVar6 & 0xffffffff;
    do {
      lVar9 = *(long *)(lVar12 + 8);
      lVar15 = lVar9;
      if (lVar9 == 0) {
        uVar4 = *(uint *)(param_1 + 1);
        uVar10 = uVar6 & 0xffffffff;
        uVar3 = uVar4;
        if (uVar4 <= (int)uVar6 + 1U) {
          uVar3 = (int)uVar6 + 1;
        }
        uVar14 = (ulong)uVar3;
        do {
          uVar3 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar3;
          if (uVar4 <= uVar3) {
            lVar15 = 0;
            goto LAB_034b54bc;
          }
          lVar15 = *(long *)(*param_1 + (ulong)uVar3 * 8);
        } while (lVar15 == 0);
        uVar14 = uVar10;
      }
LAB_034b54bc:
      *(long *)(*param_1 + (uVar6 & 0xffffffff) * 8) = lVar9;
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0xff;
      local_70 = 0xff;
      local_68 = 0;
      puVar16 = (undefined8 *)(lVar12 + 0x40);
      puVar13 = (undefined8 *)*puVar16;
      if (puVar13 != (undefined8 *)0x0) {
        puVar7 = puVar13;
        do {
          puVar11 = puVar16;
          if (puVar7 != puVar13) {
            puVar11 = (undefined8 *)&DAT_00000008;
          }
          *puVar11 = puVar13[1];
          lVar12 = puVar13[2];
          *puVar13 = &PTR_LAB_047c4410;
          if (lVar12 != 0) {
            puVar11 = *(undefined8 **)(lVar12 + 0x28);
            uVar3 = *(uint *)(lVar12 + 0x30);
            puVar7 = puVar11 + uVar3;
            if (uVar3 != 0) {
              if ((undefined8 *)*puVar11 != puVar13) {
                lVar15 = (ulong)uVar3 * 8;
                do {
                  lVar15 = lVar15 + -8;
                  puVar2 = puVar11 + 1;
                  if (lVar15 == 0) {
                    puVar11 = puVar7;
                    break;
                  }
                  puVar1 = puVar11 + 1;
                  puVar11 = puVar2;
                } while ((undefined8 *)*puVar1 != puVar13);
              }
              if (puVar7 != puVar11) {
                if (uVar3 < 2) {
                  iVar8 = 0;
                }
                else {
                  *puVar11 = puVar7[-1];
                  iVar8 = *(int *)(lVar12 + 0x30) + -1;
                }
                *(int *)(lVar12 + 0x30) = iVar8;
              }
            }
          }
          (**(code **)(puVar5 + 0x30))(0,puVar13);
          puVar7 = (undefined8 *)*puVar16;
        } while( true );
      }
      FUN_034b4d58(lVar12 + 0x20,&local_90);
      puVar13 = *(undefined8 **)(lVar12 + 0x30);
      if (*(uint *)(lVar12 + 0x38) != 0) {
        lVar9 = (ulong)*(uint *)(lVar12 + 0x38) * 0x28;
        do {
          FUN_034b9cd0(puVar13);
          puVar13 = puVar13 + 5;
          lVar9 = lVar9 + -0x28;
        } while (lVar9 != 0);
        puVar13 = *(undefined8 **)(lVar12 + 0x30);
      }
      if (puVar13 != (undefined8 *)0x0) {
        if (*(uint *)(lVar12 + 0x38) != 0) {
          lVar9 = (ulong)*(uint *)(lVar12 + 0x38) * 0x28;
          do {
            (**(code **)*puVar13)(puVar13);
            lVar9 = lVar9 + -0x28;
            puVar13 = puVar13 + 5;
          } while (lVar9 != 0);
          puVar13 = *(undefined8 **)(lVar12 + 0x30);
        }
        *(undefined4 *)(lVar12 + 0x38) = 0;
        (**(code **)(puVar5 + 0x30))(0,puVar13);
        *(undefined8 *)(lVar12 + 0x30) = 0;
        *(undefined4 *)(lVar12 + 0x3c) = 0;
      }
      if (*(long *)(lVar12 + 0x48) != 0) {
        *(undefined4 *)(lVar12 + 0x50) = 0;
        (**(code **)(puVar5 + 0x30))(0);
        *(undefined8 *)(lVar12 + 0x48) = 0;
        *(undefined4 *)(lVar12 + 0x54) = 0;
      }
      if (*(long *)(lVar12 + 0x58) != 0) {
        *(undefined4 *)(lVar12 + 0x60) = 0;
        (**(code **)(puVar5 + 0x30))(0);
        *(undefined8 *)(lVar12 + 0x58) = 0;
        *(undefined4 *)(lVar12 + 100) = 0;
      }
      *(undefined ***)(lVar12 + 0x20) = &PTR_LAB_047c4428;
      (**(code **)(puVar5 + 0x30))(0,lVar12);
      uVar6 = uVar14;
      lVar12 = lVar15;
    } while (lVar15 != 0);
  }
LAB_034b55e0:
  puVar5 = PTR_DAT_047e2fd0;
  if ((int)param_1[4] != 0) {
    lVar12 = *(long *)param_1[3];
    if (lVar12 == 0) {
      uVar6 = 0;
      do {
        if ((int)param_1[4] - 1 == uVar6) goto LAB_034b5780;
        uVar6 = uVar6 + 1;
        lVar12 = ((long *)param_1[3])[uVar6 & 0xffffffff];
      } while (lVar12 == 0);
    }
    else {
      uVar6 = 0;
    }
    uVar14 = uVar6 & 0xffffffff;
    do {
      lVar9 = *(long *)(lVar12 + 0x10);
      lVar15 = lVar9;
      if (lVar9 == 0) {
        uVar4 = *(uint *)(param_1 + 4);
        uVar10 = uVar6 & 0xffffffff;
        uVar3 = uVar4;
        if (uVar4 <= (int)uVar6 + 1U) {
          uVar3 = (int)uVar6 + 1;
        }
        uVar14 = (ulong)uVar3;
        do {
          uVar3 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar3;
          if (uVar4 <= uVar3) {
            lVar15 = 0;
            goto LAB_034b5724;
          }
          lVar15 = *(long *)(param_1[3] + (ulong)uVar3 * 8);
        } while (lVar15 == 0);
        uVar14 = uVar10;
      }
LAB_034b5724:
      *(long *)(param_1[3] + (uVar6 & 0xffffffff) * 8) = lVar9;
      *(int *)(param_1 + 5) = (int)param_1[5] + -1;
      FUN_034b5984(param_1,lVar12);
      if (*(long *)(lVar12 + 0x50) != 0) {
        *(undefined4 *)(lVar12 + 0x58) = 0;
        (**(code **)(puVar5 + 0x30))(0);
        *(undefined8 *)(lVar12 + 0x50) = 0;
        *(undefined4 *)(lVar12 + 0x5c) = 0;
      }
      (**(code **)(puVar5 + 0x30))(0,lVar12);
      uVar6 = uVar14;
      lVar12 = lVar15;
    } while (lVar15 != 0);
  }
LAB_034b5780:
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  }
  if (param_1[10] != 0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
  }
  if (param_1[0xc] != 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[0xe] = 0;
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
  }
  if (param_1[0x10] != 0) {
    *(undefined4 *)(param_1 + 0x11) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[0x10] = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0;
  }
  if (param_1[0x12] != 0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[0x12] = 0;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
  }
  if (param_1[0x14] != 0) {
    *(undefined4 *)(param_1 + 0x15) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[0x14] = 0;
    *(undefined4 *)((long)param_1 + 0xac) = 0;
  }
  if (param_1[0x16] != 0) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[0x16] = 0;
    *(undefined4 *)((long)param_1 + 0xbc) = 0;
  }
  if (param_1[0x18] != 0) {
    *(undefined4 *)(param_1 + 0x19) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[0x18] = 0;
    *(undefined4 *)((long)param_1 + 0xcc) = 0;
  }
  return 1;
}


