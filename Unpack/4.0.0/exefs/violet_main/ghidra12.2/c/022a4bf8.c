/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022a4bf8; name: FUN_022a4bf8
 */


void FUN_022a4bf8(undefined8 *param_1,long *param_2,code *param_3,ulong param_4,undefined4 *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (*param_2 == 0) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    plVar1 = (long *)(*param_2 + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar1);
    }
    puVar5 = (undefined8 *)(*param_3)(plVar1,*param_5);
    uVar3 = puVar5[3];
    uVar2 = *puVar5;
    uVar4 = puVar5[1];
    param_1[2] = puVar5[2];
    param_1[3] = uVar3;
    *param_1 = uVar2;
    param_1[1] = uVar4;
  }
  return;
}


