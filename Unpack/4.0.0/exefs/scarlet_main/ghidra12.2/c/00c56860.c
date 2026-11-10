/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c56860; name: FUN_00c56860
 */


void FUN_00c56860(undefined8 param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  FUN_00c52430(param_2,param_3);
  FUN_00c52644(param_2,param_3 + 0x10);
  pcVar3 = (char *)(param_3 + 0x20);
  cVar1 = *pcVar3;
  if ((cVar1 == '\0') || (*(char *)(param_2 + 0x79) == '\0')) {
    if (*(char *)(param_2 + 0x79) == '\0' && cVar1 == '\0') goto LAB_00c568ac;
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    param_2[0x79] = *(undefined8 *)pcVar3;
    param_2[0x7a] = uVar2;
    if (cVar1 == '\0') goto LAB_00c568ac;
  }
  else {
    if (*(long *)(param_3 + 0x28) == param_2[0x7a]) goto LAB_00c568ac;
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    param_2[0x79] = *(undefined8 *)pcVar3;
    param_2[0x7a] = uVar2;
  }
  uVar2 = FUN_00c52c80(*param_2);
  (**(code **)PTR_DAT_047e0cf0)(param_2[5],uVar2);
LAB_00c568ac:
  FUN_00c52858(param_2,param_3 + 0x30);
  FUN_00c51cd4(param_2,0,param_3 + 0x40);
  FUN_00c51cd4(param_2,1,param_3 + 0x50);
  FUN_00c51cd4(param_2,2,param_3 + 0x60);
  FUN_00c51cd4(param_2,3,param_3 + 0x70);
  FUN_00c51cd4(param_2,4,param_3 + 0x80);
  FUN_00c51cd4(param_2,5,param_3 + 0x90);
  FUN_00c51cd4(param_2,6,param_3 + 0xa0);
  FUN_00c51cd4(param_2,7,param_3 + 0xb0);
  FUN_00c52a6c(param_2,param_3 + 0x148);
  return;
}


