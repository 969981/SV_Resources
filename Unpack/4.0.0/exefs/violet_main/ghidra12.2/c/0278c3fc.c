/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278c3fc; name: FUN_0278c3fc
 */


void FUN_0278c3fc(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 local_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    local_28 = 0;
    (**(code **)*puVar1)(puVar1,*param_2,param_1 + 0x39,0x800,&local_28);
    FUN_0278c470(param_3,param_1 + 0x39,&DAT_03c886bc,&local_28);
  }
  return;
}


