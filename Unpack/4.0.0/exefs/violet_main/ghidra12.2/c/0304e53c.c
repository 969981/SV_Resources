/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0304e53c; name: FUN_0304e53c
 */


void FUN_0304e53c(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  ulong local_68;
  
  plVar13 = (long *)PTR_PTR_047d1a50;
  uVar14 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar11 = uVar14 * 2;
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
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar11 * 0x80,&local_68)
  ;
  iVar6 = *(int *)(param_1 + 1);
  if (0 < iVar6) {
    puVar17 = (undefined8 *)*param_1;
    puVar15 = puVar9;
    puVar18 = puVar17;
    iVar19 = iVar6;
    do {
      uVar4 = puVar18[1];
      uVar3 = puVar18[2];
      uVar5 = puVar18[3];
      *puVar15 = *puVar18;
      puVar15[1] = uVar4;
      puVar15[2] = uVar3;
      puVar15[3] = uVar5;
      puVar15[4] = puVar18[4];
      puVar18[4] = 0;
      memcpy(puVar15 + 6,puVar18 + 6,0x50);
      plVar13 = (long *)PTR_PTR_047d1a50;
      iVar19 = iVar19 + -1;
      puVar15 = puVar15 + 0x10;
      puVar18 = puVar18 + 0x10;
    } while (iVar19 != 0);
    iVar19 = 0;
    do {
      plVar10 = (long *)puVar17[4];
      if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
        plVar1 = plVar10 + 2;
        do {
          lVar12 = *plVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar12 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))();
        }
      }
      iVar19 = iVar19 + 1;
      puVar17 = puVar17 + 0x10;
    } while (iVar19 != iVar6);
  }
  uVar2 = uVar11 * 0x80 + 0x80;
  uVar16 = uVar11;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x80;
    uVar16 = uVar11 + 1 + (local_68 + uVar11 * -0x80 >> 7);
    if (local_68 < uVar2) {
      uVar16 = uVar11 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar13 + 0x20))(plVar13,*param_1,uVar14 << 7);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar16;
  *param_1 = puVar9;
  return;
}


