/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00390460; name: FUN_00390460
 */


ulong FUN_00390460(ulong param_1,ulong param_2,undefined4 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  void *__dest;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  size_t __n;
  undefined8 *puVar10;
  undefined8 local_68;
  undefined4 local_60;
  byte local_36 [6];
  
  uVar7 = (uint)param_2;
  if ((uVar7 - 10 & 0xff) < 8) {
    local_68 = param_2;
    local_60 = param_3;
    uVar6 = FUN_00391f60((double)(long)param_1,&local_68,param_4);
    return uVar6 & 1;
  }
  if ((param_2 & 0xff) == 0) {
    FUN_00391340(param_1,param_2,param_3,param_4);
    return 1;
  }
  if (5 < (uVar7 - 4 & 0xff)) {
    return 0;
  }
  if ((uVar7 & 0xfe) != 4) {
    FUN_00390ba0();
    return 1;
  }
  if ((long)param_1 < 0) {
    local_68 = CONCAT71(local_68._1_7_,1);
    param_1 = -param_1;
  }
  else {
    local_68._0_4_ = (int)(local_68 >> 8) << 8;
  }
  pbVar1 = local_36 + 1;
  uVar2 = uVar7 & 0xff;
  pbVar8 = pbVar1;
  if (uVar2 == 9) {
    lVar9 = 1;
  }
  else {
    if (uVar2 != 8) {
      if (uVar2 == 6) {
        if (param_1 != 0) {
          do {
            bVar4 = (byte)param_1;
            param_1 = param_1 >> 3;
            pbVar8 = pbVar8 + -1;
            *pbVar8 = bVar4 & 7 | 0x30;
          } while (param_1 != 0);
        }
      }
      else if (param_1 != 0) {
        do {
          bVar5 = 9 < param_1;
          pbVar8 = pbVar8 + -1;
          *pbVar8 = (char)param_1 + (char)(param_1 / 10) * -10 | 0x30;
          param_1 = param_1 / 10;
        } while (bVar5);
      }
      goto LAB_003905c0;
    }
    lVar9 = 0;
  }
  if (param_1 != 0) {
    do {
      uVar6 = param_1 & 0xf;
      param_1 = param_1 >> 4;
      pbVar8 = pbVar8 + -1;
      *pbVar8 = "0123456789abcdef"[uVar6 + lVar9 * 0x20];
    } while (param_1 != 0);
  }
LAB_003905c0:
  local_68._4_4_ = (int)pbVar1 - (int)pbVar8;
  if (((uVar7 >> 8 & 1) == 0) || ((uVar7 & 0xff) == 0x13)) {
    FUN_00390de0(&local_68,param_2,param_3,param_4);
  }
  else {
    if ((char)local_68 != '\0') {
      puVar3 = (undefined8 *)param_4[3];
      param_4[2] = param_4[2] + 1;
      puVar10 = puVar3;
      if (puVar3 == param_4 + 0x84) {
        puVar10 = param_4 + 4;
        (*(code *)param_4[1])(*param_4,puVar10,(long)puVar3 - (long)puVar10);
        param_4[3] = puVar10;
      }
      *(undefined1 *)puVar10 = 0x2d;
      param_4[3] = param_4[3] + 1;
    }
    if (local_68._4_4_ == 0) {
      puVar10 = (undefined8 *)param_4[3];
      param_4[2] = param_4[2] + 1;
      if (puVar10 == param_4 + 0x84) {
        puVar10 = param_4 + 4;
        (*(code *)param_4[1])(*param_4,puVar10,0x400);
        param_4[3] = puVar10;
      }
      *(undefined1 *)puVar10 = 0x30;
      param_4[3] = param_4[3] + 1;
    }
    else {
      __dest = (void *)param_4[3];
      __n = (size_t)local_68._4_4_;
      param_4[2] = param_4[2] + __n;
      if (__n < (ulong)((long)param_4 + (0x420 - (long)__dest))) {
        memcpy(__dest,pbVar1 + -__n,__n);
        param_4[3] = param_4[3] + __n;
      }
      else {
        puVar10 = param_4 + 4;
        (*(code *)param_4[1])(*param_4,puVar10,(long)__dest - (long)puVar10);
        param_4[3] = puVar10;
        (*(code *)param_4[1])(*param_4,pbVar1 + -__n,__n);
      }
    }
  }
  return 1;
}


