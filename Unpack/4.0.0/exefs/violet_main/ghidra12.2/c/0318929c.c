/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0318929c; name: FUN_0318929c
 */


void FUN_0318929c(long param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint local_a4;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  
  lVar7 = *(long *)(param_1 + 0x918);
  local_a0 = *(long *)(*(long *)(lVar7 + 0x18) + 0x60);
  lStack_98 = local_a0 + (long)*(int *)(*(long *)(lVar7 + 0x18) + 0x68) * 8;
  local_90 = *(long *)(lVar7 + 0x58);
  lStack_88 = local_90 + (long)*(int *)(lVar7 + 0x60) * 0x70;
  uStack_78 = *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x48);
  local_80 = *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x40);
  iVar1 = *(int *)(param_2 + 0x18) + 1;
  do {
    puVar2 = (ulong *)(*(long *)(param_1 + 0x4c0) +
                      (long)*(int *)(*(long *)(param_1 + 0x70) + (long)iVar1 * 0x40) * 0x40);
    do {
      uVar8 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uint)uVar8 < (uint)(uVar8 >> 0x20)) {
      local_a4 = (uint)uVar8;
    }
    else {
      iVar5 = FUN_03232ac8(param_1 + 0x30,iVar1,1,&local_a4);
      if (iVar5 == 0) {
        return;
      }
      uVar8 = (ulong)local_a4;
    }
    lVar7 = local_90;
    iVar5 = (int)uVar8;
    lVar9 = local_90 + (long)iVar5 * 0x70;
    lVar10 = *(long *)(local_a0 + (long)iVar5 * 8);
    plVar6 = *(long **)(lVar10 + 0xe0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x30))(plVar6,lVar10,lVar9);
    }
    local_70 = lVar10;
    lStack_68 = lVar9;
    FUN_03189b90(&local_80,lVar7 + (long)iVar5 * 0x70 + 0x50);
  } while( true );
}


