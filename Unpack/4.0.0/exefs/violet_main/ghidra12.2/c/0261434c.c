/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0261434c; name: FUN_0261434c
 */


bool FUN_0261434c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_02614394();
  bVar1 = false;
  if (puVar2 != (uint *)0x0) {
    if (param_3 < *puVar2) {
      bVar1 = *(char *)((long)puVar2 + (ulong)param_3 + 4) != '\0';
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


