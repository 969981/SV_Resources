/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a9490; name: FUN_003a9490
 */


undefined4 FUN_003a9490(long param_1,undefined4 *param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *__src;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  size_t __n;
  undefined8 uVar10;
  undefined1 auStack_b0 [48];
  int local_80;
  int local_7c;
  long local_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_58 [8];
  
  if (param_3 != 1) {
    uVar6 = 0x29;
    goto LAB_003a953c;
  }
  lVar8 = 0x500;
  if (param_4 != 0) {
    lVar8 = 0x530;
  }
  lVar8 = *(long *)(param_1 + lVar8);
  puVar1 = (undefined8 *)(param_1 + 0x18e0);
  __src = (void *)(param_1 + 0x508);
  if (param_4 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x18e8);
    __src = (void *)(param_1 + 0x538);
  }
  if ((lVar8 == 0) || (param_2[1] == 0x15)) {
    memmove(*(void **)(param_2 + 8),*(void **)(param_2 + 10),*(size_t *)(param_2 + 2));
    *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_2 + 8);
    return 1;
  }
  uVar3 = FUN_0043b4a0(lVar8);
  if (*(int *)(param_1 + 0x84) - 3U < 2) {
    lVar7 = *(long *)(param_1 + 0x5d0);
    if (((lVar7 == 0) || (*(int *)(lVar7 + 0x23c) == 0)) &&
       ((lVar7 = *(long *)(param_1 + 0x5d8), lVar7 == 0 || (*(int *)(lVar7 + 0x23c) == 0)))) {
      uVar6 = 0x4d;
      goto LAB_003a953c;
    }
    lVar7 = *(long *)(lVar7 + 0x1f0);
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
    if (lVar7 == 0) {
      uVar6 = 0x59;
      goto LAB_003a953c;
    }
  }
  uVar2 = *(uint *)(lVar7 + 0x24);
  if ((uVar2 & 0x3c000) == 0) {
    if ((uVar2 & 0x83000) == 0) {
      uVar6 = 0x70;
      goto LAB_003a953c;
    }
    uVar9 = 0x10;
    if (param_4 == 0) goto LAB_003a9624;
  }
  else {
    uVar9 = 0x10;
    if ((uVar2 & 0x30000) != 0) {
      uVar9 = 8;
    }
    if (param_4 == 0) {
LAB_003a9624:
      if (*(ulong *)(param_2 + 2) < (uVar9 | 1)) {
        return 0;
      }
      *(ulong *)(param_2 + 2) = *(ulong *)(param_2 + 2) - uVar9;
    }
    else {
      iVar4 = FUN_0043a230(lVar8,0x11,uVar9,0);
      if (iVar4 < 1) {
        uVar6 = 0x67;
        goto LAB_003a953c;
      }
    }
  }
  if (uVar3 < 8) {
    uVar6 = 0x82;
  }
  else {
    __n = (long)(int)uVar3 - 8;
    memcpy(auStack_70,__src,__n);
    uVar6 = *(undefined8 *)((long)__src + __n);
    lVar7 = 7;
    uVar10 = *puVar1;
    *(ulong *)(auStack_70 + (long)(int)uVar3 + -8) =
         CONCAT17((byte)((ulong)uVar10 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                  CONCAT16((byte)((ulong)uVar10 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                           CONCAT15((byte)((ulong)uVar10 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar10 >> 0x20) ^
                                             (byte)((ulong)uVar6 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar10 >> 0x18) ^
                                                      (byte)((ulong)uVar6 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar10 >> 0x10) ^
                                                               (byte)((ulong)uVar6 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar10 >> 8) ^
                                                                        (byte)((ulong)uVar6 >> 8),
                                                                        (byte)uVar10 ^ (byte)uVar6))
                                                     )))));
    do {
      if (lVar7 == -1) {
        return 0xffffffff;
      }
      uVar3 = *(byte *)((long)puVar1 + lVar7) + 1;
      *(char *)((long)puVar1 + lVar7) = (char)uVar3;
      lVar7 = lVar7 + -1;
    } while (uVar3 >> 8 != 0);
    iVar4 = FUN_00439e90(lVar8,0,0,0,auStack_70,param_4);
    if (iVar4 < 1) {
      return 0xffffffff;
    }
    if ((param_4 == 0) &&
       (iVar4 = FUN_0043a230(lVar8,0x11,uVar9,*(long *)(param_2 + 8) + *(long *)(param_2 + 2)),
       iVar4 < 1)) {
      return 0xffffffff;
    }
    iVar4 = FUN_003a2210(auStack_b0,auStack_58,5,0);
    if (((((iVar4 == 0) || (iVar4 = FUN_003a26e0(auStack_b0,param_2[1],1), iVar4 == 0)) ||
         (iVar4 = FUN_003a26e0(auStack_b0,*param_2,2), iVar4 == 0)) ||
        ((iVar4 = FUN_003a26e0(auStack_b0,param_2[2] + (int)uVar9,2), iVar4 == 0 ||
         (iVar4 = FUN_003a2bc0(auStack_b0,&local_78), iVar4 == 0)))) ||
       ((local_78 != 5 || (iVar4 = FUN_003a2510(auStack_b0), iVar4 == 0)))) {
      FUN_003a2c10(auStack_b0);
      return 0xffffffff;
    }
    if (((uVar2 & 0x3c000) != 0) &&
       (iVar4 = FUN_0043a2b0(lVar8,0,&local_7c,0,param_2[2]), iVar4 < 1)) {
      return 0xffffffff;
    }
    iVar4 = FUN_0043a2b0(lVar8,0,&local_7c,auStack_58,5);
    if (iVar4 < 1) {
      return 0xffffffff;
    }
    iVar4 = FUN_0043a2b0(lVar8,*(undefined8 *)(param_2 + 8),&local_7c,*(undefined8 *)(param_2 + 10),
                         param_2[2]);
    if (iVar4 < 1) {
      return 0xffffffff;
    }
    iVar4 = FUN_0043a5c0(lVar8,*(long *)(param_2 + 8) + (long)local_7c,&local_80);
    if (iVar4 < 1) {
      return 0xffffffff;
    }
    lVar7 = (long)local_80 + (long)local_7c;
    uVar5 = 1;
    if (*(long *)(param_2 + 2) != lVar7) {
      uVar5 = 0xffffffff;
    }
    if (param_4 == 0) {
      return uVar5;
    }
    if (*(long *)(param_2 + 2) != lVar7) {
      return uVar5;
    }
    iVar4 = FUN_0043a230(lVar8,0x10,uVar9,*(long *)(param_2 + 8) + lVar7);
    if (0 < iVar4) {
      *(ulong *)(param_2 + 2) = *(long *)(param_2 + 2) + uVar9;
      return 1;
    }
    uVar6 = 0xbd;
  }
LAB_003a953c:
  FUN_003c3950(param_1,0x50,0x261,0x44,"external/openssl/ssl/record/ssl3_record_tls13.c",uVar6);
  return 0xffffffff;
}


