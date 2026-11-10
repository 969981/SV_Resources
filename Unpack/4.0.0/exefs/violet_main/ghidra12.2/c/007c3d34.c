/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c3d34; name: FUN_007c3d34
 */


long * FUN_007c3d34(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  
  if ((*(long *)PTR_DAT_047d08a0 == 0) ||
     (lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_047d08a0 + 0x88)), lVar4 == 0)) {
    FUN_007c9e3c(PTR_DAT_047d1068);
    if (*(int *)PTR_DAT_047d0898 != 0) {
      lVar4 = (long)*(int *)PTR_DAT_047d0898 << 3;
      puVar9 = *(undefined8 **)(PTR_DAT_047d0898 + 8);
      do {
        plVar6 = (long *)FUN_007c2c74(*puVar9,param_2);
        if (plVar6 != (long *)0x0) goto LAB_007c3dec;
        lVar4 = lVar4 + -8;
        puVar9 = puVar9 + 1;
      } while (lVar4 != 0);
    }
    puVar8 = (ulong *)0x0;
    uVar5 = 1;
  }
  else {
    puVar8 = (ulong *)(lVar4 + 0xb0);
    do {
      plVar6 = (long *)*puVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar3) {
        *puVar8 = (ulong)plVar6 | 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((plVar6 != (long *)0x0) && ((int)plVar6[0xb] == 0)) &&
       (uVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,param_2), (uVar5 & 1) != 0)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar3) {
          *puVar8 = *puVar8 & 0xfffffffffffffffe;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return plVar6;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar3) {
        *puVar8 = *puVar8 & 0xfffffffffffffffe;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_007c9e3c(PTR_DAT_047d1068);
    plVar7 = (long *)*puVar8;
    if ((plVar7 != (long *)0x0) &&
       (plVar6 = (long *)FUN_007c2c74(plVar7,param_2), plVar6 != (long *)0x0)) {
      if (plVar6 != plVar7) {
        *puVar8 = (ulong)plVar6;
LAB_007c3dec:
        plVar7 = plVar6;
      }
      goto LAB_007c3edc;
    }
    uVar5 = (ulong)*(int *)PTR_DAT_047d0898;
    if (*(int *)PTR_DAT_047d0898 != 0) {
      puVar9 = *(undefined8 **)(PTR_DAT_047d0898 + 8);
      lVar4 = uVar5 << 3;
      do {
        plVar7 = (long *)FUN_007c2c74(*puVar9,param_2);
        if (plVar7 != (long *)0x0) goto LAB_007c3ed4;
        puVar9 = puVar9 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
      uVar5 = 0;
    }
  }
  iVar1 = *(int *)PTR_DAT_047d1088;
  if (iVar1 != 0) {
    puVar9 = *(undefined8 **)(PTR_DAT_047d1088 + 8);
    if ((uVar5 & 1) == 0) {
      lVar4 = (long)iVar1 << 3;
      do {
        plVar7 = (long *)FUN_007c2c74(*puVar9,param_2);
        if (plVar7 != (long *)0x0) goto LAB_007c3ed4;
        puVar9 = puVar9 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    else {
      lVar4 = (long)iVar1 << 3;
      do {
        plVar6 = (long *)FUN_007c2c74(*puVar9,param_2);
        if (plVar6 != (long *)0x0) goto LAB_007c3dec;
        lVar4 = lVar4 + -8;
        puVar9 = puVar9 + 1;
      } while (lVar4 != 0);
    }
  }
  plVar7 = (long *)0x0;
LAB_007c3edc:
  FUN_007c9e44(PTR_DAT_047d1068);
  return plVar7;
LAB_007c3ed4:
  *puVar8 = (ulong)plVar7;
  goto LAB_007c3edc;
}


