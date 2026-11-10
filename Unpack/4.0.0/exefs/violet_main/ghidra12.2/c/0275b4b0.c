/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0275b4b0; name: FUN_0275b4b0
 */


void FUN_0275b4b0(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_80 [96];
  
  memcpy(auStack_80,param_2,0x30);
  uVar1 = FUN_00ccbb30(param_1,0);
  FUN_0275b54c(auStack_80,uVar1);
  FUN_00ccbb18(param_1,0);
  FUN_02bc867c(auStack_80);
  return;
}


