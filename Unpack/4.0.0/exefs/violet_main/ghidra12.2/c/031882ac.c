/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031882ac; name: FUN_031882ac
 */


void FUN_031882ac(long param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint local_34;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x918) + 0x58);
  lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x918) + 0x18) + 0x60);
  iVar1 = *(int *)(param_2 + 0x18) + 1;
  do {
    puVar2 = (ulong *)(*(long *)(param_1 + 0x4c0) +
                      (long)*(int *)(*(long *)(param_1 + 0x70) + (long)iVar1 * 0x40) * 0x40);
    do {
      uVar6 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uint)uVar6 < (uint)(uVar6 >> 0x20)) {
      local_34 = (uint)uVar6;
    }
    else {
      iVar5 = FUN_03232ac8(param_1 + 0x30,iVar1,1,&local_34);
      if (iVar5 == 0) {
        return;
      }
      uVar6 = (ulong)local_34;
    }
    lVar8 = *(long *)(lVar9 + (long)(int)uVar6 * 8);
    lVar7 = lVar10 + (long)(int)uVar6 * 0x70;
    *(undefined4 *)(lVar7 + 8) = 0;
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(undefined4 *)(lVar7 + 0x28) = 0;
    *(undefined1 *)(lVar7 + 0x34) = 0;
    *(undefined4 *)(lVar7 + 0x40) = 0;
    *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)(lVar8 + 0xb8);
  } while( true );
}


