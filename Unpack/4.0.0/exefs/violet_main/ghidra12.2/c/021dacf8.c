/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021dacf8; name: FUN_021dacf8
 */


bool FUN_021dacf8(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    bVar2 = true;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x48);
    FUN_00cc88e8(auStack_38,param_1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58))
    ;
    bVar2 = lVar1 == local_28;
  }
  return bVar2;
}


