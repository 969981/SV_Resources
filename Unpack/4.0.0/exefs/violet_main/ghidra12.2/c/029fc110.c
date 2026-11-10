/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029fc110; name: FUN_029fc110
 */


void FUN_029fc110(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  ulong local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  uVar8 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar8 <= param_3) {
    uVar8 = param_3;
  }
  if (0x7ffffffe < uVar8) {
    if (0x7ffffffe < param_3) {
      local_68 = 0;
      local_78 = 0;
      puStack_70 = PTR_DAT_047d1b38;
      FUN_01f9d9b0(0x4648a379,
                   "C:/projects/ppp/include/havok\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity",&local_78);
    }
    uVar8 = 0x7ffffffe;
  }
  puVar5 = PTR_DAT_047d1a08;
  local_78 = uVar8 * 8;
  plVar6 = (long *)(**(code **)PTR_DAT_047d1a08)
                             (*(undefined1 *)(param_2 + 8),&local_78,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    plVar13 = (long *)*param_1;
    plVar7 = plVar6;
    plVar9 = plVar13;
    if (uVar2 != 1) {
      iVar11 = -(uVar2 & 0xfffffffe);
      do {
        *plVar7 = *plVar9;
        *plVar9 = 0;
        plVar7[1] = plVar9[1];
        plVar9[1] = 0;
        plVar7 = plVar7 + 2;
        plVar9 = plVar9 + 2;
        iVar11 = iVar11 + 2;
      } while (iVar11 != 0);
    }
    if ((uVar2 & 1) != 0) {
      *plVar7 = *plVar9;
      *plVar9 = 0;
    }
    uVar14 = 0;
    do {
      plVar7 = (long *)*plVar13;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar9 = plVar7 + 2;
        do {
          lVar10 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      uVar14 = uVar14 + 1;
      plVar13 = plVar13 + 1;
    } while (uVar14 != uVar2);
  }
  uVar1 = uVar8 * 8 + 8;
  uVar12 = uVar8;
  if (uVar1 <= local_78) {
    local_78 = local_78 - 8;
    uVar12 = uVar8 + 1 + (local_78 + uVar8 * -8 >> 3);
    if (local_78 < uVar1) {
      uVar12 = uVar8 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar5 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar12;
  *param_1 = (long)plVar6;
  return;
}


