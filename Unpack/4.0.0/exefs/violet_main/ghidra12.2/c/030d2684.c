/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d2684; name: FUN_030d2684
 */


void FUN_030d2684(long *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  ulong local_48;
  
  puVar6 = PTR_PTR_047d1a50;
  puVar5 = PTR_DAT_047d1a08;
  uVar9 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar9 <= param_2) {
    uVar9 = param_2;
  }
  if (0x7ffffffe < uVar9) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar9 = 0x7ffffffe;
  }
  local_48 = uVar9 * 8;
  plVar7 = (long *)(**(code **)PTR_DAT_047d1a08)
                             (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc))
  ;
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    plVar14 = (long *)*param_1;
    plVar8 = plVar7;
    plVar10 = plVar14;
    if (uVar2 != 1) {
      iVar12 = -(uVar2 & 0xfffffffe);
      do {
        *plVar8 = *plVar10;
        *plVar10 = 0;
        plVar8[1] = plVar10[1];
        plVar10[1] = 0;
        plVar8 = plVar8 + 2;
        plVar10 = plVar10 + 2;
        iVar12 = iVar12 + 2;
      } while (iVar12 != 0);
    }
    if ((uVar2 & 1) != 0) {
      *plVar8 = *plVar10;
      *plVar10 = 0;
    }
    uVar15 = 0;
    do {
      plVar8 = (long *)*plVar14;
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar10 = plVar8 + 2;
        do {
          lVar11 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      uVar15 = uVar15 + 1;
      plVar14 = plVar14 + 1;
    } while (uVar15 != uVar2);
  }
  uVar1 = uVar9 * 8 + 8;
  uVar13 = uVar9;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 8;
    uVar13 = uVar9 + 1 + (local_48 + uVar9 * -8 >> 3);
    if (local_48 < uVar1) {
      uVar13 = uVar9 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar5 + 8))(puVar6[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar13;
  *param_1 = (long)plVar7;
  return;
}


