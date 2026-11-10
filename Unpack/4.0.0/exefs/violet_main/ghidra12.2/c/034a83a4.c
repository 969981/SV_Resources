/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a83a4; name: FUN_034a83a4
 */


uint FUN_034a83a4(long param_1,long param_2)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 auStack_58 [4];
  undefined2 local_54 [2];
  
  lVar10 = *(long *)(param_2 + 0x88);
  if ((lVar10 == 0) || (plVar12 = *(long **)(lVar10 + 0x18), plVar12 == (long *)0x0)) {
    uVar6 = 2;
  }
  else {
    iVar5 = *(int *)(param_2 + 0x38);
    if (iVar5 != 0) {
      uVar15 = (ulong)(iVar5 - 1);
      do {
        if (((uint)uVar15 < 0x20) && ((*(uint *)(param_2 + 0x7c) >> (uVar15 & 0x3f) & 1) != 0))
        break;
        *(uint *)(param_2 + 0x38) = (uint)uVar15;
        uVar15 = uVar15 - 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      plVar12 = *(long **)(lVar10 + 0x18);
    }
    local_54[0] = 0;
    uVar6 = *(uint *)(plVar12 + 1);
    if (uVar6 != 0) {
      puVar8 = (undefined8 *)(lVar10 + 0x18);
LAB_034a8424:
      lVar10 = *plVar12 + (ulong)uVar6 * 0x28;
      if (*(long *)(lVar10 + -0x10) != 0) {
        FUN_03499b7c(*(long *)(lVar10 + -0x10),*(undefined8 *)(lVar10 + -8),puVar8);
        plVar12 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
        lVar10 = *plVar12 + (ulong)*(uint *)(plVar12 + 1) * 0x28;
        if (*(long **)(lVar10 + -0x20) != (long *)0x0) {
          (**(code **)(**(long **)(lVar10 + -0x20) + 0x10))();
          *(undefined8 *)(lVar10 + -0x20) = 0;
        }
        if (*(long **)(lVar10 + -0x10) != (long *)0x0) {
          (**(code **)(**(long **)(lVar10 + -0x10) + 0x30))();
          *(undefined8 *)(lVar10 + -0x10) = 0;
        }
        plVar7 = *(long **)(lVar10 + -0x28);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x30))();
          *(long *)(lVar10 + -0x28) = 0;
        }
        *(int *)(plVar12 + 1) = (int)plVar12[1] + -1;
        lVar10 = *(long *)(param_2 + 0x88);
        if (*(long *)(lVar10 + 0x18) != 0) goto LAB_034a8584;
        uVar6 = 3;
        goto LAB_034a85a4;
      }
      plVar12 = (long *)FUN_034c10c4(*(long *)(lVar10 + -0x28),*(undefined8 *)(param_2 + 0x10),
                                     local_54,auStack_58,lVar10 + -0x20,lVar10 + -0x18);
      if (plVar12 == (long *)0x0) {
        iVar5 = *(int *)(param_2 + 0x38);
        iVar9 = iVar5 + -1;
        *(int *)(param_2 + 0x38) = iVar9;
        if (iVar9 != 0) {
          uVar15 = (ulong)(iVar5 - 2);
          do {
            if (((uint)uVar15 < 0x20) && ((*(uint *)(param_2 + 0x7c) >> (uVar15 & 0x3f) & 1) != 0))
            break;
            *(uint *)(param_2 + 0x38) = (uint)uVar15;
            uVar15 = uVar15 - 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        plVar12 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
        lVar10 = *plVar12 + (ulong)*(uint *)(plVar12 + 1) * 0x28;
        if (*(long **)(lVar10 + -0x20) != (long *)0x0) {
          (**(code **)(**(long **)(lVar10 + -0x20) + 0x10))();
          *(undefined8 *)(lVar10 + -0x20) = 0;
        }
        if (*(long **)(lVar10 + -0x10) != (long *)0x0) {
          (**(code **)(**(long **)(lVar10 + -0x10) + 0x30))();
          *(undefined8 *)(lVar10 + -0x10) = 0;
        }
        plVar7 = *(long **)(lVar10 + -0x28);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x30))();
          *(long *)(lVar10 + -0x28) = 0;
        }
        *(int *)(plVar12 + 1) = (int)plVar12[1] + -1;
        lVar10 = *(long *)(param_2 + 0x88);
        goto LAB_034a8584;
      }
      *(undefined2 *)(param_2 + 0x38 + (ulong)(*(int *)(param_2 + 0x38) - 1) * 2 + 4) = local_54[0];
      lVar3 = plVar12[3];
      (**(code **)(*plVar12 + 0x30))();
      lVar10 = *(long *)(lVar10 + -0x28);
      local_90 = *(undefined8 *)(param_2 + 0x10);
      local_88 = *(undefined4 *)(param_2 + 0x34);
      bVar2 = *(byte *)(lVar10 + 0x144);
      local_78 = 0xff;
      local_70 = 0xff;
      local_68 = 0;
      local_80 = 0;
      fVar18 = *(float *)(lVar10 + 0x134);
      fVar21 = *(float *)(lVar10 + 0x138) - fVar18;
      fVar17 = *(float *)(lVar10 + 0x130);
      if (fVar21 == 0.0) {
        fVar21 = 0.0;
      }
      else {
        lVar13 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
        *(long *)PTR_DAT_047e7068 = lVar13;
        fVar21 = fVar21 * (float)(uint)((ulong)lVar13 >> 0x21) * 4.656613e-10;
      }
      fVar21 = fVar18 + fVar17 + fVar21;
      if (((*(long *)(lVar10 + 0x40) != 0) && (*(char *)(*(long *)(lVar10 + 0x40) + 1) < '\0')) ||
         (uVar15 = (**(code **)(*(long *)(lVar10 + 0x20) + 0x20))((long *)(lVar10 + 0x20),0xf),
         (uVar15 & 1) != 0)) {
        fVar17 = (float)FUN_034a9a38(lVar10,0xf,&local_90);
        fVar21 = fVar21 + fVar17 * 1000.0;
      }
      if ((int)lVar3 != 0) {
        lVar10 = *(long *)(param_2 + 0x88);
        plVar12 = (long *)FUN_0345f330(0x503,0,lVar10 + 0x18);
        if (plVar12 != (long *)0x0) {
          *(undefined4 *)(plVar12 + 0x1d) = *(undefined4 *)(lVar10 + 0x20);
          memcpy(plVar12 + 0xd,(void *)(param_2 + 0x38),0x44);
          *(undefined4 *)((long)plVar12 + 0xac) = *(undefined4 *)(param_2 + 0x7c);
          (**(code **)(*plVar12 + 0x28))(plVar12,(int)lVar3);
          plVar7 = *(long **)(param_2 + 8);
          plVar12[0x1c] = (long)plVar7;
          (**(code **)(*plVar7 + 0x10))();
          *(byte *)((long)plVar12 + 0x36) =
               (*(byte *)(param_2 + 0x290) & 4) << 5 | *(byte *)((long)plVar12 + 0x36) & 0x7f;
          *(undefined4 *)(plVar12 + 0x18) = *(undefined4 *)(param_2 + 0x90);
          *(byte *)((long)plVar12 + 0xc5) = *(byte *)(param_2 + 0x290) >> 1 & 1;
          *(undefined4 *)((long)plVar12 + 0xbc) = *(undefined4 *)(param_2 + 0x80);
          plVar7 = *(long **)(param_2 + 0x18);
          if (plVar7 != (long *)0x0) {
            lVar10 = *plVar7;
            *(int *)(plVar12 + 0x20) = (int)plVar7[1];
            plVar12[0x1f] = lVar10;
          }
          iVar5 = FUN_034a7dd0(param_1);
          if (iVar5 == 2) {
            uVar6 = 1;
          }
          else {
            do {
              puVar1 = (uint *)(param_1 + 0xda);
              param_1 = *(long *)(param_1 + 0x98);
            } while (param_1 != 0 && (*puVar1 & 0x800000) == 0);
            uVar6 = *puVar1 >> 0x19 & 2;
          }
          piVar11 = *(int **)(param_2 + 0xa8);
          uVar14 = *(undefined8 *)(param_2 + 0x98);
          *(undefined4 *)((long)plVar12 + 0x10c) = *(undefined4 *)(param_2 + 0xa0);
          *(undefined8 *)((long)plVar12 + 0x104) = uVar14;
          plVar12[0x22] = (long)piVar11;
          if (piVar11 != (int *)0x0) {
            *piVar11 = *piVar11 + 1;
            lVar10 = plVar12[0x22];
            puVar16 = (undefined8 *)(lVar10 + 0x80);
            puVar8 = (undefined8 *)*puVar16;
            if (puVar8 == (undefined8 *)0x0) {
              puVar8 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x18);
              if (puVar8 == (undefined8 *)0x0) goto LAB_034a88ac;
              *puVar8 = *puVar16;
              *puVar16 = puVar8;
            }
            if (*(undefined8 **)(lVar10 + 0x78) == (undefined8 *)0x0) {
              *(undefined8 **)(lVar10 + 0x70) = puVar8;
            }
            else {
              **(undefined8 **)(lVar10 + 0x78) = puVar8;
              puVar8 = (undefined8 *)*puVar16;
            }
            *(undefined8 **)(lVar10 + 0x78) = puVar8;
            *(undefined8 *)(lVar10 + 0x80) = *puVar8;
            *puVar8 = 0;
            *(int *)(lVar10 + 0x94) = *(int *)(lVar10 + 0x94) + 1;
            lVar10 = *(long *)(lVar10 + 0x78);
            *(uint *)(lVar10 + 8) = uVar6;
            *(long **)(lVar10 + 0x10) = plVar12;
          }
LAB_034a88ac:
          puVar4 = PTR_DAT_047e2fd0;
          lVar10 = *(long *)(param_2 + 0x88);
          bVar2 = bVar2 & 0xf;
          if ((int)plVar12[0x24] != 0) {
            plVar7 = (long *)plVar12[0x23];
            do {
              *(int *)(*plVar7 + 0x84) = *(int *)(*plVar7 + 0x84) + -1;
              puVar8 = (undefined8 *)*plVar7;
              iVar5 = *(int *)((long)puVar8 + 0x74) + -1;
              *(int *)((long)puVar8 + 0x74) = iVar5;
              if (iVar5 == 0) {
                (**(code **)*puVar8)(puVar8);
                (**(code **)(puVar4 + 0x30))(0,puVar8);
              }
              plVar7 = plVar7 + 1;
            } while (plVar7 != (long *)(plVar12[0x23] + (ulong)*(uint *)(plVar12 + 0x24) * 8));
          }
          *(undefined4 *)(plVar12 + 0x24) = 0;
          FUN_03499328(plVar12 + 0x23,lVar10 + 0x28);
          iVar5 = (uint)*(ushort *)PTR_DAT_047e6d08 * 10;
          if ((bVar2 == 5) || (bVar2 == 3)) {
            dVar19 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
            dVar19 = (double)fVar21 * 0.001 * dVar19;
            dVar20 = 0.5;
            if (dVar19 <= 0.0) {
              dVar20 = -0.5;
            }
            iVar9 = (int)(dVar20 + dVar19);
            if (iVar5 <= iVar9) {
              iVar5 = iVar9;
            }
          }
          uVar6 = FUN_034a7ba0(*(undefined8 *)(param_2 + 0x88),param_2,iVar5,plVar12);
          (**(code **)(*plVar12 + 0x18))(plVar12);
          goto LAB_034a85a4;
        }
      }
    }
LAB_034a8590:
    uVar6 = 2;
LAB_034a85a4:
    if ((uVar6 & 0xfffffffd) != 1) {
      lVar10 = *(long *)(*(long *)(param_2 + 0x88) + 0x18);
      if (lVar10 != 0) {
        *(undefined8 *)(*(long *)(param_2 + 0x88) + 0x18) = 0;
        iVar5 = *(int *)(lVar10 + 0x10) + -1;
        *(int *)(lVar10 + 0x10) = iVar5;
        if (iVar5 == 0) {
          FUN_034783fc(lVar10);
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar10);
        }
      }
    }
    if (uVar6 == 3) {
      uVar6 = 1;
    }
  }
  return uVar6;
LAB_034a8584:
  puVar8 = (undefined8 *)(lVar10 + 0x18);
  plVar12 = (long *)*puVar8;
  uVar6 = *(uint *)(plVar12 + 1);
  if (uVar6 == 0) goto LAB_034a8590;
  goto LAB_034a8424;
}


