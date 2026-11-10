/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003800e0; name: FUN_003800e0
 */


int FUN_003800e0(long param_1,char *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  
  iVar2 = -6;
  if (((param_2 != (char *)0x0) && (param_3 == 0x70)) && (*param_2 == '1')) {
    if (param_1 == 0) {
      return -2;
    }
    pcVar4 = *(code **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x30) = 0;
    puVar1 = PTR_FUN_047ccf90;
    if (pcVar4 == (code *)0x0) {
      *(undefined **)(param_1 + 0x40) = PTR_FUN_047ccf90;
      *(undefined8 *)(param_1 + 0x50) = 0;
      lVar5 = *(long *)(param_1 + 0x48);
      pcVar4 = (code *)puVar1;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x48);
    }
    if (lVar5 == 0) {
      *(undefined **)(param_1 + 0x48) = PTR_LAB_047ccf98;
    }
    plVar3 = (long *)(*pcVar4)(*(undefined8 *)(param_1 + 0x50),1,0x1bf8);
    if (plVar3 == (long *)0x0) {
      return -4;
    }
    *(long **)(param_1 + 0x38) = plVar3;
    *plVar3 = param_1;
    plVar3[9] = 0;
    *(undefined4 *)(plVar3 + 1) = 0x3f34;
    iVar2 = FUN_0037fe80(param_1,0xf);
    if (iVar2 != 0) {
      (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),plVar3);
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
  }
  return iVar2;
}


