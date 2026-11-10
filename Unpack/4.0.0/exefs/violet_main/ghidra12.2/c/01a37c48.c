/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a37c48; name: FUN_01a37c48
 */


void FUN_01a37c48(long *param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  
  if ((char)param_1[0x12] != '\0') {
    uVar3 = 0;
    do {
      lVar1 = (**(code **)(*param_1 + 0x60))(param_1,uVar3);
      uVar2 = FUN_00cf4cfc(*(undefined8 *)(lVar1 + 0x70));
      if (((uVar2 & 1) == 0) &&
         ((*(ushort *)(*(long *)(*(long *)(lVar1 + 0x70) + 0x10) + 4) >> 2 & 1) == 0))
      goto LAB_01a37cb0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0x12));
  }
  uVar3 = 0;
LAB_01a37cb0:
  *(char *)((long)param_1 + 0x91) = (char)uVar3;
  return;
}


