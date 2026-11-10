/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f5560; name: FUN_007f5560
 */


void FUN_007f5560(long param_1)

{
  undefined *puVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auStack_bf0 [8];
  undefined1 auStack_be8 [8];
  int local_be0 [4];
  uint local_bd0 [2];
  undefined *local_bc8;
  undefined2 local_bc0;
  undefined1 local_bbe;
  undefined8 local_bbc;
  undefined1 auStack_bb4 [1436];
  uint local_618 [360];
  uint local_78 [2];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if (*(long *)(param_1 + 0x70) == 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 0;
    *(undefined2 *)(param_1 + 0xa4) = 0xffff;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    puVar1 = PTR_DAT_047d0860;
    *(undefined1 *)(param_1 + 0xba) = 0;
    if (*(short *)(*(long *)puVar1 + 0x50) != 0) {
      uVar6 = 0;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x98) + uVar6) = 0xff;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(*(long *)puVar1 + 0x50));
    }
  }
  else {
    lVar5 = FUN_007ec4a8(param_1);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined2 *)(param_1 + 0xb8) = 0;
      *(undefined2 *)(param_1 + 0xa4) = 0xffff;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      puVar1 = PTR_DAT_047d0860;
      *(undefined1 *)(param_1 + 0xba) = 0;
      if (*(short *)(*(long *)puVar1 + 0x50) != 0) {
        uVar6 = 0;
        do {
          *(undefined1 *)(*(long *)(param_1 + 0x98) + uVar6) = 0xff;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ushort *)(*(long *)puVar1 + 0x50));
      }
    }
    else {
      uVar6 = FUN_007efb98(*(undefined8 *)(param_1 + 0x70));
      if ((uVar6 & 1) == 0) {
        *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined2 *)(param_1 + 0xb8) = 0;
        *(undefined2 *)(param_1 + 0xa4) = 0xffff;
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        puVar1 = PTR_DAT_047d0860;
        *(undefined1 *)(param_1 + 0xba) = 0;
        if (*(short *)(*(long *)puVar1 + 0x50) != 0) {
          uVar6 = 0;
          do {
            *(undefined1 *)(*(long *)(param_1 + 0x98) + uVar6) = 0xff;
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(ushort *)(*(long *)puVar1 + 0x50));
        }
      }
      else {
        memset(local_618,0,4);
        puVar1 = PTR_DAT_047d0860;
        uVar3 = *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50);
        if (uVar3 != 0) {
          uVar9 = (uint)uVar3;
          uVar6 = 0;
          if (uVar3 < 2) {
            uVar9 = 1;
          }
          do {
            if (*(char *)(*(long *)(param_1 + 0xc0) + uVar6) != '\0') {
              local_618[0] = local_618[0] | 1 << (ulong)((uint)uVar6 & 0x1f);
            }
            uVar6 = uVar6 + 1;
          } while (uVar9 != uVar6);
        }
        memcpy(auStack_68,local_618,4);
        FUN_007f6268(&local_bc8,param_1,auStack_68,3);
        if (((int)local_bc8 == 0) && (uVar3 = *(ushort *)(*(long *)puVar1 + 0x50), uVar3 != 0)) {
          lVar5 = *(long *)(param_1 + 0xc0);
          uVar9 = (uint)uVar3;
          if (uVar3 < 2) {
            uVar9 = 1;
          }
          uVar13 = (ulong)uVar9;
          uVar6 = uVar13 & 3;
          if (uVar13 - 1 < 3) {
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            do {
              *(undefined4 *)(lVar5 + uVar12) = 0;
              uVar12 = uVar12 + 4;
            } while ((uVar13 & 0xfffc) != uVar12);
          }
          if ((uVar9 & 3) != 0) {
            puVar11 = (undefined1 *)(lVar5 + uVar12);
            do {
              uVar6 = uVar6 - 1;
              *puVar11 = 0;
              puVar11 = puVar11 + 1;
            } while (uVar6 != 0);
          }
        }
        memset(local_618,0,4);
        uVar3 = *(ushort *)(*(long *)puVar1 + 0x50);
        if (uVar3 != 0) {
          uVar9 = (uint)uVar3;
          uVar6 = 0;
          if (uVar3 < 2) {
            uVar9 = 1;
          }
          do {
            if (*(char *)(*(long *)(param_1 + 200) + uVar6) != '\0') {
              local_618[0] = local_618[0] | 1 << (ulong)((uint)uVar6 & 0x1f);
            }
            uVar6 = uVar6 + 1;
          } while (uVar9 != uVar6);
        }
        memcpy(auStack_70,local_618,4);
        FUN_007f6268(&local_bc8,param_1,auStack_70,6);
        if (((int)local_bc8 == 0) && (uVar3 = *(ushort *)(*(long *)puVar1 + 0x50), uVar3 != 0)) {
          lVar5 = *(long *)(param_1 + 200);
          uVar9 = (uint)uVar3;
          if (uVar3 < 2) {
            uVar9 = 1;
          }
          uVar13 = (ulong)uVar9;
          uVar6 = uVar13 & 3;
          if (uVar13 - 1 < 3) {
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            do {
              *(undefined4 *)(lVar5 + uVar12) = 0;
              uVar12 = uVar12 + 4;
            } while ((uVar13 & 0xfffc) != uVar12);
          }
          if ((uVar9 & 3) != 0) {
            puVar11 = (undefined1 *)(lVar5 + uVar12);
            do {
              uVar6 = uVar6 - 1;
              *puVar11 = 0;
              puVar11 = puVar11 + 1;
            } while (uVar6 != 0);
          }
        }
        cVar2 = *(char *)(param_1 + 0x78);
        if (cVar2 == '\t') {
          local_bc0 = 0;
          local_bbe = 0;
          local_bc8 = PTR_DAT_047d1558 + 0x10;
          local_bbc = 0;
          memset(auStack_bb4,0,0x595);
          local_bc0 = 0xff05;
          local_bbc = local_bbc & 0xffffffff;
          FUN_007f60e8(local_be0,&local_bc8,local_618,local_78,0x5a0);
          FUN_007f1de8(local_be0,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xb0),
                       local_618,local_78[0],0);
          if (local_be0[0] != 0) {
            return;
          }
          uVar8 = 10;
        }
        else if (cVar2 == '\b') {
          local_bc0 = 0;
          local_bbe = 0;
          local_bc8 = PTR_DAT_047d1558 + 0x10;
          local_bbc = 0;
          memset(auStack_bb4,0,0x595);
          local_bc0 = 0xff04;
          local_bbc = local_bbc & 0xffffffff;
          FUN_007f60e8(local_be0,&local_bc8,local_618,local_78,0x5a0);
          memset(local_bd0,0,4);
          uVar3 = *(ushort *)(*(long *)puVar1 + 0x50);
          if (uVar3 != 0) {
            uVar9 = (uint)uVar3;
            uVar6 = 0;
            if (uVar3 < 2) {
              uVar9 = 1;
            }
            do {
              if (*(char *)(*(long *)(param_1 + 0x98) + uVar6) == *(char *)(param_1 + 0xa4)) {
                local_bd0[0] = local_bd0[0] | 1 << (ulong)((uint)uVar6 & 0x1f);
              }
              uVar6 = uVar6 + 1;
            } while (uVar9 != uVar6);
          }
          if (local_bd0[0] != 0) {
            uVar14 = *(undefined8 *)(param_1 + 0x70);
            memcpy(auStack_bf0,local_bd0,4);
            FUN_007f1994(local_be0,uVar14,auStack_bf0,local_618,local_78[0],0);
            if (local_be0[0] != 0) {
              return;
            }
            uVar3 = *(ushort *)(*(long *)puVar1 + 0x50);
          }
          *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
          *(undefined1 *)(param_1 + 0x78) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined2 *)(param_1 + 0xb8) = 0;
          *(undefined2 *)(param_1 + 0xa4) = 0xffff;
          *(undefined1 *)(param_1 + 0xba) = 0;
          *(undefined8 *)(param_1 + 0x80) = 0;
          *(undefined8 *)(param_1 + 0x88) = 0;
          *(undefined8 *)(param_1 + 0xa8) = 0;
          *(undefined8 *)(param_1 + 0xb0) = 0;
          if (uVar3 != 0) {
            uVar6 = 0;
            do {
              *(undefined1 *)(*(long *)(param_1 + 0x98) + uVar6) = 0xff;
              uVar6 = uVar6 + 1;
            } while (uVar6 < *(ushort *)(*(long *)puVar1 + 0x50));
          }
          uVar8 = 0xb;
        }
        else {
          if (cVar2 != '\x01') {
            return;
          }
          if (*(long *)(param_1 + 0x80) == 0) {
            return;
          }
          if (*(int *)(param_1 + 0x90) == 0) {
            return;
          }
          memset(local_78,0,4);
          uVar3 = *(ushort *)(*(long *)puVar1 + 0x50);
          bVar7 = true;
          if (uVar3 != 0) {
            uVar9 = (uint)uVar3;
            uVar6 = 0;
            if (uVar3 < 2) {
              uVar9 = 1;
            }
            do {
              if (*(char *)(*(long *)(param_1 + 0x98) + uVar6) == *(char *)(param_1 + 0xa4)) {
                local_78[0] = local_78[0] | 1 << (ulong)((uint)uVar6 & 0x1f);
              }
              uVar6 = uVar6 + 1;
            } while (uVar9 != uVar6);
            bVar7 = false;
          }
          if (local_78[0] == 0) {
            *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
            *(undefined1 *)(param_1 + 0x78) = 0;
            *(undefined4 *)(param_1 + 0x90) = 0;
            *(undefined2 *)(param_1 + 0xb8) = 0;
            *(undefined2 *)(param_1 + 0xa4) = 0xffff;
            *(undefined1 *)(param_1 + 0xba) = 0;
            *(undefined8 *)(param_1 + 0x80) = 0;
            *(undefined8 *)(param_1 + 0x88) = 0;
            *(undefined8 *)(param_1 + 0xa8) = 0;
            *(undefined8 *)(param_1 + 0xb0) = 0;
            if (!bVar7) {
              uVar6 = 0;
              do {
                *(undefined1 *)(*(long *)(param_1 + 0x98) + uVar6) = 0xff;
                uVar6 = uVar6 + 1;
              } while (uVar6 < *(ushort *)(*(long *)puVar1 + 0x50));
            }
            uVar8 = 0xc;
          }
          else {
            uVar9 = *(uint *)(param_1 + 0xa8);
            uVar10 = *(uint *)(param_1 + 0x90);
            if (uVar9 < uVar10) {
              puVar1 = PTR_DAT_047d1558 + 0x10;
              do {
                uVar4 = *(ushort *)(*(long *)(param_1 + 0x70) + 0x70) - 0xb;
                if (uVar10 - uVar9 <= uVar4) {
                  uVar4 = uVar10 - uVar9;
                }
                uVar6 = FUN_007f1ef8(*(long *)(param_1 + 0x70),uVar4);
                if ((uVar6 & 1) == 0) {
                  return;
                }
                uVar8 = 0;
                if (*(uint *)(param_1 + 0x90) != 0) {
                  uVar8 = (undefined1)
                          (((*(int *)(param_1 + 0xa8) + uVar4) * 100) / *(uint *)(param_1 + 0x90));
                }
                *(undefined1 *)(param_1 + 0xba) = uVar8;
                local_bc0 = 0;
                local_bbe = 0;
                local_bbc = 0;
                local_bc8 = puVar1;
                memset(auStack_bb4,0,0x595);
                uVar8 = 1;
                if ((ulong)*(uint *)(param_1 + 0xa8) != 0) {
                  uVar8 = 2;
                }
                local_bc0 = CONCAT11(*(undefined1 *)(param_1 + 0xa4),uVar8);
                local_bbc = CONCAT44(uVar4,(undefined4)local_bbc);
                local_bbe = *(undefined1 *)(param_1 + 0xba);
                memcpy(auStack_bb4,
                       (void *)(*(long *)(param_1 + 0x80) + (ulong)*(uint *)(param_1 + 0xa8)),
                       (ulong)uVar4);
                FUN_007f60e8(local_be0,&local_bc8,local_618,local_bd0,0x5a0);
                uVar14 = *(undefined8 *)(param_1 + 0x70);
                memcpy(auStack_be8,local_78,4);
                FUN_007f1994(local_be0,uVar14,auStack_be8,local_618,local_bd0[0],param_1 + 0xb8);
                *(uint *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + uVar4;
                FUN_00797e54(param_1 + 8,*(undefined2 *)(*(long *)(param_1 + 0x70) + 0x32));
                uVar9 = *(uint *)(param_1 + 0xa8);
                uVar10 = *(uint *)(param_1 + 0x90);
              } while (uVar9 < uVar10);
            }
            uVar8 = 2;
          }
        }
        *(undefined1 *)(param_1 + 0x78) = uVar8;
      }
    }
  }
  return;
}


