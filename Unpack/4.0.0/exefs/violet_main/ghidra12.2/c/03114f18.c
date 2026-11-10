/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03114f18; name: FUN_03114f18
 */


void FUN_03114f18(long param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  uint local_3c;
  undefined1 auStack_38 [8];
  
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
      local_3c = (uint)uVar6;
    }
    else {
      iVar5 = FUN_03232ac8(param_1 + 0x30,iVar1,1,&local_3c);
      if (iVar5 == 0) {
        return;
      }
      uVar6 = (ulong)local_3c;
    }
    FUN_031174cc(param_1,auStack_38,uVar6);
  } while( true );
}


