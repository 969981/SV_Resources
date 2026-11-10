/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029cd57c; name: FUN_029cd57c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029cd57c(long param_1,int *param_2)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  char cVar9;
  ulong uVar10;
  float *pfVar11;
  undefined4 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  undefined1 auVar17 [12];
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  bool bVar23;
  int iVar24;
  long lVar25;
  long *plVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  size_t sVar29;
  long lVar30;
  long lVar31;
  long *plVar32;
  uint uVar33;
  uint uVar34;
  long *plVar35;
  ushort *puVar36;
  ulong uVar37;
  ulong uVar38;
  ulong *puVar39;
  long lVar40;
  ulong uVar41;
  byte *pbVar42;
  long lVar43;
  undefined4 *puVar44;
  byte bVar45;
  ulong uVar46;
  ulong uVar47;
  long *plVar48;
  undefined1 (*pauVar49) [12];
  undefined8 *puVar50;
  void *pvVar51;
  long *plVar52;
  undefined1 *puVar53;
  long lVar54;
  char *pcVar55;
  long lVar56;
  ulong uVar57;
  char *pcVar58;
  void *pvVar59;
  long lVar60;
  undefined1 auVar61 [16];
  undefined4 uVar62;
  int iVar67;
  int iVar68;
  undefined1 auVar64 [16];
  int iVar63;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined4 uVar69;
  float fVar70;
  float fVar72;
  float fVar73;
  undefined1 auVar71 [16];
  float fVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  int iVar79;
  int iVar89;
  float fVar90;
  int iVar91;
  float fVar92;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar93;
  float fVar94;
  float fVar98;
  float fVar99;
  undefined1 auVar95 [16];
  float fVar100;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  float fVar105;
  float fVar106;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar107 [16];
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  size_t local_230;
  long *local_208;
  uint *local_1e0;
  uint *local_1d8;
  uint *local_1d0;
  int local_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  long local_c8;
  uint *local_c0;
  uint *local_b0;
  void *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined4 local_68;
  undefined4 uStack_64;
  
  lVar25 = FUN_00c8dda0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x30));
  if ((lVar25 != 0) && (plVar35 = *(long **)(lVar25 + 0x120), plVar35 != (long *)0x0)) {
    plVar1 = plVar35 + 5;
    do {
      lVar25 = *plVar1;
      cVar9 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar23) {
        *(int *)plVar1 = (int)lVar25 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if ((int)lVar25 == -1) {
LAB_029cff64:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    if (((*PTR_DAT_047daf58 & 1) == 0) &&
       (iVar24 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar24 != 0)) {
      FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047daf58);
    }
    plVar26 = (long *)PTR_DAT_047daf60;
    if (plVar35[0x18] != 0) {
      plVar26 = (long *)(plVar35[0x18] + 0x70);
    }
    lVar25 = *plVar26;
    if (lVar25 != 0) {
      piVar2 = (int *)(lVar25 + 0x28);
      do {
        iVar24 = *piVar2;
        cVar9 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar23) {
          *piVar2 = iVar24 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar24 == -1) goto LAB_029cff64;
    }
    plVar26 = *(long **)(param_1 + 0x2d8);
    *(long *)(param_1 + 0x2d8) = lVar25;
    if (plVar26 != (long *)0x0) {
      plVar48 = plVar26 + 5;
      do {
        lVar25 = *plVar48;
        iVar24 = (int)lVar25 + -1;
        cVar9 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar48,0x10);
        if (bVar23) {
          *(int *)plVar48 = iVar24;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar24 == 0) {
        (**(code **)(*plVar26 + 0x10))();
      }
      else if ((int)lVar25 == 0) goto LAB_029ceed4;
    }
    if (((param_2 != (int *)0x0) &&
        (puVar36 = (ushort *)((long)param_2 - (long)*param_2), 6 < *puVar36)) && (puVar36[3] != 0))
    {
      if ((ulong)puVar36[2] == 0) {
        uVar62 = 0;
      }
      else {
        uVar62 = *(undefined4 *)((long)param_2 + (ulong)puVar36[2]);
      }
      *(undefined4 *)(param_1 + 0xc0) = uVar62;
      if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
         (uVar37 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar37 == 0)) {
        uVar62 = 0;
      }
      else {
        uVar62 = *(undefined4 *)((long)param_2 + uVar37);
      }
      FUN_01558d28(param_1,uVar62);
      if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xf) ||
         (uVar37 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7], uVar37 == 0)) {
        lVar25 = 0;
      }
      else {
        puVar3 = (uint *)((long)param_2 + uVar37);
        lVar25 = (long)puVar3 + (ulong)*puVar3;
      }
      if (*(char *)(lVar25 + 4) == '\0') {
        local_208 = (long *)FUN_00d44228();
        if (local_208 != (long *)0x0) {
          (**(code **)(*local_208 + 0x18))();
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar24 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar24 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar27 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar27;
        FUN_00cf9884(&local_a0,uVar27,(char *)(lVar25 + 4));
        local_208 = local_a0;
      }
      if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xb) ||
         (uVar37 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar37 == 0)) {
        *(undefined1 *)(param_1 + 200) = 0;
      }
      else {
        cVar9 = *(char *)((long)param_2 + uVar37);
        *(bool *)(param_1 + 200) = cVar9 != '\0';
        if (cVar9 != '\0') {
          puVar39 = (ulong *)PTR_DAT_047d8b70;
          if (local_208 != (long *)0x0) {
            puVar39 = (ulong *)(local_208 + 6);
          }
          uVar37 = *puVar39;
          plVar26 = (long *)PTR_PTR_047d4508;
          if (local_208 != (long *)0x0) {
            plVar26 = local_208 + 7;
          }
          lVar25 = *plVar26;
          if (local_208 == (long *)0x0) {
            lVar43 = 0;
            plVar26 = (long *)0x0;
          }
          else {
            lVar43 = local_208[8];
            (**(code **)(*local_208 + 0x18))(local_208);
            plVar26 = local_208;
          }
          *(ulong *)(param_1 + 0xd0) = uVar37;
          *(long *)(param_1 + 0xd8) = lVar25;
          *(long *)(param_1 + 0xe0) = lVar43;
          if (plVar26 != (long *)0x0) {
            (**(code **)(*plVar26 + 0x18))(plVar26);
          }
          plVar48 = *(long **)(param_1 + 0xe8);
          *(long **)(param_1 + 0xe8) = plVar26;
          if (plVar48 != (long *)0x0) {
            (**(code **)(*plVar48 + 0x20))();
          }
          lVar25 = *(long *)(param_1 + 0x2d8);
          if (lVar25 != 0) {
            plVar26 = *(long **)(lVar25 + 0x30);
            if (plVar26 != *(long **)(lVar25 + 0x38)) {
              uVar33 = 0xffffffff;
LAB_029cd988:
              uVar46 = *(ulong *)(*plVar26 + 0x40);
              if (uVar46 != 0) {
                uVar38 = uVar46 - (uVar46 >> 1 & 0x5555555555555555);
                uVar38 = (uVar38 & 0x3333333333333333) + (uVar38 >> 2 & 0x3333333333333333);
                uVar38 = (uVar38 + (uVar38 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar38 < 2) {
                  uVar41 = uVar46 - 1 & uVar37;
                }
                else {
                  uVar41 = uVar37;
                  if (uVar46 <= uVar37) {
                    uVar41 = 0;
                    if (uVar46 != 0) {
                      uVar41 = uVar37 / uVar46;
                    }
                    uVar41 = uVar37 - uVar41 * uVar46;
                  }
                }
                plVar48 = *(long **)(*(long *)(*plVar26 + 0x38) + uVar41 * 8);
                if ((plVar48 != (long *)0x0) && (plVar48 = (long *)*plVar48, plVar48 != (long *)0x0)
                   ) {
                  if (uVar38 < 2) {
                    do {
                      if (plVar48[1] == uVar37) {
                        if (plVar48[2] == uVar37) goto LAB_029cda7c;
                      }
                      else if ((plVar48[1] & uVar46 - 1) != uVar41) break;
                      plVar48 = (long *)*plVar48;
                    } while (plVar48 != (long *)0x0);
                  }
                  else {
                    do {
                      uVar38 = plVar48[1];
                      if (uVar38 == uVar37) {
                        if (plVar48[2] == uVar37) goto LAB_029cda7c;
                      }
                      else {
                        if (uVar46 <= uVar38) {
                          uVar57 = 0;
                          if (uVar46 != 0) {
                            uVar57 = uVar38 / uVar46;
                          }
                          uVar38 = uVar38 - uVar57 * uVar46;
                        }
                        if (uVar38 != uVar41) break;
                      }
                      plVar48 = (long *)*plVar48;
                    } while (plVar48 != (long *)0x0);
                  }
                }
              }
              goto LAB_029cda84;
            }
          }
          uVar33 = 0xffffffff;
LAB_029cda90:
          *(uint *)(param_1 + 0xf0) = uVar33;
          if (local_208 != (long *)0x0) {
            (**(code **)(*local_208 + 0x20))();
          }
          uVar62 = 0;
          if ((0xc < *(ushort *)((long)param_2 - (long)*param_2)) &&
             (uVar37 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar37 != 0)) {
            uVar62 = *(undefined4 *)((long)param_2 + uVar37);
          }
          *(undefined4 *)(param_1 + 0xcc) = uVar62;
        }
      }
      if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
         (uVar37 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar37 == 0)) {
        local_b0 = (uint *)0x0;
      }
      else {
        local_b0 = (uint *)((long)param_2 + uVar37);
        local_b0 = (uint *)((long)local_b0 + (ulong)*local_b0);
      }
      uVar37 = (ulong)*local_b0;
      pvVar51 = *(void **)(param_1 + 0x2a8);
      lVar25 = *(long *)(param_1 + 0x2a0);
      lVar43 = (long)pvVar51 - lVar25 >> 4;
      if ((ulong)(lVar43 * -0x303030303030303) < uVar37) {
        uVar46 = uVar37 + lVar43 * 0x303030303030303;
        if ((ulong)((*(long *)(param_1 + 0x2b0) - (long)pvVar51 >> 4) * -0x303030303030303) < uVar46
           ) {
          uVar46 = *(ulong *)(param_1 + 0x2c0);
          if (0x7ffffffffffffffe < uVar46) {
            uVar46 = 0x7fffffffffffffff;
          }
          if (uVar46 < uVar37) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar25 = *(long *)(param_1 + 0x2b0) - lVar25 >> 4;
          uVar41 = lVar25 * -0x606060606060606;
          uVar38 = uVar37;
          if (uVar37 <= uVar41) {
            uVar38 = uVar41;
          }
          if (uVar46 >> 1 <= (ulong)(lVar25 * -0x303030303030303)) {
            uVar38 = uVar46;
          }
          if (uVar38 == 0) {
            lVar25 = 0;
          }
          else {
            lVar25 = (**(code **)(**(long **)(param_1 + 0x2b8) + 0x10))
                               (*(long **)(param_1 + 0x2b8),uVar38 * 0x550,0x10);
            if (lVar25 == 0) {
              (**(code **)(**(long **)(param_1 + 0x2b8) + 0xe8))();
            }
          }
          local_a8 = (void *)(lVar25 + lVar43 * 0x10);
          lVar43 = uVar37 * 0x550 + lVar43 * -0x10;
          pvVar51 = local_a8;
          do {
            uVar27 = *(undefined8 *)(param_1 + 0x2b8);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar24 = __cxa_guard_acquire(&DAT_04865a38), iVar24 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar30 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar30 == 0) {
              memset(pvVar51,0,0x550);
              FUN_029cffe8(pvVar51);
            }
            else {
              if (0xf < *(ulong *)(lVar30 + 0x80)) goto LAB_029cff6c;
              *(undefined8 *)(lVar30 + *(ulong *)(lVar30 + 0x80) * 8) = uVar27;
              *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + 1;
              memset(pvVar51,0,0x550);
              FUN_029cffe8(pvVar51);
              *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + -1;
            }
            pvVar51 = (void *)((long)pvVar51 + 0x550);
            lVar43 = lVar43 + -0x550;
          } while (lVar43 != 0);
          lVar43 = *(long *)(param_1 + 0x2a0);
          lVar30 = *(long *)(param_1 + 0x2a8);
          if (lVar30 == lVar43) {
            lVar30 = lVar43;
          }
          else {
            lVar56 = 0;
            do {
              uVar27 = *(undefined8 *)(param_1 + 0x2b8);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(&DAT_04865a38), iVar24 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar31 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar31 != 0) {
                if (0xf < *(ulong *)(lVar31 + 0x80)) goto LAB_029cff6c;
                *(undefined8 *)(lVar31 + *(ulong *)(lVar31 + 0x80) * 8) = uVar27;
                *(long *)(lVar31 + 0x80) = *(long *)(lVar31 + 0x80) + 1;
              }
              lVar54 = lVar30 + lVar56;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x550) = *(undefined8 *)(lVar54 + -0x550);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x548) = *(undefined8 *)(lVar54 + -0x548);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x540) = *(undefined8 *)(lVar54 + -0x540);
              uVar27 = *(undefined8 *)(lVar54 + -0x538);
              *(undefined8 *)(lVar54 + -0x538) = 0;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x538) = uVar27;
              memcpy((void *)((long)local_a8 + lVar56 + -0x530),(void *)(lVar54 + -0x530),0x42);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x4e0) = *(undefined8 *)(lVar54 + -0x4e0);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x4d8) = *(undefined8 *)(lVar54 + -0x4d8);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x4d0) = *(undefined8 *)(lVar54 + -0x4d0);
              uVar27 = *(undefined8 *)(lVar54 + -0x4c8);
              *(undefined8 *)(lVar54 + -0x4c8) = 0;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x4c8) = uVar27;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x4c0) = *(undefined8 *)(lVar54 + -0x4c0);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x4b8) = *(undefined8 *)(lVar54 + -0x4b8);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x4b0) = *(undefined8 *)(lVar54 + -0x4b0);
              uVar27 = *(undefined8 *)(lVar54 + -0x4a8);
              *(undefined8 *)(lVar54 + -0x4a8) = 0;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x4a8) = uVar27;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x4a0) = *(undefined8 *)(lVar54 + -0x4a0);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x498) = *(undefined8 *)(lVar54 + -0x498);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x490) = *(undefined8 *)(lVar54 + -0x490);
              uVar27 = *(undefined8 *)(lVar54 + -0x488);
              *(undefined8 *)(lVar54 + -0x488) = 0;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x488) = uVar27;
              memcpy((void *)((long)local_a8 + lVar56 + -0x480),(void *)(lVar54 + -0x480),0xb0);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x3d0) = *(undefined8 *)(lVar54 + -0x3d0);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x3c8) = *(undefined8 *)(lVar54 + -0x3c8);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x3c0) = *(undefined8 *)(lVar54 + -0x3c0);
              uVar27 = *(undefined8 *)(lVar54 + -0x3b8);
              *(undefined8 *)(lVar54 + -0x3b8) = 0;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x3b8) = uVar27;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x3b0) = *(undefined8 *)(lVar54 + -0x3b0);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x3a8) = *(undefined8 *)(lVar54 + -0x3a8);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x3a0) = *(undefined8 *)(lVar54 + -0x3a0);
              uVar27 = *(undefined8 *)(lVar54 + -0x398);
              *(undefined8 *)(lVar54 + -0x398) = 0;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x398) = uVar27;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x390) = *(undefined8 *)(lVar54 + -0x390);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x388) = *(undefined8 *)(lVar54 + -0x388);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x380) = *(undefined8 *)(lVar54 + -0x380);
              uVar27 = *(undefined8 *)(lVar54 + -0x378);
              *(undefined8 *)(lVar54 + -0x378) = 0;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x378) = uVar27;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x370) = *(undefined8 *)(lVar54 + -0x370);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x368) = *(undefined8 *)(lVar54 + -0x368);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x360) = *(undefined8 *)(lVar54 + -0x360);
              uVar27 = *(undefined8 *)(lVar54 + -0x358);
              *(undefined8 *)(lVar54 + -0x358) = 0;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x358) = uVar27;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x350) = *(undefined8 *)(lVar54 + -0x350);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x348) = *(undefined8 *)(lVar54 + -0x348);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x340) = *(undefined8 *)(lVar54 + -0x340);
              uVar27 = *(undefined8 *)(lVar54 + -0x338);
              *(undefined8 *)(lVar54 + -0x338) = 0;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x338) = uVar27;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x330) = *(undefined8 *)(lVar54 + -0x330);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x328) = *(undefined8 *)(lVar54 + -0x328);
              *(undefined8 *)((long)local_a8 + lVar56 + -800) = *(undefined8 *)(lVar54 + -800);
              uVar27 = *(undefined8 *)(lVar54 + -0x318);
              *(undefined8 *)(lVar54 + -0x318) = 0;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x318) = uVar27;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x310) = *(undefined8 *)(lVar54 + -0x310);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x308) = *(undefined8 *)(lVar54 + -0x308);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x300) = *(undefined8 *)(lVar54 + -0x300);
              uVar27 = *(undefined8 *)(lVar54 + -0x2f8);
              *(undefined8 *)(lVar54 + -0x2f8) = 0;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x2f8) = uVar27;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x2f0) = *(undefined8 *)(lVar54 + -0x2f0);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x2e8) = *(undefined8 *)(lVar54 + -0x2e8);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x2e0) = *(undefined8 *)(lVar54 + -0x2e0);
              uVar27 = *(undefined8 *)(lVar54 + -0x2d8);
              *(undefined8 *)(lVar54 + -0x2d8) = 0;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x2d8) = uVar27;
              puVar50 = (undefined8 *)((long)local_a8 + lVar56 + -0x2c8);
              *(undefined4 *)((long)local_a8 + lVar56 + -0x2d0) = *(undefined4 *)(lVar54 + -0x2d0);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x2c0) = 0;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x2b8) = 0;
              *puVar50 = 0;
              uVar6 = *(undefined8 *)(lVar54 + -0x298);
              uVar27 = *(undefined8 *)(lVar54 + -0x2b0);
              uVar7 = *(undefined8 *)(lVar54 + -0x2a8);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x2a0) = *(undefined8 *)(lVar54 + -0x2a0);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x298) = uVar6;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x2b0) = uVar27;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x2a8) = uVar7;
              *puVar50 = *(undefined8 *)(lVar54 + -0x2c8);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x2c0) = *(undefined8 *)(lVar54 + -0x2c0);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x2b8) = *(undefined8 *)(lVar54 + -0x2b8);
              *(undefined8 *)(lVar54 + -0x2c0) = 0;
              *(undefined8 *)(lVar54 + -0x2b8) = 0;
              *(undefined8 *)(lVar54 + -0x2c8) = 0;
              memcpy((void *)((long)local_a8 + lVar56 + -0x290),(void *)(lVar54 + -0x290),0x230);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x58) = 0;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x50) = 0;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x60) = 0;
              uVar27 = *(undefined8 *)(lVar54 + -0x48);
              uVar6 = *(undefined8 *)(lVar54 + -0x40);
              uVar7 = *(undefined8 *)(lVar54 + -0x30);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x38) = *(undefined8 *)(lVar54 + -0x38);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x30) = uVar7;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x48) = uVar27;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x40) = uVar6;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x60) = *(undefined8 *)(lVar54 + -0x60);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x58) = *(undefined8 *)(lVar54 + -0x58);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x50) = *(undefined8 *)(lVar54 + -0x50);
              uVar27 = *(undefined8 *)(lVar54 + -0x20);
              uVar6 = *(undefined8 *)(lVar54 + -0x18);
              *(undefined8 *)(lVar54 + -0x60) = 0;
              *(undefined8 *)(lVar54 + -0x58) = 0;
              *(undefined8 *)(lVar54 + -0x50) = 0;
              *(undefined1 *)((long)local_a8 + lVar56 + -0x10) = *(undefined1 *)(lVar54 + -0x10);
              *(undefined8 *)((long)local_a8 + lVar56 + -0x20) = uVar27;
              *(undefined8 *)((long)local_a8 + lVar56 + -0x18) = uVar6;
              if (lVar31 != 0) {
                *(long *)(lVar31 + 0x80) = *(long *)(lVar31 + 0x80) + -1;
              }
              lVar56 = lVar56 + -0x550;
            } while (lVar43 - lVar30 != lVar56);
            local_a8 = (void *)((long)local_a8 + lVar56);
            lVar43 = *(long *)(param_1 + 0x2a8);
            lVar30 = *(long *)(param_1 + 0x2a0);
          }
          *(void **)(param_1 + 0x2a0) = local_a8;
          *(ulong *)(param_1 + 0x2a8) = lVar25 + uVar37 * 0x550;
          lVar56 = *(long *)(param_1 + 0x2b0);
          *(ulong *)(param_1 + 0x2b0) = lVar25 + uVar38 * 0x550;
          if (lVar43 != lVar30) {
            lVar25 = 0;
            do {
              lVar31 = lVar43 + lVar25;
              lVar54 = *(long *)(lVar31 + -0x60);
              if (lVar54 != 0) {
                plVar26 = *(long **)(lVar31 + -0x48);
                *(long *)(lVar31 + -0x58) = lVar54;
                lVar40 = *(long *)(lVar31 + -0x50) - lVar54;
                uVar37 = (**(code **)(*plVar26 + 0xf8))(plVar26);
                if (((uVar37 & 1) == 0) || (lVar60 = FUN_00c4e600(), *(int *)(lVar60 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar26 + 0x18))(plVar26,lVar54,lVar40,4);
                }
                else {
                  FUN_00c48fe8(plVar26,lVar54,lVar40,4);
                }
              }
              FUN_0106c2b4(lVar31 + -0x4e0);
              if (*(long **)(lVar31 + -0x538) != (long *)0x0) {
                (**(code **)(**(long **)(lVar31 + -0x538) + 0x20))();
              }
              lVar25 = lVar25 + -0x550;
            } while (lVar30 - lVar43 != lVar25);
          }
          if (lVar30 != 0) {
            lVar56 = lVar56 - lVar30;
            plVar26 = *(long **)(param_1 + 0x2b8);
            uVar37 = (**(code **)(*plVar26 + 0xf8))(plVar26);
            if (((uVar37 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
              (**(code **)(*plVar26 + 0x18))(plVar26,lVar30,lVar56,0x10);
            }
            else {
              FUN_00c48fe8(plVar26,lVar30,lVar56,0x10);
            }
          }
        }
        else {
          pvVar59 = pvVar51;
          if (uVar46 != 0) {
            pvVar59 = (void *)((long)pvVar51 + uVar46 * 0x550);
            lVar25 = uVar37 * 0x550 + lVar43 * -0x10;
            do {
              uVar27 = *(undefined8 *)(param_1 + 0x2b8);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(&DAT_04865a38), iVar24 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar43 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar43 == 0) {
                memset(pvVar51,0,0x550);
                FUN_029cffe8(pvVar51);
              }
              else {
                if (0xf < *(ulong *)(lVar43 + 0x80)) {
LAB_029cff6c:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(undefined8 *)(lVar43 + *(ulong *)(lVar43 + 0x80) * 8) = uVar27;
                *(long *)(lVar43 + 0x80) = *(long *)(lVar43 + 0x80) + 1;
                memset(pvVar51,0,0x550);
                FUN_029cffe8(pvVar51);
                *(long *)(lVar43 + 0x80) = *(long *)(lVar43 + 0x80) + -1;
              }
              pvVar51 = (void *)((long)pvVar51 + 0x550);
              lVar25 = lVar25 + -0x550;
            } while (lVar25 != 0);
          }
          *(void **)(param_1 + 0x2a8) = pvVar59;
        }
      }
      else if (lVar43 * -0x303030303030303 != uVar37) {
        pvVar59 = (void *)(lVar25 + uVar37 * 0x550);
        if (pvVar59 != pvVar51) {
          lVar43 = 0;
          do {
            lVar30 = *(long *)((long)pvVar51 + lVar43 + -0x60);
            if (lVar30 != 0) {
              plVar26 = *(long **)((long)pvVar51 + lVar43 + -0x48);
              *(long *)((long)pvVar51 + lVar43 + -0x58) = lVar30;
              lVar56 = *(long *)((long)pvVar51 + lVar43 + -0x50) - lVar30;
              uVar46 = (**(code **)(*plVar26 + 0xf8))(plVar26);
              if (((uVar46 & 1) == 0) || (lVar31 = FUN_00c4e600(), *(int *)(lVar31 + 0x12c8) < 1)) {
                (**(code **)(*plVar26 + 0x18))(plVar26,lVar30,lVar56,4);
              }
              else {
                FUN_00c48fe8(plVar26,lVar30,lVar56,4);
              }
            }
            FUN_0106c2b4((long)pvVar51 + lVar43 + -0x4e0);
            plVar26 = *(long **)((long)pvVar51 + lVar43 + -0x538);
            if (plVar26 != (long *)0x0) {
              (**(code **)(*plVar26 + 0x20))();
            }
            lVar43 = lVar43 + -0x550;
          } while ((lVar25 + uVar37 * 0x550) - (long)pvVar51 != lVar43);
        }
        *(void **)(param_1 + 0x2a8) = pvVar59;
      }
      uVar21 = _UNK_03cac218;
      uVar20 = _DAT_03cac210;
      uVar19 = _UNK_03cabe68;
      uVar7 = _DAT_03cabe60;
      uVar6 = _UNK_03caa5b8;
      uVar27 = _DAT_03caa5b0;
      local_c0 = local_b0 + 1;
      if (*local_b0 != 0) {
        puVar3 = local_c0 + *local_b0;
        local_1d0 = local_b0 + 2;
        local_1e0 = local_b0 + 5;
        local_c8 = (long)local_b0 + 9;
        local_1d8 = local_b0 + 3;
        uVar37 = 0xffffffffffffffff;
        local_1c4 = 0;
        auVar64 = NEON_fmov(0x3f800000,4);
        fStack_1b8 = auVar64._8_4_;
        fStack_1b4 = auVar64._12_4_;
        local_1c0 = auVar64._0_4_;
        fStack_1bc = auVar64._4_4_;
        do {
          uVar46 = (ulong)*local_c0;
          piVar2 = (int *)((long)local_c0 + uVar46);
          lVar25 = *(long *)(param_1 + 0x2a0);
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
             (uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar38 == 0)) {
            lVar43 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar2 + uVar38);
            lVar43 = (long)puVar4 + (ulong)*puVar4;
          }
          if (*(char *)(lVar43 + 4) == '\0') {
            local_b0 = (uint *)FUN_00d44228();
            if (local_b0 != (uint *)0x0) {
              (**(code **)(*(long *)local_b0 + 0x18))();
            }
          }
          else {
            if (((*PTR_DAT_047d4240 & 1) == 0) &&
               (iVar24 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar24 != 0)) {
              FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d4240);
            }
            uVar28 = *(undefined8 *)PTR_DAT_047d4248;
            *(undefined8 *)PTR_DAT_047d4250 = uVar28;
            FUN_00cf9884(&local_a0,uVar28,(char *)(lVar43 + 4));
            local_b0 = (uint *)local_a0;
          }
          puVar39 = (ulong *)PTR_DAT_047d8b70;
          if (local_b0 != (uint *)0x0) {
            puVar39 = (ulong *)((long)local_b0 + 0x30);
          }
          uVar38 = *puVar39;
          puVar39 = (ulong *)PTR_PTR_047d4508;
          if (local_b0 != (uint *)0x0) {
            puVar39 = (ulong *)((long)local_b0 + 0x38);
          }
          uVar41 = *puVar39;
          uVar37 = uVar37 + 1;
          if (local_b0 == (uint *)0x0) {
            uVar57 = 0;
          }
          else {
            uVar57 = *(ulong *)((long)local_b0 + 0x40);
            (**(code **)(*(long *)local_b0 + 0x18))();
          }
          if ((long)uVar37 <
              (long)((int)((ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0)) >> 4) *
                    -0x3030303)) {
            puVar39 = (ulong *)(*(long *)(param_1 + 0x2a0) + (uVar37 & 0xffffffff) * 0x550);
            *puVar39 = uVar38;
            puVar39[1] = uVar41;
            puVar39[2] = uVar57;
            if (local_b0 != (uint *)0x0) {
              (**(code **)(*(long *)local_b0 + 0x18))();
            }
            plVar26 = (long *)puVar39[3];
            puVar39[3] = (ulong)local_b0;
            if (plVar26 != (long *)0x0) {
              (**(code **)(*plVar26 + 0x20))();
            }
            lVar43 = *(long *)(param_1 + 0x2d8);
            if (lVar43 != 0) {
              plVar26 = *(long **)(lVar43 + 0x30);
LAB_029cddcc:
              if (plVar26 != *(long **)(lVar43 + 0x38)) {
                uVar41 = *(ulong *)(*plVar26 + 0x40);
                if (uVar41 != 0) {
                  uVar57 = uVar41 - (uVar41 >> 1 & 0x5555555555555555);
                  uVar57 = (uVar57 & 0x3333333333333333) + (uVar57 >> 2 & 0x3333333333333333);
                  uVar57 = (uVar57 + (uVar57 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar57 < 2) {
                    uVar47 = uVar41 - 1 & uVar38;
                  }
                  else {
                    uVar47 = uVar38;
                    if (uVar41 <= uVar38) {
                      uVar47 = 0;
                      if (uVar41 != 0) {
                        uVar47 = uVar38 / uVar41;
                      }
                      uVar47 = uVar38 - uVar47 * uVar41;
                    }
                  }
                  plVar48 = *(long **)(*(long *)(*plVar26 + 0x38) + uVar47 * 8);
                  if ((plVar48 != (long *)0x0) &&
                     (plVar48 = (long *)*plVar48, plVar48 != (long *)0x0)) {
                    if (uVar57 < 2) {
                      do {
                        if (plVar48[1] == uVar38) {
                          if (plVar48[2] == uVar38) goto LAB_029cdecc;
                        }
                        else if ((plVar48[1] & uVar41 - 1) != uVar47) break;
                        plVar48 = (long *)*plVar48;
                      } while (plVar48 != (long *)0x0);
                    }
                    else {
                      do {
                        uVar57 = plVar48[1];
                        if (uVar57 == uVar38) {
                          if (plVar48[2] == uVar38) goto LAB_029cdecc;
                        }
                        else {
                          if (uVar41 <= uVar57) {
                            uVar10 = 0;
                            if (uVar41 != 0) {
                              uVar10 = uVar57 / uVar41;
                            }
                            uVar57 = uVar57 - uVar10 * uVar41;
                          }
                          if (uVar57 != uVar47) break;
                        }
                        plVar48 = (long *)*plVar48;
                      } while (plVar48 != (long *)0x0);
                    }
                  }
                }
                goto LAB_029cded4;
              }
            }
            uVar34 = 0xffffffff;
LAB_029cdee0:
            *(uint *)(*(long *)(param_1 + 0x2a0) + (uVar37 & 0xffffffff) * 0x550 + 0x450) = uVar34;
          }
          if (local_b0 != (uint *)0x0) {
            (**(code **)(*(long *)local_b0 + 0x20))();
          }
          auVar107._8_8_ = uVar6;
          auVar107._0_8_ = uVar27;
          if (6 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
            uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
            if (uVar38 != 0) {
              auVar107._12_4_ = 0;
              auVar107._0_12_ = *(undefined1 (*) [12])((long)piVar2 + uVar38);
            }
          }
          lVar43 = lVar25 + uVar37 * 0x550;
          *(long *)(lVar43 + 0x28) = auVar107._8_8_;
          *(long *)(lVar43 + 0x20) = auVar107._0_8_;
          auVar86._8_8_ = uVar19;
          auVar86._0_8_ = uVar7;
          if (8 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
            uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
            if (uVar38 != 0) {
              auVar86._12_4_ = 0;
              auVar86._0_12_ = *(undefined1 (*) [12])((long)piVar2 + uVar38);
            }
          }
          lVar43 = lVar25 + uVar37 * 0x550;
          *(long *)(lVar43 + 0x38) = auVar86._8_8_;
          *(long *)(lVar43 + 0x30) = auVar86._0_8_;
          uVar62 = 0;
          if (0xc < *(ushort *)((long)piVar2 - (long)*piVar2)) {
            uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6];
            uVar62 = 0;
            if (uVar38 != 0) {
              uVar62 = *(undefined4 *)((long)piVar2 + uVar38);
            }
          }
          *(undefined4 *)(lVar25 + uVar37 * 0x550 + 0x40) = uVar62;
          uVar62 = 0;
          if (0xe < *(ushort *)((long)piVar2 - (long)*piVar2)) {
            uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7];
            uVar62 = 0;
            if (uVar38 != 0) {
              uVar62 = *(undefined4 *)((long)piVar2 + uVar38);
            }
          }
          *(undefined4 *)(lVar25 + uVar37 * 0x550 + 0x44) = uVar62;
          uVar62 = 0;
          if (0x10 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
            uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8];
            uVar62 = 0;
            if (uVar38 != 0) {
              uVar62 = *(undefined4 *)((long)piVar2 + uVar38);
            }
          }
          *(undefined4 *)(lVar25 + uVar37 * 0x550 + 0x48) = uVar62;
          uVar62 = 0;
          if (0x12 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
            uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9];
            uVar62 = 0;
            if (uVar38 != 0) {
              uVar62 = *(undefined4 *)((long)piVar2 + uVar38);
            }
          }
          *(undefined4 *)(lVar25 + uVar37 * 0x550 + 0x4c) = uVar62;
          fVar70 = 0.0;
          if (0x14 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
            uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[10];
            fVar70 = 0.0;
            if (uVar38 != 0) {
              fVar70 = *(float *)((long)piVar2 + uVar38);
            }
          }
          local_a0._0_4_ = fVar70;
          if ((long)uVar37 <
              (long)((int)((ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0)) >> 4) *
                    -0x3030303)) {
            puVar50 = (undefined8 *)&local_68;
            if (0.0 <= fVar70) {
              puVar50 = &local_a0;
            }
            lVar30 = (uVar37 & 0xffffffff) * 0x550;
            local_68 = 0;
            *(undefined4 *)(*(long *)(param_1 + 0x2a0) + lVar30 + 0x50) = *(undefined4 *)puVar50;
            lVar43 = *(long *)(param_1 + 0x2a0);
            fVar74 = 0.0;
            if (*(float *)(lVar43 + lVar30 + 0x50) != 0.0) {
              fVar74 = sinf((fVar70 * 3.1415927) / 180.0);
              lVar43 = *(long *)(param_1 + 0x2a0);
            }
            *(float *)(lVar43 + (uVar37 & 0xffffffff) * 0x550 + 0x4b0) = fVar74;
          }
          fVar70 = 0.0;
          if (0x16 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
            uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xb];
            fVar70 = 0.0;
            if (uVar38 != 0) {
              fVar70 = *(float *)((long)piVar2 + uVar38);
            }
          }
          local_a0 = (long *)CONCAT44(local_a0._4_4_,fVar70);
          if ((long)uVar37 <
              (long)((int)((ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0)) >> 4) *
                    -0x3030303)) {
            puVar50 = (undefined8 *)&local_68;
            if (0.0 <= fVar70) {
              puVar50 = &local_a0;
            }
            lVar30 = (uVar37 & 0xffffffff) * 0x550;
            local_68 = 0;
            *(undefined4 *)(*(long *)(param_1 + 0x2a0) + lVar30 + 0x54) = *(undefined4 *)puVar50;
            lVar43 = *(long *)(param_1 + 0x2a0);
            fVar74 = 0.0;
            if (*(float *)(lVar43 + lVar30 + 0x54) != 0.0) {
              fVar74 = sinf((fVar70 * 3.1415927) / 180.0);
              lVar43 = *(long *)(param_1 + 0x2a0);
            }
            *(float *)(lVar43 + (uVar37 & 0xffffffff) * 0x550 + 0x4b4) = fVar74;
          }
          lVar43 = (long)*piVar2;
          uVar8 = *(ushort *)((long)piVar2 - lVar43);
          uVar62 = 0;
          if (0x18 < uVar8) {
            uVar38 = (ulong)((ushort *)((long)piVar2 - lVar43))[0xc];
            uVar62 = 0;
            if (uVar38 != 0) {
              uVar62 = *(undefined4 *)((long)piVar2 + uVar38);
            }
          }
          if ((long)uVar37 <
              (long)((int)((ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0)) >> 4) *
                    -0x3030303)) {
            *(undefined4 *)(*(long *)(param_1 + 0x2a0) + (uVar37 & 0xffffffff) * 0x550 + 0x58) =
                 uVar62;
            lVar43 = (long)*piVar2;
            uVar8 = *(ushort *)((long)piVar2 - lVar43);
          }
          if (uVar8 < 0x1b) {
            uVar62 = 0;
          }
          else {
            uVar38 = (ulong)*(ushort *)((long)piVar2 + (0x1a - lVar43));
            uVar62 = 0;
            if (uVar38 != 0) {
              uVar62 = *(undefined4 *)((long)piVar2 + uVar38);
            }
          }
          *(undefined4 *)(lVar25 + uVar37 * 0x550 + 0x5c) = uVar62;
          lVar43 = (long)(int)uVar37;
          lVar30 = *(long *)(param_1 + 0x2a0);
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x1d) ||
             (uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xe], uVar38 == 0)) {
            pcVar55 = (char *)(lVar30 + lVar43 * 0x550 + 0x60);
            *pcVar55 = '\0';
LAB_029ce264:
            if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x3d) ||
               (uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1e], uVar38 == 0)) {
              pcVar58 = (char *)(lVar30 + lVar43 * 0x550 + 0x61);
              *pcVar58 = '\0';
            }
            else {
              cVar9 = *(char *)((long)piVar2 + uVar38);
              pcVar58 = (char *)(lVar30 + lVar43 * 0x550 + 0x61);
              *pcVar58 = cVar9 != '\0';
              if (((cVar9 != '\0') && (0x3e < *(ushort *)((long)piVar2 - (long)*piVar2))) &&
                 (uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1f], uVar38 != 0)) {
                uVar41 = (ulong)*(uint *)((long)piVar2 + uVar38);
                puVar4 = (uint *)((long)((long)piVar2 + uVar38) + uVar41);
                uVar33 = *puVar4;
                uVar47 = (ulong)(int)uVar33;
                lVar56 = lVar30 + lVar43 * 0x550;
                uVar57 = *(long *)(lVar56 + 0x290) - *(long *)(lVar56 + 0x288) >> 4;
                plVar26 = (long *)(lVar56 + 0x288);
                if (uVar57 < uVar47) {
                  FUN_011683fc(plVar26,uVar47 - uVar57);
                }
                else if (uVar57 != uVar47) {
                  *(ulong *)(lVar56 + 0x290) = *(long *)(lVar56 + 0x288) + uVar47 * 0x10;
                }
                if (0 < (int)uVar33) {
                  if (uVar33 == 1) {
                    uVar57 = 0;
                  }
                  else {
                    uVar57 = 0;
                    puVar44 = (undefined4 *)((long)local_1e0 + uVar41 + uVar38 + uVar46);
                    do {
                      uVar62 = puVar44[-3];
                      uVar18 = puVar44[-2];
                      uVar69 = *puVar44;
                      puVar12 = (undefined4 *)(*plVar26 + uVar57 * 0x10);
                      puVar12[2] = puVar44[-1];
                      puVar12[3] = uVar69;
                      *puVar12 = uVar62;
                      puVar12[1] = uVar18;
                      lVar56 = *plVar26 + uVar57 * 0x10;
                      auVar107 = *(undefined1 (*) [16])(puVar44 + 1);
                      uVar57 = uVar57 + 2;
                      puVar44 = puVar44 + 8;
                      *(long *)(lVar56 + 0x18) = auVar107._8_8_;
                      *(long *)(lVar56 + 0x10) = auVar107._0_8_;
                    } while (((ulong)uVar33 & 0xfffffffe) != uVar57);
                  }
                  if ((uVar33 & 1) != 0) {
                    auVar107 = *(undefined1 (*) [16])(puVar4 + uVar57 * 4 + 1);
                    puVar50 = (undefined8 *)(*plVar26 + uVar57 * 0x10);
                    puVar50[1] = auVar107._8_8_;
                    *puVar50 = auVar107._0_8_;
                  }
                }
              }
            }
            if (*pcVar58 != '\0' || *pcVar55 != '\0') {
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x1f) ||
                 (uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xf], uVar38 == 0)) {
                if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar24 != 0)) {
                  FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3e28);
                }
                puVar53 = *(undefined1 **)PTR_DAT_047d3e30;
                pcVar55 = *(char **)(PTR_DAT_047d3e30 + 8);
                sVar29 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
                plVar26 = *(long **)(PTR_DAT_047d3e30 + 0x18);
                if (plVar26 != (long *)0x0) {
                  (**(code **)(*plVar26 + 0x18))(plVar26);
                }
              }
              else {
                puVar4 = (uint *)((long)piVar2 + uVar38);
                uVar41 = (ulong)*puVar4;
                pcVar55 = (char *)((long)puVar4 + uVar41 + 4);
                sVar29 = strlen(pcVar55);
                bVar45 = *(byte *)((long)puVar4 + uVar41 + 4);
                if (bVar45 == 0) {
                  plVar26 = (long *)0x0;
                  puVar53 = &DAT_cbf29ce484222645;
                }
                else {
                  puVar53 = &DAT_cbf29ce484222645;
                  pbVar42 = (byte *)(local_c8 + uVar41 + uVar38 + uVar46);
                  do {
                    puVar53 = (undefined1 *)(((ulong)puVar53 ^ (ulong)bVar45) * 0x100000001b3);
                    bVar45 = *pbVar42;
                    pbVar42 = pbVar42 + 1;
                  } while (bVar45 != 0);
                  plVar26 = (long *)0x0;
                }
              }
              lVar56 = lVar30 + lVar43 * 0x550;
              *(undefined8 *)(lVar56 + 0x70) = puVar53;
              *(char **)(lVar56 + 0x78) = pcVar55;
              *(size_t *)(lVar56 + 0x80) = sVar29;
              plVar52 = (long *)(lVar56 + 0x88);
              plVar48 = (long *)*plVar52;
              *plVar52 = 0;
              if (plVar48 != (long *)0x0) {
                (**(code **)(*plVar48 + 0x20))();
              }
              *plVar52 = (long)plVar26;
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x21) ||
                 (uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x10], uVar38 == 0)) {
                if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar24 != 0)) {
                  FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3e28);
                }
                puVar53 = *(undefined1 **)PTR_DAT_047d3e30;
                pcVar55 = *(char **)(PTR_DAT_047d3e30 + 8);
                local_230 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
                plVar26 = *(long **)(PTR_DAT_047d3e30 + 0x18);
                if (plVar26 != (long *)0x0) {
                  (**(code **)(*plVar26 + 0x18))(plVar26);
                }
              }
              else {
                puVar4 = (uint *)((long)piVar2 + uVar38);
                uVar41 = (ulong)*puVar4;
                pcVar55 = (char *)((long)puVar4 + uVar41 + 4);
                local_230 = strlen(pcVar55);
                bVar45 = *(byte *)((long)puVar4 + uVar41 + 4);
                if (bVar45 == 0) {
                  plVar26 = (long *)0x0;
                  puVar53 = &DAT_cbf29ce484222645;
                }
                else {
                  lVar31 = uVar46 + uVar38 + uVar41;
                  puVar53 = &DAT_cbf29ce484222645;
                  do {
                    puVar53 = (undefined1 *)(((ulong)puVar53 ^ (ulong)bVar45) * 0x100000001b3);
                    bVar45 = *(byte *)(local_c8 + lVar31);
                    lVar31 = lVar31 + 1;
                  } while (bVar45 != 0);
                  plVar26 = (long *)0x0;
                }
              }
              lVar31 = lVar30 + lVar43 * 0x550;
              plVar52 = (long *)(lVar31 + 0xa8);
              plVar48 = (long *)*plVar52;
              *(undefined8 *)(lVar31 + 0x90) = puVar53;
              *(char **)(lVar31 + 0x98) = pcVar55;
              *(size_t *)(lVar31 + 0xa0) = local_230;
              *plVar52 = 0;
              if (plVar48 != (long *)0x0) {
                (**(code **)(*plVar48 + 0x20))();
              }
              *plVar52 = (long)plVar26;
              lVar54 = FUN_00c8dda0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x30));
              if (lVar54 != 0) {
                local_88 = (long *)0x0;
                local_a0 = (long *)&DAT_afc4d6c05abef19e;
                local_98 = "default";
                local_90 = 7;
                puVar50 = (undefined8 *)FUN_00cb7028(lVar54,&local_a0);
                plVar26 = (long *)*puVar50;
                if (plVar26 != (long *)0x0) {
                  plVar48 = plVar26 + 5;
                  do {
                    lVar54 = *plVar48;
                    cVar9 = '\x01';
                    bVar23 = (bool)ExclusiveMonitorPass(plVar48,0x10);
                    if (bVar23) {
                      *(int *)plVar48 = (int)lVar54 + 1;
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar9 != '\0');
                  if ((int)lVar54 == -1) goto LAB_029cff64;
                }
                if (local_88 != (long *)0x0) {
                  (**(code **)(*local_88 + 0x20))();
                }
                if (plVar26 != (long *)0x0) {
                  plVar48 = (long *)plVar26[0x1a];
                  if (*plVar48 != 0) {
                    lVar54 = FUN_00c8dda0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x30));
                    if (lVar54 == 0) {
                      plVar52 = (long *)0x0;
                    }
                    else {
                      plVar52 = *(long **)(lVar54 + 0x120);
                      if (plVar52 != (long *)0x0) {
                        plVar32 = plVar52 + 5;
                        do {
                          lVar54 = *plVar32;
                          cVar9 = '\x01';
                          bVar23 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                          if (bVar23) {
                            *(int *)plVar32 = (int)lVar54 + 1;
                            cVar9 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar9 != '\0');
                        if ((int)lVar54 == -1) goto LAB_029cff64;
                      }
                    }
                    plVar48 = (long *)FUN_00dafa58(plVar52,plVar48,
                                                   *(undefined4 *)((long)plVar52 + 0x194));
                    if (*plVar48 == 0) {
LAB_029cfab8:
                      local_a0 = (long *)((ulong)local_a0 & 0xffffffffffffff00);
                    }
                    else {
                      FUN_00db3d00(&local_a0,*plVar48,DAT_0485a0d8 + 0x38,
                                   (undefined8 *)(lVar56 + 0x70),(undefined8 *)(lVar31 + 0x90));
                      plVar48 = local_80;
                      if ((char)local_a0 != '\0') {
                        lVar30 = lVar30 + lVar43 * 0x550;
                        *(char **)(lVar30 + 0xb0) = local_98;
                        *(undefined8 *)(lVar30 + 0xb8) = local_90;
                        *(long **)(lVar30 + 0xc0) = local_88;
                        if (local_80 != (long *)0x0) {
                          (**(code **)(*local_80 + 0x18))(local_80);
                        }
                        plVar32 = *(long **)(lVar30 + 200);
                        *(long **)(lVar30 + 200) = plVar48;
                        if (plVar32 != (long *)0x0) {
                          (**(code **)(*plVar32 + 0x20))();
                        }
                        if ((char)local_a0 != '\0') {
                          if (local_80 != (long *)0x0) {
                            (**(code **)(*local_80 + 0x20))();
                          }
                          goto LAB_029cfab8;
                        }
                      }
                    }
                    if (plVar52 != (long *)0x0) {
                      plVar48 = plVar52 + 5;
                      do {
                        lVar30 = *plVar48;
                        iVar24 = (int)lVar30 + -1;
                        cVar9 = '\x01';
                        bVar23 = (bool)ExclusiveMonitorPass(plVar48,0x10);
                        if (bVar23) {
                          *(int *)plVar48 = iVar24;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                      if (iVar24 == 0) {
                        (**(code **)(*plVar52 + 0x10))(plVar52);
                      }
                      else if ((int)lVar30 == 0) goto LAB_029ceed4;
                    }
                  }
                  plVar48 = plVar26 + 5;
                  do {
                    lVar30 = *plVar48;
                    iVar24 = (int)lVar30 + -1;
                    cVar9 = '\x01';
                    bVar23 = (bool)ExclusiveMonitorPass(plVar48,0x10);
                    if (bVar23) {
                      *(int *)plVar48 = iVar24;
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar9 != '\0');
                  if (iVar24 == 0) {
                    (**(code **)(*plVar26 + 0x10))(plVar26);
                  }
                  else if ((int)lVar30 == 0) goto LAB_029ceed4;
                }
              }
            }
          }
          else {
            cVar9 = *(char *)((long)piVar2 + uVar38);
            pcVar55 = (char *)(lVar30 + lVar43 * 0x550 + 0x60);
            *pcVar55 = cVar9 != '\0';
            if (cVar9 == '\0') goto LAB_029ce264;
            auVar87 = ZEXT816(0);
            if (0x22 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
              uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x11];
              auVar87 = ZEXT816(0);
              if (uVar38 != 0) {
                auVar87._12_4_ = 0;
                auVar87._0_12_ = *(undefined1 (*) [12])((long)piVar2 + uVar38);
              }
            }
            lVar56 = lVar30 + lVar43 * 0x550;
            *(long *)(lVar56 + 0xd8) = auVar87._8_8_;
            *(long *)(lVar56 + 0xd0) = auVar87._0_8_;
            if (((0x26 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
                (uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x13], uVar38 != 0)) &&
               (puVar4 = (uint *)((long)piVar2 + uVar38),
               piVar5 = (int *)((long)puVar4 + (ulong)*puVar4), *piVar5 == 9)) {
              uVar28 = *(undefined8 *)(piVar5 + 1);
              lVar56 = lVar30 + lVar43 * 0x550;
              plVar26 = (long *)(lVar56 + 0x180);
              *(undefined8 *)(lVar56 + 0xf8) = 0;
              *(undefined8 *)(lVar56 + 0xf0) = uVar28;
              uVar28 = *(undefined8 *)(piVar5 + 4);
              *(undefined8 *)(lVar56 + 0x108) = 0;
              *(undefined8 *)(lVar56 + 0x100) = uVar28;
              uVar28 = *(undefined8 *)(piVar5 + 7);
              *(undefined8 *)(lVar56 + 0x118) = 0;
              *(undefined8 *)(lVar56 + 0x110) = uVar28;
              uVar28 = *(undefined8 *)(piVar5 + 10);
              *(undefined8 *)(lVar56 + 0x128) = 0;
              *(undefined8 *)(lVar56 + 0x120) = uVar28;
              uVar28 = *(undefined8 *)(piVar5 + 0xd);
              *(undefined8 *)(lVar56 + 0x138) = 0;
              *(undefined8 *)(lVar56 + 0x130) = uVar28;
              uVar28 = *(undefined8 *)(piVar5 + 0x10);
              *(undefined8 *)(lVar56 + 0x148) = 0;
              *(undefined8 *)(lVar56 + 0x140) = uVar28;
              uVar28 = *(undefined8 *)(piVar5 + 0x13);
              *(undefined8 *)(lVar56 + 0x158) = 0;
              *(undefined8 *)(lVar56 + 0x150) = uVar28;
              uVar28 = *(undefined8 *)(piVar5 + 0x16);
              *(undefined8 *)(lVar56 + 0x168) = 0;
              *(undefined8 *)(lVar56 + 0x160) = uVar28;
              uVar28 = *(undefined8 *)(piVar5 + 0x19);
              plVar48 = (long *)(lVar56 + 0x280);
              *(undefined4 *)(lVar56 + 0x280) = 0;
              *(undefined8 *)(lVar56 + 0x178) = 0;
              *(undefined8 *)(lVar56 + 0x170) = uVar28;
              do {
                if (((*PTR_DAT_047d8c28 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar24 != 0)) {
                  local_a0 = (long *)FUN_00d44228();
                  puVar22 = PTR_DAT_047d8c30;
                  FUN_00d1e764(PTR_DAT_047d8c30,&local_a0);
                  FUN_00100190(PTR_LAB_047d9240,puVar22,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d8c28);
                }
                plVar32 = *(long **)PTR_DAT_047d8c30;
                plVar52 = (long *)PTR_DAT_047d8b70;
                if (plVar32 != (long *)0x0) {
                  plVar52 = plVar32 + 6;
                }
                lVar56 = *plVar52;
                plVar52 = (long *)PTR_PTR_047d4508;
                if (plVar32 != (long *)0x0) {
                  plVar52 = plVar32 + 7;
                }
                lVar31 = *plVar52;
                if (plVar32 == (long *)0x0) {
                  lVar54 = 0;
                }
                else {
                  lVar54 = plVar32[8];
                  (**(code **)(*plVar32 + 0x18))(plVar32);
                }
                plVar52 = (long *)plVar26[3];
                *plVar26 = lVar56;
                plVar26[1] = lVar31;
                plVar26[2] = lVar54;
                plVar26[3] = 0;
                if (plVar52 != (long *)0x0) {
                  (**(code **)(*plVar52 + 0x20))();
                }
                plVar26[3] = (long)plVar32;
                plVar26 = plVar26 + 4;
              } while (plVar26 != plVar48);
              if ((0x2e < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
                 (uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x17], uVar38 != 0)) {
                puVar4 = (uint *)((long)piVar2 + uVar38);
                uVar41 = (ulong)*puVar4;
                if (0 < *(int *)((long)puVar4 + uVar41)) {
                  plVar26 = (long *)(lVar30 + (long)local_1c4 * 0x550 + 0x198);
                  lVar31 = (long)local_1d0 + uVar41 + uVar38 + uVar46;
                  lVar56 = 0;
                  do {
                    local_a0 = (long *)(lVar31 + (ulong)*(uint *)((long)local_1d0 +
                                                                 lVar56 * 4 +
                                                                 uVar46 + uVar41 + uVar38));
                    FUN_00ea0a7c(&local_68,&local_a0);
                    plVar32 = (long *)CONCAT44(uStack_64,local_68);
                    plVar52 = (long *)PTR_DAT_047d8b70;
                    if (plVar32 != (long *)0x0) {
                      plVar52 = plVar32 + 6;
                    }
                    lVar54 = *plVar52;
                    plVar52 = (long *)PTR_PTR_047d4508;
                    if (plVar32 != (long *)0x0) {
                      plVar52 = plVar32 + 7;
                    }
                    lVar40 = *plVar52;
                    if (plVar32 == (long *)0x0) {
                      lVar60 = 0;
                    }
                    else {
                      lVar60 = plVar32[8];
                      (**(code **)(*plVar32 + 0x18))(plVar32);
                    }
                    plVar52 = (long *)*plVar26;
                    plVar26[-3] = lVar54;
                    plVar26[-2] = lVar40;
                    plVar26[-1] = lVar60;
                    *plVar26 = 0;
                    if (plVar52 != (long *)0x0) {
                      (**(code **)(*plVar52 + 0x20))();
                    }
                    *plVar26 = (long)plVar32;
                    if ((long *)CONCAT44(uStack_64,local_68) != (long *)0x0) {
                      (**(code **)(*(long *)CONCAT44(uStack_64,local_68) + 0x20))();
                    }
                    *(int *)plVar48 = *(int *)plVar48 + 1;
                    if (lVar56 == 7) break;
                    lVar56 = lVar56 + 1;
                    plVar26 = plVar26 + 4;
                    lVar31 = lVar31 + 4;
                  } while (lVar56 < *(int *)((long)puVar4 + uVar41));
                }
              }
              goto LAB_029ce264;
            }
          }
          lVar30 = *(long *)(param_1 + 0x2a0);
          if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x25) {
            bVar23 = false;
          }
          else {
            uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x12];
            bVar23 = false;
            if (uVar38 != 0) {
              bVar23 = *(char *)((long)piVar2 + uVar38) != '\0';
            }
          }
          *(bool *)(lVar30 + lVar43 * 0x550 + 0x2c0) = bVar23;
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x29) ||
             (uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x14], uVar38 == 0)) {
            bVar45 = 0;
          }
          else {
            bVar45 = bVar23 & *(char *)((long)piVar2 + uVar38) != '\0';
          }
          lVar56 = lVar30 + lVar43 * 0x550;
          *(byte *)(lVar56 + 0x360) = bVar45;
          if (bVar23) {
            puVar36 = (ushort *)((long)piVar2 - (long)*piVar2);
            uVar8 = *puVar36;
            if (0x1c < uVar8) {
              if ((ulong)puVar36[0xe] == 0) {
                if (0x26 < uVar8) goto LAB_029ce568;
              }
              else if ((0x26 < uVar8) && (*(char *)((long)piVar2 + (ulong)puVar36[0xe]) == '\0')) {
LAB_029ce568:
                uVar38 = (ulong)puVar36[0x13];
                if ((uVar38 != 0) &&
                   (uVar41 = (ulong)*(uint *)((long)piVar2 + uVar38),
                   *(int *)((long)((long)piVar2 + uVar38) + uVar41) == 9)) {
                  lVar31 = 0;
                  pauVar49 = (undefined1 (*) [12])((long)local_1d0 + uVar41 + uVar38 + uVar46);
                  do {
                    auVar95._8_4_ = 0x3f000000;
                    auVar95._0_8_ = 0x3f0000003f000000;
                    auVar95._12_4_ = 0x3f000000;
                    auVar17 = *pauVar49;
                    fVar70 = auVar17._0_4_ * 0.5;
                    fVar74 = auVar17._4_4_ * 0.5;
                    fVar90 = auVar17._8_4_ * 0.5;
                    fVar92 = fVar70 + 1.5707964;
                    fVar106 = fVar74 + 1.5707964;
                    fVar111 = fVar90 + 1.5707964;
                    auVar75._0_4_ = -(uint)(0.0 <= fVar92);
                    auVar75._4_4_ = -(uint)(0.0 <= fVar106);
                    auVar75._8_4_ = -(uint)(0.0 <= fVar111);
                    auVar75._12_4_ = 0xffffffff;
                    auVar80._0_4_ = -(uint)(0.0 <= fVar70);
                    auVar80._4_4_ = -(uint)(0.0 <= fVar74);
                    auVar80._8_4_ = -(uint)(0.0 <= fVar90);
                    auVar80._12_4_ = 0xffffffff;
                    auVar97[0xb] = 0xbf;
                    auVar97._0_11_ = ZEXT811(0xbf000000bf000000);
                    auVar97._12_3_ = 0;
                    auVar97[0xf] = 0xbf;
                    auVar76[0xb] = 0xbf;
                    auVar76._0_11_ = ZEXT811(0xbf000000bf000000);
                    auVar76._12_3_ = 0;
                    auVar76[0xf] = 0xbf;
                    auVar76 = auVar76 ^ (auVar97 ^ auVar95) & auVar75;
                    auVar13[0xb] = 0xbf;
                    auVar13._0_11_ = ZEXT811(0xbf000000bf000000);
                    auVar13._12_3_ = 0;
                    auVar13[0xf] = 0xbf;
                    auVar81[0xb] = 0xbf;
                    auVar81._0_11_ = ZEXT811(0xbf000000bf000000);
                    auVar81._12_3_ = 0;
                    auVar81[0xf] = 0xbf;
                    auVar81 = auVar81 ^ (auVar13 ^ auVar95) & auVar80;
                    iVar24 = -(uint)(fVar70 == 0.0);
                    iVar15 = -(uint)(fVar74 == 0.0);
                    iVar16 = -(uint)(fVar90 == 0.0);
                    auVar82._0_4_ = (int)(auVar81._0_4_ + fVar70 * 0.15915494);
                    auVar82._4_4_ = (int)(auVar81._4_4_ + fVar74 * 0.15915494);
                    auVar82._8_4_ = (int)(auVar81._8_4_ + fVar90 * 0.15915494);
                    auVar82._12_4_ = (int)(auVar81._12_4_ + 0.0);
                    auVar77._0_4_ = (int)(auVar76._0_4_ + fVar92 * 0.15915494);
                    auVar77._4_4_ = (int)(auVar76._4_4_ + fVar106 * 0.15915494);
                    auVar77._8_4_ = (int)(auVar76._8_4_ + fVar111 * 0.15915494);
                    auVar77._12_4_ = (int)(auVar76._12_4_ + 0.25);
                    auVar107 = NEON_scvtf(auVar82,4);
                    fVar93 = fVar70 - auVar107._0_4_ * 6.2831855;
                    fVar98 = fVar74 - auVar107._4_4_ * 6.2831855;
                    fVar99 = fVar90 - auVar107._8_4_ * 6.2831855;
                    fVar100 = 0.0 - auVar107._12_4_ * 6.2831855;
                    auVar107 = NEON_scvtf(auVar77,4);
                    fVar94 = fVar92 - auVar107._0_4_ * 6.2831855;
                    fVar109 = fVar106 - auVar107._4_4_ * 6.2831855;
                    fVar72 = fVar111 - auVar107._8_4_ * 6.2831855;
                    fVar73 = 1.5707964 - auVar107._12_4_ * 6.2831855;
                    fVar93 = (float)((uint)fVar93 ^
                                    ((uint)fVar93 ^ (uint)(-3.1415927 - fVar93)) &
                                    -(uint)(fVar93 < -1.5707964));
                    fVar98 = (float)((uint)fVar98 ^
                                    ((uint)fVar98 ^ (uint)(-3.1415927 - fVar98)) &
                                    -(uint)(fVar98 < -1.5707964));
                    fVar99 = (float)((uint)fVar99 ^
                                    ((uint)fVar99 ^ (uint)(-3.1415927 - fVar99)) &
                                    -(uint)(fVar99 < -1.5707964));
                    fVar100 = (float)((uint)fVar100 ^
                                     ((uint)fVar100 ^ (uint)(-3.1415927 - fVar100)) &
                                     -(uint)(fVar100 < -1.5707964));
                    fVar94 = (float)((uint)fVar94 ^
                                    ((uint)fVar94 ^ (uint)(-3.1415927 - fVar94)) &
                                    -(uint)(fVar94 < -1.5707964));
                    fVar109 = (float)((uint)fVar109 ^
                                     ((uint)fVar109 ^ (uint)(-3.1415927 - fVar109)) &
                                     -(uint)(fVar109 < -1.5707964));
                    fVar72 = (float)((uint)fVar72 ^
                                    ((uint)fVar72 ^ (uint)(-3.1415927 - fVar72)) &
                                    -(uint)(fVar72 < -1.5707964));
                    fVar73 = (float)((uint)fVar73 ^
                                    ((uint)fVar73 ^ (uint)(-3.1415927 - fVar73)) &
                                    -(uint)(fVar73 < -1.5707964));
                    fVar93 = (float)((uint)fVar93 ^
                                    ((uint)fVar93 ^ (uint)(3.1415927 - fVar93)) &
                                    -(uint)(1.5707964 < fVar93));
                    fVar98 = (float)((uint)fVar98 ^
                                    ((uint)fVar98 ^ (uint)(3.1415927 - fVar98)) &
                                    -(uint)(1.5707964 < fVar98));
                    fVar99 = (float)((uint)fVar99 ^
                                    ((uint)fVar99 ^ (uint)(3.1415927 - fVar99)) &
                                    -(uint)(1.5707964 < fVar99));
                    fVar100 = (float)((uint)fVar100 ^
                                     ((uint)fVar100 ^ (uint)(3.1415927 - fVar100)) &
                                     -(uint)(1.5707964 < fVar100));
                    fVar113 = fVar93 * fVar93;
                    fVar114 = fVar98 * fVar98;
                    fVar115 = fVar99 * fVar99;
                    fVar116 = fVar100 * fVar100;
                    fVar94 = (float)((uint)fVar94 ^
                                    ((uint)fVar94 ^ (uint)(3.1415927 - fVar94)) &
                                    -(uint)(1.5707964 < fVar94));
                    fVar109 = (float)((uint)fVar109 ^
                                     ((uint)fVar109 ^ (uint)(3.1415927 - fVar109)) &
                                     -(uint)(1.5707964 < fVar109));
                    fVar72 = (float)((uint)fVar72 ^
                                    ((uint)fVar72 ^ (uint)(3.1415927 - fVar72)) &
                                    -(uint)(1.5707964 < fVar72));
                    fVar73 = (float)((uint)fVar73 ^
                                    ((uint)fVar73 ^ (uint)(3.1415927 - fVar73)) &
                                    -(uint)(1.5707964 < fVar73));
                    fVar105 = fVar94 * fVar94;
                    fVar108 = fVar109 * fVar109;
                    fVar110 = fVar72 * fVar72;
                    fVar112 = fVar73 * fVar73;
                    iVar63 = -(uint)(ABS(fVar70) == INFINITY);
                    iVar67 = -(uint)(ABS(fVar74) == INFINITY);
                    iVar68 = -(uint)(ABS(fVar90) == INFINITY);
                    iVar79 = -(uint)(ABS(fVar92) == INFINITY);
                    iVar89 = -(uint)(ABS(fVar106) == INFINITY);
                    iVar91 = -(uint)(ABS(fVar111) == INFINITY);
                    auVar66._8_4_ = 0x7fc00000;
                    auVar66._0_8_ = 0x7fc000007fc00000;
                    auVar66._12_4_ = 0x7fc00000;
                    auVar83[0] = ~(byte)iVar79;
                    auVar83[1] = ~(byte)((uint)iVar79 >> 8);
                    auVar83[2] = ~(byte)((uint)iVar79 >> 0x10);
                    auVar83[3] = ~(byte)((uint)iVar79 >> 0x18);
                    auVar83[4] = ~(byte)iVar89;
                    auVar83[5] = ~(byte)((uint)iVar89 >> 8);
                    auVar83[6] = ~(byte)((uint)iVar89 >> 0x10);
                    auVar83[7] = ~(byte)((uint)iVar89 >> 0x18);
                    auVar83[8] = ~(byte)iVar91;
                    auVar83[9] = ~(byte)((uint)iVar91 >> 8);
                    auVar83[10] = ~(byte)((uint)iVar91 >> 0x10);
                    auVar83[0xb] = ~(byte)((uint)iVar91 >> 0x18);
                    auVar83[0xc] = 0xff;
                    auVar83[0xd] = 0xff;
                    auVar83[0xe] = 0xff;
                    auVar83[0xf] = 0xff;
                    auVar71._0_4_ =
                         fVar94 * (local_1c0 +
                                  fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * 
                                                  -2.5052108e-08 + 2.7557319e-06) + -0.0001984127) +
                                                  0.008333334) + -0.16666667));
                    auVar71._4_4_ =
                         fVar109 * (fStack_1bc +
                                   fVar108 * (fVar108 * (fVar108 * (fVar108 * (fVar108 * 
                                                  -2.5052108e-08 + 2.7557319e-06) + -0.0001984127) +
                                                  0.008333334) + -0.16666667));
                    auVar71._8_4_ =
                         fVar72 * (fStack_1b8 +
                                  fVar110 * (fVar110 * (fVar110 * (fVar110 * (fVar110 * 
                                                  -2.5052108e-08 + 2.7557319e-06) + -0.0001984127) +
                                                  0.008333334) + -0.16666667));
                    auVar71._12_4_ =
                         fVar73 * (fStack_1b4 +
                                  fVar112 * (fVar112 * (fVar112 * (fVar112 * (fVar112 * 
                                                  -2.5052108e-08 + 2.7557319e-06) + -0.0001984127) +
                                                  0.008333334) + -0.16666667));
                    auVar65[0] = ~(byte)iVar63;
                    auVar65[1] = ~(byte)((uint)iVar63 >> 8);
                    auVar65[2] = ~(byte)((uint)iVar63 >> 0x10);
                    auVar65[3] = ~(byte)((uint)iVar63 >> 0x18);
                    auVar65[4] = ~(byte)iVar67;
                    auVar65[5] = ~(byte)((uint)iVar67 >> 8);
                    auVar65[6] = ~(byte)((uint)iVar67 >> 0x10);
                    auVar65[7] = ~(byte)((uint)iVar67 >> 0x18);
                    auVar65[8] = ~(byte)iVar68;
                    auVar65[9] = ~(byte)((uint)iVar68 >> 8);
                    auVar65[10] = ~(byte)((uint)iVar68 >> 0x10);
                    auVar65[0xb] = ~(byte)((uint)iVar68 >> 0x18);
                    auVar65[0xc] = 0xff;
                    auVar65[0xd] = 0xff;
                    auVar65[0xe] = 0xff;
                    auVar65[0xf] = 0xff;
                    auVar78._0_4_ =
                         fVar93 * (local_1c0 +
                                  fVar113 * (fVar113 * (fVar113 * (fVar113 * (fVar113 * 
                                                  -2.5052108e-08 + 2.7557319e-06) + -0.0001984127) +
                                                  0.008333334) + -0.16666667));
                    auVar78._4_4_ =
                         fVar98 * (fStack_1bc +
                                  fVar114 * (fVar114 * (fVar114 * (fVar114 * (fVar114 * 
                                                  -2.5052108e-08 + 2.7557319e-06) + -0.0001984127) +
                                                  0.008333334) + -0.16666667));
                    auVar78._8_4_ =
                         fVar99 * (fStack_1b8 +
                                  fVar115 * (fVar115 * (fVar115 * (fVar115 * (fVar115 * 
                                                  -2.5052108e-08 + 2.7557319e-06) + -0.0001984127) +
                                                  0.008333334) + -0.16666667));
                    auVar78._12_4_ =
                         fVar100 * (fStack_1b4 +
                                   fVar116 * (fVar116 * (fVar116 * (fVar116 * (fVar116 * 
                                                  -2.5052108e-08 + 2.7557319e-06) + -0.0001984127) +
                                                  0.008333334) + -0.16666667));
                    auVar71 = auVar71 ^ (auVar71 ^ auVar66) & ~auVar83;
                    auVar84[0] = ~(byte)iVar24;
                    auVar84[1] = ~(byte)((uint)iVar24 >> 8);
                    auVar84[2] = ~(byte)((uint)iVar24 >> 0x10);
                    auVar84[3] = ~(byte)((uint)iVar24 >> 0x18);
                    auVar84[4] = ~(byte)iVar15;
                    auVar84[5] = ~(byte)((uint)iVar15 >> 8);
                    auVar84[6] = ~(byte)((uint)iVar15 >> 0x10);
                    auVar84[7] = ~(byte)((uint)iVar15 >> 0x18);
                    auVar84[8] = ~(byte)iVar16;
                    auVar84[9] = ~(byte)((uint)iVar16 >> 8);
                    auVar84[10] = ~(byte)((uint)iVar16 >> 0x10);
                    auVar84[0xb] = ~(byte)((uint)iVar16 >> 0x18);
                    auVar84._12_4_ = 0;
                    auVar71 = auVar71 ^ (auVar71 ^ auVar64) & ~auVar84;
                    auVar71 = auVar71 ^ (auVar71 ^ auVar66) & ~auVar65;
                    fVar70 = auVar71._4_4_;
                    auVar85._4_4_ = fVar70;
                    auVar85._0_4_ = fVar70;
                    auVar85._8_4_ = fVar70;
                    auVar85._12_4_ = fVar70;
                    auVar66 = auVar66 ^ (auVar66 ^ auVar78) & auVar65;
                    fVar74 = auVar71._8_4_;
                    auVar96._4_4_ = fVar74;
                    auVar96._0_4_ = fVar74;
                    auVar96._8_4_ = fVar74;
                    auVar96._12_4_ = fVar74;
                    auVar86 = NEON_ext(auVar85,auVar71,0xc,1);
                    auVar97 = NEON_ext(auVar96,auVar71,8,1);
                    uVar101 = auVar66[4];
                    uVar102 = auVar66[5];
                    uVar103 = auVar66[6];
                    uVar104 = auVar66[7];
                    fVar90 = auVar66._8_4_;
                    auVar14[4] = uVar101;
                    auVar14._0_4_ = auVar66._4_4_;
                    auVar14[5] = uVar102;
                    auVar14[6] = uVar103;
                    auVar14[7] = uVar104;
                    auVar14[8] = uVar101;
                    auVar14[9] = uVar102;
                    auVar14[10] = uVar103;
                    auVar14[0xb] = uVar104;
                    auVar14[0xc] = uVar101;
                    auVar14[0xd] = uVar102;
                    auVar14[0xe] = uVar103;
                    auVar14[0xf] = uVar104;
                    auVar87 = NEON_ext(auVar14,auVar66,0xc,1);
                    auVar88._4_4_ = fVar90;
                    auVar88._0_4_ = fVar90;
                    auVar88._8_4_ = fVar90;
                    auVar88._12_4_ = fVar90;
                    auVar107 = NEON_ext(auVar88,auVar66,8,1);
                    pfVar11 = (float *)(lVar30 + (long)local_1c4 * 0x550 + 0x2d0 + lVar31);
                    pfVar11[2] = auVar97._8_4_ * fVar90 * auVar86._8_4_ +
                                 auVar107._8_4_ * auVar87._8_4_ * fVar74 * (float)uVar21;
                    pfVar11[3] = auVar97._12_4_ * auVar71._0_4_ * auVar86._12_4_ +
                                 auVar107._12_4_ *
                                 auVar87._12_4_ * auVar66._0_4_ * (float)((ulong)uVar21 >> 0x20);
                    *pfVar11 = auVar97._0_4_ * auVar66._0_4_ * auVar86._0_4_ +
                               auVar107._0_4_ * auVar87._0_4_ * auVar71._0_4_ * (float)uVar20;
                    pfVar11[1] = auVar97._4_4_ * auVar66._4_4_ * auVar86._4_4_ +
                                 auVar107._4_4_ *
                                 auVar87._4_4_ * fVar70 * (float)((ulong)uVar20 >> 0x20);
                    lVar31 = lVar31 + 0x10;
                    pauVar49 = pauVar49 + 1;
                  } while (lVar31 != 0x90);
                  if (*(char *)(lVar56 + 0x360) != '\0') {
                    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x2b) {
                      lVar56 = 0;
                    }
                    else {
                      uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x15];
                      lVar56 = 0;
                      if (uVar38 != 0) {
                        puVar4 = (uint *)((long)piVar2 + uVar38);
                        lVar56 = (long)puVar4 + (ulong)*puVar4;
                      }
                    }
                    uVar28 = *(undefined8 *)(lVar56 + 4);
                    lVar30 = lVar30 + lVar43 * 0x550;
                    *(ulong *)(lVar30 + 0x378) = (ulong)*(uint *)(lVar56 + 0xc);
                    *(undefined8 *)(lVar30 + 0x370) = uVar28;
                    uVar28 = *(undefined8 *)(lVar56 + 0x10);
                    *(ulong *)(lVar30 + 0x388) = (ulong)*(uint *)(lVar56 + 0x18);
                    *(undefined8 *)(lVar30 + 0x380) = uVar28;
                    uVar28 = *(undefined8 *)(lVar56 + 0x1c);
                    *(ulong *)(lVar30 + 0x398) = (ulong)*(uint *)(lVar56 + 0x24);
                    *(undefined8 *)(lVar30 + 0x390) = uVar28;
                    uVar28 = *(undefined8 *)(lVar56 + 0x28);
                    *(ulong *)(lVar30 + 0x3a8) = (ulong)*(uint *)(lVar56 + 0x30);
                    *(undefined8 *)(lVar30 + 0x3a0) = uVar28;
                    uVar28 = *(undefined8 *)(lVar56 + 0x34);
                    *(undefined4 *)(lVar30 + 0x3b8) = *(undefined4 *)(lVar56 + 0x3c);
                    *(undefined4 *)(lVar30 + 0x3bc) = 0;
                    *(undefined8 *)(lVar30 + 0x3b0) = uVar28;
                    uVar28 = *(undefined8 *)(lVar56 + 0x40);
                    *(ulong *)(lVar30 + 0x3c8) = (ulong)*(uint *)(lVar56 + 0x48);
                    *(undefined8 *)(lVar30 + 0x3c0) = uVar28;
                    uVar28 = *(undefined8 *)(lVar56 + 0x4c);
                    *(ulong *)(lVar30 + 0x3d8) = (ulong)*(uint *)(lVar56 + 0x54);
                    *(undefined8 *)(lVar30 + 0x3d0) = uVar28;
                    uVar28 = *(undefined8 *)(lVar56 + 0x58);
                    *(ulong *)(lVar30 + 1000) = (ulong)*(uint *)(lVar56 + 0x60);
                    *(undefined8 *)(lVar30 + 0x3e0) = uVar28;
                    uVar28 = *(undefined8 *)(lVar56 + 100);
                    *(ulong *)(lVar30 + 0x3f8) = (ulong)*(uint *)(lVar56 + 0x6c);
                    *(undefined8 *)(lVar30 + 0x3f0) = uVar28;
                  }
                }
              }
            }
          }
          uVar62 = 0;
          if (0x2c < *(ushort *)((long)piVar2 - (long)*piVar2)) {
            uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x16];
            uVar62 = 0;
            if (uVar38 != 0) {
              uVar62 = *(undefined4 *)((long)piVar2 + uVar38);
            }
          }
          *(undefined4 *)(lVar25 + uVar37 * 0x550 + 0x4e4) = uVar62;
          uVar62 = 0;
          if (0x30 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
            uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x18];
            uVar62 = 0;
            if (uVar38 != 0) {
              uVar62 = *(undefined4 *)((long)piVar2 + uVar38);
            }
          }
          *(undefined4 *)(lVar25 + uVar37 * 0x550 + 0x414) = uVar62;
          uVar62 = 0;
          if (0x32 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
            uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x19];
            uVar62 = 0;
            if (uVar38 != 0) {
              uVar62 = *(undefined4 *)((long)piVar2 + uVar38);
            }
          }
          *(undefined4 *)(lVar25 + uVar37 * 0x550 + 0x41c) = uVar62;
          uVar62 = 0;
          if (0x34 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
            uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1a];
            uVar62 = 0;
            if (uVar38 != 0) {
              uVar62 = *(undefined4 *)((long)piVar2 + uVar38);
            }
          }
          *(undefined4 *)(lVar25 + uVar37 * 0x550 + 0x428) = uVar62;
          uVar62 = 0;
          if (0x36 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
            uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1b];
            uVar62 = 0;
            if (uVar38 != 0) {
              uVar62 = *(undefined4 *)((long)piVar2 + uVar38);
            }
          }
          *(undefined4 *)(lVar25 + uVar37 * 0x550 + 0x42c) = uVar62;
          if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x39) {
            uVar62 = 0;
          }
          else {
            uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1c];
            uVar62 = 0;
            if (uVar38 != 0) {
              uVar62 = *(undefined4 *)((long)piVar2 + uVar38);
            }
          }
          *(undefined4 *)(lVar25 + uVar37 * 0x550 + 0x4ec) = uVar62;
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x3b) ||
             (uVar38 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1d], uVar38 == 0)) {
            lVar25 = lVar25 + uVar37 * 0x550;
            *(undefined8 *)(lVar25 + 0x4f8) = *(undefined8 *)(lVar25 + 0x4f0);
          }
          else {
            uVar57 = (ulong)*(uint *)((long)piVar2 + uVar38);
            puVar4 = (uint *)((long)((long)piVar2 + uVar38) + uVar57);
            lVar25 = lVar25 + uVar37 * 0x550;
            uVar33 = *puVar4;
            uVar47 = (ulong)(int)uVar33;
            plVar26 = (long *)(lVar25 + 0x4f0);
            uVar41 = *(long *)(lVar25 + 0x4f8) - *(long *)(lVar25 + 0x4f0) >> 2;
            if (uVar41 < uVar47) {
              FUN_0100a984(plVar26,uVar47 - uVar41);
            }
            else if (uVar47 < uVar41) {
              *(ulong *)(lVar25 + 0x4f8) = *(long *)(lVar25 + 0x4f0) + uVar47 * 4;
            }
            if ((0 < (int)uVar33) && (*(uint *)*plVar26 = puVar4[1], uVar33 != 1)) {
              lVar25 = 0;
              do {
                lVar43 = lVar25 * 4;
                lVar30 = lVar25 * 4;
                lVar25 = lVar25 + 1;
                *(undefined4 *)(*plVar26 + lVar43 + 4) =
                     *(undefined4 *)((long)local_1d8 + lVar30 + uVar46 + uVar57 + uVar38);
              } while ((ulong)uVar33 - 1 != lVar25);
            }
          }
          if (local_b0 != (uint *)0x0) {
            (**(code **)(*(long *)local_b0 + 0x20))();
          }
          local_1c4 = local_1c4 + 1;
          local_1d0 = local_1d0 + 1;
          local_1e0 = local_1e0 + 1;
          local_c8 = local_c8 + 4;
          local_c0 = local_c0 + 1;
          local_1d8 = local_1d8 + 1;
        } while (local_c0 != puVar3);
      }
      lVar25 = *(long *)(param_1 + 0x2a0);
      if (0 < (int)((ulong)(*(long *)(param_1 + 0x2a8) - lVar25) >> 4) * -0x3030303) {
        lVar30 = 0;
        lVar43 = 0x4e4;
        do {
          fVar70 = 0.0;
          if (*(int *)(param_1 + 0x70) == 1) {
            lVar56 = lVar25 + lVar43;
            fVar70 = 0.0;
            if (*(char *)(lVar56 + -0x184) != '\0') {
              fVar74 = *(float *)(lVar25 + lVar43);
              fVar70 = 0.0;
              if (0.0 < fVar74) {
                fVar70 = *(float *)(lVar56 + -0x144) - *(float *)(lVar56 + -0x124);
                fVar90 = *(float *)(lVar56 + -0x140) - *(float *)(lVar56 + -0x120);
                fVar92 = *(float *)(lVar56 + -0x13c) - *(float *)(lVar56 + -0x11c);
                fVar94 = (*(float *)(lVar56 + -0x4a4) + *(float *)(lVar56 + -0x4a0)) / fVar74;
                fVar70 = fVar70 * fVar70;
                fVar90 = fVar90 * fVar90;
                fVar92 = fVar92 * fVar92;
                fVar106 = *(float *)(lVar56 + -0x164) - (float)*(undefined8 *)(lVar56 + -0x104);
                fVar109 = *(float *)(lVar56 + -0x160) -
                          (float)((ulong)*(undefined8 *)(lVar56 + -0x104) >> 0x20);
                fVar111 = *(float *)(lVar56 + -0x15c) - (float)*(undefined8 *)(lVar56 + -0xfc);
                auVar64._0_4_ = fVar70 + fVar90;
                auVar64._4_4_ = fVar92 + 0.0;
                auVar64._8_4_ = fVar70 + fVar90;
                auVar64._12_4_ = fVar92 + 0.0;
                auVar64 = NEON_ext(auVar64,auVar64,4,1);
                fVar106 = fVar106 * fVar106;
                fVar109 = fVar109 * fVar109;
                fVar111 = fVar111 * fVar111;
                auVar61._0_4_ = fVar106 + fVar109;
                auVar61._4_4_ = fVar111 + 0.0;
                auVar61._8_4_ = fVar106 + fVar109;
                auVar61._12_4_ = fVar111 + 0.0;
                auVar107 = NEON_ext(auVar61,auVar61,4,1);
                fVar74 = (*(float *)(lVar56 + -0x49c) + *(float *)(lVar56 + -0x498)) / fVar74;
                fVar70 = SQRT(auVar64._0_4_ + auVar64._4_4_) / fVar94;
                if (fVar94 <= 0.0) {
                  fVar70 = 0.0;
                }
                fVar90 = SQRT(auVar107._0_4_ + auVar107._4_4_) / fVar74;
                if (fVar74 <= 0.0) {
                  fVar90 = 0.0;
                }
                fVar70 = (fVar70 + fVar90) * 0.5;
              }
            }
          }
          lVar25 = lVar25 + lVar43;
          lVar43 = lVar43 + 0x550;
          *(float *)(lVar25 + -4) = fVar70;
          lVar25 = *(long *)(param_1 + 0x2a0);
          lVar30 = lVar30 + 1;
        } while (lVar30 < (int)((ulong)(*(long *)(param_1 + 0x2a8) - lVar25) >> 4) * -0x3030303);
      }
      if (local_208 != (long *)0x0) {
        (**(code **)(*local_208 + 0x20))();
      }
    }
    do {
      lVar25 = *plVar1;
      iVar24 = (int)lVar25 + -1;
      cVar9 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar23) {
        *(int *)plVar1 = iVar24;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar24 == 0) {
      (**(code **)(*plVar35 + 0x10))();
    }
    else if ((int)lVar25 == 0) {
LAB_029ceed4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_029cda7c:
  if (-1 < (short)plVar48[6]) {
    uVar34 = (uint)*(ushort *)((long)plVar26 + 10) + (int)(short)plVar48[6];
    uVar33 = uVar34 & 0xffff;
    if ((short)uVar34 < 0) {
      uVar33 = 0xffffffff;
    }
    goto LAB_029cda90;
  }
LAB_029cda84:
  plVar26 = plVar26 + 2;
  if (plVar26 == *(long **)(lVar25 + 0x38)) goto LAB_029cda90;
  goto LAB_029cd988;
LAB_029cdecc:
  if (-1 < (short)plVar48[6]) {
    uVar33 = (uint)*(ushort *)((long)plVar26 + 10) + (int)(short)plVar48[6];
    uVar34 = uVar33 & 0xffff;
    if ((short)uVar33 < 0) {
      uVar34 = 0xffffffff;
    }
    goto LAB_029cdee0;
  }
LAB_029cded4:
  plVar26 = plVar26 + 2;
  goto LAB_029cddcc;
}


