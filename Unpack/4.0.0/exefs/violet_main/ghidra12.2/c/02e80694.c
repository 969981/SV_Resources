/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e80694; name: FUN_02e80694
 */


void FUN_02e80694(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  long *plVar16;
  ulong local_68;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar14 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar7 = uVar14 * 2;
  if (uVar7 <= param_2) {
    uVar7 = param_2;
  }
  if (0x7ffffffe < uVar7) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar7 = 0x7ffffffe;
  }
  puVar4 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar7 * 0x110,&local_68)
  ;
  iVar13 = *(int *)(param_1 + 1);
  if (0 < iVar13) {
    plVar16 = (long *)*param_1;
    plVar9 = plVar16 + 0x20;
    puVar8 = puVar4;
    iVar15 = iVar13;
    do {
      *puVar8 = 0;
      puVar8[2] = puVar8 + 6;
      puVar8[3] = 0x8000001800000000;
      uVar5 = FUN_0220e630(&DAT_0460d298,"Not implemented");
      if ((uVar5 & 1) != 0) {
        CallSupervisor(0x26);
      }
      lVar2 = *plVar9;
      iVar15 = iVar15 + -1;
      plVar9 = plVar9 + 0x22;
      *(char *)(puVar8 + 0x20) = (char)lVar2;
      puVar8 = puVar8 + 0x22;
    } while (iVar15 != 0);
    iVar15 = 0;
    do {
      if (*plVar16 != 0) {
        uVar6 = *(uint *)(plVar16 + 3);
        if (*(char *)((long)plVar16 + 0xc) != '\0') {
          plVar9 = (long *)plVar16[2];
          if ((int)uVar6 < 1) {
            plVar11 = plVar9;
          }
          else {
            uVar1 = uVar6 & 3;
            plVar11 = plVar9;
            if (2 < uVar6 - 1) {
              iVar12 = -(uVar6 & 0xfffffffc);
              do {
                plVar10 = plVar9;
                if (*plVar11 != 0) {
                  plVar10 = plVar9 + 1;
                  *plVar9 = *plVar11;
                }
                plVar9 = plVar10;
                if (plVar11[1] != 0) {
                  plVar9 = plVar10 + 1;
                  *plVar10 = plVar11[1];
                }
                plVar10 = plVar9;
                if (plVar11[2] != 0) {
                  plVar10 = plVar9 + 1;
                  *plVar9 = plVar11[2];
                }
                plVar9 = plVar10;
                if (plVar11[3] != 0) {
                  plVar9 = plVar10 + 1;
                  *plVar10 = plVar11[3];
                }
                plVar11 = plVar11 + 4;
                iVar12 = iVar12 + 4;
              } while (iVar12 != 0);
            }
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              plVar10 = plVar9;
              if (*plVar11 != 0) {
                plVar10 = plVar9 + 1;
                *plVar9 = *plVar11;
              }
              plVar9 = plVar10;
              plVar11 = plVar11 + 1;
            }
            plVar11 = (long *)plVar16[2];
          }
          uVar6 = (uint)((ulong)((long)plVar9 - (long)plVar11) >> 3);
          *(undefined1 *)((long)plVar16 + 0xc) = 0;
        }
        if (uVar6 != 0) {
          (**(code **)(*(long *)*plVar16 + 0x28))((long *)*plVar16,plVar16[2]);
        }
        *(undefined4 *)(plVar16 + 3) = 0;
        *(undefined4 *)(plVar16 + 1) = 0;
      }
      *(undefined4 *)(plVar16 + 3) = 0;
      if ((-1 < (int)*(uint *)((long)plVar16 + 0x1c)) && (plVar16[2] != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))
                  (puVar3,plVar16[2],(ulong)*(uint *)((long)plVar16 + 0x1c) << 3);
      }
      iVar15 = iVar15 + 1;
      plVar16[2] = 0;
      *(undefined4 *)((long)plVar16 + 0x1c) = 0x80000000;
      plVar16 = plVar16 + 0x22;
    } while (iVar15 != iVar13);
  }
  iVar13 = (int)uVar7;
  uVar5 = uVar7 * 0x110 + 0x110;
  if (uVar5 <= local_68) {
    local_68 = local_68 - 0x110;
    iVar13 = iVar13 + 1;
    if (uVar5 <= local_68) {
      iVar13 = iVar13 + (int)((local_68 + uVar7 * -0x110) / 0x110);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar14 * 0x110);
  }
  *(int *)((long)param_1 + 0xc) = iVar13;
  *param_1 = puVar4;
  return;
}


