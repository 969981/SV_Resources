/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4f9fc; name: FUN_00a4f9fc
 */


void FUN_00a4f9fc(long param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  
  if (param_4 < 0x402) {
    if (param_3 < 3) {
      uVar5 = (uint)*(ushort *)(param_1 + (long)param_4 * 0x18 + (ulong)param_3 * 2 + 0x30);
    }
    else {
      uVar5 = 0;
    }
    iVar3 = 1;
    if (param_2 == 0) {
      iVar3 = -1;
    }
    uVar5 = uVar5 + iVar3;
    if (uVar5 != 0) {
      lVar7 = param_1 + 0x6358;
      if (param_3 == 0) {
        uVar8 = 1;
        do {
          lVar6 = param_1 + uVar8 * 0x18;
          if ((uVar5 == *(ushort *)(lVar6 + 0x30)) &&
             (puVar9 = (ushort *)(lVar6 + 0x2c), 8 < *puVar9 - 0x38a)) {
            pbVar12 = (byte *)(param_1 + uVar8 * 0x18 + 0x2e);
            uVar11 = (uint)*pbVar12;
            if (uVar11 != 0) {
              uVar10 = 0;
              puVar1 = (uint *)(param_1 + uVar8 * 0x18 + 0x38);
              do {
                if ((((uVar10 & 0xff) < 0x20) && ((*puVar1 >> (ulong)(uVar10 & 0x1f) & 1) != 0)) &&
                   (uVar4 = FUN_00a61b94(lVar7,0,uVar8 & 0xffffffff,uVar10), (uVar4 & 1) == 0)) {
                  uVar2 = 0;
                  if ((*puVar9 & 0xfffe) != 0x298 && *puVar9 != 0x2e8) {
                    uVar2 = uVar10;
                  }
                  uVar4 = FUN_00a65d24(puVar9,0,uVar2);
                  if ((uVar4 & 1) != 0) goto LAB_00a4fc48;
                }
                uVar10 = uVar10 + 1;
              } while (uVar11 != uVar10);
              uVar11 = (uint)*pbVar12;
              if (uVar11 != 0) {
                uVar10 = 0;
                do {
                  if ((((uVar10 & 0xff) < 0x20) && ((*puVar1 >> (ulong)(uVar10 & 0x1f) & 1) != 0))
                     && (uVar4 = FUN_00a61b94(lVar7,0,uVar8 & 0xffffffff,uVar10), (uVar4 & 1) == 0))
                  {
                    uVar2 = 0;
                    if ((*puVar9 & 0xfffe) != 0x298 && *puVar9 != 0x2e8) {
                      uVar2 = uVar10;
                    }
                    uVar4 = FUN_00a65d24(puVar9,1,uVar2);
                    if ((uVar4 & 1) != 0) goto LAB_00a4fc48;
                  }
                  uVar10 = uVar10 + 1;
                  if (uVar11 == uVar10) break;
                } while( true );
              }
            }
            goto LAB_00a4fd4c;
          }
LAB_00a4fc48:
          uVar8 = uVar8 + 1;
        } while (uVar8 != 0x402);
      }
      else {
        uVar8 = 1;
        do {
          if (param_3 < 3) {
            uVar11 = (uint)*(ushort *)(param_1 + uVar8 * 0x18 + (ulong)param_3 * 2 + 0x30);
          }
          else {
            uVar11 = 0;
          }
          if ((uVar5 == uVar11) &&
             ((puVar9 = (ushort *)(param_1 + uVar8 * 0x18 + 0x2c), param_3 != 2 ||
              (0x2a < *puVar9 - 0x3d4 ||
               (1L << ((ulong)(*puVar9 - 0x3d4) & 0x3f) & 0x40000000081U) == 0)))) {
            pbVar12 = (byte *)(param_1 + uVar8 * 0x18 + 0x2e);
            uVar11 = (uint)*pbVar12;
            if (uVar11 != 0) {
              uVar10 = 0;
              puVar1 = (uint *)(param_1 + uVar8 * 0x18 + (ulong)param_3 * 4 + 0x38);
              do {
                uVar4 = FUN_00a4f8c0(param_3);
                if (((((uVar4 & 1) != 0) && (param_3 < 3)) && ((uVar10 & 0xff) < 0x20)) &&
                   (((*puVar1 >> (ulong)(uVar10 & 0x1f) & 1) != 0 &&
                    (uVar4 = FUN_00a61b94(lVar7,param_3,uVar8 & 0xffffffff,uVar10), (uVar4 & 1) == 0
                    )))) {
                  uVar2 = 0;
                  if ((*puVar9 & 0xfffe) != 0x298 && *puVar9 != 0x2e8) {
                    uVar2 = uVar10;
                  }
                  uVar4 = FUN_00a65d24(puVar9,0,uVar2);
                  if ((uVar4 & 1) != 0) goto LAB_00a4fae4;
                }
                uVar10 = uVar10 + 1;
              } while (uVar11 != uVar10);
              uVar11 = (uint)*pbVar12;
              if (uVar11 != 0) {
                uVar10 = 0;
                do {
                  uVar4 = FUN_00a4f8c0(param_3);
                  if ((((uVar4 & 1) != 0) && (param_3 < 3)) &&
                     (((uVar10 & 0xff) < 0x20 &&
                      (((*puVar1 >> (ulong)(uVar10 & 0x1f) & 1) != 0 &&
                       (uVar4 = FUN_00a61b94(lVar7,param_3,uVar8 & 0xffffffff,uVar10),
                       (uVar4 & 1) == 0)))))) {
                    uVar2 = 0;
                    if ((*puVar9 & 0xfffe) != 0x298 && *puVar9 != 0x2e8) {
                      uVar2 = uVar10;
                    }
                    uVar4 = FUN_00a65d24(puVar9,1,uVar2);
                    if ((uVar4 & 1) != 0) goto LAB_00a4fae4;
                  }
                  uVar10 = uVar10 + 1;
                  if (uVar11 == uVar10) break;
                } while( true );
              }
            }
LAB_00a4fd4c:
            auVar13 = FUN_00a62e20(param_1 + 0x6230,param_3,uVar8 & 0xffffffff);
            uVar8 = auVar13._0_8_ >> 0x20;
            FUN_00a6468c(puVar9,param_3,uVar8,auVar13._8_8_ & 0xffffffff);
            if ((param_5 & 1) == 0) {
              return;
            }
            if (((*PTR_DAT_047d89f8 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar3 != 0)) {
              FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d89f8);
            }
            lVar7 = *(long *)PTR_DAT_047d8a00;
            *(long *)PTR_DAT_047d8a08 = lVar7;
            FUN_00a4f47c(param_1,param_3,auVar13._0_8_ & 0xffffffff,uVar8,auVar13._8_8_ & 0xffffffff
                         ,*(undefined1 *)(lVar7 + 0x2c),0,2);
            return;
          }
LAB_00a4fae4:
          uVar8 = uVar8 + 1;
        } while (uVar8 != 0x402);
      }
    }
  }
  return;
}


