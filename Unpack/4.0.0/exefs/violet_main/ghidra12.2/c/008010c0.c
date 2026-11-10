/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008010c0; name: FUN_008010c0
 */


void FUN_008010c0(ushort *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 4);
  if (lVar2 != 0) {
    uVar1 = (ulong)*param_1;
    if (*param_1 != 0) {
      uVar4 = 0;
      do {
        lVar3 = *(long *)(lVar2 + uVar4 * 8);
        if (lVar3 != 0) {
          FUN_0284e3d4(lVar3 + 0x38);
          FUN_0284e3d4(lVar3 + 0x18);
          FUN_007bfaa0(lVar3);
          *(undefined8 *)(*(long *)(param_1 + 4) + uVar4 * 8) = 0;
          uVar1 = (ulong)*param_1;
          lVar2 = *(long *)(param_1 + 4);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
      if (lVar2 == 0) goto LAB_00801140;
    }
    FUN_007bfae0(lVar2);
    FUN_007bfaa0(lVar2);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
LAB_00801140:
  lVar2 = *(long *)(param_1 + 0x14);
  if (lVar2 != 0) {
    FUN_007bfae0(lVar2);
    FUN_007bfaa0(lVar2);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  return;
}


