/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0220f29c; name: FUN_0220f29c
 */


void FUN_0220f29c(long param_1,ulong param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined4 *param_9)

{
  undefined8 *puVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if ((param_2 < *(ulong *)(param_1 + 0xb0)) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x80);
    uStack_18 = param_7[1];
    local_20 = *param_7;
    uStack_28 = param_8[1];
    local_30 = *param_8;
    local_38 = *param_3;
    uStack_3c = *param_4;
    local_40 = *param_5;
    uStack_44 = *param_6;
    local_48 = *param_9;
    (*(code *)*puVar1)(puVar1 + 4,&local_38,&uStack_3c,&local_40,&uStack_44,&local_20,&local_30,
                       &local_48);
  }
  return;
}


