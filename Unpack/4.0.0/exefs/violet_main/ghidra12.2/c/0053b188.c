/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0053b188; name: FUN_0053b188
 */


undefined8 * FUN_0053b188(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [8];
  undefined8 local_28;
  
  puVar1 = (undefined8 *)FUN_0053b274(param_1,param_2,&local_28,auStack_38,param_3);
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x48,8);
                    /* try { // try from 0053b1dc to 0053b1e3 has its CatchHandler @ 0053b248 */
    FUN_027dea3c(puVar2 + 4,param_4);
    FUN_002636a4(puVar2 + 8,param_4 + 0x20);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = local_28;
    *puVar1 = puVar2;
    if (*(long *)*param_1 == 0) {
      puVar1 = puVar2;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_010108e0(param_1[1],puVar1);
    param_1[3] = param_1[3] + 1;
  }
  return puVar2;
}


