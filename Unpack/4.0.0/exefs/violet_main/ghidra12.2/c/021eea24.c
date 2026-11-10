/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021eea24; name: FUN_021eea24
 */


void FUN_021eea24(long *param_1,uint param_2)

{
  byte bVar1;
  short sVar2;
  long lVar3;
  ulong uVar4;
  
  if (((param_2 < 6) && ((char)param_1[0x12] != '\0')) &&
     (uVar4 = (ulong)param_2, param_1[(ulong)param_2 + 6] != 0)) {
    lVar3 = (**(code **)(*param_1 + 0x60))(param_1,uVar4);
    if (((*(byte *)(*(long *)(*(long *)(lVar3 + 0x70) + 0x10) + 4) >> 2 & 1) != 0) ||
       (sVar2 = FUN_00cf44f4(), sVar2 != 0)) {
      (**(code **)(*param_1 + 0x60))(param_1,uVar4);
      FUN_013e3580();
      lVar3 = param_1[uVar4 + 0xc];
      *(undefined8 *)(lVar3 + 0x34) = 0;
      *(undefined8 *)(lVar3 + 0x2c) = 0;
      FUN_021eeb04(param_1);
      *(char *)(param_1 + 0x12) = (char)param_1[0x12] + -1;
      bVar1 = *(byte *)((long)param_1 + 0x91);
      if (bVar1 == param_2) {
        FUN_01a37c48(param_1);
        return;
      }
      if (param_2 < bVar1) {
        *(byte *)((long)param_1 + 0x91) = bVar1 - 1;
      }
    }
  }
  return;
}


