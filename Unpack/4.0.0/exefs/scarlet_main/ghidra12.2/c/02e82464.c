/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e82464; name: FUN_02e82464
 */


ulong FUN_02e82464(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  plVar9 = param_2 + 6;
  uVar8 = *(uint *)(param_1 + 0x58);
  lVar6 = 0;
  if (*plVar9 != 0) {
    lVar6 = *plVar9 + (long)plVar9;
  }
  if ((int)uVar8 < 0) {
    FUN_02e822e8(param_1 + 0x48,8);
    uVar8 = (uint)*(ushort *)(param_1 + 0x58);
  }
  uVar10 = NEON_fmov(0x3f800000,4);
  puVar1 = (undefined8 *)
           (*(long *)(param_1 + 0x48) + param_1 + 0x48 + (ulong)(uVar8 & 0xffff) * 0x40);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)((long)puVar1 + 0x2c);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  puVar4 = PTR_DAT_047d19b0;
  puVar1[4] = uVar10;
  puVar1[7] = 0;
  uVar10 = *(undefined8 *)(puVar4 + 0x238);
  *puVar1 = *(undefined8 *)(puVar4 + 0x230);
  puVar1[1] = uVar10;
  puVar1[2] = 0;
  puVar1[3] = 0x40ffff00000000;
  puVar1[5] = 0xffffffff3f800000;
  plVar7 = puVar1 + 6;
  *plVar7 = 0;
  uVar10 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  uVar14 = param_2[5];
  uVar13 = param_2[4];
  uVar16 = param_2[7];
  lVar15 = param_2[6];
  puVar1[1] = param_2[1];
  *puVar1 = uVar10;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  puVar1[5] = uVar14;
  puVar1[4] = uVar13;
  puVar1[7] = uVar16;
  *plVar7 = lVar15;
  lVar15 = 0;
  if (param_2[6] != 0) {
    lVar15 = (long)plVar9 + (param_2[6] - (long)plVar7);
  }
  *plVar7 = lVar15;
  if (((lVar15 != 0) && (lVar15 = lVar15 + (long)plVar7, lVar15 != 0)) &&
     (*(long *)(lVar15 + 8) != 0)) {
    plVar7 = (long *)(lVar15 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4 = PTR_DAT_047d19f0;
  iVar5 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar6 + 0x18) * 0x200 + 0xc0))
                    (lVar6);
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar5;
  lVar6 = (**(code **)(*(long *)puVar4 + (ulong)*(byte *)(lVar6 + 0x18) * 0x200 + 0x48))(lVar6);
  if (lVar6 != 0) {
    *(undefined1 *)(param_1 + 0x94) = 1;
    lVar6 = 0;
    if (*plVar9 != 0) {
      lVar6 = *plVar9 + (long)plVar9;
    }
    lVar6 = (**(code **)(*(long *)puVar4 + (ulong)*(byte *)(lVar6 + 0x18) * 0x200 + 0x48))();
    FUN_02e8aa20(lVar6,param_1,FUN_02e8aae4,0,uVar8);
    FUN_02e8ab58(lVar6 + 8,param_1,&LAB_02e8ac1c,0,uVar8);
  }
  return (ulong)(uVar8 & 0xffff);
}


