/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0261414c; name: FUN_0261414c
 */


undefined8 FUN_0261414c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  
  puVar1 = (uint *)FUN_0261418c();
  uVar2 = 0;
  if (puVar1 != (uint *)0x0) {
    if (param_3 < *puVar1) {
      uVar2 = *(undefined8 *)(puVar1 + (ulong)param_3 * 2 + 1);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


