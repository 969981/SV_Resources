/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003505cc; name: FUN_003505cc
 */


void FUN_003505cc(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 auStack_18 [8];
  
  puVar1 = (ulong *)(param_1 + 0x58);
  do {
    uVar4 = *puVar1;
    if (1 < uVar4 && (uVar4 & 1) != 0) {
      if (param_2 < 5) {
        return;
      }
      FUN_00350fd0(param_2);
      return;
    }
    while (*puVar1 == uVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = param_2 | 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (uVar4 == 0) {
          return;
        }
        if (4 < param_2) {
          param_2 = FUN_00350fb0(param_2);
        }
        FUN_0035351c(auStack_18,uVar4,param_2);
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


