/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0030ac30; name: FUN_0030ac30
 */


void FUN_0030ac30(long param_1,void *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_2 != (void *)0x0) {
    FUN_00368a60(param_2,param_1 + 0x148);
    free(param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined1 **)(param_1 + 0x130) = &LAB_0030aca0;
  *(long *)(param_1 + 0x138) = param_1;
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_00350c0c(*(undefined8 *)(param_1 + 0x28),param_1 + 0x128,0);
  return;
}


