/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f3bb8; name: FUN_021f3bb8
 */


void FUN_021f3bb8(long param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = FUN_00cec030(*(undefined8 *)(param_1 + 0x70));
  if ((uVar2 & 0xff) != (param_2 & 0xff)) {
    bVar1 = FUN_021f3b80(param_1);
    if ((param_2 & 0xff) == 1) {
      if ((bVar1 & 0xfd) != 1) goto LAB_021f3c38;
    }
    else if ((param_2 & 0xff) == 0) {
      if ((bVar1 & 0xfe) != 2) {
LAB_021f3c38:
        FUN_00ef644c(*(undefined8 *)(param_1 + 0x70),param_2);
        return;
      }
    }
    else if (1 < (byte)(bVar1 - 1)) goto LAB_021f3c38;
  }
  return;
}


