/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030d0594; name: FUN_030d0594
 */


void FUN_030d0594(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long *param_6,undefined8 *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *local_170 [4];
  undefined *local_150;
  undefined *puStack_148;
  void *local_140;
  int local_138;
  uint local_134;
  undefined4 local_130;
  void *local_128;
  int local_120;
  uint local_11c;
  undefined *local_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [49];
  undefined1 local_bf;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  
  puVar10 = PTR_DAT_047d1a08;
  local_170[0] = (undefined *)0x60;
  plVar6 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_170,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(plVar6,"FindPathOutput");
  }
  *plVar6 = (long)(PTR_DAT_047e50e8 + 0x10);
  plVar6[1] = 0xffffffff;
  plVar6[8] = -0x100000000;
  plVar6[2] = 1;
  plVar6[3] = 0;
  plVar6[6] = -0x8000000000000000;
  plVar6[4] = -0x8000000000000000;
  plVar6[5] = 0;
  *(undefined4 *)(plVar6 + 9) = 0x7f7fffee;
  *(undefined2 *)((long)plVar6 + 0x4c) = 0;
  plVar6[10] = 0;
  plVar6[0xb] = -0x8000000000000000;
  plVar7 = *(long **)(param_1 + 0x20);
  *(long **)(param_1 + 0x20) = plVar6;
  if (plVar7 != (long *)0x0) {
    if (plVar7[1] != 0) {
      plVar6 = plVar7 + 2;
      do {
        lVar9 = *plVar6;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    plVar6 = *(long **)(param_1 + 0x20);
  }
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 != (long *)0x0) {
    ppuVar11 = *(undefined ***)(param_1 + 0x18);
    uVar8 = (**(code **)(*plVar7 + 0x18))(plVar7,param_1,param_2);
    if ((uVar8 & 1) != 0) {
      FUN_030b9058(local_170,0);
      puStack_148 = ppuVar11[5];
      local_150 = ppuVar11[4];
      if (ppuVar11 != local_170) {
        iVar1 = *(int *)(ppuVar11 + 7);
        puVar10 = ppuVar11[6];
        if ((int)(local_134 & 0x7fffffff) < iVar1) {
          FUN_02f0842c(&local_140,PTR_PTR_047d1a50,(long)iVar1);
        }
        memcpy(local_140,puVar10,(long)iVar1 << 4);
        local_130 = *(undefined4 *)(ppuVar11 + 8);
        iVar2 = *(int *)(ppuVar11 + 10);
        puVar10 = ppuVar11[9];
        local_138 = iVar1;
        if ((int)(local_11c & 0x7fffffff) < iVar2) {
          FUN_0309d1cc(&local_128,PTR_PTR_047d1a50,(long)iVar2);
        }
        memcpy(local_128,puVar10,(long)iVar2 << 2);
        local_120 = iVar2;
      }
      local_118 = ppuVar11[0xb];
      local_110 = ppuVar11[0xc];
      puStack_108 = ppuVar11[0xd];
      puStack_f8 = ppuVar11[0xf];
      local_100 = ppuVar11[0xe];
      memcpy(auStack_f0,ppuVar11 + 0x10,0x58);
      local_80 = ppuVar11[0x1e];
      puStack_78 = ppuVar11[0x1f];
      local_bf = param_6 != (long *)0x0;
      local_90 = ppuVar11[0x1c];
      puStack_88 = ppuVar11[0x1d];
      FUN_030b9860(auStack_a8,param_4,&local_90,0);
      FUN_030b9860(auStack_a0,param_5,&local_80,1);
      FUN_030b9958(param_2,local_170,plVar6);
      puVar10 = PTR_PTR_047d1a50;
      if (param_6 != (long *)0x0) {
        if (plVar6 + 10 != param_6) {
          FUN_0309d15c(param_6,PTR_PTR_047d1a50);
          FUN_0309d15c(plVar6 + 10,puVar10);
          lVar9 = *param_6;
          *param_6 = plVar6[10];
          plVar6[10] = lVar9;
          lVar9 = param_6[1];
          *(int *)(param_6 + 1) = (int)plVar6[0xb];
          *(int *)(plVar6 + 0xb) = (int)lVar9;
          uVar3 = *(undefined4 *)((long)param_6 + 0xc);
          *(undefined4 *)((long)param_6 + 0xc) = *(undefined4 *)((long)plVar6 + 0x5c);
          *(undefined4 *)((long)plVar6 + 0x5c) = uVar3;
        }
        puVar10 = ppuVar11[0x12];
        *(undefined4 *)(param_7 + 1) = *(undefined4 *)(ppuVar11 + 0x13);
        *param_7 = puVar10;
      }
      puVar10 = PTR_PTR_047d1a50;
      local_120 = 0;
      local_170[0] = PTR_DAT_047e50f0 + 0x10;
      if ((-1 < (int)local_11c) && (local_128 != (void *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                  (PTR_PTR_047d1a50,local_128,(ulong)local_11c << 2);
      }
      local_11c = 0x80000000;
      local_128 = (void *)0x0;
      local_138 = 0;
      if ((int)local_134 < 0) {
        return;
      }
      if (local_140 == (void *)0x0) {
        return;
      }
      (**(code **)(*(long *)puVar10 + 0x20))(puVar10,local_140,(ulong)local_134 << 4);
      return;
    }
  }
  plVar6[8] = -0x100000000;
  *(undefined1 *)((long)plVar6 + 0x4c) = 5;
  return;
}


