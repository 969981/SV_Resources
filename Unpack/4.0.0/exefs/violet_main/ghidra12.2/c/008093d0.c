/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008093d0; name: FUN_008093d0
 */


void FUN_008093d0(long param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  void *__dest;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  long *plVar23;
  undefined8 *puVar24;
  ulong uVar25;
  byte *pbVar26;
  int iVar27;
  undefined8 local_128;
  long *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  byte local_110;
  undefined7 uStack_10f;
  ulong local_100;
  long *plStack_f8;
  byte local_f0;
  undefined7 uStack_ef;
  undefined8 local_e0;
  long *plStack_d8;
  byte local_c0;
  undefined7 uStack_bf;
  undefined8 local_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [32];
  ulong local_80;
  ulong local_78;
  void *local_70;
  long *local_68;
  
  lVar20 = *(long *)PTR_DAT_047d0900;
  nn::os::LockMutex((MutexType *)(lVar20 + 0x68));
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x48))(&local_118);
    uVar15 = local_100;
    lVar11 = thunk_FUN_00799c50(*(undefined8 *)PTR_DAT_047d15d8);
    uVar2 = *(uint *)(lVar11 + 0x13cc);
    FUN_00558b48(&local_118,CONCAT71(uStack_10f,local_110));
    if (uVar2 < uVar15) {
      plVar23 = *(long **)(param_1 + 8);
      local_118 = 0x10408;
    }
    else {
      (**(code **)(**(long **)(param_1 + 8) + 0x48))(&local_118);
      uVar15 = local_100;
      uVar4 = *(ushort *)(*(long *)PTR_DAT_047d0a08 + 8);
      FUN_00558b48(&local_118,CONCAT71(uStack_10f,local_110));
      if (uVar15 <= uVar4) {
        *(undefined1 *)(param_1 + 0x48) = 0;
        iVar8 = FUN_00809130(param_1);
        puVar24 = (undefined8 *)PTR_DAT_047d15d8;
        iVar3 = *(int *)(param_1 + 0x40);
        uVar12 = thunk_FUN_00799c50(*(undefined8 *)PTR_DAT_047d15d8);
        uVar7 = 1;
        if (iVar3 != iVar8) {
          uVar7 = 2;
        }
        FUN_0079b704(uVar12,uVar7);
        lVar11 = thunk_FUN_00799c50(*puVar24);
        nn::os::LockMutex((MutexType *)(lVar11 + 0x1f8));
        lVar13 = thunk_FUN_00799c50(*puVar24);
        nn::os::LockMutex((MutexType *)(lVar13 + 0x250));
        lVar14 = thunk_FUN_00799c50(*puVar24);
        nn::os::LockMutex((MutexType *)(lVar14 + 0x1378));
        (**(code **)(**(long **)(param_1 + 8) + 0x48))(&local_118);
        if ((byte *)CONCAT44(uStack_114,local_118) == &local_110) {
          iVar27 = 0;
        }
        else {
          iVar27 = 0;
          pbVar26 = (byte *)CONCAT44(uStack_114,local_118);
          do {
            pbVar21 = pbVar26 + 0x40;
            uVar15 = FUN_00560b6c(pbVar21);
            if ((uVar15 & 1) != 0) {
              uVar7 = FUN_00560b90(pbVar21);
              iVar9 = FUN_00560b98(pbVar21);
              uVar10 = FUN_00560b88(pbVar21);
              puVar16 = (ulong *)FUN_00560b64(pbVar21);
              plVar23 = (long *)FUN_01cf7e20();
              local_68 = plVar23;
              if ((*puVar16 & 1) == 0) {
                local_80 = *puVar16;
                local_78 = puVar16[1];
                local_70 = (void *)puVar16[2];
              }
              else {
                uVar15 = puVar16[1];
                pvVar1 = (void *)puVar16[2];
                if (uVar15 < 0x17) {
                  local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar15 << 1));
                  __dest = (void *)((ulong)&local_80 | 1);
                }
                else {
                  if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
                    std::__basic_string_common<true>::__throw_length_error();
                  }
                  uVar25 = uVar15 + 0x10 & 0xfffffffffffffff0;
                  __dest = (void *)(**(code **)(*plVar23 + 0x10))(plVar23,uVar25,1);
                  local_80 = uVar25 | 1;
                  local_78 = uVar15;
                  local_70 = __dest;
                }
                plVar23 = memcpy(__dest,pvVar1,uVar15 + 1);
                puVar24 = (undefined8 *)PTR_DAT_047d15d8;
              }
              pvVar1 = (void *)((ulong)&local_80 | 1);
              if ((local_80 & 1) != 0) {
                pvVar1 = local_70;
              }
              FUN_00809a48(plVar23,iVar9,uVar7,uVar10,iVar9 == iVar8,
                           iVar9 == *(int *)(param_1 + 0x40),pvVar1);
              if (iVar9 == iVar8) {
                lVar17 = thunk_FUN_00799c50(*puVar24);
                uVar12 = thunk_FUN_00799c50(*puVar24);
                FUN_007fedb0(auStack_a0,uVar12,iVar9);
                uVar15 = FUN_007967e8(lVar17 + 0xb8,auStack_a0);
                if ((uVar15 & 1) == 0) {
                  FUN_00796828(lVar17 + 0xb8,auStack_a0);
                }
              }
              iVar27 = iVar27 + 1;
              if ((local_80 & 1) != 0) {
                (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
              }
            }
            pbVar21 = *(byte **)(pbVar26 + 8);
            if (*(byte **)(pbVar26 + 8) == (byte *)0x0) {
              pbVar21 = pbVar26 + 0x10;
              pbVar22 = *(byte **)pbVar21;
              if (*(byte **)pbVar22 != pbVar26) {
                do {
                  lVar17 = *(long *)pbVar21;
                  pbVar21 = (byte *)(lVar17 + 0x10);
                  pbVar22 = *(byte **)pbVar21;
                } while (*(long *)pbVar22 != lVar17);
              }
            }
            else {
              do {
                pbVar22 = pbVar21;
                pbVar21 = *(byte **)pbVar22;
              } while (*(byte **)pbVar22 != (byte *)0x0);
            }
            pbVar26 = pbVar22;
          } while (pbVar22 != &local_110);
        }
        FUN_00558b48(&local_118,CONCAT71(uStack_10f,local_110));
        if (iVar3 == iVar8) {
          uVar12 = thunk_FUN_00799c50(*puVar24);
          thunk_FUN_00799c50(*puVar24);
          uVar7 = FUN_007ec4c0();
          FUN_007ec530(uVar12,uVar7);
        }
        lVar17 = thunk_FUN_00799c50(*puVar24);
        if (*(int *)(lVar17 + 0x288) == 1) {
          lVar17 = thunk_FUN_00799c50(*puVar24);
          lVar18 = thunk_FUN_00799c50(*puVar24);
          uVar15 = FUN_007967e8(lVar17 + 0xb8,lVar18 + 0x98);
          if ((uVar15 & 1) == 0) {
            FUN_00796828(lVar17 + 0xb8,lVar18 + 0x98);
          }
          uVar12 = thunk_FUN_00799c50(*puVar24);
          thunk_FUN_00799c50(*puVar24);
          uVar7 = FUN_007ec4c0();
          FUN_007ec530(uVar12,uVar7);
          uVar12 = thunk_FUN_00799c50(*puVar24);
          thunk_FUN_00799c50(*puVar24);
          uVar19 = FUN_007ec4a8();
          FUN_007ec51c(uVar12,uVar19);
          uVar12 = thunk_FUN_00799c50(*puVar24);
          FUN_0079b6f0(uVar12,1);
        }
        lVar17 = thunk_FUN_00799c50(*puVar24);
        uVar12 = *(undefined8 *)(lVar17 + 0x218);
        FUN_007985f8(uVar12,iVar27);
        lVar17 = thunk_FUN_00799c50(*puVar24);
        *(undefined1 *)(lVar17 + 0x24b) = 1;
        if (iVar3 == iVar8) {
          FUN_007c70a8(&local_118);
          uVar19 = FUN_007c71ac(&local_118);
          FUN_007985e8(uVar12,uVar19);
        }
        lVar17 = thunk_FUN_00799c50(*puVar24);
        if (*(char *)(lVar17 + 0x1168) != '\x01') {
          *(char *)(lVar17 + 0x1168) = '\x01';
        }
        thunk_FUN_00799c50(*puVar24);
        FUN_0079cbe8();
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x1378));
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x250));
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x1f8));
        plVar23 = *(long **)(param_1 + 8);
        uVar12 = (**(code **)(*plVar23 + 0x18))(plVar23);
        (**(code **)(*plVar23 + 0x58))(&local_118,plVar23,uVar12);
        *(undefined1 *)(param_1 + 0x4a) = 1;
        uVar12 = *puVar24;
        local_128 = *(undefined8 *)(param_1 + 8);
        local_120 = *(long **)(param_1 + 0x10);
        if (local_120 != (long *)0x0) {
          plVar23 = local_120 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar6) {
              *plVar23 = *plVar23 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_00808cf4(&local_80,uVar12,iVar3 == iVar8,&local_128);
        if (local_120 != (long *)0x0) {
          plVar23 = local_120 + 1;
          do {
            lVar11 = *plVar23;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar6) {
              *plVar23 = lVar11 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*local_120 + 0x10))(local_120);
            std::__shared_weak_count::__release_weak();
          }
        }
        if ((local_c0 & 1) != 0) {
          (**(code **)(*plStack_a8 + 0x18))
                    (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
        }
        if ((local_f0 & 1) != 0) {
          (**(code **)(*plStack_d8 + 0x18))
                    (plStack_d8,local_e0,CONCAT71(uStack_ef,local_f0) & 0xfffffffffffffffe,1);
        }
        if ((local_110 & 1) != 0) {
          (**(code **)(*plStack_f8 + 0x18))
                    (plStack_f8,local_100,CONCAT71(uStack_10f,local_110) & 0xfffffffffffffffe,1);
        }
        goto LAB_008094e4;
      }
      plVar23 = *(long **)(param_1 + 8);
      local_118 = 0x6c3d;
    }
    local_80 = local_80 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_118 | 4),(Result *)&local_80);
    uVar7 = FUN_00796458(&local_118);
    (**(code **)(*plVar23 + 0x38))(plVar23,uVar7);
  }
LAB_008094e4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  nn::os::UnlockMutex((MutexType *)(lVar20 + 0x68));
  return;
}


