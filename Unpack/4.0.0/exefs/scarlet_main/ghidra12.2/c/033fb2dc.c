/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033fb2dc; name: FUN_033fb2dc
 */


undefined8 FUN_033fb2dc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x17);
    if (uVar2 != 0) {
      if (*(long *)(lVar3 + 0x10) != 0) {
        (**(code **)(*(long *)param_1[4] + 0x18))();
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(undefined4 *)(lVar3 + 8) = 0;
        uVar2 = *(uint *)(param_1 + 0x17);
      }
      if (1 < uVar2) {
        lVar3 = 0;
        uVar5 = 1;
        do {
          lVar1 = param_1[1] + lVar3;
          if (*(long *)(lVar1 + 0x48) != 0) {
            (**(code **)(*(long *)param_1[4] + 0x18))();
            *(undefined8 *)(lVar1 + 0x48) = 0;
            *(undefined4 *)(lVar1 + 0x40) = 0;
            uVar2 = *(uint *)(param_1 + 0x17);
          }
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 0x38;
        } while (uVar5 < uVar2);
      }
      lVar3 = param_1[1];
    }
    (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar3);
    param_1[1] = 0;
  }
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    if (*plVar4 != 0) {
      (**(code **)(*(long *)param_1[4] + 0x18))();
      *plVar4 = 0;
    }
    *(undefined4 *)(plVar4 + 1) = 0;
    if (param_1[2] != 0) {
      (**(code **)(*(long *)param_1[4] + 0x18))();
    }
    param_1[2] = 0;
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  return 1;
}


