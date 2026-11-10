/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002701b8; name: FUN_002701b8
 */


void FUN_002701b8(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  ushort local_58 [8];
  undefined8 local_48;
  undefined1 auStack_40 [16];
  
  FUN_00273fd8(param_4,auStack_40);
  local_58[0] = 0;
  pbVar4 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar4 = param_3 + 1;
  }
                    /* try { // try from 002701f4 to 00270203 has its CatchHandler @ 0027034c */
  uVar3 = FUN_00305820(pbVar4,auStack_40,0);
  puStack_68 = (undefined8 *)param_5[1];
  local_70 = (undefined8 *)*param_5;
  local_60 = param_5[2];
  param_5[2] = 0;
  *param_5 = 0;
  param_5[1] = 0;
                    /* try { // try from 0027021c to 0027022b has its CatchHandler @ 002702c8 */
  FUN_00272e50(param_1,local_58,uVar3,&local_70);
  puVar2 = local_70;
  puVar1 = PTR_LAB_047cba48;
  puVar6 = puStack_68;
  if (local_70 != (undefined8 *)0x0) {
    while (puVar6 != puVar2) {
      puVar6 = puVar6 + -1;
      puVar5 = (undefined8 *)*puVar6;
      *puVar6 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        FUN_0049e790(puVar1,puVar5);
      }
    }
    puStack_68 = puVar2;
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  if ((local_58[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  return;
}


