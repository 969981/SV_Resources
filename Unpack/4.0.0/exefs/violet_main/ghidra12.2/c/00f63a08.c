/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f63a08; name: FUN_00f63a08
 */


void FUN_00f63a08(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_00f63a60(*(undefined8 *)(param_1 + 0x30));
  if (cVar1 == '\0') {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x498);
  uVar2 = FUN_00f63a60(*(undefined8 *)(param_1 + 0x30));
  FUN_01070a58(uVar3,uVar2);
  FUN_00f63a6c(*(undefined8 *)(param_1 + 0x498),0);
  return;
}


