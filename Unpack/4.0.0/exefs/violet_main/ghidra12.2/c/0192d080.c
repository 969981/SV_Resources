/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0192d080; name: FUN_0192d080
 */


void FUN_0192d080(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  char *__s;
  uint *puVar1;
  undefined8 uVar2;
  long *plVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  size_t sVar10;
  undefined1 *puVar11;
  int *piVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  ushort *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  
  if ((*(long *)(param_2 + 0x50) != 0) && ((*(byte *)(*(long *)(param_2 + 0x50) + 0x1e8) & 1) != 0))
  {
    piVar12 = (int *)0x0;
    if (*(long *)(param_2 + 0x50) != 0) {
      if ((*(byte *)(*(long *)(param_2 + 0x50) + 0x1e8) & 1) == 0) {
        piVar12 = (int *)0x0;
      }
      else {
        puVar8 = (uint *)(**(code **)(**(long **)(param_2 + 0x50) + 0x70))();
        piVar12 = (int *)((long)puVar8 + (ulong)*puVar8);
      }
    }
    if ((4 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
       (((ushort *)((long)piVar12 - (long)*piVar12))[2] != 0)) {
      puVar9 = (uint *)(**(code **)(**(long **)(param_2 + 0x50) + 0x70))();
      piVar12 = (int *)((long)puVar9 + (ulong)*puVar9);
      uVar15 = (ulong)*(ushort *)((long)piVar12 + (4 - (long)*piVar12));
      puVar1 = (uint *)((long)piVar12 + uVar15);
      uVar17 = (ulong)*puVar1;
      puVar1 = (uint *)((long)puVar1 + uVar17);
      puVar8 = puVar1 + 1;
      uVar13 = (ulong)*puVar1;
      if (uVar13 != 0) {
        puVar1 = puVar8 + uVar13;
        puVar20 = &DAT_cbf29ce484222645;
        lVar19 = (long)puVar9 + uVar17 + uVar15 + (ulong)*puVar9 + 9;
        do {
          uVar13 = (ulong)*puVar8;
          piVar12 = (int *)((long)puVar8 + uVar13);
          puVar16 = (ushort *)((long)piVar12 - (long)*piVar12);
          uVar5 = *puVar16;
          if (4 < uVar5) {
            if ((ulong)puVar16[2] == 0) {
              lVar18 = 0;
            }
            else {
              puVar9 = (uint *)((long)piVar12 + (ulong)puVar16[2]);
              lVar18 = (long)puVar9 + (ulong)*puVar9;
            }
            if ((6 < uVar5) && (uVar15 = (ulong)puVar16[3], uVar15 != 0)) {
              uVar17 = (ulong)*(uint *)((long)piVar12 + uVar15);
              if (lVar18 != 0) {
                bVar4 = *(byte *)(lVar18 + 4);
                puVar11 = &DAT_cbf29ce484222645;
                if (bVar4 != 0) {
                  puVar11 = &DAT_cbf29ce484222645;
                  pbVar14 = (byte *)(lVar18 + 5);
                  do {
                    puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar4) * 0x100000001b3);
                    bVar4 = *pbVar14;
                    pbVar14 = pbVar14 + 1;
                  } while (bVar4 != 0);
                }
                if (puVar11 == (undefined1 *)*param_3) {
                  bVar4 = *(byte *)((long)((long)piVar12 + uVar15) + uVar17 + 4);
                  puVar11 = &DAT_cbf29ce484222645;
                  if (bVar4 != 0) {
                    puVar11 = &DAT_cbf29ce484222645;
                    pbVar14 = (byte *)(lVar19 + uVar17 + uVar15 + uVar13);
                    do {
                      uVar15 = (ulong)bVar4;
                      bVar4 = *pbVar14;
                      puVar11 = (undefined1 *)(((ulong)puVar11 ^ uVar15) * 0x100000001b3);
                      pbVar14 = pbVar14 + 1;
                    } while (bVar4 != 0);
                  }
                  if (((8 < uVar5) && (puVar11 == (undefined1 *)*param_4)) &&
                     (uVar15 = (ulong)puVar16[4], uVar15 != 0)) {
                    puVar8 = (uint *)((long)piVar12 + uVar15);
                    uVar17 = (ulong)*puVar8;
                    __s = (char *)((long)puVar8 + uVar17 + 4);
                    sVar10 = strlen(__s);
                    bVar4 = *(byte *)((long)puVar8 + uVar17 + 4);
                    if (bVar4 != 0) {
                      pbVar14 = (byte *)(lVar19 + uVar17 + uVar15 + uVar13);
                      do {
                        puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar4) * 0x100000001b3);
                        bVar4 = *pbVar14;
                        pbVar14 = pbVar14 + 1;
                      } while (bVar4 != 0);
                    }
                    *param_1 = puVar20;
                    param_1[1] = __s;
                    param_1[2] = sVar10;
                    param_1[3] = 0;
                    if (puVar20 == (undefined1 *)0x2c02645014d5a2a5) {
                      FUN_0192d3fc(*(undefined8 *)(param_2 + 0x40));
                    }
                    else {
                      FUN_0148e0dc(*(undefined8 *)(param_2 + 0x40),param_1);
                    }
                    if (((*PTR_DAT_047dd000 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar7 != 0)) {
                      FUN_00100190(PTR_LAB_047dd018,PTR_DAT_047dd008,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047dd000);
                    }
                    *(undefined8 *)PTR_DAT_047dd010 = *(undefined8 *)PTR_DAT_047dd008;
                    return;
                  }
                }
              }
            }
          }
          puVar8 = puVar8 + 1;
          lVar19 = lVar19 + 4;
        } while (puVar8 != puVar1);
      }
      FUN_0216363c(*(undefined8 *)(param_2 + 0x40));
    }
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar6 = PTR_DAT_047d3e30;
  uVar2 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[1] = uVar2;
  plVar3 = *(long **)(puVar6 + 0x18);
  param_1[2] = *(undefined8 *)(puVar6 + 0x10);
  param_1[3] = plVar3;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0192d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))();
  return;
}


