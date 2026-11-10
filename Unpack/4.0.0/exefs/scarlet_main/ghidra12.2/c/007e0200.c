/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e0200; name: FUN_007e0200
 */


void FUN_007e0200(ushort *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0xc);
  if (lVar2 != 0) {
    uVar1 = (ulong)*param_1;
    if (*param_1 == 0) {
LAB_007e0260:
      FUN_007bfae0(lVar2);
      FUN_007bfaa0(lVar2);
    }
    else {
      uVar4 = 0;
      do {
        lVar3 = *(long *)(lVar2 + uVar4 * 8);
        if (lVar3 != 0) {
          FUN_007bfae0(lVar3);
          FUN_007bfaa0(lVar3);
          *(undefined8 *)(lVar2 + uVar4 * 8) = 0;
          lVar2 = *(long *)(param_1 + 0xc);
          uVar1 = (ulong)*param_1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
      if (lVar2 != 0) goto LAB_007e0260;
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(lVar2 + uVar4 * 8);
      if (lVar3 != 0) {
        FUN_007bfae0(lVar3);
        FUN_007bfaa0(lVar3);
        *(undefined8 *)(lVar2 + uVar4 * 8) = 0;
        lVar2 = *(long *)(param_1 + 8);
        uVar1 = (ulong)*param_1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
    if (lVar2 == 0) goto LAB_007e02d4;
  }
  FUN_007bfae0(lVar2);
  FUN_007bfaa0(lVar2);
LAB_007e02d4:
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}


