/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00455700; name: FUN_00455700
 */


void FUN_00455700(byte *param_1,byte *param_2,long param_3,undefined8 param_4,byte *param_5,
                 undefined8 param_6,int param_7,code *param_8)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_3 != 0) {
    puVar4 = (undefined8 *)((ulong)&local_50 | 1);
    if (param_7 == 0) {
      do {
        uStack_48 = *(undefined8 *)(param_5 + 8);
        local_50 = *(undefined8 *)param_5;
        (*param_8)(param_5,param_5,param_4);
        bVar1 = *param_1;
        param_3 = param_3 + -1;
        *param_2 = *param_5 ^ bVar1;
        uVar3 = *puVar4;
        *(undefined8 *)(param_5 + 7) = *(undefined8 *)((long)puVar4 + 7);
        *(undefined8 *)param_5 = uVar3;
        param_5[0xf] = bVar1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (param_3 != 0);
    }
    else {
      do {
        uStack_48 = *(undefined8 *)(param_5 + 8);
        local_50 = *(undefined8 *)param_5;
        (*param_8)(param_5,param_5,param_4);
        bVar1 = *param_1;
        param_3 = param_3 + -1;
        bVar2 = *param_5;
        *param_2 = bVar2 ^ bVar1;
        uVar3 = *puVar4;
        *(undefined8 *)(param_5 + 7) = *(undefined8 *)((long)puVar4 + 7);
        *(undefined8 *)param_5 = uVar3;
        param_5[0xf] = bVar2 ^ bVar1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (param_3 != 0);
    }
  }
  return;
}


