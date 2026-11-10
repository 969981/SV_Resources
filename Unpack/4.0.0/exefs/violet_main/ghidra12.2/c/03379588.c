/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03379588; name: FUN_03379588
 */


void FUN_03379588(undefined8 *param_1,long *param_2,ulong param_3)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong local_48;
  
  uVar16 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar11 = uVar16 * 2;
  if (uVar11 <= param_3) {
    uVar11 = param_3;
  }
  if (0x7ffffffe < uVar11) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar11 = 0x7ffffffe;
  }
  puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar11 * 0x40,&local_48);
  iVar4 = *(int *)(param_1 + 1);
  if (0 < iVar4) {
    puVar17 = (undefined8 *)*param_1;
    iVar10 = 0;
    puVar12 = puVar8;
    puVar13 = puVar17;
    do {
      uVar3 = puVar13[1];
      *puVar12 = *puVar13;
      puVar12[1] = uVar3;
      uVar14 = puVar13[2];
      puVar12[2] = uVar14;
      if ((uVar14 & 1) != 0) {
        piVar1 = (int *)((uVar14 & 0xfffffffffffffffe) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar12[4] = puVar13[4];
      *(undefined1 *)(puVar12 + 5) = *(undefined1 *)(puVar13 + 5);
      *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(puVar13 + 6);
      *(undefined4 *)((long)puVar12 + 0x34) = *(undefined4 *)((long)puVar13 + 0x34);
      *(undefined4 *)(puVar12 + 7) = *(undefined4 *)(puVar13 + 7);
      iVar10 = iVar10 + 1;
      *(undefined4 *)((long)puVar12 + 0x3c) = *(undefined4 *)((long)puVar13 + 0x3c);
      *(undefined1 *)(puVar13 + 5) = 0;
      puVar13[4] = 0;
      puVar12 = puVar12 + 8;
      puVar13 = puVar13 + 8;
    } while (iVar10 != iVar4);
    iVar10 = 0;
    do {
      FUN_0320a6dc(puVar17 + 4);
      if ((puVar17[2] & 1) != 0) {
        plVar9 = (long *)(puVar17[2] & 0xfffffffffffffffe);
        plVar2 = plVar9 + 1;
        do {
          lVar7 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = (int)lVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar7 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      iVar10 = iVar10 + 1;
      puVar17 = puVar17 + 8;
    } while (iVar10 != iVar4);
  }
  uVar14 = uVar11 * 0x40 + 0x40;
  uVar15 = uVar11;
  if (uVar14 <= local_48) {
    local_48 = local_48 - 0x40;
    uVar15 = uVar11 + 1 + (local_48 + uVar11 * -0x40 >> 6);
    if (local_48 < uVar14) {
      uVar15 = uVar11 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar16 << 6);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar15;
  *param_1 = puVar8;
  return;
}


