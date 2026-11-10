/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0300bbd8; name: FUN_0300bbd8
 */


void FUN_0300bbd8(long *param_1,ulong param_2)

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
  ulong uVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  ulong local_68;
  
  puVar6 = PTR_PTR_047d1a50;
  uVar10 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar9 = uVar10 * 2;
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
  plVar7 = (long *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))
                             (PTR_PTR_047d1a50,uVar9 * 8,&local_68);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    plVar16 = (long *)*param_1;
    plVar8 = plVar7;
    plVar11 = plVar16;
    if (uVar2 != 1) {
      iVar13 = -(uVar2 & 0xfffffffe);
      do {
        *plVar8 = *plVar11;
        *plVar11 = 0;
        plVar8[1] = plVar11[1];
        plVar11[1] = 0;
        plVar8 = plVar8 + 2;
        plVar11 = plVar11 + 2;
        iVar13 = iVar13 + 2;
      } while (iVar13 != 0);
    }
    if ((uVar2 & 1) != 0) {
      *plVar8 = *plVar11;
      *plVar11 = 0;
    }
    puVar5 = PTR_DAT_047d1a08;
    uVar17 = 0;
    do {
      lVar14 = *plVar16;
      if (lVar14 != 0) {
        plVar8 = *(long **)(lVar14 + 0xa0);
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
        *(undefined4 *)(lVar14 + 0x58) = 0;
        if ((-1 < (int)*(uint *)(lVar14 + 0x5c)) && (*(long *)(lVar14 + 0x50) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x20))
                    (puVar6,*(long *)(lVar14 + 0x50),(ulong)*(uint *)(lVar14 + 0x5c) * 0x50);
        }
        *(undefined8 *)(lVar14 + 0x50) = 0;
        *(undefined4 *)(lVar14 + 0x5c) = 0x80000000;
        *(undefined4 *)(lVar14 + 0x48) = 0;
        if ((-1 < (int)*(uint *)(lVar14 + 0x4c)) && (*(long *)(lVar14 + 0x40) != 0)) {
          (**(code **)(*(long *)puVar6 + 0x20))
                    (puVar6,*(long *)(lVar14 + 0x40),(ulong)*(uint *)(lVar14 + 0x4c) * 0x30);
        }
        *(undefined8 *)(lVar14 + 0x40) = 0;
        *(undefined4 *)(lVar14 + 0x4c) = 0x80000000;
        (**(code **)(puVar5 + 8))(0,lVar14,0);
      }
      uVar17 = uVar17 + 1;
      plVar16 = plVar16 + 1;
    } while (uVar17 != uVar2);
  }
  uVar1 = uVar9 * 8 + 8;
  uVar15 = uVar9;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 8;
    uVar15 = uVar9 + 1 + (local_68 + uVar9 * -8 >> 3);
    if (local_68 < uVar1) {
      uVar15 = uVar9 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar6 + 0x20))(puVar6,*param_1,uVar10 << 3);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar15;
  *param_1 = (long)plVar7;
  return;
}


