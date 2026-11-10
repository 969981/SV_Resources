/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e8db54; name: FUN_02e8db54
 */


void FUN_02e8db54(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong local_48;
  
  uVar14 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar8 = uVar14 * 2;
  if (uVar8 <= param_3) {
    uVar8 = param_3;
  }
  if (0x7ffffffe < uVar8) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar8 = 0x7ffffffe;
  }
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x10,&local_48);
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    puVar15 = (undefined8 *)*param_1;
    puVar9 = puVar6;
    puVar10 = puVar15;
    if (uVar3 != 1) {
      iVar12 = -(uVar3 & 0xfffffffe);
      do {
        *puVar9 = *puVar10;
        puVar9[1] = puVar10[1];
        puVar10[1] = 0;
        puVar9[2] = puVar10[2];
        puVar9[3] = puVar10[3];
        puVar10[3] = 0;
        puVar9 = puVar9 + 4;
        puVar10 = puVar10 + 4;
        iVar12 = iVar12 + 2;
      } while (iVar12 != 0);
    }
    if ((uVar3 & 1) != 0) {
      *puVar9 = *puVar10;
      puVar9[1] = puVar10[1];
      puVar10[1] = 0;
    }
    uVar16 = 0;
    do {
      plVar7 = (long *)puVar15[1];
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar1 = plVar7 + 2;
        do {
          lVar11 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      uVar16 = uVar16 + 1;
      puVar15 = puVar15 + 2;
    } while (uVar16 != uVar3);
  }
  uVar2 = uVar8 * 0x10 + 0x10;
  uVar13 = uVar8;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar13 = uVar8 + 1 + (local_48 + uVar8 * -0x10 >> 4);
    if (local_48 < uVar2) {
      uVar13 = uVar8 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar14 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar13;
  *param_1 = (long)puVar6;
  return;
}


