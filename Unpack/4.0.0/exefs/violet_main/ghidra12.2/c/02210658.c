/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02210658; name: FUN_02210658
 */


void FUN_02210658(long param_1,ulong param_2,long *param_3,undefined8 *param_4,undefined4 *param_5,
                 undefined4 *param_6,undefined4 *param_7)

{
  undefined8 *puVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined8 local_8;
  
  if ((param_2 < *(ulong *)(param_1 + 0xb0)) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x80);
    local_8 = *param_4;
    local_24 = *param_5;
    uStack_28 = *param_6;
    local_2c = *param_7;
    (*(code *)*puVar1)(puVar1 + 4,&local_8,&local_24,&uStack_28,&local_2c);
  }
  *param_3 = *param_3 + 0x10;
  return;
}


