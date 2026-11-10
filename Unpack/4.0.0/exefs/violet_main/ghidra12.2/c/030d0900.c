/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d0900; name: FUN_030d0900
 */


void FUN_030d0900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined *local_110;
  undefined *puStack_108;
  void *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  void *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined8 local_94 [2];
  undefined *local_80;
  undefined *puStack_78;
  
  puVar1 = PTR_DAT_047d1a08;
  local_130 = (undefined *)0x60;
  plVar6 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_130,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(plVar6,"FindPathOutput");
  }
  *plVar6 = (long)(PTR_DAT_047e5108 + 0x10);
  plVar6[1] = 0xffffffff;
  plVar6[2] = 1;
  plVar6[3] = 0;
  plVar6[4] = -0x8000000000000000;
  plVar6[5] = 0;
  plVar6[6] = -0x8000000000000000;
  plVar6[7] = 0;
  plVar6[8] = -0x8000000000000000;
  plVar6[10] = -0x100000000;
  *(undefined4 *)(plVar6 + 0xb) = 0x7f7fffee;
  *(undefined2 *)((long)plVar6 + 0x5c) = 0;
  plVar7 = *(long **)(param_1 + 0x20);
  *(long **)(param_1 + 0x20) = plVar6;
  if (plVar7 != (long *)0x0) {
    if (plVar7[1] != 0) {
      plVar6 = plVar7 + 2;
      do {
        lVar9 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    plVar6 = *(long **)(param_1 + 0x20);
  }
  ppuVar11 = *(undefined ***)(param_1 + 0x18);
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7,param_1,param_2);
  }
  local_f0 = 0xffffffff;
  local_a0 = 1;
  local_128 = 0xffffffff;
  uStack_120 = 1;
  local_100 = (void *)0x0;
  local_f8 = -0x8000000000000000;
  puVar1 = PTR_DAT_047e5100 + 0x10;
  local_e8 = (void *)0x0;
  local_e0._0_4_ = 0;
  local_e0._4_4_ = 0x80000000;
  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,100000);
  local_d0 = (undefined *)((ulong)local_d0._4_4_ << 0x20);
  local_c8 = (undefined *)0x0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_9c = 0x7f7fffee3f800000;
  local_94[0] = 0;
  puStack_b8 = (undefined *)0x0;
  local_c0 = (undefined *)0x0;
  local_80 = (undefined *)0x0;
  puStack_78 = (undefined *)0x0;
  puStack_108 = ppuVar11[5];
  local_110 = ppuVar11[4];
  local_130 = puVar1;
  if (ppuVar11 != &local_130) {
    iVar2 = *(int *)(ppuVar11 + 7);
    puVar10 = ppuVar11[6];
    if (0 < iVar2) {
      FUN_02f0842c(&local_100,PTR_PTR_047d1a50,(long)iVar2);
    }
    memcpy(local_100,puVar10,(long)iVar2 << 4);
    local_f8 = CONCAT44(local_f8._4_4_,iVar2);
    local_f0 = *(undefined4 *)(ppuVar11 + 8);
    iVar2 = *(int *)(ppuVar11 + 10);
    puVar10 = ppuVar11[9];
    if ((int)(local_e0._4_4_ & 0x7fffffff) < iVar2) {
      FUN_030cb698(&local_e8,PTR_PTR_047d1a50,(long)iVar2);
    }
    memcpy(local_e8,puVar10,(long)iVar2 << 2);
    local_e0._0_4_ = iVar2;
  }
  puVar10 = PTR_PTR_047d1a50;
  local_d8 = ppuVar11[0xb];
  local_d0 = ppuVar11[0xc];
  local_c8 = ppuVar11[0xd];
  puStack_b8 = ppuVar11[0xf];
  local_c0 = ppuVar11[0xe];
  memcpy(&local_b0,ppuVar11 + 0x10,0x24);
  local_80 = ppuVar11[0x16];
  puStack_78 = ppuVar11[0x17];
  FUN_030b9860(local_94,param_4,&local_80,0);
  FUN_030c9e04(param_2,&local_130,plVar6);
  uVar5 = local_e0._4_4_;
  uVar8 = (ulong)local_e0._4_4_;
  local_e0 = (ulong)local_e0._4_4_ << 0x20;
  local_130 = puVar1;
  if ((-1 < (int)uVar5) && (local_e8 != (void *)0x0)) {
    (**(code **)(*(long *)puVar10 + 0x20))(puVar10,local_e8,uVar8 << 2);
  }
  lVar9 = local_f8;
  local_e0 = CONCAT44(0x80000000,(int)local_e0);
  uVar8 = (ulong)local_f8._4_4_;
  local_e8 = (void *)0x0;
  local_f8 = (ulong)local_f8._4_4_ << 0x20;
  if ((-1 < lVar9) && (local_100 != (void *)0x0)) {
    (**(code **)(*(long *)puVar10 + 0x20))(puVar10,local_100,uVar8 << 4);
  }
  return;
}


