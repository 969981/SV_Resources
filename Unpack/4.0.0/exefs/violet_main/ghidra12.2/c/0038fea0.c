/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038fea0; name: FUN_0038fea0
 */


uint FUN_0038fea0(ulong param_1,ulong param_2,undefined4 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *__dest;
  byte *pbVar9;
  long lVar10;
  size_t __n;
  undefined8 *puVar11;
  undefined8 local_68;
  undefined4 local_60;
  byte local_36 [6];
  
  uVar6 = (uint)param_2;
  iVar5 = (int)param_1;
  if ((uVar6 - 10 & 0xff) < 8) {
    local_68 = param_2;
    local_60 = param_3;
    uVar6 = FUN_00391f60((double)iVar5,&local_68,param_4);
    goto LAB_0038ff38;
  }
  if ((param_2 & 0xff) == 0) {
    FUN_00391340(param_1,param_2,param_3,param_4);
  }
  else {
    if (5 < (uVar6 - 4 & 0xff)) {
      uVar6 = 0;
      goto LAB_0038ff38;
    }
    if ((uVar6 & 0xfe) != 4) {
      uVar6 = FUN_00390190();
      uVar6 = uVar6 & 1;
      goto LAB_0038ff38;
    }
    if (iVar5 < 0) {
      local_68 = CONCAT71(local_68._1_7_,1);
      param_1 = (ulong)(uint)-iVar5;
    }
    else {
      local_68._0_4_ = (int)(local_68 >> 8) << 8;
    }
    pbVar1 = local_36 + 1;
    uVar8 = uVar6 & 0xff;
    iVar5 = (int)param_1;
    pbVar9 = pbVar1;
    if (uVar8 == 9) {
      lVar10 = 1;
LAB_0038ffb0:
      if (iVar5 != 0) {
        do {
          uVar7 = (uint)param_1;
          uVar8 = uVar7 >> 4;
          param_1 = (ulong)uVar8;
          pbVar9 = pbVar9 + -1;
          *pbVar9 = "0123456789abcdef"[(ulong)(uVar7 & 0xf) + lVar10 * 0x20];
        } while (uVar8 != 0);
      }
    }
    else {
      if (uVar8 == 8) {
        lVar10 = 0;
        goto LAB_0038ffb0;
      }
      if (uVar8 == 6) {
        if (iVar5 != 0) {
          do {
            bVar4 = (byte)param_1;
            uVar8 = (uint)param_1 >> 3;
            param_1 = (ulong)uVar8;
            pbVar9 = pbVar9 + -1;
            *pbVar9 = bVar4 & 7 | 0x30;
          } while (uVar8 != 0);
        }
      }
      else if (iVar5 != 0) {
        do {
          uVar3 = (param_1 & 0xffffffff) / 10;
          uVar8 = (uint)param_1;
          pbVar9 = pbVar9 + -1;
          *pbVar9 = (char)param_1 + (char)uVar3 * -10 | 0x30;
          param_1 = uVar3;
        } while (9 < uVar8);
      }
    }
    local_68._4_4_ = (int)pbVar1 - (int)pbVar9;
    if (((uVar6 >> 8 & 1) == 0) || ((uVar6 & 0xff) == 0x13)) {
      FUN_00390de0(&local_68,param_2,param_3,param_4);
    }
    else {
      if ((char)local_68 != '\0') {
        puVar2 = (undefined8 *)param_4[3];
        param_4[2] = param_4[2] + 1;
        puVar11 = puVar2;
        if (puVar2 == param_4 + 0x84) {
          puVar11 = param_4 + 4;
          (*(code *)param_4[1])(*param_4,puVar11,(long)puVar2 - (long)puVar11);
          param_4[3] = puVar11;
        }
        *(undefined1 *)puVar11 = 0x2d;
        param_4[3] = param_4[3] + 1;
      }
      if (local_68._4_4_ == 0) {
        puVar11 = (undefined8 *)param_4[3];
        param_4[2] = param_4[2] + 1;
        if (puVar11 == param_4 + 0x84) {
          puVar11 = param_4 + 4;
          (*(code *)param_4[1])(*param_4,puVar11,0x400);
          param_4[3] = puVar11;
        }
        *(undefined1 *)puVar11 = 0x30;
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
          puVar11 = param_4 + 4;
          (*(code *)param_4[1])(*param_4,puVar11,(long)__dest - (long)puVar11);
          param_4[3] = puVar11;
          (*(code *)param_4[1])(*param_4,pbVar1 + -__n,__n);
        }
      }
    }
  }
  uVar6 = 1;
LAB_0038ff38:
  return uVar6 & 1;
}


