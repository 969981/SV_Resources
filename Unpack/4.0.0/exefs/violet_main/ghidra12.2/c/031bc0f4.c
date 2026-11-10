/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031bc0f4; name: FUN_031bc0f4
 */


void FUN_031bc0f4(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong local_48;
  
  puVar7 = PTR_DAT_047d1a08;
  uVar11 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
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
  local_48 = uVar11 * 0x18;
  puVar8 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (*(undefined1 *)(param_2 + 8),&local_48,*(undefined4 *)(param_2 + 0xc));
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    puVar15 = (undefined8 *)*param_1;
    puVar12 = puVar8;
    puVar13 = puVar15;
    iVar10 = iVar3;
    do {
      *puVar12 = *puVar13;
      puVar12[1] = puVar13[1];
      puVar12[2] = puVar13[2];
      iVar10 = iVar10 + -1;
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      puVar12 = puVar12 + 3;
      puVar13 = puVar13 + 3;
    } while (iVar10 != 0);
    iVar10 = 0;
    do {
      if ((puVar15[2] & 1) != 0) {
        plVar9 = (long *)(puVar15[2] & 0xfffffffffffffffe);
        plVar1 = plVar9 + 1;
        do {
          lVar6 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = (int)lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      iVar10 = iVar10 + 1;
      puVar15 = puVar15 + 3;
    } while (iVar10 != iVar3);
  }
  uVar2 = uVar11 * 0x18 + 0x18;
  uVar14 = uVar11;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x18;
    uVar14 = uVar11 + 1;
    if (uVar2 <= local_48) {
      uVar14 = uVar14 + (local_48 + uVar11 * -0x18) / 0x18;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar7 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar14;
  *param_1 = (long)puVar8;
  return;
}


