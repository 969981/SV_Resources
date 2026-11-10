/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030df54; name: FUN_0030df54
 */


void FUN_0030df54(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_LAB_047cba48;
  if (param_1 != (undefined8 *)0x0) {
    if (param_2 == 0) {
      do {
        if (DAT_047ef400 != (code *)0x0) {
          (*DAT_047ef400)(*param_1,0,param_3);
        }
        puVar3 = (undefined8 *)param_1[1];
        FUN_0049e790(puVar1,param_1);
        param_1 = puVar3;
      } while (puVar3 != (undefined8 *)0x0);
    }
    else {
      do {
        pcVar2 = DAT_047ef400;
        if (DAT_047ef400 != (code *)0x0) {
          *(int *)(param_2 + 0x3c0) = (int)param_1[2];
          (*pcVar2)(*param_1,param_2,param_3);
        }
        puVar3 = (undefined8 *)param_1[1];
        FUN_0049e790(puVar1,param_1);
        param_1 = puVar3;
      } while (puVar3 != (undefined8 *)0x0);
    }
  }
  return;
}


