/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ec2c0; name: FUN_001ec2c0
 */


undefined8 FUN_001ec2c0(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_047cb9d0;
  uVar2 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && ((param_4 != 0 && (param_5 != 0))))
  {
    uVar2 = 1;
    *(long *)PTR_DAT_047cb9d0 = param_1;
    *(long *)(puVar1 + 8) = param_2;
    *(long *)(puVar1 + 0x20) = param_5;
    *(long *)(puVar1 + 0x10) = param_3;
    *(long *)(puVar1 + 0x18) = param_4;
  }
  return uVar2;
}


