/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0114bb60; name: FUN_0114bb60
 */


undefined8 * FUN_0114bb60(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  plVar10 = param_1 + 1;
  if ((long *)*plVar10 == (long *)0x0) {
    plVar11 = plVar10;
LAB_0114bbf8:
    puVar8 = (undefined8 *)*plVar10;
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x30,8);
      if (puVar8 == (undefined8 *)0x0) {
        (**(code **)(*(long *)param_1[2] + 0xe8))();
      }
      lVar12 = param_1[2];
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar4 != 0) {
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      }
      uVar6 = *(undefined8 *)*param_3;
      *(undefined8 *)*param_3 = 0;
      puVar8[4] = uVar6;
      puVar8[5] = 0;
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = plVar11;
      *plVar10 = (long)puVar8;
      puVar5 = puVar8;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar5 = (undefined8 *)*plVar10;
      }
      FUN_010108e0(param_1[1],puVar5);
      param_1[6] = param_1[6] + 1;
    }
    return puVar8;
  }
  puVar1 = (ulong *)PTR_DAT_047d8b70;
  if (*param_2 != 0) {
    puVar1 = (ulong *)(*param_2 + 0x30);
  }
  plVar9 = param_1 + 1;
  plVar11 = (long *)*plVar10;
  do {
    puVar2 = (ulong *)PTR_DAT_047d8b70;
    if (plVar11[4] != 0) {
      puVar2 = (ulong *)(plVar11[4] + 0x30);
    }
    if (*puVar1 < *puVar2) {
      plVar7 = (long *)*plVar11;
      if (plVar7 == (long *)0x0) {
        plVar10 = plVar11;
        goto LAB_0114bbf8;
      }
      plVar9 = plVar11;
    }
    else {
      plVar10 = plVar9;
      if (*puVar1 <= *puVar2) goto LAB_0114bbf8;
      plVar10 = plVar11 + 1;
      plVar7 = (long *)*plVar10;
      plVar9 = plVar10;
      if (plVar7 == (long *)0x0) goto LAB_0114bbf8;
    }
    plVar11 = plVar7;
  } while( true );
}


