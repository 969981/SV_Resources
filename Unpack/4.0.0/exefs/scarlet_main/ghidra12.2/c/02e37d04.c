/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e37d04; name: FUN_02e37d04
 */


void FUN_02e37d04(long param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  iVar1 = *(int *)(lVar3 + 0x34);
  if (*(char *)(lVar3 + 0x8c) == '\0') {
    if ((iVar1 != 0) && (iVar1 == 1)) {
      if (*(char *)(lVar3 + 0x8d) == '\0') {
        pcVar2 = FUN_029922f0;
      }
      else {
        pcVar2 = FUN_02e37ee8;
      }
      goto LAB_02e37d20;
    }
  }
  else {
    if (iVar1 == 2) {
      pcVar2 = (code *)&LAB_02e380a4;
      goto LAB_02e37d20;
    }
    if (iVar1 == 1) {
      pcVar2 = FUN_02e37ffc;
      goto LAB_02e37d20;
    }
    if (iVar1 == 0) {
      pcVar2 = FUN_02e37f6c;
      goto LAB_02e37d20;
    }
  }
  pcVar2 = FUN_0109fc94;
LAB_02e37d20:
  *(code **)(param_1 + 0x50) = pcVar2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}


