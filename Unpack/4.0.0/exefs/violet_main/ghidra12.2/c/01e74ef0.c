/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e74ef0; name: FUN_01e74ef0
 */


ulong FUN_01e74ef0(long param_1,ulong param_2,short *param_3,ulong param_4)

{
  short sVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_34 [4];
  
  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      for (; sVar1 = *param_3, sVar1 == 0x10; param_3 = param_3 + (ulong)(ushort)param_3[1] + 2) {
      }
      if (sVar1 == 0) {
LAB_01e74f88:
        uVar2 = uVar4;
        break;
      }
      __n = FUN_02172eb0(sVar1,auStack_34);
      uVar2 = __n + uVar4;
      if (param_2 <= uVar2) goto LAB_01e74f88;
      memcpy((void *)(param_1 + uVar4),auStack_34,__n);
      uVar3 = uVar3 + 1;
      param_3 = param_3 + 1;
      uVar4 = uVar2;
    } while (uVar3 < param_4);
    *(undefined1 *)(param_1 + uVar2) = 0;
  }
  return uVar2;
}


