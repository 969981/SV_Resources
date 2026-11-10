/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036e8f0; name: FUN_0036e8f0
 */


void FUN_0036e8f0(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0xa8) == '\0') {
    if (param_2 == 0) {
      uVar3 = *(byte *)(param_1 + 0x8b4) ^ 1;
    }
    else {
      uVar3 = 1;
    }
    **(uint **)(param_1 + 0x8e0) = uVar3;
    lVar5 = FUN_00373790(*(undefined8 *)(param_1 + 0x8e8));
    if (lVar5 != 0) {
      if ((**(int **)(param_1 + 0x8e0) == 0) && (*(long *)(param_1 + 0x8f8) == 0)) {
        FUN_003462d0(lVar5 + 0x38);
        if (param_2 < 5) {
          return;
        }
        goto LAB_0036e9d4;
      }
      FUN_00346244(lVar5 + 0x38);
    }
    if (4 < param_2) {
LAB_0036e9d4:
      FUN_00350fd0(param_2);
      return;
    }
  }
  else {
    FUN_00375900(param_2,*(undefined8 *)(param_1 + 0x6b8),*(undefined8 *)(param_1 + 0x8e0),
                 *(undefined8 *)(param_1 + 0x8e8),0,*(undefined8 *)(param_1 + 0x8f0));
    if (((undefined8 *)**(undefined8 **)(param_1 + 0x8e8) != (undefined8 *)0x0) &&
       (plVar4 = *(long **)**(undefined8 **)(param_1 + 0x8e8), plVar4 != (long *)0x0)) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(ulong *)(param_1 + 0x8f8) = param_2;
    lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 0x68);
    if (lVar5 != 0) {
      if (**(int **)(param_1 + 0x8e0) == 0) {
        FUN_003462d0(lVar5 + 0x50);
        return;
      }
      FUN_00346244();
      return;
    }
  }
  return;
}


