/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b8b98; name: FUN_002b8b98
 */


undefined8 * FUN_002b8b98(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined8 *local_40 [3];
  undefined8 local_28;
  
  local_48 = param_2;
  puVar1 = (undefined8 *)FUN_002c22e8(param_1,&local_28,param_2);
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 == (undefined8 *)0x0) {
    FUN_002c2400(local_40,param_1,&DAT_03cc9966,&local_48,auStack_50);
    local_40[0][2] = local_28;
    *local_40[0] = 0;
    local_40[0][1] = 0;
    *puVar1 = local_40[0];
    puVar2 = local_40[0];
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar2 = (undefined8 *)*puVar1;
    }
    FUN_010108e0(param_1[1],puVar2);
    puVar2 = local_40[0];
    param_1[2] = param_1[2] + 1;
    local_40[0] = (undefined8 *)0x0;
    FUN_002c2500(local_40);
  }
  return puVar2 + 7;
}


