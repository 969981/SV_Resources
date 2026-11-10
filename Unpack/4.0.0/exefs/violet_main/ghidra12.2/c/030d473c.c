/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d473c; name: FUN_030d473c
 */


void FUN_030d473c(long param_1,int *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  int local_70 [2];
  int local_68 [2];
  undefined8 local_60;
  int local_58 [2];
  int local_38;
  undefined2 local_34 [2];
  
  local_58[0] = *param_2;
  local_60 = 0x308000010;
  FUN_00e08a00(param_1 + 0x28,param_1,&local_60);
  if (*(long *)(param_1 + 0x4d8) != 0) {
    lVar12 = *(long *)(param_1 + 0x4e0);
    uVar7 = (ushort)local_60;
    if ((int)(*(int *)(lVar12 + 0x18) + (uint)(ushort)local_60) < 0xfa1) {
      puVar9 = (undefined8 *)(*(long *)(lVar12 + 0x10) + (long)*(int *)(lVar12 + 0x18) + 0x20);
    }
    else {
      puVar9 = (undefined8 *)FUN_031c36f4(lVar12);
    }
    puVar10 = &local_60;
    iVar8 = (uVar7 >> 4) + 1;
    do {
      iVar8 = iVar8 + -1;
      uVar2 = *(undefined4 *)(puVar10 + 1);
      uVar3 = *(undefined4 *)((long)puVar10 + 0xc);
      *puVar9 = *puVar10;
      *(undefined4 *)(puVar9 + 1) = uVar2;
      *(undefined4 *)((long)puVar9 + 0xc) = uVar3;
      puVar10 = puVar10 + 2;
      puVar9 = puVar9 + 2;
    } while (1 < iVar8);
    *(uint *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + (uint)uVar7;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    return;
  }
  local_38 = *param_2;
  plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x130) + 0x38) + (long)local_38 * 0x100 + 0x10)
  ;
  if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
    plVar1 = plVar13 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    local_38 = *param_2;
  }
  lVar15 = *(long *)(*(long *)(param_1 + 0x138) + 0xf0);
  local_34[0] = 0;
  plVar1 = (long *)(lVar15 + 0x18);
  lVar12 = FUN_030d4c28(plVar1,&local_38,local_34);
  lVar14 = *(long *)(lVar15 + 0x18);
  pbVar11 = (byte *)(lVar14 + ((lVar12 << 0x20) >> 0x1d) + 4);
  bVar4 = *pbVar11;
  iVar8 = (int)lVar12;
  if ((bVar4 >> 2 & 1) == 0) {
    *pbVar11 = bVar4 | 8;
  }
  else {
    *pbVar11 = bVar4 & 0xfb;
    if ((bVar4 & 0xfb) == 0) {
      if ((*(uint *)(lVar15 + 0x30) < (uint)((ulong)lVar12 >> 0x20)) ||
         (lVar12 = *(long *)(lVar15 + 0x28) + (lVar12 >> 0x20) * 8, *(int *)(lVar12 + 4) != iVar8))
      {
        lVar12 = FUN_030b04f4(plVar1,*plVar1 + (long)iVar8 * 8);
      }
      FUN_030d4f2c(plVar1,lVar12);
    }
  }
  *(undefined1 *)(lVar14 + (long)iVar8 * 8 + 5) = 0;
  local_68[0] = *param_2;
  FUN_0307affc(*(undefined8 *)(param_1 + 0x130),local_68);
  if ((char)plVar13[6] == '\x01') {
    lVar12 = plVar13[4];
  }
  else {
    lVar12 = FUN_00e0e904();
  }
  *(undefined4 *)(lVar12 + 0x60) = 0xffffffff;
  FUN_03088128(plVar13);
  local_70[0] = *param_2;
  FUN_030d4684(param_1 + 0x68,param_1,local_70);
  if (plVar13[1] != 0) {
    plVar1 = plVar13 + 2;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  return;
}


