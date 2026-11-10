/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fba50; name: FUN_003fba50
 */


undefined8 FUN_003fba50(long *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  pcVar1 = param_2;
  if (*param_2 == '-') {
    pcVar1 = param_2 + 1;
  }
  if ((*pcVar1 == '0') && ((byte)(pcVar1[1] | 0x20U) == 0x78)) {
    uVar3 = FUN_003fb700(param_1,pcVar1 + 2);
    iVar2 = (int)uVar3;
  }
  else {
    uVar3 = FUN_003fb8a0(param_1);
    iVar2 = (int)uVar3;
  }
  if (iVar2 != 0) {
    if (*param_2 != '-') {
      return 1;
    }
    uVar3 = 1;
    if (*(int *)(*param_1 + 8) != 0) {
      *(undefined4 *)(*param_1 + 0x10) = 1;
      return uVar3;
    }
  }
  return uVar3;
}


