/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f0638; name: FUN_007f0638
 */


void FUN_007f0638(undefined8 param_1,long *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  short *psVar13;
  long lVar14;
  ulong *puVar15;
  ushort uVar16;
  uint *puVar17;
  ulong uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  undefined8 local_ea0;
  uint local_a0 [8];
  uint local_80 [2];
  uint local_78 [4];
  int local_68 [2];
  
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if ((int)param_2[0xb] == *(int *)PTR_DAT_047d0e88) {
    local_ea0 = CONCAT44(local_ea0._4_4_,0x10408);
  }
  else {
    if ((param_2[0xc] != 0) &&
       (uVar7 = (ulong)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50), uVar7 != 0)) {
      plVar10 = (long *)param_2[8];
      do {
        if (*plVar10 != 0) {
          FUN_007ef9e8(param_2);
          memset(local_80,0,4);
          local_ea0 = 0;
          FUN_007935cc(&local_ea0);
          uVar7 = local_ea0;
          uVar4 = FUN_007f0d14(param_2);
          local_ea0 = 0;
          lVar8 = param_2[0x12];
          lVar11 = param_2[0x10];
          FUN_007935cc(&local_ea0);
          uVar19 = 0;
          if ((ulong)(lVar11 + lVar8) <= local_ea0) {
            local_a0[0] = 0;
            FUN_007f0e28(&local_ea0,param_2,param_2[0xc],local_a0,param_4);
            uVar19 = local_a0[0];
          }
          lVar8 = param_2[0x13];
          lVar11 = param_2[0x10];
          local_ea0 = 0;
          FUN_007935cc(&local_ea0);
          if ((ulong)(lVar11 + lVar8) <= local_ea0) {
            local_a0[0] = 0;
            FUN_007f10a4(&local_ea0,param_2,param_2[0xc],local_a0,param_4 - uVar19);
            if ((uint)local_ea0 == 0) {
              uVar19 = local_a0[0] + uVar19;
              memset(param_2 + 0x14,0,4);
            }
          }
          lVar8 = param_2[10];
          lVar11 = param_2[0x10];
          local_ea0 = 0;
          FUN_007935cc(&local_ea0);
          if ((ulong)(lVar11 + lVar8) <= local_ea0) {
            local_68[0] = 0;
            lVar8 = param_2[0xc];
            memset(local_a0,0,4);
            memset(local_a0,0xff,4);
            local_a0[0] = local_a0[0] & 0xffffff;
            (**(code **)(*param_2 + 0x58))
                      (&local_ea0,param_2,local_a0,lVar8,local_68,param_4 - uVar19,0);
            if ((uint)local_ea0 != 0) {
              if (param_3 != (uint *)0x0) {
                *param_3 = uVar19;
              }
              local_a0[0] = 0;
              local_78[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_a0 | 4),(Result *)local_78);
              puVar17 = local_a0;
              goto LAB_007f06e8;
            }
            uVar19 = local_68[0] + uVar19;
            if (local_68[0] != 0) {
              memset(local_80,0xff,4);
              local_80[0] = local_80[0] & 0xffffff;
            }
          }
          memset(local_a0,0,0x1c);
          if (*(short *)((long)param_2 + 0x32) == 0) goto LAB_007f0ae4;
          uVar21 = 0;
          uVar16 = 0;
          goto LAB_007f0970;
        }
        uVar7 = uVar7 - 1;
        plVar10 = plVar10 + 1;
      } while (uVar7 != 0);
    }
    local_ea0 = (ulong)local_ea0._4_4_ << 0x20;
  }
  local_a0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_ea0 | 4),(Result *)local_a0);
  puVar17 = (uint *)&local_ea0;
LAB_007f06e8:
  FUN_00cbd7c0(param_1,puVar17);
  return;
LAB_007f0970:
  uVar9 = *(int *)((long)param_2 + 0x2c) + (uint)uVar16;
  lVar8 = param_2[4];
  uVar1 = 0;
  if (*(ushort *)(param_2 + 5) <= uVar9) {
    uVar1 = (uint)*(ushort *)(param_2 + 5);
  }
  uVar18 = (ulong)(uVar9 - uVar1);
  lVar11 = lVar8 + uVar18 * 0x5d0;
  bVar6 = *(byte *)(lVar11 + 0x20);
  if (((bVar6 >> 3 & 1) != 0) && (uVar21 != 0)) goto LAB_007f0ae4;
  uVar3 = *(ushort *)(param_2 + 6);
  uVar9 = (uint)*(ushort *)(lVar8 + uVar18 * 0x5d0 + 0x24);
  if (((uVar9 == 0) && (uVar3 != 0)) || (0x7f < (int)(uVar9 - uVar3))) goto LAB_007f0ae4;
  puVar17 = (uint *)(lVar8 + uVar18 * 0x5d0 + 0x2c);
  if (*puVar17 != 0) {
    lVar14 = lVar8 + uVar18 * 0x5d0;
    *(ushort *)(lVar14 + 0x26) = uVar3;
    *(undefined1 *)(lVar14 + 0x21) = *(undefined1 *)((long)param_2 + 0x36);
    local_68[0] = 0;
    FUN_007e8324(local_78,lVar14 + 0x18,lVar14 + 0x30,local_68,0x5a0);
    puVar15 = (ulong *)(lVar14 + 8);
    uVar3 = *(ushort *)((long)param_2 + 0x5c);
    uVar5 = *puVar15;
    if (*puVar15 == (ulong)uVar3) {
      *puVar15 = uVar4;
      uVar5 = uVar4;
    }
    if ((uVar5 <= uVar7) && (uVar5 != uVar3)) {
      puVar20 = (uint *)(lVar8 + uVar18 * 0x5d0 + 0x10);
      if (*puVar20 <= param_4 - uVar19) {
        psVar13 = (short *)(lVar8 + uVar18 * 0x5d0 + 0x14);
        lVar14 = param_2[0xc];
        if (*psVar13 == 0) {
          memset(local_78,0,4);
          memset(local_78,0xff,4);
          local_78[0] = local_78[0] & 0xffffff;
          uVar5 = (**(code **)(*param_2 + 0x50))(param_2,local_78,lVar14,lVar11,0);
        }
        else {
          memset(local_78,0,4);
          memset(local_78,0xff,4);
          local_78[0] = local_78[0] & 0xffffff;
          uVar5 = (**(code **)(*param_2 + 0x50))(param_2,local_78,lVar14,lVar11,1);
        }
        if ((uVar5 & 1) != 0) {
          local_80[0] = local_80[0] | *puVar17;
          uVar19 = *puVar20 + uVar19;
          *puVar15 = uVar4;
          *psVar13 = *psVar13 + 1;
          *(undefined2 *)(lVar8 + uVar18 * 0x5d0 + 0x16) = 0;
          goto LAB_007f0954;
        }
      }
      if (param_3 != (uint *)0x0) {
        *param_3 = uVar19;
      }
      local_78[0] = 0;
      local_68[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
      puVar17 = local_78;
      goto LAB_007f06e8;
    }
    uVar18 = (ulong)*(ushort *)(lVar8 + uVar18 * 0x5d0 + 0x14);
    if (uVar18 < 0x1c) {
      bVar2 = *(byte *)((long)local_a0 + uVar18);
      if ((ulong)bVar2 < 0x10) {
        (&local_ea0)[uVar18 * 0x10 + (ulong)bVar2] = lVar11;
        *(byte *)((long)local_a0 + uVar18) = bVar2 + 1;
      }
    }
  }
LAB_007f0954:
  uVar21 = uVar21 | (bVar6 & 8) >> 3;
  if (uVar16 < *(ushort *)((long)param_2 + 0x32)) {
    uVar16 = uVar16 + 1;
  }
  if (*(ushort *)((long)param_2 + 0x32) <= uVar16) goto LAB_007f0ae4;
  goto LAB_007f0970;
LAB_007f0ae4:
  if ((uVar19 == 0) || (local_80[0] == 0)) {
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar19;
    }
    local_78[0] = 0;
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
    puVar17 = local_78;
  }
  else {
    uVar16 = *(ushort *)(param_2 + 0xe);
    if ((param_4 <= uVar16) || (param_4 = (uint)uVar16, uVar19 < uVar16)) {
      local_68[0] = 0;
      (**(code **)(*param_2 + 0x58))
                (local_78,param_2,local_80,param_2[0xc],local_68,param_4 - uVar19,0);
      lVar8 = 0;
      puVar12 = &local_ea0;
      do {
        if (*(char *)((long)local_a0 + lVar8) != '\0') {
          uVar7 = 0;
          do {
            plVar10 = puVar12 + uVar7;
            uVar7 = uVar7 + 1;
            *(short *)(*plVar10 + 0x16) = *(short *)(*plVar10 + 0x16) + 1;
          } while (uVar7 < *(byte *)((long)local_a0 + lVar8));
        }
        lVar8 = lVar8 + 1;
        puVar12 = puVar12 + 0x10;
      } while (lVar8 != 0x1c);
      lVar8 = 0;
      uVar19 = local_68[0] + uVar19;
      puVar12 = &local_ea0;
      do {
        bVar6 = *(byte *)((long)local_a0 + lVar8);
        if (bVar6 != 0) {
          uVar7 = 0;
          do {
            lVar11 = puVar12[uVar7];
            if (param_4 - uVar19 < *(uint *)(lVar11 + 0x10)) goto LAB_007f0cb4;
            if ((*(ushort *)(lVar11 + 0x14) <= (ushort)*(byte *)(param_2 + 0x11)) ||
               ((*(byte *)((long)param_2 + 0x89) != 0 &&
                ((ushort)*(byte *)((long)param_2 + 0x89) <= *(ushort *)(lVar11 + 0x16))))) {
              uVar18 = (**(code **)(*param_2 + 0x50))(param_2,local_80,param_2[0xc],lVar11,1);
              if ((uVar18 & 1) == 0) goto LAB_007f0cb4;
              uVar19 = *(int *)(lVar11 + 0x10) + uVar19;
              *(ulong *)(lVar11 + 8) = uVar4;
              *(short *)(lVar11 + 0x14) = *(short *)(lVar11 + 0x14) + 1;
              *(undefined2 *)(lVar11 + 0x16) = 0;
              bVar6 = *(byte *)((long)local_a0 + lVar8);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < bVar6);
        }
        lVar8 = lVar8 + 1;
        puVar12 = puVar12 + 0x10;
      } while (lVar8 != 0x1c);
    }
LAB_007f0cb4:
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar19;
    }
    local_78[0] = 0;
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
    puVar17 = local_78;
  }
  goto LAB_007f06e8;
}


