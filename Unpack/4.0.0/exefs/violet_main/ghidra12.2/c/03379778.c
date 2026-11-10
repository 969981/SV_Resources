/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03379778; name: FUN_03379778
 */


void FUN_03379778(long *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong local_68;
  
  uVar16 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar12 = uVar16 * 2;
  if (uVar12 <= param_3) {
    uVar12 = param_3;
  }
  if (0x7ffffffe < uVar12) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar12 = 0x7ffffffe;
  }
  puVar9 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar12 * 0x28,&local_68);
  iVar4 = (int)param_1[1];
  if (0 < iVar4) {
    puVar17 = (undefined8 *)*param_1;
    puVar13 = puVar9;
    puVar14 = puVar17;
    iVar11 = iVar4;
    do {
      *puVar13 = *puVar14;
      puVar13[1] = puVar14[1];
      puVar13[2] = puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      puVar13[3] = puVar14[3];
      puVar1 = puVar14 + 4;
      puVar14[3] = 0;
      iVar11 = iVar11 + -1;
      puVar14 = puVar14 + 5;
      *(undefined4 *)(puVar13 + 4) = *(undefined4 *)puVar1;
      puVar8 = PTR_DAT_047d1a08;
      puVar13 = puVar13 + 5;
    } while (iVar11 != 0);
    iVar11 = 0;
    do {
      if ((puVar17[3] & 1) != 0) {
        (**(code **)(puVar8 + 8))(0,puVar17[3] - 1,0);
      }
      if ((puVar17[2] & 1) != 0) {
        plVar10 = (long *)(puVar17[2] & 0xfffffffffffffffe);
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
      iVar11 = iVar11 + 1;
      puVar17 = puVar17 + 5;
    } while (iVar11 != iVar4);
  }
  uVar3 = uVar12 * 0x28 + 0x28;
  uVar15 = uVar12;
  if (uVar3 <= local_68) {
    local_68 = local_68 - 0x28;
    uVar15 = uVar12 + 1;
    if (uVar3 <= local_68) {
      uVar15 = uVar15 + (local_68 + uVar12 * -0x28) / 0x28;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar16 * 0x28);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar15;
  *param_1 = (long)puVar9;
  return;
}


