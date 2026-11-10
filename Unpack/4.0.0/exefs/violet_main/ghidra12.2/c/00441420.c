/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00441420; name: FUN_00441420
 */


undefined8
FUN_00441420(void *param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
            long param_6,ulong param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined8 uVar9;
  uint *puVar10;
  ulong uVar11;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  uint *local_b8;
  undefined4 local_b0 [2];
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 *puStack_80;
  long local_78;
  int local_70;
  int local_6c;
  uint *local_68;
  
  local_b8 = (uint *)0x0;
  if ((param_4 < 0x40000001) && (lVar6 = FUN_0042bbc0(), lVar6 != 0)) {
    iVar2 = FUN_0043b720(param_8);
    if ((param_2 < 0x40000001) && (param_7 < 0x40000001)) {
      local_a8 = &local_f8;
      local_b0[0] = 4;
      local_f0 = &DAT_044a8f98;
      uStack_e8 = 0;
      puStack_80 = local_b0;
      local_f8 = 0x400000004;
      if (param_6 == 0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = &local_a0;
        uStack_90 = 0;
        local_a0 = (undefined4)param_7;
        uStack_9c = 4;
        local_98 = param_6;
      }
      local_88 = param_5;
      uVar3 = FUN_003fa810(&local_b8,&local_88,puVar7,param_2 & 0xffffffff);
      puVar10 = local_b8;
      if (0 < (int)uVar3) {
        uVar11 = (ulong)uVar3;
        local_68 = local_b8;
        uVar4 = FUN_003debf0(&local_68,&local_78,&local_6c,&local_70,uVar11);
        if ((uVar4 >> 7 & 1) == 0) {
          bVar8 = true;
          if ((local_6c == 0x10) && (local_70 == 0)) {
            bVar8 = false;
            uVar11 = (long)puVar10 + (uVar11 - (long)local_68);
            puVar10 = local_68;
          }
          if (!bVar8) {
            local_68 = puVar10;
            uVar4 = FUN_003debf0(&local_68,&local_78,&local_6c,&local_70,uVar11);
            if ((uVar4 >> 7 & 1) == 0) {
              bVar8 = true;
              if ((local_6c == 0x10) && (local_70 == 0)) {
                bVar8 = false;
                uVar11 = (long)puVar10 + (uVar11 - (long)local_68);
                puVar10 = local_68;
              }
            }
            else {
              bVar8 = true;
            }
            if (!bVar8) {
              local_68 = puVar10;
              uVar4 = FUN_003debf0(&local_68,&local_78,&local_6c,&local_70,uVar11);
              if ((uVar4 >> 7 & 1) == 0) {
                bVar8 = true;
                if ((local_6c == 6) && (local_70 == 0)) {
                  bVar8 = false;
                  local_68 = (uint *)((long)local_68 + local_78);
                  uVar11 = (long)puVar10 + (uVar11 - (long)local_68);
                  puVar10 = local_68;
                }
              }
              else {
                bVar8 = true;
              }
              if (!bVar8) {
                local_68 = puVar10;
                uVar4 = FUN_003debf0(&local_68,&local_78,&local_6c,&local_70,uVar11);
                if ((uVar4 >> 7 & 1) == 0) {
                  bVar8 = local_6c != 4 || local_70 != 0;
                  if (local_6c == 4 && local_70 == 0) {
                    puVar10 = local_68;
                  }
                }
                else {
                  bVar8 = true;
                }
                if (!bVar8) {
                  iVar5 = FUN_003f6d80(puVar10,&DAT_044a8f98,4);
                  if (iVar5 != 0) {
                    uVar3 = 0;
                  }
                  if ((uVar3 != 0) && (iVar5 = FUN_0042bc40(lVar6,param_8,0), iVar5 != 0)) {
                    uVar11 = (ulong)iVar2;
                    uVar4 = 1;
                    do {
                      iVar2 = FUN_0042bd60(lVar6,param_3,param_4);
                      if (iVar2 == 0) break;
                      uVar1 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
                      *puVar10 = uVar1 >> 0x10 | uVar1 << 0x10;
                      iVar2 = FUN_0042bd60(lVar6,local_b8,uVar3);
                      if (iVar2 == 0) break;
                      if (param_2 < uVar11) {
                        iVar2 = FUN_0042bd80(lVar6,&local_f8,0);
                        if (iVar2 != 0) {
                          memcpy(param_1,&local_f8,param_2);
                          FUN_00453300(&local_f8,uVar11);
LAB_00441748:
                          uVar9 = 1;
                          goto LAB_00441778;
                        }
                        break;
                      }
                      iVar2 = FUN_0042bd80(lVar6,param_1,0);
                      if (iVar2 == 0) break;
                      param_2 = param_2 - uVar11;
                      if (param_2 == 0) goto LAB_00441748;
                      param_1 = (void *)((long)param_1 + uVar11);
                      uVar4 = uVar4 + 1;
                      iVar2 = FUN_0042bc40(lVar6,param_8,0);
                    } while (iVar2 != 0);
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar9 = 0;
LAB_00441778:
    FUN_00452f80(local_b8,"external/openssl/crypto/dh/dh_kdf.c",0x92);
    FUN_0042bbe0(lVar6);
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}


