/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324e2d4; name: FUN_0324e2d4
 */


void FUN_0324e2d4(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong local_48;
  
  uVar14 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar10 = uVar14 * 2;
  if (uVar10 <= param_3) {
    uVar10 = param_3;
  }
  if (0x7ffffffe < uVar10) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar10 = 0x7ffffffe;
  }
  puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar10 * 0x18,&local_48);
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    puVar15 = (undefined8 *)*param_1;
    puVar11 = puVar7;
    puVar12 = puVar15;
    iVar9 = iVar3;
    do {
      *puVar11 = *puVar12;
      puVar11[1] = puVar12[1];
      puVar11[2] = puVar12[2];
      iVar9 = iVar9 + -1;
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = 0;
      puVar11 = puVar11 + 3;
      puVar12 = puVar12 + 3;
    } while (iVar9 != 0);
    iVar9 = 0;
    do {
      if ((puVar15[2] & 1) != 0) {
        plVar8 = (long *)(puVar15[2] & 0xfffffffffffffffe);
        plVar1 = plVar8 + 1;
        do {
          lVar6 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = (int)lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
          (**(code **)(*plVar8 + 8))();
        }
      }
      iVar9 = iVar9 + 1;
      puVar15 = puVar15 + 3;
    } while (iVar9 != iVar3);
  }
  uVar2 = uVar10 * 0x18 + 0x18;
  uVar13 = uVar10;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x18;
    uVar13 = uVar10 + 1;
    if (uVar2 <= local_48) {
      uVar13 = uVar13 + (local_48 + uVar10 * -0x18) / 0x18;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar14 * 0x18);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar13;
  *param_1 = (long)puVar7;
  return;
}


