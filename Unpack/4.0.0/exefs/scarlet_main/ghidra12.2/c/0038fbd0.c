/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038fbd0; name: FUN_0038fbd0
 */


/* WARNING: Removing unreachable block (ram,0x0038fd38) */
/* WARNING: Removing unreachable block (ram,0x0038fd50) */
/* WARNING: Removing unreachable block (ram,0x0038fd6c) */

ulong FUN_0038fbd0(ulong param_1,ulong param_2,undefined4 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  void *__dest;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  size_t __n;
  undefined8 *puVar10;
  undefined8 local_68;
  undefined4 local_60;
  byte local_36 [6];
  
  uVar6 = (uint)param_2;
  if ((uVar6 - 10 & 0xff) < 8) {
    local_68 = param_2;
    local_60 = param_3;
    uVar5 = FUN_00391f60((double)((uint)param_1 & 0xff),&local_68,param_4);
    return uVar5 & 1;
  }
  if ((param_2 & 0xff) == 0) {
    FUN_00391340(param_1,param_2,param_3,param_4);
    return 1;
  }
  if (5 < (uVar6 - 4 & 0xff)) {
    return 0;
  }
  pbVar1 = local_36 + 1;
  uVar2 = uVar6 & 0xff;
  local_68._0_4_ = (uint)local_68 & 0xffffff00;
  pbVar7 = pbVar1;
  if (uVar2 == 9) {
    lVar8 = 1;
  }
  else {
    if (uVar2 != 8) {
      if (uVar2 == 6) {
        if ((param_1 & 0xff) != 0) {
          do {
            bVar3 = (byte)param_1;
            uVar2 = (uint)param_1 >> 3 & 0x1f;
            param_1 = (ulong)uVar2;
            pbVar7 = pbVar7 + -1;
            *pbVar7 = bVar3 & 7 | 0x30;
          } while (uVar2 != 0);
        }
      }
      else if ((param_1 & 0xff) != 0) {
        do {
          uVar2 = (uint)param_1 & 0xff;
          uVar9 = uVar2 / 10;
          cVar4 = (char)param_1;
          param_1 = (ulong)uVar9;
          pbVar7 = pbVar7 + -1;
          *pbVar7 = cVar4 + (char)uVar9 * -10 | 0x30;
        } while (9 < uVar2);
      }
      goto LAB_0038fd18;
    }
    lVar8 = 0;
  }
  if ((param_1 & 0xff) != 0) {
    do {
      uVar5 = param_1 & 0xf;
      uVar2 = (uint)param_1 >> 4 & 0xf;
      param_1 = (ulong)uVar2;
      pbVar7 = pbVar7 + -1;
      *pbVar7 = "0123456789abcdef"[uVar5 + lVar8 * 0x20];
    } while (uVar2 != 0);
  }
LAB_0038fd18:
  local_68._4_4_ = (int)pbVar1 - (int)pbVar7;
  if (((uVar6 >> 8 & 1) == 0) || ((uVar6 & 0xff) == 0x13)) {
    FUN_00390de0(&local_68,param_2,param_3,param_4);
  }
  else if (local_68._4_4_ == 0) {
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
  return 1;
}


