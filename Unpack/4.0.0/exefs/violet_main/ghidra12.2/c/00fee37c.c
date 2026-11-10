/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fee37c; name: FUN_00fee37c
 */


void FUN_00fee37c(byte *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  
  (**(code **)(*param_2 + 0x70))(param_1);
  if (1 < *param_1 - 3) {
    (**(code **)(*param_2 + 0x68))(param_2,param_4,param_1);
    plVar1 = (long *)param_2[10];
    plVar3 = (long *)param_2[0xb];
    if (plVar1 != plVar3) {
      plVar5 = (long *)*plVar1;
      if (((char)plVar5[0xb] == '\x04') &&
         (uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,param_4), (uVar6 & 1) != 0)) {
        (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_4);
      }
      (**(code **)(*(long *)*plVar1 + 0x28))((long *)*plVar1,param_4,param_1);
      while (plVar1 = plVar1 + 1, plVar1 != plVar3) {
        plVar5 = (long *)*plVar1;
        if (((char)plVar5[0xb] == '\x04') &&
           (uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,param_4), (uVar6 & 1) != 0)) {
          (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_4);
        }
        (**(code **)(*(long *)*plVar1 + 0x28))((long *)*plVar1,param_4,param_1);
      }
    }
    puVar2 = (undefined8 *)param_2[3];
    puVar4 = (undefined8 *)param_2[4];
    if (puVar2 != puVar4) {
      (**(code **)(*(long *)*puVar2 + 0x28))((long *)*puVar2,param_4,param_1);
      while (puVar2 = puVar2 + 1, puVar2 != puVar4) {
        (**(code **)(*(long *)*puVar2 + 0x28))((long *)*puVar2,param_4,param_1);
      }
    }
  }
  return;
}


