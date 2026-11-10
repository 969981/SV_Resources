/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1c764; name: FUN_01e1c764
 */


undefined4 FUN_01e1c764(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x158) != '\0') {
    switch(param_2) {
    case 1:
      return *(undefined4 *)(param_1 + 0x164);
    case 2:
      return *(undefined4 *)(param_1 + 0x168);
    case 3:
      return *(undefined4 *)(param_1 + 0x16c);
    case 4:
      return *(undefined4 *)(param_1 + 0x170);
    case 5:
      return *(undefined4 *)(param_1 + 0x174);
    case 6:
      return *(undefined4 *)(param_1 + 0x178);
    case 7:
      return *(undefined4 *)(param_1 + 0x17c);
    case 8:
      return *(undefined4 *)(param_1 + 0x180);
    case 9:
      return *(undefined4 *)(param_1 + 0x184);
    case 10:
      return *(undefined4 *)(param_1 + 0x188);
    case 0xb:
      return *(undefined4 *)(param_1 + 0x18c);
    case 0xc:
      uVar1 = *(undefined4 *)(param_1 + 400);
    }
  }
  return uVar1;
}


