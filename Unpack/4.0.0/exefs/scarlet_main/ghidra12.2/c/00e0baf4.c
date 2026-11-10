/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e0baf4; name: FUN_00e0baf4
 */


void FUN_00e0baf4(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  int local_3c;
  
  if ((((*(int *)(param_1 + 0xf4) < 0) || (*(int *)(param_1 + 0xf8) != param_3)) ||
      (*(int *)(param_1 + 0xf0) != (int)param_2)) ||
     (*(int *)(param_1 + 0xf4) != (int)((ulong)param_2 >> 0x20))) {
    local_48 = *(undefined4 *)(param_1 + 0x23c);
    local_50 = 0x2c08000020;
    local_44 = param_2;
    local_3c = param_3;
    FUN_00e08a00(*(long *)(param_1 + 0x180) + 0x28,*(long *)(param_1 + 0x180),&local_50);
    plVar4 = *(long **)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0xf0) = param_2;
    *(int *)(param_1 + 0xf8) = param_3;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined1 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar1 = plVar4 + 2;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
    *(undefined1 *)(param_1 + 0xba) = 0;
    *(undefined1 *)(param_1 + 0x199) = 1;
    FUN_00e08aac(param_1);
  }
  return;
}


