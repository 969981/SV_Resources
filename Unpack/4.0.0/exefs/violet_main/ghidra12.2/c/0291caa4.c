/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291caa4; name: FUN_0291caa4
 */


int FUN_0291caa4(long param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x48);
  *param_2 = bVar1;
  if (*(char *)(param_1 + 0x48) != '\0') {
    uVar2 = 0;
    do {
      param_2[uVar2 + 1] =
           (byte)(*(ulong *)(*(long *)(param_1 + 0x10) + (uVar2 >> 3 & 0x1ffffffffffffff8)) >>
                 (uVar2 & 0x3f)) & 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x48));
  }
  return bVar1 + 1;
}


