/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002de8d8; name: FUN_002de8d8
 */


undefined8 FUN_002de8d8(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *param_1;
  if (((uVar1 & 1) == 0) || (iVar2 = FUN_002de7b0(param_2), iVar2 == param_2)) {
    if ((param_2 == 10) && ((uVar1 >> 0xb & 1) != 0)) {
      lVar3 = FUN_0049e770(PTR_FUN_047cba38,0x28);
      if (lVar3 != 0) {
        FUN_002e4418(lVar3,1,*param_1);
      }
    }
    else {
      uVar4 = FUN_002de674(param_1,param_2,uVar1);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      lVar3 = FUN_0049e770(PTR_FUN_047cba38,0x28);
      if (lVar3 != 0) {
        FUN_002e4418(lVar3,3,*param_1);
      }
      *(int *)(lVar3 + 0x18) = param_2;
    }
  }
  else {
    lVar3 = FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (lVar3 != 0) {
      FUN_002e4418(lVar3,0x14,uVar1 & 0x3ffe);
    }
    lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (lVar5 != 0) {
      FUN_002e6250(lVar5);
    }
    *(long *)(lVar3 + 0x20) = lVar5;
    iVar2 = param_2;
    do {
      if ((iVar2 != 10) || ((*param_1 >> 0xb & 1) == 0)) {
        FUN_002e626c(*(undefined8 *)(lVar3 + 0x20),iVar2,iVar2);
      }
      iVar2 = FUN_002de7b0(iVar2);
    } while (iVar2 != param_2);
  }
  FUN_002de558(param_1,lVar3);
  return 1;
}


