/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033f4d98; name: FUN_033f4d98
 */


undefined8 FUN_033f4d98(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  
  FUN_033f4be4();
  puVar2 = (undefined4 *)param_1[0x1d];
  if (puVar2 != (undefined4 *)0x0) {
    if (*(int *)((long)param_1 + 0x194) != 0) {
      if (*(long *)(puVar2 + 2) != 0) {
        (**(code **)(*(long *)param_1[2] + 0x18))();
        *(undefined8 *)(puVar2 + 2) = 0;
      }
      *puVar2 = 0;
      if (1 < *(uint *)((long)param_1 + 0x194)) {
        lVar3 = 0;
        uVar4 = 1;
        do {
          lVar1 = param_1[0x1d] + lVar3;
          if (*(long *)(lVar1 + 0x20) != 0) {
            (**(code **)(*(long *)param_1[2] + 0x18))();
            *(undefined8 *)(lVar1 + 0x20) = 0;
          }
          *(undefined4 *)(lVar1 + 0x18) = 0;
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x18;
        } while (uVar4 < *(uint *)((long)param_1 + 0x194));
      }
      puVar2 = (undefined4 *)param_1[0x1d];
    }
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],puVar2);
    param_1[0x1d] = 0;
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  return 1;
}


