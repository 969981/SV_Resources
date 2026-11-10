/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f2138; name: FUN_007f2138
 */


void FUN_007f2138(undefined8 param_1,long *param_2,int *param_3,undefined8 param_4,
                 undefined4 *param_5,uint param_6,uint param_7)

{
  size_t __n;
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 local_a60;
  ulong local_a58;
  undefined8 local_a50;
  undefined *local_a48;
  undefined8 local_a40;
  byte local_a38;
  uint local_a34;
  undefined1 auStack_a30 [9];
  undefined1 auStack_a27 [1431];
  ulong local_490 [2];
  undefined4 local_480 [2];
  byte local_478;
  byte local_477;
  undefined1 auStack_274 [508];
  ulong local_78 [2];
  undefined4 local_68 [2];
  
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if ((char)param_2[9] != '\0') {
    if (*param_3 != 0) {
      FUN_007e7974(local_480);
      if ((param_7 & 1) != 0) {
        local_478 = local_478 | 1;
      }
      (**(code **)(*param_2 + 0x60))(local_490,param_2,local_480,auStack_274);
      if ((int)local_490[0] != 0) {
        puVar5 = local_490;
        goto LAB_007f2210;
      }
      local_a48 = PTR_DAT_047d1498 + 0x10;
      memset(&local_a34,0,4);
      local_a40 = 0;
      local_a38 = 0;
      memset(&local_a34,0,4);
      local_a60 = local_a60 & 0xffffffffffff0000;
      local_78[0] = 0;
      FUN_007935cc(local_78);
      local_a40 = 0;
      local_a38 = 0;
      local_a58 = local_78[0];
      local_a50 = 0;
      memset(&local_a34,0,4);
      puVar2 = PTR_DAT_047d0860;
      local_a40 = CONCAT26(local_a40._6_2_,0xffff00000000);
      local_a40 = (ulong)CONCAT61(CONCAT42((int)((ulong)local_a40 >> 0x20),
                                           (ushort)local_477 * 0x15 + 2),
                                  *(undefined1 *)((long)param_2 + 0x36)) << 8;
      if (*(short *)(*(long *)PTR_DAT_047d0860 + 0x50) == 0) {
        bVar1 = true;
      }
      else {
        uVar8 = 0;
        bVar1 = true;
        do {
          if (*(long *)(param_2[8] + uVar8 * 8) != 0) {
            lVar3 = FUN_007f74c0();
            plVar7 = *(long **)(lVar3 + 0x10);
            uVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
            if (((uVar4 & 1) == 0) ||
               (uVar4 = (**(code **)(*plVar7 + 0x50))(plVar7), (uVar4 & 1) == 0)) {
              uVar4 = uVar8 >> 5 & 0x7ffffff;
              uVar6 = 1 << (ulong)((uint)uVar8 & 0x1f);
              if ((param_3[uVar4] & uVar6) == 0) {
                bVar1 = false;
                goto LAB_007f2310;
              }
            }
            else {
              uVar6 = 1 << (ulong)((uint)uVar8 & 0x1f);
              uVar4 = uVar8 >> 5 & 0x7ffffff;
            }
            *(uint *)(auStack_a30 + uVar4 * 4 + -4) =
                 *(uint *)(auStack_a30 + uVar4 * 4 + -4) | uVar6;
          }
LAB_007f2310:
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(*(long *)puVar2 + 0x50));
      }
      if (local_a34 == 0) {
        if (*param_3 == 0xffffff) {
LAB_007f24b4:
          *(undefined1 *)(param_2 + 9) = 0;
          local_78[0] = 0;
          FUN_007935cc(local_78);
          param_2[10] = local_78[0];
        }
LAB_007f24cc:
        local_78[0] = local_78[0] & 0xffffffff00000000;
      }
      else {
        local_a38 = (**(code **)(*param_2 + 0x38))(param_2);
        local_68[0] = 0;
        local_a40 = CONCAT26((short)param_2[6],(undefined6)local_a40);
        FUN_007e8324(local_78,&local_a48,auStack_a30,local_68,0x5a0);
        uVar8 = (ulong)local_477;
        __n = uVar8 * 0x15 + 2;
        uVar4 = (ulong)(local_a38 + 0x1f >> 3) & 0x3c;
        if ((uint)__n <= 0x597U - (int)uVar4) {
          memcpy(auStack_a27 + uVar4,auStack_274,__n);
          uVar8 = (ulong)local_477;
          uVar4 = (ulong)(local_a38 + 0x1f >> 3 & 0x3c);
        }
        local_a50 = CONCAT44(local_a50._4_4_,(int)uVar8 + (uint)local_477 * 0x14 + (int)uVar4 + 0xb)
        ;
        if (*(char *)((long)param_2 + 0xa4) != '\0') {
          FUN_007ebe58(local_78,param_2[0xc],auStack_a30);
          FUN_018ff39c(local_490,local_78);
          if ((int)local_490[0] == 0) {
            uVar6 = *(uint *)(param_2[0xc] + 0x30);
            local_a50 = CONCAT44(local_a50._4_4_,uVar6);
            memcpy(auStack_a30,*(void **)(param_2[0xc] + 0x28),(ulong)uVar6);
            local_a60._0_2_ = CONCAT11(1,(undefined1)local_a60);
          }
        }
        if (param_6 < (uint)local_a50) {
          local_78[0] = CONCAT44(local_78[0]._4_4_,0x4c0d);
        }
        else {
          memset(local_78,0,4);
          memset(local_78,0xff,4);
          local_78[0] = local_78[0] & 0xffffffff00ffffff;
          uVar8 = (**(code **)(*param_2 + 0x50))(param_2,local_78,param_4,&local_a60,2);
          if ((uVar8 & 1) != 0) {
            if (param_5 != (undefined4 *)0x0) {
              *param_5 = (uint)local_a50;
            }
            if (bVar1) goto LAB_007f24b4;
            goto LAB_007f24cc;
          }
          local_78[0] = CONCAT44(local_78[0]._4_4_,0x4c0d);
        }
      }
      local_68[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
      puVar5 = local_78;
      goto LAB_007f2210;
    }
    *(undefined1 *)(param_2 + 9) = 0;
    local_a60 = 0;
    FUN_007935cc(&local_a60);
    param_2[10] = local_a60;
  }
  local_a60 = local_a60 & 0xffffffff00000000;
  local_480[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_a60 | 4),(Result *)local_480);
  puVar5 = &local_a60;
LAB_007f2210:
  FUN_00cbd7c0(param_1,puVar5);
  return;
}


