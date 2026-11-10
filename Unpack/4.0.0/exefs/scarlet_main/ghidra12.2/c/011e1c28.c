/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011e1c28; name: FUN_011e1c28
 */


undefined8 FUN_011e1c28(long param_1,undefined4 *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  switch(*param_2) {
  case 0:
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined1 *)(param_1 + 0x3db) = 0;
    *(undefined1 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x210) = 0;
LAB_011e1ec4:
    uVar5 = 1;
    goto LAB_011e1d60;
  case 1:
    uVar7 = (ulong)*(byte *)(param_1 + 0x11c);
    if (uVar7 < 5) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x50) + 0x30);
      if (*(byte *)(lVar9 + uVar7 * 0x38 + 0x58) <= *(byte *)(param_1 + 0x210)) goto LAB_011e20f0;
      plVar10 = *(long **)(lVar9 + uVar7 * 0x38 + (ulong)*(byte *)(param_1 + 0x210) * 8 + 0x28);
      *(long **)(param_1 + 0x58) = plVar10;
      if (plVar10 != (long *)0x0) {
        lVar9 = param_1 + (ulong)*(byte *)(param_1 + 0x60) * 0x10;
        *(long *)(param_1 + 0x68) = lVar9 + 0x220;
        uVar4 = FUN_011e21c0(param_1,*(long *)(param_1 + 0x50),plVar10,0xa5,param_1 + 0xb0);
        uVar5 = (**(code **)(*plVar10 + 0x98))(plVar10);
        *(undefined8 *)(lVar9 + 0x220) = 0;
        *(undefined4 *)(lVar9 + 0x228) = uVar5;
        *(uint *)(lVar9 + 0x220) = (uVar4 & 0xf) << 4 | 0xa501;
        uVar7 = FUN_015af3fc(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x68)
                            );
        if ((uVar7 & 1) == 0) {
          local_58 = 0;
          uStack_50 = 0;
          local_48 = 5;
          local_68 = 0;
          uStack_60 = 0;
          local_70 = *(undefined8 *)(param_1 + 0x58);
          uVar11 = FUN_011e2178(*(undefined8 *)(param_1 + 0x30));
          FUN_011e2488(uVar11,&local_70);
          lVar9 = FUN_011e2178(*(undefined8 *)(param_1 + 0x30));
          FUN_011e2180(*(undefined8 *)(param_1 + 0x68),lVar9 + 0xe0);
          uVar7 = FUN_0161b4a0(*(undefined8 *)(param_1 + 0x68));
          if ((uVar7 & 1) != 0) {
            *(undefined1 *)(param_1 + 0x3db) = 0;
          }
        }
        uVar5 = 2;
        goto LAB_011e1d60;
      }
    }
    else {
LAB_011e20f0:
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    uVar11 = 1;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined1 *)(param_1 + 0x138) = 1;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x228);
    FUN_0132746c(param_1,param_1 + 0x138,200);
    break;
  case 2:
    *(char *)(param_1 + 0x60) = *(char *)(param_1 + 0x60) + '\x01';
    uVar4 = *(byte *)(param_1 + 0x211) + 1;
    *(char *)(param_1 + 0x211) = (char)uVar4;
    if (uVar4 >> 8 != 0) goto LAB_011e1ec4;
    if (((*(long *)(param_1 + 0x58) != 0) && (*(long *)(param_1 + 0x68) != 0)) &&
       ((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x499) & 0x84) == 0)) {
      uVar11 = FUN_014bb634(*(undefined8 *)(param_1 + 0x50));
      uVar5 = (**(code **)(**(long **)(param_1 + 0x58) + 0x98))();
      uVar2 = FUN_011e2194(uVar11,uVar5);
      if ((**(uint **)(param_1 + 0x68) & 0xf) == 1) {
        uVar11 = FUN_015d96e0(*(undefined8 *)(param_1 + 0x50));
        uVar3 = FUN_015d9708(uVar11,*(undefined1 *)(param_1 + 0x11c));
        if (uVar3 == (uVar2 & 0xff)) {
          **(uint **)(param_1 + 0x68) = **(uint **)(param_1 + 0x68) | 0x2000000;
        }
      }
    }
    *(char *)(param_1 + 0x210) = *(char *)(param_1 + 0x210) + '\x01';
    lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8);
    bVar1 = FUN_010f9128(*(undefined4 *)(lVar9 + 0x36c),*(undefined1 *)(lVar9 + 0x370),
                         *(undefined1 *)(param_1 + 0x11c));
    if (*(byte *)(param_1 + 0x210) < bVar1) {
      uVar5 = 1;
    }
    else {
      if (((*(long *)(param_1 + 0x58) != 0) && (*(long *)(param_1 + 0x68) != 0)) &&
         ((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x499) >> 2 & 1) != 0)) {
        bVar1 = FUN_011e1ac8(param_1);
        lVar9 = *(long *)(*(long *)(param_1 + 0x50) + 0x30) + (ulong)bVar1 * 0x38;
        if (((bVar1 < 5) && (*(char *)(lVar9 + 0x58) != '\0')) &&
           (lVar9 = *(long *)(lVar9 + 0x28), lVar9 != 0)) {
          puVar8 = (undefined8 *)
                   (*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
          if (((*PTR_DAT_047d3f00 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar6 != 0)) {
            uVar11 = FUN_01b07aa4();
            *(undefined8 *)PTR_DAT_047d3f08 = uVar11;
            __cxa_guard_release(PTR_DAT_047d3f00);
          }
          if (puVar8 != (undefined8 *)0x0) {
            uVar5 = 3;
            do {
              if (puVar8 == (undefined8 *)PTR_DAT_047d3f08) {
                uVar7 = FUN_01780124(lVar9);
                if ((((uVar7 & 1) != 0) && ((**(uint **)(param_1 + 0x68) & 0xf) == 1)) &&
                   (uVar7 = FUN_020febac(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),
                                         *(undefined8 *)(param_1 + 0x58)), (uVar7 & 1) != 0)) {
                  **(uint **)(param_1 + 0x68) = **(uint **)(param_1 + 0x68) | 0x2000000;
                }
                goto LAB_011e1e74;
              }
              puVar8 = (undefined8 *)*puVar8;
            } while (puVar8 != (undefined8 *)0x0);
            goto LAB_011e1d60;
          }
        }
      }
LAB_011e1e74:
      uVar5 = 3;
    }
LAB_011e1d60:
    uVar11 = 0;
    *param_2 = uVar5;
    break;
  case 3:
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x499) >> 2 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 0x60);
      *(byte *)(param_1 + 0x138) = bVar1;
      if (5 < bVar1) {
        bVar1 = 6;
      }
      if (bVar1 != 0) {
        *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0x220);
        *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x228);
        if (bVar1 != 1) {
          *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x230);
          *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x238);
          if (bVar1 != 2) {
            *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x240);
            *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x248);
            if (bVar1 != 3) {
              *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x250);
              *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 600);
              if (bVar1 != 4) {
                *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x260);
                *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x268);
                if (bVar1 != 5) {
                  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x270);
                  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x278);
                }
              }
            }
          }
        }
      }
      FUN_0132746c(param_1,param_1 + 0x138,200);
    }
    else {
      if ((*(char *)(param_1 + 0x3ad) != '\0') && (*(char *)(param_1 + 0x80) != '\0')) {
        if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 0x50) + 0xa8) != '\0')
        goto switchD_011e1c68_default;
        lVar9 = *(long *)(*(long *)(param_1 + 0x50) + 0x30);
        if (*(char *)(lVar9 + 0x90) == '\0') {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar9 + 0x60);
        }
        uVar7 = FUN_015af3fc(param_1,uVar11,param_1 + 0x70);
        if ((uVar7 & 1) == 0) {
          FUN_011e2180(param_1 + 0x70,*(long *)(*(long *)(param_1 + 0x30) + 0x50) + 0xe0);
        }
        *(undefined1 *)(param_1 + 0x80) = 0;
      }
      FUN_01698200(param_1);
    }
    uVar11 = 1;
    break;
  default:
switchD_011e1c68_default:
    uVar11 = 0;
  }
  return uVar11;
}


