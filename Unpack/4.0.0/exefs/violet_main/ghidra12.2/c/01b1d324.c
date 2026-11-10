/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b1d324; name: FUN_01b1d324
 */


void FUN_01b1d324(undefined8 *param_1,long *param_2,code *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined2 *)((long)param_1 + 2) = 0;
    *(undefined4 *)((long)param_1 + 4) = 0x1000000;
    *(undefined2 *)(param_1 + 1) = 0;
    *(undefined1 *)((long)param_1 + 10) = 0;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 0x11) = 0;
  }
  else {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(*param_2 + ((long)param_4 >> 1)));
    }
    puVar3 = (undefined8 *)(*param_3)();
    uVar1 = puVar3[1];
    uVar2 = puVar3[2];
    uVar4 = *puVar3;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar3 + 3);
    *param_1 = uVar4;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  return;
}


