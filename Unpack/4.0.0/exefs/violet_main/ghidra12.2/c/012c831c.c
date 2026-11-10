/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c831c; name: FUN_012c831c
 */


undefined1  [16] FUN_012c831c(undefined4 param_1,long param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  undefined1 auVar12 [16];
  int local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  local_70 = 0x2208000020;
  local_60 = 0;
  local_54 = 0;
  local_68 = param_3;
  local_58 = param_1;
  FUN_00e08a00(param_2 + 0x28,param_2,&local_70);
  lVar9 = *(long *)(param_2 + 0x140);
  lVar10 = *(long *)(lVar9 + 0x18);
  plVar8 = (long *)(lVar10 + (long)param_3 * 0x18);
  puVar11 = (uint *)(plVar8 + 2);
  uVar5 = *puVar11;
  if ((int)uVar5 < 0) {
    FUN_030666a8(plVar8,2);
    uVar5 = *puVar11;
  }
  lVar1 = (-(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1) + (long)(int)uVar5;
  puVar3 = (undefined8 *)(*plVar8 + lVar1 * 8);
  *puVar11 = *(uint *)((long)puVar3 + 0xc);
  lVar10 = lVar10 + (long)param_3 * 0x18;
  *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  lVar10 = *plVar8;
  iVar4 = *(int *)(lVar9 + 0x328);
  *(int *)(lVar9 + 0x328) = iVar4 + 1;
  plVar8 = *(long **)(lVar10 + lVar1 * 8);
  *(undefined8 *)(lVar10 + lVar1 * 8) = 0;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar2 = plVar8 + 2;
    do {
      lVar9 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  lVar10 = lVar10 + (long)(int)uVar5 * 0x18;
  *(undefined4 *)(lVar10 + 8) = param_1;
  *(undefined4 *)(lVar10 + 0xc) = 0;
  *(int *)(lVar10 + 0x10) = iVar4;
  auVar12._4_4_ = uVar5;
  auVar12._0_4_ = param_3;
  FUN_0307d3a4(*(undefined8 *)(param_2 + 0x130));
  local_80 = 0;
  local_74 = 0;
  local_88[0] = param_3;
  local_78 = param_1;
  FUN_031243c4(param_2 + 0xa0,param_2,local_88);
  auVar12._8_4_ = iVar4;
  auVar12._12_4_ = 0;
  return auVar12;
}


