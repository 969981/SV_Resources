/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bd6ab4; name: FUN_02bd6ab4
 */


void FUN_02bd6ab4(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  memcpy(param_2,param_1,0x28);
  uVar1 = *(undefined8 *)((long)param_1 + 0x28);
  *(undefined8 *)((long)param_2 + 0x30) = 0;
  *(undefined8 *)((long)param_2 + 0x28) = uVar1;
  *(undefined8 *)((long)param_2 + 0x38) = 0;
  FUN_00cacc64((undefined8 *)((long)param_2 + 0x30),(long)param_1 + 0x30);
  return;
}


