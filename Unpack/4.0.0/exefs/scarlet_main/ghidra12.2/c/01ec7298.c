/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec7298; name: FUN_01ec7298
 */


void FUN_01ec7298(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_016a48e4();
  if (lVar1 != 0) {
    pcVar2 = *(code **)(lVar1 + 0x108);
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(lVar1 + 0x110) = 0;
      *(undefined8 *)(lVar1 + 0x118) = 0;
      *(undefined8 *)(lVar1 + 0x100) = 0;
      *(undefined8 *)(lVar1 + 0x108) = 0;
      (*pcVar2)(lVar1 + 0x120);
    }
    if ((code *)param_1[2] != (code *)0x0) {
      (*(code *)param_1[2])(param_1 + 4,lVar1 + 0x120);
      uVar3 = param_1[3];
      *(undefined8 *)(lVar1 + 0x108) = param_1[1];
      *(undefined8 *)(lVar1 + 0x118) = uVar3;
      uVar3 = *param_1;
      *(undefined8 *)(lVar1 + 0x110) = param_1[2];
      *(undefined8 *)(lVar1 + 0x100) = uVar3;
    }
  }
  return;
}


