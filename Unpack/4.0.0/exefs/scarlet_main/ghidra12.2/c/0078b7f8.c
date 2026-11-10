/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078b7f8; name: FUN_0078b7f8
 */


void FUN_0078b7f8(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[3] = 0x400000000;
  FUN_0078c6b4(param_1 + 4);
  FUN_0078cffc(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_0284e338(param_1 + 0xb1);
  *(undefined2 *)(param_1 + 0xb5) = 0;
  param_1[0xb6] = 0;
  uVar1 = FUN_0078a12c();
  lVar2 = FUN_007bfa40(0x460,uVar1,0x20);
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      lVar4 = lVar2 + 3 + lVar3;
      lVar3 = lVar3 + 7;
      *(undefined4 *)(lVar4 + -3) = 0;
      *(undefined2 *)(lVar4 + 1) = 0;
      *(undefined1 *)(lVar4 + 3) = 0;
    } while (lVar3 != 0x460);
  }
  *param_1 = lVar2;
  uVar1 = FUN_0078a12c();
  lVar2 = FUN_007bfa40(0x4a0,uVar1,0x20);
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      *(undefined4 *)(lVar2 + lVar3) = 0;
      lVar3 = lVar3 + 4;
    } while (lVar3 != 0x4a0);
  }
  param_1[1] = lVar2;
  uVar1 = FUN_0078a12c();
  lVar2 = FUN_007bfa40(0x2750,uVar1,0x20);
  if (lVar2 != 0) {
    lVar3 = lVar2 + 3;
    lVar4 = 0x2750;
    do {
      *(undefined4 *)(lVar3 + -3) = 0;
      lVar3 = lVar3 + 4;
      lVar4 = lVar4 + -4;
    } while (lVar4 != 0);
  }
  param_1[2] = lVar2;
  FUN_0078b160(param_1 + 0xb1);
  return;
}


