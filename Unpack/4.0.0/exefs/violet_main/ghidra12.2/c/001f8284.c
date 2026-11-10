/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f8284; name: FUN_001f8284
 */


int FUN_001f8284(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_001f8204(param_1,param_3 + 1,param_4);
  if (iVar1 == 0) {
    *(long *)(*param_1 + 0x18) = param_3;
    puVar2 = (undefined1 *)FUN_001ed9b4(*(undefined8 *)(*param_1 + 0x10),param_2,param_3);
    *puVar2 = 0;
  }
  return iVar1;
}


