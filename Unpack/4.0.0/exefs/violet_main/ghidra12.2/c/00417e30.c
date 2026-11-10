/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00417e30; name: FUN_00417e30
 */


ulong FUN_00417e30(undefined8 param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_2 + 0x28);
  uVar2 = FUN_0045bdc0(**(undefined4 **)(param_2 + 0x10));
  if (param_4 == 1) {
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x40) == 0)) {
      pcVar4 = "%*s<INVALID PRIVATE KEY>\n";
      goto LAB_00417fcc;
    }
    iVar1 = FUN_003e6880(param_1,"%*s%s Private-Key:\n",param_3,&DAT_03c886bc,uVar2);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = FUN_003e6880(param_1,"%*spriv:\n",param_3,&DAT_03c886bc);
    if (iVar1 < 1) {
      return 0;
    }
    uVar2 = 0x20;
    iVar1 = **(int **)(param_2 + 0x10);
    if (((iVar1 != 0x40a) && (iVar1 != 0x43f)) && (uVar2 = 0x38, iVar1 != 0x40b)) {
      uVar2 = 0x39;
    }
    uVar3 = FUN_003f85b0(param_1,*(undefined8 *)(lVar5 + 0x40),uVar2,param_3 + 4);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  else {
    if (lVar5 == 0) {
      pcVar4 = "%*s<INVALID PUBLIC KEY>\n";
LAB_00417fcc:
      iVar1 = FUN_003e6880(param_1,pcVar4,param_3,&DAT_03c886bc,uVar2);
      return (ulong)(0 < iVar1);
    }
    iVar1 = FUN_003e6880(param_1,"%*s%s Public-Key:\n",param_3,&DAT_03c886bc,uVar2);
    if (iVar1 < 1) {
      return 0;
    }
  }
  iVar1 = FUN_003e6880(param_1,"%*spub:\n",param_3,&DAT_03c886bc);
  if (iVar1 < 1) {
    return 0;
  }
  uVar2 = 0x20;
  iVar1 = **(int **)(param_2 + 0x10);
  if (((iVar1 != 0x40a) && (iVar1 != 0x43f)) && (uVar2 = 0x38, iVar1 != 0x40b)) {
    uVar2 = 0x39;
  }
  iVar1 = FUN_003f85b0(param_1,lVar5,uVar2,param_3 + 4);
  return (ulong)(iVar1 != 0);
}


