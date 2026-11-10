/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025b860; name: FUN_0025b860
 */


undefined1  [16] FUN_0025b860(long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined8 local_38;
  
  plVar5 = param_1 + 2;
  puVar2 = (undefined8 *)(**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,0x60,8);
  pbVar1 = (byte *)(puVar2 + 4);
                    /* try { // try from 0025b8a0 to 0025b8b3 has its CatchHandler @ 0025b9f0 */
  FUN_0025bb34(plVar5,pbVar1,param_2,param_3);
                    /* try { // try from 0025b8b4 to 0025b8c3 has its CatchHandler @ 0025b99c */
  puVar3 = (undefined8 *)FUN_0025ba1c(param_1,&local_38,pbVar1);
  puVar6 = (undefined8 *)*puVar3;
  if (puVar6 == (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = local_38;
    *puVar3 = puVar2;
    if (*(long *)*param_1 == 0) {
      puVar3 = puVar2;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar3 = (undefined8 *)*puVar3;
    }
    FUN_010108e0(param_1[1],puVar3);
    param_1[3] = param_1[3] + 1;
    uVar4 = 1;
  }
  else {
    if (puVar2 != (undefined8 *)0x0) {
      if ((*(byte *)(puVar2 + 8) & 1) != 0) {
        (**(code **)(*(long *)puVar2[0xb] + 0x18))
                  ((long *)puVar2[0xb],puVar2[10],puVar2[8] & 0xfffffffffffffffe,1);
      }
      if ((*pbVar1 & 1) != 0) {
        (**(code **)(*(long *)puVar2[7] + 0x18))
                  ((long *)puVar2[7],puVar2[6],puVar2[4] & 0xfffffffffffffffe,1);
      }
      (**(code **)(*(long *)*plVar5 + 0x18))((long *)*plVar5,puVar2,0x60,8);
    }
    uVar4 = 0;
    puVar2 = puVar6;
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = puVar2;
  return auVar7;
}


