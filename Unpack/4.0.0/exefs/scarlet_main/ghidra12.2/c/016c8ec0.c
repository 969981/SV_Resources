/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c8ec0; name: FUN_016c8ec0
 */


void FUN_016c8ec0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  
  (**(code **)(*param_1 + 0x68))();
  plVar1 = (long *)param_1[10];
  plVar3 = (long *)param_1[0xb];
  if (plVar1 != plVar3) {
    plVar5 = (long *)*plVar1;
    if (((char)plVar5[0xb] == '\x04') &&
       (uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,param_2), (uVar6 & 1) != 0)) {
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_2);
    }
    (**(code **)(*(long *)*plVar1 + 0x28))((long *)*plVar1,param_2,param_3);
    while (plVar1 = plVar1 + 1, plVar1 != plVar3) {
      plVar5 = (long *)*plVar1;
      if (((char)plVar5[0xb] == '\x04') &&
         (uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,param_2), (uVar6 & 1) != 0)) {
        (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_2);
      }
      (**(code **)(*(long *)*plVar1 + 0x28))((long *)*plVar1,param_2,param_3);
    }
  }
  puVar2 = (undefined8 *)param_1[3];
  puVar4 = (undefined8 *)param_1[4];
  if (puVar2 != puVar4) {
    (**(code **)(*(long *)*puVar2 + 0x28))((long *)*puVar2,param_2,param_3);
    while (puVar2 = puVar2 + 1, puVar2 != puVar4) {
      (**(code **)(*(long *)*puVar2 + 0x28))((long *)*puVar2,param_2,param_3);
    }
  }
  return;
}


