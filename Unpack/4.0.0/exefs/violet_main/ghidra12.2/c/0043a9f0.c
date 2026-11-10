/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043a9f0; name: FUN_0043a9f0
 */


ulong FUN_0043a9f0(long *param_1,void *param_2,uint *param_3,void *param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  
  iVar4 = FUN_0043b800(param_1,0x2000);
  iVar3 = param_5 + 0xe;
  if (-1 < (int)(param_5 + 7)) {
    iVar3 = param_5 + 7;
  }
  uVar5 = param_5;
  if (iVar4 != 0) {
    uVar5 = iVar3 >> 3;
  }
  if ((int)param_5 < 0) {
LAB_0043ab18:
    *param_3 = 0;
    return (ulong)(param_5 == 0);
  }
  lVar6 = *param_1;
  uVar1 = *(uint *)(lVar6 + 4);
  if (param_5 == 0) {
    uVar10 = FUN_0043b160();
    if ((uVar10 & 0xf0007) != 7) goto LAB_0043ab18;
    lVar6 = *param_1;
    bVar2 = *(byte *)(lVar6 + 0x12);
  }
  else {
    bVar2 = *(byte *)(lVar6 + 0x12);
  }
  if ((bVar2 >> 4 & 1) == 0) {
    iVar3 = *(int *)((long)param_1 + 0x14);
    lVar9 = (long)iVar3;
    uVar10 = ((long)param_2 + lVar9) - (long)param_4;
    if (((0 < (int)uVar5) && ((void *)((long)param_2 + lVar9) != param_4)) &&
       (uVar10 < (ulong)(long)(int)uVar5 || (ulong)-(long)(int)uVar5 < uVar10)) {
      uVar7 = 0xa2;
      uVar8 = 0x150;
LAB_0043abe0:
      FUN_004806c0(6,0xdb,uVar7,"external/openssl/crypto/evp/evp_enc.c",uVar8);
      return 0;
    }
    if (iVar3 == 0) {
      if ((*(uint *)((long)param_1 + 0x84) & param_5) == 0) {
        uVar10 = (**(code **)(lVar6 + 0x20))(param_1,param_2,param_4,param_5);
        if ((int)uVar10 == 0) {
          *param_3 = 0;
          return uVar10;
        }
        *param_3 = param_5;
        return 1;
      }
      if (0x20 < (int)uVar1) goto LAB_0043acdc;
      uVar5 = 0;
    }
    else {
      if (0x20 < (int)uVar1) {
LAB_0043acdc:
                    /* WARNING: Subroutine does not return */
        FUN_003f6d60("assertion failed: bl <= (int)sizeof(ctx->buf)",
                     "external/openssl/crypto/evp/evp_enc.c",0x15e);
      }
      iVar3 = uVar1 - iVar3;
      if ((int)param_5 < iVar3) {
        memcpy((void *)((long)param_1 + lVar9 + 0x38),param_4,(ulong)param_5);
        *(uint *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + param_5;
        *param_3 = 0;
        return 1;
      }
      param_5 = param_5 - iVar3;
      if ((int)(0x7fffffff - uVar1) < (int)(param_5 & -uVar1)) {
        uVar7 = 0xb8;
        uVar8 = 0x171;
        goto LAB_0043abe0;
      }
      memcpy((void *)((long)(param_1 + 7) + lVar9),param_4,(long)iVar3);
      uVar10 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_1 + 7,(long)(int)uVar1);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      param_4 = (void *)((long)param_4 + (long)iVar3);
      param_2 = (void *)((long)param_2 + (long)(int)uVar1);
      uVar5 = uVar1;
    }
    *param_3 = uVar5;
    uVar5 = param_5 & uVar1 - 1;
    iVar3 = param_5 - uVar5;
    if (0 < iVar3) {
      uVar10 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4,iVar3);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      *param_3 = *param_3 + iVar3;
    }
    if (uVar5 != 0) {
      memcpy(param_1 + 7,(void *)((long)param_4 + (long)iVar3),(long)(int)uVar5);
    }
    *(uint *)((long)param_1 + 0x14) = uVar5;
  }
  else {
    if (uVar1 == 1) {
      if (((param_2 != param_4) && (0 < (int)uVar5)) &&
         ((ulong)((long)param_2 - (long)param_4) < (ulong)(long)(int)uVar5 ||
          (ulong)-(long)(int)uVar5 < (ulong)((long)param_2 - (long)param_4))) {
        uVar7 = 0xa2;
        uVar8 = 0x143;
        goto LAB_0043abe0;
      }
    }
    uVar5 = (**(code **)(lVar6 + 0x20))(param_1,param_2,param_4,param_5);
    if ((int)uVar5 < 0) {
      return 0;
    }
    *param_3 = uVar5;
  }
  return 1;
}


