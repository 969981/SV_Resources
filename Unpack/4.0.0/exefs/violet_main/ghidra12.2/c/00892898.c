/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00892898; name: FUN_00892898
 */


void FUN_00892898(byte *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 8) != 0) && ((int)param_2 <= (int)(uint)*param_1)) {
    uVar3 = (ulong)param_1[1];
    if ((int)(uint)param_1[1] < (int)param_2) {
      lVar2 = uVar3 * 0x20;
      *(undefined8 *)(*(long *)(param_1 + 8) + lVar2) = 0;
      *(undefined8 *)(*(long *)(param_1 + 8) + lVar2 + 8) = 0x3f800000;
      *(undefined8 *)(*(long *)(param_1 + 8) + lVar2 + 0x10) = 0x3f80000000000000;
      *(undefined8 *)(*(long *)(param_1 + 8) + lVar2 + 0x18) = 0x3f8000003f800000;
      if (uVar3 + 1 != (ulong)param_2) {
        lVar4 = ~uVar3 + (ulong)param_2;
        do {
          *(undefined8 *)(*(long *)(param_1 + 8) + lVar2 + 0x20) = 0;
          *(undefined8 *)(*(long *)(param_1 + 8) + lVar2 + 0x28) = 0x3f800000;
          *(undefined8 *)(*(long *)(param_1 + 8) + lVar2 + 0x30) = 0x3f80000000000000;
          lVar1 = *(long *)(param_1 + 8) + lVar2;
          lVar4 = lVar4 + -1;
          lVar2 = lVar2 + 0x20;
          *(undefined8 *)(lVar1 + 0x38) = 0x3f8000003f800000;
        } while (lVar4 != 0);
      }
    }
    param_1[1] = (byte)param_2;
  }
  return;
}


