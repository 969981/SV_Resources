/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008207b0; name: FUN_008207b0
 */


ulong FUN_008207b0(uint *param_1,uint *param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint extraout_var;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_3 < 7) {
    param_3 = 0xfffffffffffffff4;
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    if ((*param_2 & 0xfffffff0) == 0x184d2a50) {
      param_1[3] = 1;
      if (param_1 + 0x3a == param_2) {
        *(ulong *)(param_1 + 0x12) = param_3;
        param_1[0x14] = 8;
        param_1[0x15] = 0;
        param_1[9] = 0xd;
      }
      else {
        param_1[9] = 0xc;
        param_3 = 4;
      }
    }
    else if (*param_2 == 0x184d2204) {
      param_1[3] = 0;
      bVar2 = (byte)param_2[1];
      if ((bVar2 >> 1 & 1) == 0) {
        if ((bVar2 & 0xc0) != 0x40) {
          return 0xfffffffffffffffa;
        }
        uVar7 = (ulong)bVar2 & 8;
        uVar6 = (ulong)bVar2 & 1;
        uVar1 = (uVar7 | 7) + uVar6 * 4;
        if (param_3 < uVar1) {
          if (param_1 + 0x3a != param_2) {
            memcpy(param_1 + 0x3a,param_2,param_3);
          }
          *(ulong *)(param_1 + 0x12) = param_3;
          *(ulong *)(param_1 + 0x14) = uVar1;
          param_1[9] = 1;
          return param_3;
        }
        bVar3 = *(byte *)((long)param_2 + 5);
        if (-1 < (char)bVar3) {
          uVar4 = bVar3 >> 4 & 7;
          if (uVar4 < 4) {
            return 0xfffffffffffffffe;
          }
          if ((bVar3 & 0xf) == 0) {
            FUN_008209a0(param_2 + 1,uVar1 - 5,0);
            if ((uint)*(byte *)((long)param_2 + (uVar1 - 1)) != (extraout_var & 0xff)) {
              return 0xffffffffffffffef;
            }
            uVar8 = NEON_ushl((ulong)CONCAT14(bVar2,(uint)bVar2),
                              CONCAT44(-(int)((ulong)DAT_03cb55f8 >> 0x20),-(int)DAT_03cb55f8),4);
            param_1[7] = bVar2 >> 4 & 1;
            *param_1 = uVar4;
            *(ulong *)(param_1 + 1) = uVar8 & 0x100000001;
            if ((bVar3 >> 6 & 1) == 0) {
              uVar5 = 0xfffffffffffffffe;
            }
            else {
              uVar5 = *(undefined8 *)(&DAT_03cbefe0 + (ulong)(uVar4 - 4) * 8);
            }
            *(undefined8 *)(param_1 + 0xc) = uVar5;
            if ((int)uVar7 != 0) {
              uVar5 = *(undefined8 *)((long)param_2 + 6);
              *(undefined8 *)(param_1 + 4) = uVar5;
              *(undefined8 *)(param_1 + 10) = uVar5;
            }
            if ((int)uVar6 != 0) {
              param_1[6] = *(uint *)((long)param_2 + (uVar1 - 5));
            }
            param_1[9] = 2;
            return uVar1;
          }
        }
      }
      param_3 = 0xfffffffffffffff8;
    }
    else {
      param_3 = 0xfffffffffffffff3;
    }
  }
  return param_3;
}


