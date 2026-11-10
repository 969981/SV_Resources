/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005e0ff8; name: FUN_005e0ff8
 */


undefined1  [16] FUN_005e0ff8(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined8 *local_38;
  undefined8 *local_30;
  char local_28;
  undefined8 local_18;
  
  FUN_005e114c(&local_38);
                    /* try { // try from 005e1018 to 005e1023 has its CatchHandler @ 005e10e8 */
  puVar1 = (undefined8 *)FUN_005e1278(param_1,&local_18,local_38 + 4);
  puVar3 = local_38;
  puVar4 = (undefined8 *)*puVar1;
  if (puVar4 == (undefined8 *)0x0) {
    local_38[2] = local_18;
    *local_38 = 0;
    local_38[1] = 0;
    *puVar1 = local_38;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar3 = (undefined8 *)*puVar1;
    }
    FUN_010108e0(param_1[1],puVar3);
    param_1[3] = param_1[3] + 1;
    uVar2 = 1;
  }
  else {
    local_38 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      if ((local_28 != '\0') && ((*(byte *)(puVar3 + 4) & 1) != 0)) {
        (**(code **)(*(long *)puVar3[7] + 0x18))
                  ((long *)puVar3[7],puVar3[6],puVar3[4] & 0xfffffffffffffffe,1);
      }
      (**(code **)(*(long *)*local_30 + 0x18))((long *)*local_30,puVar3,0x48,8);
    }
    uVar2 = 0;
    local_38 = puVar4;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = local_38;
  return auVar5;
}


