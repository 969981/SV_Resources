/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02210874; name: FUN_02210874
 */


void FUN_02210874(long param_1,ulong param_2,long *param_3,undefined8 *param_4,undefined4 *param_5,
                 undefined4 *param_6,undefined4 *param_7,undefined8 *param_8,undefined8 *param_9,
                 undefined4 *param_10)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  if ((((*(char *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18) != '\0') ||
       (*(long *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 8) != 0)) &&
      (param_2 < *(ulong *)(param_1 + 0xb0))) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x80);
    uStack_38 = param_8[1];
    local_40 = *param_8;
    uStack_48 = param_9[1];
    local_50 = *param_9;
    local_18 = *param_4;
    uStack_54 = *param_5;
    local_58 = *param_6;
    uStack_5c = *param_7;
    local_60 = *param_10;
    (*(code *)*puVar1)(puVar1 + 4,&local_18,&uStack_54,&local_58,&uStack_5c,&local_40,&local_50,
                       &local_60);
    plVar2 = (long *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 8);
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      *plVar2 = lVar3 + -1;
    }
  }
  *param_3 = *param_3 + 0x10;
  return;
}


