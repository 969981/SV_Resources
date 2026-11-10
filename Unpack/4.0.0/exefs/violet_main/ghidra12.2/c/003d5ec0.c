/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d5ec0; name: FUN_003d5ec0
 */


undefined8 FUN_003d5ec0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  
  lVar1 = FUN_003af5b0(param_2,local_18);
  uVar2 = 0;
  if ((lVar1 != 0) && (lVar1 = FUN_003d5f10(param_1,local_18[0]), uVar2 = 0, lVar1 != 0)) {
    *(long *)(*(long *)(param_1 + 0xa8) + 0x308) = lVar1;
    uVar2 = 1;
  }
  return uVar2;
}


