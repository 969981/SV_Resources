/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007dbe24; name: FUN_007dbe24
 */


undefined8 FUN_007dbe24(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long local_50;
  undefined4 local_48;
  
  lVar6 = param_1 + 0xb8;
  local_48 = 0;
  local_50 = 0x10000000000;
  FUN_007e55d0(lVar6,&local_50);
  puVar10 = PTR_DAT_047d0860;
  if (*(int *)(*(long *)(param_1 + 0x58) + 0x784) == 0) {
    uVar3 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
    lVar4 = FUN_007e3cc8(uVar3,lVar6);
    puVar1 = PTR_DAT_047d0a08;
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x28) != -3)) {
      local_50 = 0x10000000000;
      local_48 = 0;
      lVar4 = *(long *)PTR_DAT_047d0a08;
      (**(code **)(*(long *)(param_1 + 0xb8) + 0x20))(lVar6,&local_50);
      FUN_007e51d8(lVar4 + 0x1b8,lVar6);
      uVar12 = *(undefined8 *)(param_1 + 0x58);
      uVar3 = FUN_007e5328(lVar6);
      FUN_007ec51c(uVar12,uVar3);
      *(undefined1 *)(param_1 + 0xa9) = 0;
      uVar5 = FUN_007e5224(lVar6,*(long *)puVar1 + 0x178);
      if ((uVar5 & 1) == 0) {
        plVar7 = (long *)FUN_0079365c();
        lVar6 = *plVar7;
        local_50 = 0;
        FUN_007935cc(&local_50);
        *(long *)(param_1 + 0x70) = local_50 + lVar6 * 10000;
        if (*(int *)(param_1 + 0x60) != 0x65) {
          *(undefined4 *)(param_1 + 0x60) = 0x65;
        }
        pcVar8 = "ProcessHostMigrationJob::WaitUpdateSessionMessageFromNewHost";
        puVar10 = PTR_LAB_047d1388;
      }
      else {
        lVar6 = FUN_01f7c4e8(*(undefined8 *)puVar10);
        lVar4 = *(long *)(lVar6 + 0x20);
        lVar6 = FUN_01f7c4e8(*(undefined8 *)puVar10);
        lVar6 = lVar6 + 0x18;
        if (lVar4 != lVar6) {
          lVar11 = 0;
          bVar2 = true;
          do {
            while (!bVar2) {
              bVar2 = *(long *)(lVar4 + 0x10) == lVar11;
              lVar4 = *(long *)(lVar4 + 8);
joined_r0x007dbf98:
              if (lVar4 == lVar6) goto LAB_007dbfd8;
            }
            uVar5 = (**(code **)(**(long **)(*(long *)puVar1 + 0x18) + 0x128))
                              (*(long **)(*(long *)puVar1 + 0x18),*(long *)(lVar4 + 0x10) + 8);
            if ((uVar5 & 1) != 0) {
              lVar11 = *(long *)(lVar4 + 0x10);
              bVar2 = true;
              lVar4 = *(long *)(lVar4 + 8);
              goto joined_r0x007dbf98;
            }
            FUN_007d54b4(*(undefined8 *)(param_1 + 0x58),*(long *)(lVar4 + 0x10) + 8);
            bVar2 = lVar11 == 0;
            lVar6 = FUN_01f7c4e8(*(undefined8 *)puVar10);
            lVar4 = *(long *)(lVar6 + 0x20);
            lVar6 = FUN_01f7c4e8(*(undefined8 *)puVar10);
            lVar6 = lVar6 + 0x18;
          } while (lVar4 != lVar6);
        }
LAB_007dbfd8:
        uVar5 = (**(code **)(**(long **)(*(long *)puVar1 + 0x18) + 0xf0))();
        uVar9 = 1;
        if ((uVar5 & 1) == 0) {
          uVar9 = 2;
        }
        FUN_007cddb4(*(undefined8 *)puVar1,uVar9);
        pcVar8 = "ProcessHostMigrationJob::CompleteProcess";
        puVar10 = PTR_LAB_047d1380;
      }
      goto LAB_007dbe74;
    }
  }
  pcVar8 = "ProcessHostMigrationJob::CompleteFailure";
  puVar10 = PTR_FUN_047d1370;
LAB_007dbe74:
  *(undefined **)(param_1 + 0x30) = puVar10;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar8;
  return 0;
}


