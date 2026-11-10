/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cc940; name: FUN_003cc940
 */


bool FUN_003cc940(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  bVar2 = *(int *)(param_1 + 0x38) != 0;
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0xc0);
  lVar3 = 0x48;
  if (bVar2) {
    lVar3 = 0x38;
  }
  lVar1 = 0x40;
  if (bVar2) {
    lVar1 = 0x30;
  }
  lVar3 = (**(code **)(lVar4 + 0x28))
                    (param_1,*(undefined8 *)(lVar4 + lVar1),*(undefined8 *)(lVar4 + lVar3),
                     *(long *)(param_1 + 0xa8) + 0x1a0);
  *(long *)(*(long *)(param_1 + 0xa8) + 0x220) = lVar3;
  return lVar3 != 0;
}


