/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002eb9a0; name: FUN_002eb9a0
 */


void FUN_002eb9a0(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  do {
    uVar4 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar4 + 0x20;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (param_1[1] < uVar4 + 0x20) {
    puVar3 = (undefined8 *)FUN_0038e7c0(param_1,0x20);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    return;
  }
  *(undefined8 *)((long)param_1 + uVar4 + 0x20) = 0;
  *(undefined8 *)((long)param_1 + uVar4 + 0x28) = 0;
  *(undefined8 *)((long)param_1 + uVar4 + 0x30) = 0;
  return;
}


