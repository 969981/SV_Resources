/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e2b30; name: FUN_003e2b30
 */


undefined8
FUN_003e2b30(long *param_1,int *param_2,undefined1 *param_3,byte *param_4,byte *param_5,
            long *param_6,long param_7,int param_8,int param_9,char param_10,char *param_11)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long local_70;
  long local_68;
  int local_58;
  int local_54;
  
  lVar5 = *param_6;
  local_70 = lVar5;
  if (param_11 == (char *)0x0) {
    uVar1 = FUN_003debf0(&local_70,&local_68,&local_54,&local_58,param_7);
    if ((uVar1 >> 7 & 1) == 0) goto LAB_003e2c54;
    uVar2 = 0x66;
    uVar3 = 0x471;
LAB_003e2d38:
    FUN_004806c0(0xd,0x68,uVar2,"external/openssl/crypto/asn1/tasn_dec.c",uVar3);
    uVar2 = 0;
  }
  else {
    if (*param_11 == '\0') {
      uVar1 = FUN_003debf0(&local_70,&local_68,&local_54,&local_58,param_7);
      *(uint *)(param_11 + 4) = uVar1;
      *(long *)(param_11 + 8) = local_68;
      *(int *)(param_11 + 0x10) = local_54;
      *(int *)(param_11 + 0x14) = local_58;
      *param_11 = '\x01';
      iVar4 = (int)local_70 - (int)lVar5;
      *(int *)(param_11 + 0x18) = iVar4;
      if (((uVar1 & 0x81) == 0) && (param_7 < local_68 + iVar4)) {
        uVar2 = 0x9b;
        uVar3 = 0x469;
        goto LAB_003e2cf4;
      }
    }
    else {
      local_54 = *(int *)(param_11 + 0x10);
      local_58 = *(int *)(param_11 + 0x14);
      uVar1 = *(uint *)(param_11 + 4);
      local_68 = *(long *)(param_11 + 8);
      local_70 = lVar5 + *(int *)(param_11 + 0x18);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      uVar2 = 0x66;
      uVar3 = 0x471;
LAB_003e2cf4:
      FUN_004806c0(0xd,0x68,uVar2,"external/openssl/crypto/asn1/tasn_dec.c",uVar3);
      *param_11 = '\0';
      return 0;
    }
LAB_003e2c54:
    if (-1 < param_8) {
      if ((local_54 != param_8) || (local_58 != param_9)) {
        if (param_10 != '\0') {
          return 0xffffffff;
        }
        if (param_11 != (char *)0x0) {
          *param_11 = '\0';
        }
        uVar2 = 0xa8;
        uVar3 = 0x47d;
        goto LAB_003e2d38;
      }
      if (param_11 != (char *)0x0) {
        *param_11 = '\0';
      }
    }
    if ((uVar1 & 1) != 0) {
      local_68 = (lVar5 + param_7) - local_70;
    }
    if (param_4 != (byte *)0x0) {
      *param_4 = (byte)uVar1 & 1;
    }
    if (param_5 != (byte *)0x0) {
      *param_5 = (byte)uVar1 & 0x20;
    }
    if (param_1 != (long *)0x0) {
      *param_1 = local_68;
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = (char)local_58;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = local_54;
    }
    uVar2 = 1;
    *param_6 = local_70;
  }
  return uVar2;
}


