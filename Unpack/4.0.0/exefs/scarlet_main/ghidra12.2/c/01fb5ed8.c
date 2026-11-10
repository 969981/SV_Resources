/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb5ed8; name: FUN_01fb5ed8
 */


void FUN_01fb5ed8(undefined8 *param_1,long param_2)

{
  char *__s;
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  uint *puVar9;
  size_t sVar10;
  byte *pbVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  if ((*(long *)(param_2 + 0x2f0) == 0) ||
     ((*(byte *)(*(long *)(param_2 + 0x2f0) + 0x1e8) & 1) == 0)) {
    piVar12 = (int *)0x0;
  }
  else {
    puVar9 = (uint *)(**(code **)(**(long **)(param_2 + 0x2f0) + 0x70))();
    piVar12 = (int *)((long)puVar9 + (ulong)*puVar9);
  }
  if ((10 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
     (uVar13 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[5], uVar13 != 0)) {
    uVar14 = (ulong)*(uint *)((long)piVar12 + uVar13);
    uVar4 = *(uint *)((long)((long)piVar12 + uVar13) + uVar14);
    if (uVar4 != 0) {
      lVar1 = uVar13 + uVar14;
      lVar15 = 0;
      do {
        uVar17 = (ulong)*(uint *)((long)piVar12 + lVar15 + lVar1 + 4);
        lVar6 = lVar15 + (uVar17 - (long)*(int *)((long)piVar12 + lVar15 + uVar17 + lVar1 + 4)) +
                         lVar1;
        if ((4 < *(ushort *)((long)piVar12 + lVar6 + 4)) &&
           (uVar18 = (ulong)*(ushort *)((long)piVar12 + lVar6 + 8), uVar18 != 0)) {
          uVar19 = (ulong)*(uint *)((long)piVar12 + lVar15 + uVar17 + uVar18 + lVar1 + 4);
          lVar1 = lVar15 + uVar19 + uVar17 + uVar18 + lVar1;
          __s = (char *)((long)piVar12 + lVar1 + 8);
          puVar16 = &DAT_cbf29ce484222645;
          sVar10 = strlen(__s);
          bVar5 = *(byte *)((long)piVar12 + lVar1 + 8);
          if (bVar5 != 0) {
            pbVar11 = (byte *)((long)piVar12 +
                              lVar15 + uVar19 + uVar18 + uVar17 + uVar14 + uVar13 + 9);
            do {
              puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar5 != 0);
          }
          *param_1 = puVar16;
          param_1[1] = __s;
          param_1[2] = sVar10;
          param_1[3] = 0;
          return;
        }
        lVar15 = lVar15 + 4;
      } while ((ulong)uVar4 * 4 != lVar15);
    }
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar7 = PTR_DAT_047d3e30;
  uVar2 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[1] = uVar2;
  plVar3 = *(long **)(puVar7 + 0x18);
  param_1[2] = *(undefined8 *)(puVar7 + 0x10);
  param_1[3] = plVar3;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01fb60a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))();
  return;
}


