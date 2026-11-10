/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c12f18; name: FUN_00c12f18
 */


byte FUN_00c12f18(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long local_48 [5];
  
  lVar1 = (**(code **)(*param_1 + 0x80))();
  if (*(char *)(lVar1 + 0xc) == '\0') {
    FUN_00c1a8fc(local_48,*(undefined8 *)(lVar1 + 0x10),param_2);
    bVar3 = *(char *)(lVar1 + 0xc) == '\0' && local_48[0] == 0;
  }
  else {
    lVar2 = FUN_00c1add0(*(undefined8 *)(lVar1 + 0x10),param_2);
    bVar3 = lVar2 == 0 && *(char *)(lVar1 + 0xc) != '\0';
  }
  return bVar3 ^ 1;
}


