/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0148ddbc; name: FUN_0148ddbc
 */


void FUN_0148ddbc(undefined8 *param_1,long param_2)

{
  char *__s;
  uint *puVar1;
  undefined8 uVar2;
  long *plVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  size_t sVar10;
  int *piVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  ushort *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  
  if ((((*(long *)(param_2 + 0x50) != 0) &&
       ((*(byte *)(*(long *)(param_2 + 0x50) + 0x1e8) & 1) != 0)) &&
      (*(long *)(param_2 + 0x50) != 0)) &&
     (((*(byte *)(*(long *)(param_2 + 0x50) + 0x1e8) & 1) != 0 &&
      (lVar7 = (**(code **)(**(long **)(param_2 + 0x50) + 0x70))(), lVar7 != 0)))) {
    piVar11 = (int *)0x0;
    if (*(long *)(param_2 + 0x50) != 0) {
      if ((*(byte *)(*(long *)(param_2 + 0x50) + 0x1e8) & 1) == 0) {
        piVar11 = (int *)0x0;
      }
      else {
        puVar8 = (uint *)(**(code **)(**(long **)(param_2 + 0x50) + 0x70))();
        piVar11 = (int *)((long)puVar8 + (ulong)*puVar8);
      }
    }
    if ((4 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
       (((ushort *)((long)piVar11 - (long)*piVar11))[2] != 0)) {
      puVar9 = (uint *)(**(code **)(**(long **)(param_2 + 0x50) + 0x70))();
      piVar11 = (int *)((long)puVar9 + (ulong)*puVar9);
      uVar14 = (ulong)*(ushort *)((long)piVar11 + (4 - (long)*piVar11));
      puVar1 = (uint *)((long)piVar11 + uVar14);
      uVar15 = (ulong)*puVar1;
      puVar1 = (uint *)((long)puVar1 + uVar15);
      puVar8 = puVar1 + 1;
      uVar12 = (ulong)*puVar1;
      if (uVar12 != 0) {
        puVar1 = puVar8 + uVar12;
        puVar18 = &DAT_cbf29ce484222645;
        lVar7 = (long)puVar9 + uVar15 + uVar14 + (ulong)*puVar9 + 9;
        do {
          uVar12 = (ulong)*puVar8;
          piVar11 = (int *)((long)puVar8 + uVar12);
          puVar16 = (ushort *)((long)piVar11 - (long)*piVar11);
          if ((4 < *puVar16) && (uVar14 = (ulong)puVar16[2], uVar14 != 0)) {
            uVar15 = (ulong)*(uint *)((long)piVar11 + uVar14);
            bVar4 = *(byte *)((long)((long)piVar11 + uVar14) + uVar15 + 4);
            if (bVar4 != 0) {
              puVar17 = &DAT_cbf29ce484222645;
              pbVar13 = (byte *)(lVar7 + uVar15 + uVar14 + uVar12);
              do {
                puVar17 = (undefined1 *)(((ulong)puVar17 ^ (ulong)bVar4) * 0x100000001b3);
                bVar4 = *pbVar13;
                pbVar13 = pbVar13 + 1;
              } while (bVar4 != 0);
              if (((8 < *puVar16) && (puVar17 == (undefined1 *)0x46013ec08bdf7153)) &&
                 (uVar14 = (ulong)puVar16[4], uVar14 != 0)) {
                puVar8 = (uint *)((long)piVar11 + uVar14);
                uVar15 = (ulong)*puVar8;
                __s = (char *)((long)puVar8 + uVar15 + 4);
                sVar10 = strlen(__s);
                bVar4 = *(byte *)((long)puVar8 + uVar15 + 4);
                if (bVar4 != 0) {
                  pbVar13 = (byte *)(lVar7 + uVar15 + uVar14 + uVar12);
                  do {
                    puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar4) * 0x100000001b3);
                    bVar4 = *pbVar13;
                    pbVar13 = pbVar13 + 1;
                  } while (bVar4 != 0);
                }
                *param_1 = puVar18;
                param_1[1] = __s;
                param_1[2] = sVar10;
                param_1[3] = 0;
                FUN_0148e0dc(*(undefined8 *)(param_2 + 0x40),param_1);
                if (((*PTR_DAT_047dd000 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar6 != 0)) {
                  FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047dd000);
                }
                *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
                return;
              }
            }
          }
          puVar8 = puVar8 + 1;
          lVar7 = lVar7 + 4;
        } while (puVar8 != puVar1);
      }
    }
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar5 = PTR_DAT_047d3e30;
  uVar2 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[1] = uVar2;
  plVar3 = *(long **)(puVar5 + 0x18);
  param_1[2] = *(undefined8 *)(puVar5 + 0x10);
  param_1[3] = plVar3;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0148de4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))();
  return;
}


