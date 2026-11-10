/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03379ae4; name: FUN_03379ae4
 */


void FUN_03379ae4(undefined8 *param_1,ulong param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong local_68;
  
  puVar8 = PTR_PTR_047d1a50;
  uVar12 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar11 = uVar12 * 2;
  if (uVar11 <= param_2) {
    uVar11 = param_2;
  }
  if (0x7ffffffe < uVar11) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar11 = 0x7ffffffe;
  }
  puVar9 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar11 * 0x28,&local_68)
  ;
  iVar4 = *(int *)(param_1 + 1);
  if (0 < iVar4) {
    puVar19 = (undefined8 *)*param_1;
    puVar15 = puVar9;
    puVar18 = puVar19;
    iVar13 = iVar4;
    do {
      *puVar15 = *puVar18;
      puVar15[1] = puVar18[1];
      puVar15[2] = puVar18[2];
      puVar18[1] = 0;
      puVar18[2] = 0;
      *puVar18 = 0;
      FUN_033790e0(puVar18 + 3);
      puVar15[3] = puVar18[3];
      *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(puVar18 + 4);
      *(undefined4 *)((long)puVar15 + 0x24) = *(undefined4 *)((long)puVar18 + 0x24);
      iVar13 = iVar13 + -1;
      puVar18[3] = 0;
      puVar18[4] = 0;
      puVar18 = puVar18 + 5;
      puVar15 = puVar15 + 5;
    } while (iVar13 != 0);
    iVar13 = 0;
    do {
      if (*(int *)(puVar19 + 4) != 0) {
        lVar14 = puVar19[3];
        lVar16 = lVar14 + (long)*(int *)(puVar19 + 4) * 0x18;
        do {
          puVar1 = (ulong *)(lVar16 + -8);
          lVar16 = lVar16 + -0x18;
          if ((*puVar1 & 1) != 0) {
            plVar10 = (long *)(*puVar1 & 0xfffffffffffffffe);
            plVar2 = plVar10 + 1;
            do {
              lVar7 = *plVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(int *)plVar2 = (int)lVar7 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((plVar10 != (long *)0x0) && ((int)lVar7 == 1)) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        } while (lVar16 != lVar14);
      }
      *(undefined4 *)(puVar19 + 4) = 0;
      if ((-1 < (int)*(uint *)((long)puVar19 + 0x24)) && (puVar19[3] != 0)) {
        (**(code **)(*(long *)puVar8 + 0x20))
                  (puVar8,puVar19[3],(ulong)*(uint *)((long)puVar19 + 0x24) * 0x18);
      }
      puVar19[3] = 0;
      *(undefined4 *)((long)puVar19 + 0x24) = 0x80000000;
      if ((puVar19[2] & 1) != 0) {
        plVar10 = (long *)(puVar19[2] & 0xfffffffffffffffe);
        plVar2 = plVar10 + 1;
        do {
          lVar14 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = (int)lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar14 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      iVar13 = iVar13 + 1;
      puVar19 = puVar19 + 5;
    } while (iVar13 != iVar4);
  }
  uVar3 = uVar11 * 0x28 + 0x28;
  uVar17 = uVar11;
  if (uVar3 <= local_68) {
    local_68 = local_68 - 0x28;
    uVar17 = uVar11 + 1;
    if (uVar3 <= local_68) {
      uVar17 = uVar17 + (local_68 + uVar11 * -0x28) / 0x28;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar8 + 0x20))(puVar8,*param_1,uVar12 * 0x28);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar17;
  *param_1 = puVar9;
  return;
}


