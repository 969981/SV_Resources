/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0307dd14; name: FUN_0307dd14
 */


void FUN_0307dd14(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong local_68;
  
  puVar6 = PTR_PTR_047d1a50;
  puVar5 = PTR_DAT_047d1a08;
  uVar10 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
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
  local_68 = uVar10 * 0x18;
  plVar7 = (long *)(**(code **)PTR_DAT_047d1a08)
                             (PTR_PTR_047d1a50[8],&local_68,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc))
  ;
  iVar2 = *(int *)(param_1 + 1);
  if (0 < iVar2) {
    plVar14 = (long *)*param_1;
    plVar8 = plVar7;
    plVar11 = plVar14;
    iVar9 = iVar2;
    do {
      *plVar8 = *plVar11;
      iVar9 = iVar9 + -1;
      *plVar11 = 0;
      plVar8[1] = 0;
      plVar8[1] = plVar11[1];
      *(char *)(plVar8 + 2) = (char)plVar11[2];
      plVar11[1] = 0;
      plVar8 = plVar8 + 3;
      plVar11 = plVar11 + 3;
    } while (iVar9 != 0);
    iVar9 = 0;
    do {
      lVar12 = plVar14[1];
      if (lVar12 != 0) {
        nn::os::FinalizeMutex((MutexType *)(lVar12 + 8));
        (**(code **)(puVar5 + 8))(0,lVar12,0);
      }
      plVar8 = (long *)*plVar14;
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar11 = plVar8 + 2;
        do {
          lVar12 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      iVar9 = iVar9 + 1;
      plVar14 = plVar14 + 3;
    } while (iVar9 != iVar2);
  }
  uVar1 = uVar10 * 0x18 + 0x18;
  uVar13 = uVar10;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x18;
    uVar13 = uVar10 + 1;
    if (uVar1 <= local_68) {
      uVar13 = uVar13 + (local_68 + uVar10 * -0x18) / 0x18;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar5 + 8))(puVar6[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar13;
  *param_1 = plVar7;
  return;
}


