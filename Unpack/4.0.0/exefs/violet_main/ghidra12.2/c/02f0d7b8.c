/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f0d7b8; name: FUN_02f0d7b8
 */


void FUN_02f0d7b8(long param_1,uint param_2,long param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  code *local_70;
  uint *local_68;
  uint local_60 [2];
  long local_58;
  code *local_28;
  
  local_68 = local_60;
  local_70 = FUN_02f0da30;
  local_58 = *(long *)(param_1 + 0x18) + ((long)((ulong)param_2 << 0x20) >> 0x1d);
  if (*(long *)(param_3 + (long)(int)param_2 * 0x68) != param_4) {
    local_58 = local_58 + 4;
  }
  local_28 = FUN_02f0da7c;
  local_60[0] = param_2;
  FUN_031c4cb4(param_1,param_4,&local_70);
  puVar3 = local_68;
  if (local_68 != (uint *)0x0) {
    if (local_28 == (code *)0x1) {
      puVar4 = local_68 + -2;
      do {
        lVar5 = *(long *)puVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar2) {
          *(long *)puVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 != 0) {
        return;
      }
    }
    else if (local_28 != (code *)0x0) {
      (*local_28)(local_68,0);
      return;
    }
    puVar4 = puVar3 + -4;
    (**(code **)puVar4)(puVar3,0);
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(ulong)puVar4 & 0xfffffffffffffff0,0);
  }
  return;
}


