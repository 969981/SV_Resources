/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f37a8; name: FUN_030f37a8
 */


void FUN_030f37a8(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  ulong local_68;
  
  uVar12 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar10 = uVar12 * 2;
  if (uVar10 <= param_2) {
    uVar10 = param_2;
  }
  if (0x7ffffffe < uVar10) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar10 = 0x7ffffffe;
  }
  puVar7 = (undefined4 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar10 * 0x28,&local_68)
  ;
  puVar6 = PTR_PTR_047d1a50;
  iVar14 = *(int *)(param_1 + 1);
  if (0 < iVar14) {
    puVar18 = (undefined4 *)*param_1;
    puVar15 = puVar7;
    puVar17 = puVar18;
    iVar13 = iVar14;
    do {
      *puVar15 = *puVar17;
      FUN_030daf4c(puVar17 + 2,puVar6);
      *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(puVar17 + 2);
      puVar15[4] = puVar17[4];
      puVar15[5] = puVar17[5];
      *(undefined8 *)(puVar17 + 2) = 0;
      *(undefined8 *)(puVar17 + 4) = 0;
      *(undefined8 *)(puVar15 + 6) = *(undefined8 *)(puVar17 + 6);
      iVar13 = iVar13 + -1;
      puVar15[8] = puVar17[8];
      *(undefined **)(puVar17 + 6) = &DAT_03d7702c;
      puVar17[8] = 0;
      puVar5 = PTR_DAT_047d1a08;
      puVar17 = puVar17 + 10;
      puVar15 = puVar15 + 10;
    } while (iVar13 != 0);
    iVar13 = 0;
    do {
      lVar9 = *(long *)(puVar18 + 6);
      if ((lVar9 != 0) && (*(int *)(lVar9 + 4) != -2)) {
        (**(code **)(puVar5 + 8))(puVar6[8],lVar9,0);
        *(undefined **)(puVar18 + 6) = &DAT_03d7702c;
        puVar18[8] = 0;
      }
      if (puVar18[4] != 0) {
        lVar16 = *(long *)(puVar18 + 2);
        lVar9 = lVar16 + (long)(int)puVar18[4] * 0x10;
        do {
          plVar8 = *(long **)(lVar9 + -8);
          lVar9 = lVar9 + -0x10;
          if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
            plVar1 = plVar8 + 2;
            do {
              lVar11 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar11 + -1 == 0) {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
        } while (lVar9 != lVar16);
      }
      puVar18[4] = 0;
      if ((-1 < (int)puVar18[5]) && (*(long *)(puVar18 + 2) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))
                  (puVar6,*(long *)(puVar18 + 2),(ulong)(uint)puVar18[5] << 4);
      }
      iVar13 = iVar13 + 1;
      *(undefined8 *)(puVar18 + 2) = 0;
      puVar18[5] = 0x80000000;
      puVar18 = puVar18 + 10;
    } while (iVar13 != iVar14);
  }
  uVar2 = uVar10 * 0x28 + 0x28;
  iVar14 = (int)uVar10;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x28;
    iVar13 = iVar14 + 1 + (int)((local_68 + uVar10 * -0x28) / 0x28);
    if (local_68 < uVar2) {
      iVar13 = iVar14 + 1;
    }
    iVar14 = iVar13;
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,*param_1,uVar12 * 0x28);
  }
  *(int *)((long)param_1 + 0xc) = iVar14;
  *param_1 = puVar7;
  return;
}


