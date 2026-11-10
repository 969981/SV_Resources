/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f20d4; name: FUN_030f20d4
 */


undefined8 FUN_030f20d4(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  void *__dest;
  uint uVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  
  uVar6 = FUN_030f36ac();
  iVar10 = (int)uVar6;
  if ((int)param_1[1] == iVar10) {
    iVar1 = iVar10 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar10) {
      FUN_030f37a8(param_1,(long)iVar1);
      iVar10 = (int)param_1[1];
    }
    lVar12 = *param_1;
    puVar15 = (undefined4 *)(lVar12 + (long)iVar10 * 0x28);
    *puVar15 = *param_2;
    puVar11 = (undefined8 *)(puVar15 + 2);
    *puVar11 = 0;
    puVar16 = puVar15 + 4;
    puVar16[0] = 0;
    puVar16[1] = 0x80000000;
    uVar3 = *(uint *)(param_3 + 1);
    lVar13 = (long)iVar10;
    if ((int)uVar3 < 1) {
      *puVar11 = 0;
      *puVar16 = 0;
      puVar15[5] = 0x80000000;
    }
    else {
      puVar14 = (undefined4 *)*param_3;
      puVar7 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar3 << 4);
      uVar8 = 0;
      *puVar11 = puVar7;
      *puVar16 = uVar3;
      puVar15[5] = uVar3;
      do {
        *puVar7 = *puVar14;
        lVar9 = *(long *)(puVar14 + 2);
        *(long *)(puVar7 + 2) = lVar9;
        puVar7 = puVar7 + 4;
        puVar14 = puVar14 + 4;
        if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
          plVar2 = (long *)(lVar9 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar3);
    }
    puVar11 = (undefined8 *)(lVar12 + lVar13 * 0x28 + 0x18);
    if (*(int *)(param_3[2] + 4) == -2) {
      *puVar11 = &DAT_03d7702c;
      *(undefined4 *)(lVar12 + lVar13 * 0x28 + 0x20) = 0;
    }
    else {
      *(undefined4 *)(lVar12 + lVar13 * 0x28 + 0x20) = *(undefined4 *)(param_3 + 3);
      __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(long)*(int *)(param_3 + 3) * 8 + 8);
      *puVar11 = __dest;
      memcpy(__dest,(void *)param_3[2],(long)*(int *)(param_3 + 3) * 8 + 8);
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  return uVar6;
}


