/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fa9080; name: FUN_02fa9080
 */


void FUN_02fa9080(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong local_68;
  
  plVar20 = (long *)PTR_PTR_047d1a50;
  uVar18 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar8 = uVar18 * 2;
  if (uVar8 <= param_2) {
    uVar8 = param_2;
  }
  if (0x7ffffffe < uVar8) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar8 = 0x7ffffffe;
  }
  puVar3 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar8 * 0x210,&local_68)
  ;
  iVar17 = *(int *)(param_1 + 1);
  if (0 < iVar17) {
    plVar15 = (long *)*param_1;
    iVar16 = 0;
    puVar14 = puVar3;
    plVar9 = plVar15;
    do {
      *puVar14 = 0;
      puVar14[2] = puVar14 + 6;
      puVar14[3] = 0x8000001800000000;
      uVar4 = FUN_0220e630(&DAT_046117a0,"Not implemented");
      if ((uVar4 & 1) != 0) {
        CallSupervisor(0x26);
      }
      lVar13 = plVar9[0x20];
      *(undefined8 *)((long)puVar14 + 0x106) = *(undefined8 *)((long)plVar9 + 0x106);
      puVar14[0x20] = lVar13;
      puVar14[0x22] = 0;
      puVar14[0x23] = 0x8000000000000000;
      uVar7 = *(uint *)(plVar9 + 0x23);
      if ((int)uVar7 < 1) {
        puVar14[0x22] = 0;
        puVar14[0x23] = 0x8000000000000000;
      }
      else {
        puVar19 = (undefined8 *)plVar9[0x22];
        puVar5 = (undefined8 *)
                 (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar7 << 3)
        ;
        uVar2 = uVar7 & 7;
        puVar14[0x22] = puVar5;
        *(uint *)(puVar14 + 0x23) = uVar7;
        *(uint *)((long)puVar14 + 0x11c) = uVar7;
        if (6 < uVar7 - 1) {
          iVar11 = -(uVar7 & 0xfffffff8);
          puVar6 = puVar5;
          do {
            *puVar6 = *puVar19;
            puVar6[1] = puVar19[1];
            puVar6[2] = puVar19[2];
            puVar6[3] = puVar19[3];
            puVar6[4] = puVar19[4];
            puVar6[5] = puVar19[5];
            puVar6[6] = puVar19[6];
            puVar1 = puVar19 + 7;
            puVar5 = puVar6 + 8;
            puVar19 = puVar19 + 8;
            iVar11 = iVar11 + 8;
            puVar6[7] = *puVar1;
            puVar6 = puVar5;
          } while (iVar11 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar19;
          puVar5 = puVar5 + 1;
          puVar19 = puVar19 + 1;
        }
      }
      memcpy(puVar14 + 0x24,plVar9 + 0x24,0xd0);
      puVar14[0x3e] = plVar9[0x3e];
      plVar20 = plVar9 + 0x40;
      iVar16 = iVar16 + 1;
      plVar9 = plVar9 + 0x42;
      *(char *)(puVar14 + 0x40) = (char)*plVar20;
      plVar20 = (long *)PTR_PTR_047d1a50;
      puVar14 = puVar14 + 0x42;
    } while (iVar16 != iVar17);
    iVar16 = 0;
    do {
      if (plVar15[0x20] != 0) {
        uVar7 = *(uint *)(plVar15 + 0x23);
        if (*(char *)((long)plVar15 + 0x10c) != '\0') {
          plVar9 = (long *)plVar15[0x22];
          if ((int)uVar7 < 1) {
            plVar12 = plVar9;
          }
          else {
            uVar2 = uVar7 & 3;
            plVar12 = plVar9;
            if (2 < uVar7 - 1) {
              iVar11 = -(uVar7 & 0xfffffffc);
              do {
                plVar10 = plVar9;
                if (*plVar12 != 0) {
                  plVar10 = plVar9 + 1;
                  *plVar9 = *plVar12;
                }
                plVar9 = plVar10;
                if (plVar12[1] != 0) {
                  plVar9 = plVar10 + 1;
                  *plVar10 = plVar12[1];
                }
                plVar10 = plVar9;
                if (plVar12[2] != 0) {
                  plVar10 = plVar9 + 1;
                  *plVar9 = plVar12[2];
                }
                plVar9 = plVar10;
                if (plVar12[3] != 0) {
                  plVar9 = plVar10 + 1;
                  *plVar10 = plVar12[3];
                }
                plVar12 = plVar12 + 4;
                iVar11 = iVar11 + 4;
              } while (iVar11 != 0);
            }
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              plVar10 = plVar9;
              if (*plVar12 != 0) {
                plVar10 = plVar9 + 1;
                *plVar9 = *plVar12;
              }
              plVar9 = plVar10;
              plVar12 = plVar12 + 1;
            }
            plVar12 = (long *)plVar15[0x22];
          }
          uVar7 = (uint)((ulong)((long)plVar9 - (long)plVar12) >> 3);
          *(undefined1 *)((long)plVar15 + 0x10c) = 0;
        }
        if (uVar7 != 0) {
          (**(code **)(*(long *)plVar15[0x20] + 0x28))((long *)plVar15[0x20],plVar15[0x22]);
        }
        *(undefined4 *)(plVar15 + 0x23) = 0;
        *(undefined4 *)(plVar15 + 0x21) = 0;
      }
      *(undefined4 *)(plVar15 + 0x23) = 0;
      if ((-1 < (int)*(uint *)((long)plVar15 + 0x11c)) && (plVar15[0x22] != 0)) {
        (**(code **)(*plVar20 + 0x20))
                  (plVar20,plVar15[0x22],(ulong)*(uint *)((long)plVar15 + 0x11c) << 3);
      }
      plVar15[0x22] = 0;
      *(undefined4 *)((long)plVar15 + 0x11c) = 0x80000000;
      if (*plVar15 != 0) {
        uVar7 = *(uint *)(plVar15 + 3);
        if (*(char *)((long)plVar15 + 0xc) != '\0') {
          plVar9 = (long *)plVar15[2];
          if ((int)uVar7 < 1) {
            plVar12 = plVar9;
          }
          else {
            uVar2 = uVar7 & 3;
            plVar12 = plVar9;
            if (2 < uVar7 - 1) {
              iVar11 = -(uVar7 & 0xfffffffc);
              do {
                plVar10 = plVar9;
                if (*plVar12 != 0) {
                  plVar10 = plVar9 + 1;
                  *plVar9 = *plVar12;
                }
                plVar9 = plVar10;
                if (plVar12[1] != 0) {
                  plVar9 = plVar10 + 1;
                  *plVar10 = plVar12[1];
                }
                plVar10 = plVar9;
                if (plVar12[2] != 0) {
                  plVar10 = plVar9 + 1;
                  *plVar9 = plVar12[2];
                }
                plVar9 = plVar10;
                if (plVar12[3] != 0) {
                  plVar9 = plVar10 + 1;
                  *plVar10 = plVar12[3];
                }
                plVar12 = plVar12 + 4;
                iVar11 = iVar11 + 4;
              } while (iVar11 != 0);
            }
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              plVar10 = plVar9;
              if (*plVar12 != 0) {
                plVar10 = plVar9 + 1;
                *plVar9 = *plVar12;
              }
              plVar9 = plVar10;
              plVar12 = plVar12 + 1;
            }
            plVar12 = (long *)plVar15[2];
          }
          uVar7 = (uint)((ulong)((long)plVar9 - (long)plVar12) >> 3);
          *(undefined1 *)((long)plVar15 + 0xc) = 0;
        }
        if (uVar7 != 0) {
          (**(code **)(*(long *)*plVar15 + 0x28))((long *)*plVar15,plVar15[2]);
        }
        *(undefined4 *)(plVar15 + 3) = 0;
        *(undefined4 *)(plVar15 + 1) = 0;
      }
      *(undefined4 *)(plVar15 + 3) = 0;
      if ((-1 < (int)*(uint *)((long)plVar15 + 0x1c)) && (plVar15[2] != 0)) {
        (**(code **)(*plVar20 + 0x20))
                  (plVar20,plVar15[2],(ulong)*(uint *)((long)plVar15 + 0x1c) << 3);
      }
      iVar16 = iVar16 + 1;
      plVar15[2] = 0;
      *(undefined4 *)((long)plVar15 + 0x1c) = 0x80000000;
      plVar15 = plVar15 + 0x42;
    } while (iVar16 != iVar17);
  }
  iVar17 = (int)uVar8;
  uVar4 = uVar8 * 0x210 + 0x210;
  if (uVar4 <= local_68) {
    local_68 = local_68 - 0x210;
    iVar16 = iVar17 + 1 + (int)((local_68 + uVar8 * -0x210) / 0x210);
    if (local_68 < uVar4) {
      iVar16 = iVar17 + 1;
    }
    iVar17 = iVar16;
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar20 + 0x20))(plVar20,*param_1,uVar18 * 0x210);
  }
  *(int *)((long)param_1 + 0xc) = iVar17;
  *param_1 = puVar3;
  return;
}


