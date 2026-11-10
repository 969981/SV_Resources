/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010b9b04; name: FUN_010b9b04
 */


void FUN_010b9b04(long param_1,ulong param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  undefined8 *puVar1;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  if ((param_2 < *(ulong *)(param_1 + 0xb0)) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x80);
    local_18 = *param_3;
    local_1c = *param_4;
    uStack_20 = *param_5;
    local_24 = *param_6;
    (*(code *)*puVar1)(puVar1 + 4,&local_18,&local_1c,&uStack_20,&local_24);
  }
  return;
}


