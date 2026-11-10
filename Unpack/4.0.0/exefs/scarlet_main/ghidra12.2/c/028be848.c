/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028be848; name: FUN_028be848
 */


void FUN_028be848(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 != param_1) {
    lVar2 = *param_3;
    do {
      puVar1 = param_2 + -0xc;
      uVar3 = *puVar1;
      uVar4 = param_2[-0xb];
      uVar5 = param_2[-9];
      *(undefined8 *)(lVar2 + -0x50) = param_2[-10];
      *(undefined8 *)(lVar2 + -0x48) = uVar5;
      *(undefined8 *)(lVar2 + -0x30) = 0;
      *(undefined8 *)(lVar2 + -0x60) = uVar3;
      *(undefined8 *)(lVar2 + -0x58) = uVar4;
      *(undefined8 *)(lVar2 + -0x40) = 0;
      *(undefined8 *)(lVar2 + -0x38) = 0;
      *(undefined8 *)(lVar2 + -0x40) = param_2[-8];
      *(undefined8 *)(lVar2 + -0x38) = param_2[-7];
      *(undefined8 *)(lVar2 + -0x30) = param_2[-6];
      param_2[-8] = 0;
      param_2[-7] = 0;
      param_2[-6] = 0;
      *(undefined8 *)(lVar2 + -0x28) = 0;
      *(undefined8 *)(lVar2 + -0x20) = 0;
      *(undefined8 *)(lVar2 + -0x18) = 0;
      *(undefined8 *)(lVar2 + -0x28) = param_2[-5];
      *(undefined8 *)(lVar2 + -0x20) = param_2[-4];
      *(undefined8 *)(lVar2 + -0x18) = param_2[-3];
      uVar4 = param_2[-2];
      param_2[-4] = 0;
      param_2[-3] = 0;
      param_2[-5] = 0;
      *(undefined8 *)(lVar2 + -0xb) = *(undefined8 *)((long)param_2 + -0xb);
      *(undefined8 *)(lVar2 + -0x10) = uVar4;
      lVar2 = *param_3 + -0x60;
      *param_3 = lVar2;
      param_2 = puVar1;
    } while (param_1 != puVar1);
  }
  return;
}


