/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c1678; name: FUN_008c1678
 */


void FUN_008c1678(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined4 param_5,ushort *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  void *pvVar14;
  long *plVar15;
  long lVar16;
  undefined1 local_a0;
  undefined1 uStack_9f;
  undefined4 uStack_9e;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  param_1[1] = *(undefined8 *)(param_6 + 4);
  uVar3 = *param_6;
  *(undefined4 *)(param_1 + 2) = 0;
  if (param_3 != 0) {
    uVar4 = *param_6;
    if ((ulong)uVar4 == 0) {
      *(undefined4 *)(param_1 + 2) = 0;
    }
    else {
      if (uVar4 == 1) {
        uVar12 = 0;
        iVar10 = 0;
      }
      else {
        uVar12 = 0;
        iVar10 = 0;
        piVar13 = (int *)(*(long *)(param_6 + 4) + 0x3c);
        do {
          if (piVar13[-0xe] != 0) {
            iVar10 = iVar10 + 1;
          }
          uVar12 = uVar12 + 2;
          if (*piVar13 != 0) {
            iVar10 = iVar10 + 1;
          }
          piVar13 = piVar13 + 0x1c;
        } while (((ulong)uVar4 & 0xfffe) != uVar12);
      }
      if (((uVar4 & 1) != 0) && (*(int *)(*(long *)(param_6 + 4) + uVar12 * 0x38 + 4) != 0)) {
        iVar10 = iVar10 + 1;
      }
      *(int *)(param_1 + 2) = iVar10;
      if (iVar10 != 0) {
        plVar15 = *(long **)(param_1[8] + 0x10);
        *(long **)(param_1[8] + 0x10) = plVar15 + 0x1b;
        if (plVar15 != (long *)0x0) {
          *(undefined4 *)(plVar15 + 2) = 0;
          puVar1 = PTR_DAT_047d2100 + 0x10;
          plVar15[3] = 0;
          plVar15[4] = 0;
          plVar15[7] = 0;
          plVar15[5] = 0;
          plVar15[6] = 0;
          *plVar15 = (long)puVar1;
          plVar15[1] = -1;
          FUN_012abe74(plVar15 + 8);
          FUN_008f2548(plVar15 + 0x11);
          plVar15[0x1a] = -0x100000000;
        }
        *param_1 = plVar15;
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_9f = 0;
        uStack_9e = 0;
        uStack_9a = 0;
        uStack_98 = 0;
        uStack_96 = 0;
        uStack_94 = 0;
        FUN_008f050c(&local_a0);
        uStack_94 = 0x201;
        local_90 = 0xa0;
        uStack_9f = 2;
        uStack_88 = CONCAT44(uStack_88._4_4_,param_5);
        uStack_9a = 1;
        uStack_98 = 1;
        uStack_8c = param_4;
        uVar12 = (**(code **)(*(long *)*param_1 + 0x30))();
        if ((uVar12 & 1) == 0) {
          FUN_008b3eb0(*param_1,param_2,param_3,&local_a0,0);
        }
        uVar5 = *(uint *)(param_1 + 2);
        pvVar14 = *(void **)(param_1[8] + 0x10);
        *(void **)(param_1[8] + 0x10) = (void *)((long)pvVar14 + (long)(int)uVar5 * 0x28);
        if ((pvVar14 != (void *)0x0) && (0 < (int)uVar5)) {
          memset(pvVar14,0,(ulong)uVar5 * 0x28);
        }
        param_1[3] = pvVar14;
        uVar5 = *(uint *)(param_1 + 2);
        pvVar14 = *(void **)(param_1[8] + 0x10);
        *(void **)(param_1[8] + 0x10) = (void *)((long)pvVar14 + (long)(int)uVar5 * 0x28);
        if ((pvVar14 != (void *)0x0) && (0 < (int)uVar5)) {
          memset(pvVar14,0,(ulong)uVar5 * 0x28);
        }
        param_1[4] = pvVar14;
        if (uVar3 != 0) {
          uVar12 = 0;
          iVar10 = 0;
          puVar1 = PTR_DAT_047d24b8 + 0x10;
          do {
            if (*(int *)(param_1[1] + uVar12 * 0x38 + 4) != 0) {
              lVar16 = (long)iVar10;
              lVar8 = (lVar16 + (long)iVar10 * 4) * 8;
              *(undefined1 *)(param_1[4] + lVar8) = 0;
              *(undefined1 *)(param_1[4] + lVar8 + 1) = 0;
              *(undefined2 *)(param_1[4] + lVar8 + 4) = 1;
              *(undefined2 *)(param_1[4] + lVar8 + 2) = 0;
              lVar6 = param_1[1] + uVar12 * 0x38;
              lVar11 = param_1[4];
              uVar2 = *(undefined8 *)(lVar6 + 0x10);
              *(undefined8 *)(lVar11 + lVar8 + 0x18) = *(undefined8 *)(lVar6 + 8);
              *(undefined8 *)(lVar11 + lVar8 + 0x20) = uVar2;
              lVar6 = param_1[8];
              plVar15 = *(long **)(lVar6 + 0x10);
              lVar8 = param_1[4];
              *(long **)(lVar6 + 0x10) = plVar15 + 7;
              if (plVar15 != (long *)0x0) {
                lVar11 = lVar8 + lVar16 * 0x28;
                *(undefined4 *)(plVar15 + 2) = 0;
                *(undefined1 *)((long)plVar15 + 0x14) = 0;
                plVar15[5] = 0;
                *(undefined4 *)(plVar15 + 6) = 0x3dcccccd;
                *plVar15 = (long)puVar1;
                plVar15[1] = 0x3f80000000000000;
                plVar15[3] = lVar6;
                plVar15[4] = lVar11;
                uVar5 = *(uint *)(lVar11 + 0x18);
                uVar7 = (ulong)uVar5;
                if (uVar5 != 0) {
                  puVar9 = (ushort *)(*(long *)(lVar8 + lVar16 * 0x28 + 0x20) + 0x30);
                  do {
                    if ((((1 < puVar9[-0x18]) || (1 < puVar9[-0x10])) || (1 < puVar9[-8])) ||
                       (((1 < *puVar9 || (1 < puVar9[8])) || (1 < puVar9[0x10])))) {
                      *(undefined1 *)((long)plVar15 + 0x14) = 1;
                      break;
                    }
                    uVar7 = uVar7 - 1;
                    puVar9 = puVar9 + 0x30;
                  } while (uVar7 != 0);
                }
              }
              *(undefined4 *)(plVar15 + 6) = 0x3dcccccd;
              (**(code **)(*plVar15 + 0x10))(plVar15);
              iVar10 = iVar10 + 1;
              *(long **)(param_1[3] + lVar16 * 0x28 + 8) = plVar15;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar3);
        }
      }
    }
  }
  return;
}


