/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01932e98; name: FUN_01932e98
 */


void FUN_01932e98(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_3 + 1);
  if (cVar1 == '\0') {
    return;
  }
  if ((cVar1 == '\x06') || (cVar1 == '\x05')) {
    FUN_01932f0c(param_1,*param_3);
    return;
  }
  if (cVar1 == '\x01') {
    FUN_029810a0(param_1,*param_3);
    return;
  }
  uVar3 = *param_3;
  uVar2 = FUN_01246e90();
  FUN_02933bb4(uVar2,uVar3,cVar1);
  return;
}


