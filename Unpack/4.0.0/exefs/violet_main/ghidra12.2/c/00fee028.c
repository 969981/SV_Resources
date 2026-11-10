/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fee028; name: FUN_00fee028
 */


byte FUN_00fee028(long param_1)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  if (*(char *)(param_1 + 0x40) != '\0') {
    bVar2 = 0;
    iVar1 = *(int *)(*(long *)(param_1 + 0x78) + 0x2a0);
    if (iVar1 - 1U < 0xc) {
      switch(iVar1) {
      case 1:
      case 5:
        bVar2 = FUN_00fee088(*(long *)(param_1 + 0x78) + 0x30);
        bVar2 = bVar2 ^ 1;
        break;
      case 4:
      case 0xb:
      case 0xc:
        bVar2 = 1;
      }
    }
  }
  return bVar2 & 1;
}


