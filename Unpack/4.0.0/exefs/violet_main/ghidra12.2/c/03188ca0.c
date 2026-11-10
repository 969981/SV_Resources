/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03188ca0; name: FUN_03188ca0
 */


void FUN_03188ca0(long param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_44;
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x918) + 0x48);
  lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x918) + 0x18) + 0x70);
  iVar1 = *(int *)(param_2 + 0x18) + 1;
  do {
    puVar2 = (ulong *)(*(long *)(param_1 + 0x4c0) +
                      (long)*(int *)(*(long *)(param_1 + 0x70) + (long)iVar1 * 0x40) * 0x40);
    do {
      uVar11 = *puVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uint)uVar11 < (uint)(uVar11 >> 0x20)) {
      local_44 = (uint)uVar11;
    }
    else {
      iVar6 = FUN_03232ac8(param_1 + 0x30,iVar1,1,&local_44);
      if (iVar6 == 0) {
        return;
      }
      uVar11 = (ulong)local_44;
    }
    uVar10 = (uint)uVar11;
    plVar7 = *(long **)(lVar8 + (long)(int)uVar10 * 8);
    (**(code **)(*plVar7 + 0x20))(plVar7);
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_80);
    puVar3 = (uint *)(lVar9 + (long)(int)uVar10 * 0x20);
    *puVar3 = (((int)local_80 >> 0x1f | 0x80000000U) ^ local_80) >> 1;
    puVar3[1] = (((int)local_7c >> 0x1f | 0x80000000U) ^ local_7c) >> 1;
    puVar3[2] = (((int)local_78 >> 0x1f | 0x80000000U) ^ local_78) >> 1;
    puVar3[3] = uVar10;
    puVar3[4] = ((((int)local_70 >> 0x1f | 0x80000000U) ^ local_70) >> 1) + 1;
    puVar3[5] = ((((int)local_6c >> 0x1f | 0x80000000U) ^ local_6c) >> 1) + 1;
    puVar3[6] = ((((int)local_68 >> 0x1f | 0x80000000U) ^ local_68) >> 1) + 1;
  } while( true );
}


