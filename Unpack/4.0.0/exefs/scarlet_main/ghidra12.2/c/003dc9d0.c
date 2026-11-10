/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003dc9d0; name: FUN_003dc9d0
 */


undefined8 FUN_003dc9d0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x860) == 0) {
    return 1;
  }
  if (param_2 == 1) {
    lVar3 = FUN_003b9d30(*(undefined8 *)(param_1 + 0x5d0));
    if (((*(int *)(param_1 + 0x84) == 2) && (*(int *)(param_1 + 0x1928) != 0)) &&
       (*(int *)(*(long *)(param_1 + 0x5d0) + 0x23c) == 0)) {
      if ((*(long *)(param_1 + 0x5d8) == 0) ||
         (*(int *)(param_1 + 0x1928) != *(int *)(*(long *)(param_1 + 0x5d8) + 0x23c))) {
        uVar4 = 0x112;
        goto LAB_003dcb6c;
      }
      lVar3 = FUN_003b9d30();
    }
    if (lVar3 == 0) {
      uVar4 = 0x11a;
      goto LAB_003dcb6c;
    }
    lVar5 = param_1 + 0x43c;
    FUN_003b00f0(*(undefined4 *)(lVar3 + 0x40));
    lVar3 = 0;
  }
  else {
    if (param_2 == 3) {
      lVar5 = param_1 + 0x33c;
      lVar3 = param_1 + 0x37c;
      lVar2 = FUN_003b0120(param_1);
    }
    else {
      if (param_2 != 2) {
        return 1;
      }
      lVar5 = param_1 + 0x3bc;
      lVar3 = param_1 + 0x3fc;
      lVar2 = FUN_003b0120(param_1);
    }
    if (((lVar2 == 0) && ((*(long *)(param_1 + 0x5d0) != 0 || (*(long *)(param_1 + 0x5d8) != 0))))
       && (lVar2 = FUN_003b9d30(), lVar2 != 0)) {
      FUN_003b1ef0();
    }
  }
  iVar1 = FUN_0043b720();
  if (iVar1 == 0) {
    uVar4 = 0x137;
  }
  else if (*(int *)(param_1 + 0x38) == 0) {
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x860))(param_1,param_2,lVar3,lVar5,(long)iVar1);
    if (iVar1 != 0) {
      return 1;
    }
    uVar4 = 0x146;
  }
  else {
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x860))(param_1,param_2,lVar5,lVar3);
    if (iVar1 != 0) {
      return 1;
    }
    uVar4 = 0x13f;
  }
LAB_003dcb6c:
  FUN_003c3950(param_1,0x50,0xbba,0x44,"external/openssl/ssl/ssl_quic.c",uVar4);
  return 0;
}


