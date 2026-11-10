/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0325fb44; name: FUN_0325fb44
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0325fb44(undefined8 *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *local_8b0;
  undefined8 local_8a8;
  undefined1 local_8a0 [2048];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [10];
  undefined1 local_66;
  
  uVar3 = _UNK_03cabe68;
  uVar11 = _DAT_03cabe60;
  uVar10 = DAT_03cab620;
  if ((*(int *)((long)param_2 + 0xc) == 0x10) && (uVar6 = *param_2, (uVar6 & 0xf) == 0)) {
    iVar2 = (int)param_2[1];
    param_1[1] = DAT_03cab628;
    *param_1 = uVar10;
    param_1[3] = uVar3;
    param_1[2] = uVar11;
    uVar3 = _UNK_03cabe58;
    uVar11 = _DAT_03cabe50;
    uVar10 = _DAT_03caa5b0;
    param_1[5] = _UNK_03caa5b8;
    param_1[4] = uVar10;
    param_1[7] = uVar3;
    param_1[6] = uVar11;
    if (iVar2 < 1) {
      uVar10 = 0x3f800000;
      uVar11 = 0;
    }
    else {
      FUN_0084f37c(&local_8b0);
      local_8a8._0_3_ = CONCAT12(1,(undefined2)local_8a8);
      FUN_0084f3cc(auStack_70);
      FUN_008501d4(auStack_70,uVar6,iVar2,&local_8b0);
      auVar8 = FUN_0325e690(param_1,uVar6,iVar2,auStack_70);
      uVar11 = auVar8._8_8_;
      uVar10 = auVar8._0_8_;
      FUN_0084f57c(auStack_70);
    }
  }
  else {
    iVar2 = (int)param_2[1];
    local_8b0 = local_8a0;
    local_8a8 = -0x7fffff8000000000;
    if (iVar2 < 0x81) {
      local_8a8._0_4_ = 0;
    }
    else {
      FUN_02e8df28(&local_8b0,PTR_PTR_047d1a50,iVar2);
    }
    puVar4 = local_8b0;
    iVar7 = (int)local_8a8;
    if ((int)local_8a8 != iVar2) {
      local_8a8 = CONCAT44(local_8a8._4_4_,iVar2);
      iVar7 = iVar2;
    }
    if (0 < (int)param_2[1]) {
      lVar5 = 0;
      do {
        puVar1 = (undefined8 *)(*param_2 + (long)(*(int *)((long)param_2 + 0xc) * (int)lVar5));
        uVar10 = *puVar1;
        uVar9 = 0;
        if (0xf < *(int *)((long)param_2 + 0xc)) {
          uVar9 = *(undefined4 *)((long)puVar1 + 0xc);
        }
        *(ulong *)((long)(local_8b0 + lVar5 * 0x10) + 8) =
             CONCAT44(uVar9,*(undefined4 *)(puVar1 + 1));
        *(undefined8 *)(local_8b0 + lVar5 * 0x10) = uVar10;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)param_2[1]);
      iVar7 = (int)local_8a8;
    }
    uVar3 = _UNK_03cabe68;
    uVar11 = _DAT_03cabe60;
    uVar10 = DAT_03cab620;
    param_1[1] = DAT_03cab628;
    *param_1 = uVar10;
    param_1[3] = uVar3;
    param_1[2] = uVar11;
    uVar3 = _UNK_03cabe58;
    uVar11 = _DAT_03cabe50;
    uVar10 = _DAT_03caa5b0;
    param_1[5] = _UNK_03caa5b8;
    param_1[4] = uVar10;
    param_1[7] = uVar3;
    param_1[6] = uVar11;
    if (iVar7 < 1) {
      uVar10 = 0x3f800000;
      uVar11 = 0;
    }
    else {
      FUN_0084f37c(auStack_70);
      local_66 = 1;
      FUN_0084f3cc(auStack_a0);
      FUN_008501d4(auStack_a0,puVar4,iVar7,auStack_70);
      auVar8 = FUN_0325e690(param_1,puVar4,iVar7,auStack_a0);
      uVar11 = auVar8._8_8_;
      uVar10 = auVar8._0_8_;
      FUN_0084f57c(auStack_a0);
    }
    lVar5 = local_8a8;
    uVar6 = (ulong)local_8a8._4_4_;
    local_8a8 = (ulong)local_8a8._4_4_ << 0x20;
    if ((-1 < lVar5) && (local_8b0 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_8b0,uVar6 << 4);
    }
  }
  auVar8._8_8_ = uVar11;
  auVar8._0_8_ = uVar10;
  return auVar8;
}


