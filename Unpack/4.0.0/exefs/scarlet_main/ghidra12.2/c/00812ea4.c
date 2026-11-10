/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00812ea4; name: FUN_00812ea4
 */


void FUN_00812ea4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 0x860);
  if (lVar3 != 0) {
    uVar2 = FUN_007bfae0(lVar3);
    puVar1 = PTR_LAB_047cba48;
    if (0xaf < uVar2) {
      uVar5 = 0;
      puVar4 = (undefined8 *)(lVar3 + 0x88);
      do {
        if ((*(byte *)(puVar4 + -2) & 1) != 0) {
          FUN_0049e790(puVar1,*puVar4);
        }
        if ((*(byte *)(puVar4 + -5) & 1) != 0) {
          FUN_0049e790(puVar1,puVar4[-3]);
        }
        FUN_0284e3d4(puVar4 + -10);
        FUN_0284e3d4(puVar4 + -0xe);
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x16;
      } while (uVar5 < uVar2 / 0xb0);
    }
    FUN_007bfaa0(lVar3);
    *(undefined8 *)(param_1 + 0x860) = 0;
  }
  if (*(long *)(param_1 + 0x6f8) != 0) {
    uVar2 = FUN_0078cdf4();
    while ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x6f8);
      *(undefined1 *)(lVar3 + 0x48) = 1;
      FUN_00792f30(lVar3,10);
      uVar2 = FUN_0078cdf4(*(undefined8 *)(param_1 + 0x6f8));
    }
    puVar4 = *(undefined8 **)(param_1 + 0x6f8);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      FUN_007bfaa0(puVar4);
      *(undefined8 *)(param_1 + 0x6f8) = 0;
    }
  }
  lVar3 = *(long *)(param_1 + 0x6f0);
  if (lVar3 != 0) {
    FUN_0079213c(lVar3);
    FUN_007bfaa0(lVar3);
    *(undefined8 *)(param_1 + 0x6f0) = 0;
  }
  return;
}


