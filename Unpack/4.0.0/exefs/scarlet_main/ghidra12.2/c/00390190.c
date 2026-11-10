/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00390190; name: FUN_00390190
 */


/* WARNING: Removing unreachable block (ram,0x003902e4) */
/* WARNING: Removing unreachable block (ram,0x003902fc) */
/* WARNING: Removing unreachable block (ram,0x00390318) */

ulong FUN_00390190(ulong param_1,ulong param_2,undefined4 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
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
    uVar6 = FUN_00391f60((double)(param_1 & 0xffffffff),&local_68,param_4);
    return uVar6 & 1;
  }
  if ((param_2 & 0xff) == 0) {
    FUN_00391340(param_1,param_2,param_3,param_4);
    return 1;
  }
  if (5 < (uVar7 - 4 & 0xff)) {
    return 0;
  }
  pbVar1 = local_36 + 1;
  uVar5 = uVar7 & 0xff;
  local_68._0_4_ = (uint)local_68 & 0xffffff00;
  iVar3 = (int)param_1;
  pbVar8 = pbVar1;
  if (uVar5 == 9) {
    lVar9 = 1;
  }
  else {
    if (uVar5 != 8) {
      if (uVar5 == 6) {
        if (iVar3 != 0) {
          do {
            bVar2 = (byte)param_1;
            uVar5 = (uint)param_1 >> 3;
            param_1 = (ulong)uVar5;
            pbVar8 = pbVar8 + -1;
            *pbVar8 = bVar2 & 7 | 0x30;
          } while (uVar5 != 0);
        }
      }
      else if (iVar3 != 0) {
        do {
          uVar6 = (param_1 & 0xffffffff) / 10;
          uVar5 = (uint)param_1;
          pbVar8 = pbVar8 + -1;
          *pbVar8 = (char)param_1 + (char)uVar6 * -10 | 0x30;
          param_1 = uVar6;
        } while (9 < uVar5);
      }
      goto LAB_003902c4;
    }
    lVar9 = 0;
  }
  if (iVar3 != 0) {
    do {
      uVar4 = (uint)param_1;
      uVar5 = uVar4 >> 4;
      param_1 = (ulong)uVar5;
      pbVar8 = pbVar8 + -1;
      *pbVar8 = "0123456789abcdef"[(ulong)(uVar4 & 0xf) + lVar9 * 0x20];
    } while (uVar5 != 0);
  }
LAB_003902c4:
  local_68._4_4_ = (int)pbVar1 - (int)pbVar8;
  if (((uVar7 >> 8 & 1) == 0) || ((uVar7 & 0xff) == 0x13)) {
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


