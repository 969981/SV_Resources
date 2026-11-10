/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02613d4c; name: FUN_02613d4c
 */


undefined2 FUN_02613d4c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined2 uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_02613d8c();
  uVar1 = 0;
  if (puVar2 != (uint *)0x0) {
    if (param_3 < *puVar2) {
      uVar1 = *(undefined2 *)((long)puVar2 + (ulong)param_3 * 2 + 4);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


