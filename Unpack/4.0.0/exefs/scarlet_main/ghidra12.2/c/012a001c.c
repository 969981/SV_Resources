/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012a001c; name: FUN_012a001c
 */


void FUN_012a001c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x68);
  pcVar1 = *(code **)(lVar3 + 0x1b8);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0x1c0) = 0;
    *(undefined8 *)(lVar3 + 0x1c8) = 0;
    *(undefined8 *)(lVar3 + 0x1b0) = 0;
    *(undefined8 *)(lVar3 + 0x1b8) = 0;
    (*pcVar1)(lVar3 + 0x1d0);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,lVar3 + 0x1d0);
    uVar2 = param_2[3];
    *(undefined8 *)(lVar3 + 0x1b8) = param_2[1];
    *(undefined8 *)(lVar3 + 0x1c8) = uVar2;
    uVar2 = *param_2;
    *(undefined8 *)(lVar3 + 0x1c0) = param_2[2];
    *(undefined8 *)(lVar3 + 0x1b0) = uVar2;
  }
  return;
}


