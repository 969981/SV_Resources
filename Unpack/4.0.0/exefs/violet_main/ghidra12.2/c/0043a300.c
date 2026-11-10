/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043a300; name: FUN_0043a300
 */


ulong FUN_0043a300(long *param_1,void *param_2,int *param_3,void *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((int)param_1[2] == 0) {
    uVar2 = *(uint *)(*param_1 + 4);
    uVar6 = (ulong)uVar2;
    iVar4 = FUN_0043b800(param_1,0x2000);
    iVar5 = param_5 + 0xe;
    if (-1 < (int)(param_5 + 7)) {
      iVar5 = param_5 + 7;
    }
    uVar1 = param_5;
    if (iVar4 != 0) {
      uVar1 = iVar5 >> 3;
    }
    if (((int)param_5 < 0) ||
       ((param_5 == 0 && (uVar7 = FUN_0043b160(*param_1), (uVar7 & 0xf0007) != 7)))) {
      *param_3 = 0;
      return (ulong)(param_5 == 0);
    }
    if ((*(byte *)(*param_1 + 0x12) >> 4 & 1) == 0) {
      if ((*(byte *)((long)param_1 + 0x71) & 1) != 0) {
        uVar6 = FUN_0043a9f0(param_1,param_2,param_3,param_4,param_5);
        return uVar6;
      }
      if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_003f6d60("assertion failed: b <= sizeof(ctx->final)",
                     "external/openssl/crypto/evp/evp_enc.c",0x1fe);
      }
      if ((int)param_1[0x10] != 0) {
        if (param_2 != param_4) {
          if (((param_2 == param_4) || ((int)uVar2 < 1)) ||
             (uVar6 <= (ulong)((long)param_2 - (long)param_4) &&
              (ulong)((long)param_2 - (long)param_4) <= -uVar6)) {
            if (0x7fffffff - uVar2 < (-uVar2 & param_5)) {
              uVar8 = 0xb8;
              uVar9 = 0x211;
              goto LAB_0043a32c;
            }
            memcpy(param_2,param_1 + 0x11,uVar6);
            bVar3 = false;
            param_2 = (void *)((long)param_2 + uVar6);
            goto LAB_0043a518;
          }
        }
        uVar8 = 0xa2;
        uVar9 = 0x204;
        goto LAB_0043a32c;
      }
      bVar3 = true;
LAB_0043a518:
      uVar7 = FUN_0043a9f0(param_1,param_2,param_3,param_4,param_5);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
      if ((uVar2 < 2) || (*(int *)((long)param_1 + 0x14) != 0)) {
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      else {
        *param_3 = *param_3 - uVar2;
        *(undefined4 *)(param_1 + 0x10) = 1;
        memcpy(param_1 + 0x11,(void *)((long)param_2 + (long)*param_3),uVar6);
      }
      if (!bVar3) {
        *param_3 = *param_3 + uVar2;
      }
    }
    else {
      if (uVar2 == 1) {
        if (((param_2 != param_4) && (0 < (int)uVar1)) &&
           ((ulong)((long)param_2 - (long)param_4) < (ulong)(long)(int)uVar1 ||
            (ulong)-(long)(int)uVar1 < (ulong)((long)param_2 - (long)param_4))) {
          uVar8 = 0xa2;
          uVar9 = 0x1ee;
          goto LAB_0043a32c;
        }
      }
      iVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4,param_5);
      if (iVar5 < 0) {
        *param_3 = 0;
        return 0;
      }
      *param_3 = iVar5;
    }
    uVar6 = 1;
  }
  else {
    uVar8 = 0x94;
    uVar9 = 0x1d8;
LAB_0043a32c:
    FUN_004806c0(6,0xa6,uVar8,"external/openssl/crypto/evp/evp_enc.c",uVar9);
    uVar6 = 0;
  }
  return uVar6;
}


