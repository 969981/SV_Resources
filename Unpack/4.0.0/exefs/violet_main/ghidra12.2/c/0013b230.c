/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013b230; name: FUN_0013b230
 */


void FUN_0013b230(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_00129910(param_2,*(undefined8 *)(param_2 + 0x30));
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 != 0) {
    *(long *)(param_2 + 0x20) = param_2 + 0x60;
    lVar2 = *(long *)(param_2 + 0x78);
    *(undefined8 *)(param_2 + 0x78) = 0;
    if (lVar2 != 0) {
      do {
        lVar1 = *(long *)(lVar2 + 0x18);
        FUN_0012d6c0(param_2,lVar2,0x40);
        *(short *)(param_2 + 0xc) = *(short *)(param_2 + 0xc) + -1;
        lVar2 = lVar1;
      } while (lVar1 != 0);
      lVar1 = *(long *)(param_2 + 0x30);
    }
    FUN_0012d6c0(param_2,lVar1,
                 ((*(long *)(param_2 + 0x28) - lVar1) * 0x10000000 + 0x500000000 >> 0x20) << 4);
  }
  FUN_0012d6c0(param_1,param_2 + -8,0xd0);
  return;
}


