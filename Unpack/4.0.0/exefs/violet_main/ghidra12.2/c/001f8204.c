/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f8204; name: FUN_001f8204
 */


undefined8 FUN_001f8204(long *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_001f45a0(param_3,param_2 + 0x28);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0xfffffc7b;
  }
  else {
    uVar2 = 0;
    *param_1 = (long)puVar1;
    *puVar1 = *param_3;
    *(undefined8 *)(*param_1 + 8) = param_3[2];
    *(undefined8 **)(*param_1 + 0x10) = puVar1 + 5;
    *(long *)(*param_1 + 0x18) = param_2;
    *(undefined4 *)(*param_1 + 0x20) = 1;
  }
  return uVar2;
}


