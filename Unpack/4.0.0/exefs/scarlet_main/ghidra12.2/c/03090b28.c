/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03090b28; name: FUN_03090b28
 */


void FUN_03090b28(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong local_68;
  
  uVar13 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar9 = uVar13 * 2;
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
  plVar6 = (long *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))
                             (PTR_PTR_047d1a50,uVar9 * 0x18,&local_68);
  iVar2 = *(int *)(param_1 + 1);
  if (0 < iVar2) {
    plVar14 = (long *)*param_1;
    plVar7 = plVar6;
    plVar10 = plVar14;
    iVar8 = iVar2;
    do {
      *plVar7 = *plVar10;
      iVar8 = iVar8 + -1;
      *plVar10 = 0;
      plVar7[1] = 0;
      plVar7[1] = plVar10[1];
      *(char *)(plVar7 + 2) = (char)plVar10[2];
      plVar10[1] = 0;
      puVar5 = PTR_DAT_047d1a08;
      plVar7 = plVar7 + 3;
      plVar10 = plVar10 + 3;
    } while (iVar8 != 0);
    iVar8 = 0;
    do {
      lVar11 = plVar14[1];
      if (lVar11 != 0) {
        nn::os::FinalizeMutex((MutexType *)(lVar11 + 8));
        (**(code **)(puVar5 + 8))(0,lVar11,0);
      }
      plVar7 = (long *)*plVar14;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar10 = plVar7 + 2;
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
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      iVar8 = iVar8 + 1;
      plVar14 = plVar14 + 3;
    } while (iVar8 != iVar2);
  }
  uVar1 = uVar9 * 0x18 + 0x18;
  uVar12 = uVar9;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x18;
    uVar12 = uVar9 + 1;
    if (uVar1 <= local_68) {
      uVar12 = uVar12 + (local_68 + uVar9 * -0x18) / 0x18;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,*param_1,uVar13 * 0x18);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar12;
  *param_1 = plVar6;
  return;
}


