/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03506548; name: FUN_03506548
 */


/* WARNING: Removing unreachable block (ram,0x035079d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03506548(long param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 (*pauVar3) [12];
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  long **pplVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  char cVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 (*pauVar22) [12];
  undefined *puVar23;
  undefined4 uVar24;
  long *plVar25;
  long lVar26;
  float *pfVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 uVar30;
  int *piVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  ulong uVar36;
  undefined1 (*pauVar37) [12];
  uint uVar38;
  long lVar39;
  undefined8 uVar40;
  float *pfVar42;
  float *pfVar41;
  ulong uVar43;
  int *piVar44;
  int *piVar45;
  undefined1 uVar46;
  long *plVar47;
  uint uVar48;
  long lVar49;
  long *plVar50;
  char *pcVar51;
  int iVar52;
  long lVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar62;
  float fVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar64;
  float fVar65;
  float fVar67;
  float fVar68;
  undefined1 auVar66 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar91 [16];
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined8 uVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar132;
  float fVar135;
  float fVar136;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  float fVar139;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  long *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined4 local_88;
  int local_84;
  
  if ((*(byte *)(param_1 + 0x194) & 3) != 1) {
    uVar24 = 0xf;
    if ((*(byte *)(param_1 + 0x194) & 1) != 0) {
      uVar24 = 0;
    }
    FUN_035054a0(param_1,uVar24);
  }
  puVar23 = PTR_DAT_047e7210;
  if ((*(long *)(param_1 + 0x178) == 0) ||
     (plVar25 = *(long **)(*(long *)(param_1 + 0x178) + 0x60), plVar25 == (long *)0x0)) {
    bVar12 = false;
  }
  else {
    if (*(int *)(param_1 + 0x168) == 0) {
      do {
        lVar33 = *(long *)puVar23;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar23,0x10);
        if (bVar12) {
          *(ulong *)puVar23 = lVar33 + 1U;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      lVar33 = FUN_03502c98(param_1,lVar33 + 1U & 0xffffffffffffff,*(undefined4 *)(param_1 + 0x158))
      ;
      if (lVar33 == 0) {
        return;
      }
      plVar25 = *(long **)(*(long *)(param_1 + 0x178) + 0x60);
    }
    (**(code **)(*plVar25 + 0x58))(plVar25,*(undefined8 *)(param_1 + 0x160));
    bVar12 = true;
  }
  plVar25 = (long *)(param_1 + 0x160);
  local_a0 = plVar25;
  if (*(int *)(param_1 + 0x198) == 1) {
    FUN_0350834c(param_1 + 0x98,&local_a0,param_1);
    FUN_0350834c(param_1 + 200,&local_a0,param_1);
    FUN_0350834c(param_1 + 0xf8,&local_a0,param_1);
    FUN_0350834c(param_1 + 0x128,&local_a0,param_1);
  }
  if (*(short *)(param_1 + 400) == 0) {
    if ((*(char *)(param_1 + 0x14f) == '\0') && (*(short *)(param_1 + 0x154) == 0)) {
      lVar33 = 3;
    }
    else if ((*(char *)(param_1 + 0x11f) == '\0') && (*(short *)(param_1 + 0x124) == 0)) {
      lVar33 = 2;
    }
    else if ((*(char *)(param_1 + 0xef) == '\0') && (*(short *)(param_1 + 0xf4) == 0)) {
      lVar33 = 1;
    }
    else {
      if ((*(char *)(param_1 + 0xbf) != '\0') || (*(short *)(param_1 + 0xc4) != 0))
      goto LAB_035066c4;
      lVar33 = 0;
    }
    plVar25 = (long *)(param_1 + lVar33 * 0x30 + 0xa8);
  }
LAB_035066c4:
  if (*(int *)(param_1 + 0x198) == 1) {
    *(short *)(param_1 + 0x192) = *(short *)(param_1 + 400);
  }
  lVar33 = *(long *)(param_1 + 8);
  if (lVar33 != 0) {
    if ((int)plVar25[1] != 0) {
      lVar49 = *plVar25;
      do {
        uVar32 = *(uint *)(lVar33 + 400);
        if (uVar32 != 0) {
          lVar53 = *(long *)(lVar49 + 0x18);
          uVar35 = *(uint *)(lVar53 + 0x70);
          if ((!CARRY4(uVar32,uVar35)) && (*(uint *)(lVar53 + 0x74) < uVar32 + uVar35)) {
            uVar38 = *(uint *)(lVar53 + 0x74) + uVar32;
            lVar26 = (**(code **)(**(long **)(lVar53 + 0x60) + 0x28))
                               (*(long **)(lVar53 + 0x60),*(undefined8 *)(lVar53 + 0x68),
                                (ulong)uVar38 * 0x18,
                                "../../../../include\\AK/SoundEngine/Common/IAkPluginMemAlloc.h",
                                0xce);
            if (lVar26 == 0) goto LAB_035067c0;
            *(long *)(lVar53 + 0x68) = lVar26;
            *(uint *)(lVar53 + 0x74) = uVar38;
          }
          *(uint *)(lVar53 + 0x70) = uVar32 + uVar35;
          if (*(int *)(lVar33 + 400) != 0) {
            plVar47 = *(long **)(lVar33 + 0x188);
            do {
              uVar24 = (**(code **)(*plVar47 + 0x10))(plVar47);
              *(undefined4 *)(*(long *)(lVar53 + 0x68) + (ulong)uVar35 * 0x18) = uVar24;
              plVar50 = plVar47 + 1;
              plVar47 = plVar47 + 0xc;
              *(long *)(*(long *)(lVar53 + 0x68) + (ulong)uVar35 * 0x18 + 8) = *plVar50;
              uVar36 = (ulong)uVar35;
              uVar35 = uVar35 + 1;
              *(undefined4 *)(*(long *)(lVar53 + 0x68) + uVar36 * 0x18 + 0x10) = 0;
            } while (plVar47 !=
                     (long *)(*(long *)(lVar33 + 0x188) + (ulong)*(uint *)(lVar33 + 400) * 0x60));
          }
        }
LAB_035067c0:
        lVar49 = lVar49 + 0x30;
      } while (lVar49 != *plVar25 + (ulong)*(uint *)(plVar25 + 1) * 0x30);
    }
    for (lVar49 = *(long *)(param_1 + 0x28); lVar49 != 0; lVar49 = *(long *)(lVar49 + 0x20)) {
      if (*(int *)(lVar49 + 0x188) == 0) {
        uVar36 = 0;
      }
      else {
        lVar53 = *(long *)(lVar49 + 0x180);
        do {
          *(undefined4 *)(lVar53 + 0x14c) = 0;
          uVar36 = (ulong)*(uint *)(lVar49 + 0x188);
          lVar53 = lVar53 + 0x158;
        } while (lVar53 != *(long *)(lVar49 + 0x180) + uVar36 * 0x158);
      }
      if ((*(uint *)(*(long *)(lVar49 + 0x198) + 0x158) & 0xf00) == 0x300) {
        uVar29 = (ulong)*(uint *)(lVar33 + 0x150);
        if ((*(uint *)(lVar33 + 0x150) < 2) || (*(int *)(lVar49 + 0x1d4) == 3)) {
          if (*(int *)(*(long *)(param_1 + 8) + 0x150) == 0) goto LAB_0350686c;
          iVar52 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x148) + 0x5c);
          goto LAB_03506870;
        }
        uVar32 = *(uint *)(plVar25 + 1);
        if (uVar32 != 0) {
          lVar53 = *plVar25;
          lVar34 = *(long *)(lVar49 + 0x1b0);
          uVar35 = (uint)uVar36;
          lVar26 = lVar53;
          do {
            if (uVar35 != 0) {
              lVar39 = uVar36 * 0x158;
              plVar47 = *(long **)(lVar49 + 0x180);
              do {
                if (**(long **)(lVar53 + 0x18) == *plVar47) {
                  uVar35 = *(uint *)(plVar47 + 0x24) >> 8 & 0xf;
                  if ((uVar35 < 4) &&
                     ((uVar46 = 0, (*(uint *)(plVar47 + 0x24) & 0xff) != 0 || (uVar35 == 3))))
                  goto LAB_03506a7c;
                }
                plVar47 = plVar47 + 0x2b;
                lVar39 = lVar39 + -0x158;
              } while (lVar39 != 0);
            }
            uVar46 = 1;
LAB_03506a7c:
            if ((int)uVar29 != 0) {
              uVar36 = 0;
              do {
                if (lVar34 == *(long *)(*(long *)(lVar33 + 0x148) + uVar36 * 0x78 + 0x60)) {
                  plVar47 = *(long **)(lVar49 + 0x180);
                  uVar32 = *(uint *)(lVar49 + 0x188);
                  plVar50 = plVar47 + (ulong)uVar32 * 0x2b;
                  if (uVar32 != 0) {
                    lVar26 = (ulong)uVar32 * 0x158;
                    do {
                      if ((*plVar47 == **(long **)(lVar53 + 0x18)) &&
                         ((int)plVar47[2] ==
                          *(int *)(*(long *)(lVar33 + 0x148) + uVar36 * 0x78 + 0x5c)))
                      goto LAB_03506ae4;
                      plVar47 = plVar47 + 0x2b;
                      lVar26 = lVar26 + -0x158;
                    } while (lVar26 != 0);
                    plVar47 = plVar50;
                  }
LAB_03506ae4:
                  if (plVar50 == plVar47) {
                    plVar47 = (long *)FUN_03489c58(lVar49);
                  }
                  if (plVar47 != (long *)0x0) {
                    *(undefined4 *)((long)plVar47 + 0x14c) = *(undefined4 *)(lVar53 + 8);
                    *(undefined1 *)(plVar47 + 0x2a) = 0;
                    plVar47[3] = lVar53;
                    lVar26 = *(long *)(lVar53 + 0x18);
                    memcpy(plVar47 + 5,(void *)(lVar26 + 8),0x50);
                    plVar47[0xf] = *(long *)(lVar26 + 0x58);
                    *(undefined4 *)(plVar47 + 0x12) = 0;
                    uVar32 = *(uint *)(lVar26 + 0x70);
                    if (*(uint *)((long)plVar47 + 0x94) < uVar32) {
                      uVar35 = *(uint *)((long)plVar47 + 0x94) + uVar32;
                      lVar39 = (**(code **)(*(long *)plVar47[0x10] + 0x28))
                                         ((long *)plVar47[0x10],plVar47[0x11],(ulong)uVar35 * 0x18,
                                          "../../../../include\\AK/SoundEngine/Common/IAkPluginMemAlloc.h"
                                          ,0xce);
                      if (lVar39 != 0) {
                        plVar47[0x11] = lVar39;
                        *(uint *)((long)plVar47 + 0x94) = uVar35;
                        goto LAB_03506b78;
                      }
                    }
                    else {
LAB_03506b78:
                      *(uint *)(plVar47 + 0x12) = uVar32;
                      if (*(int *)(lVar26 + 0x70) != 0) {
                        lVar39 = 0;
                        uVar29 = 0;
                        do {
                          puVar4 = (undefined8 *)(*(long *)(lVar26 + 0x68) + lVar39);
                          uVar30 = puVar4[1];
                          uVar40 = puVar4[2];
                          puVar28 = (undefined8 *)(plVar47[0x11] + lVar39);
                          lVar39 = lVar39 + 0x18;
                          *puVar28 = *puVar4;
                          puVar28[1] = uVar30;
                          puVar28[2] = uVar40;
                          uVar29 = uVar29 + 1;
                        } while (uVar29 < *(uint *)(lVar26 + 0x70));
                      }
                    }
                    *(undefined4 *)(plVar47 + 0x13) = *(undefined4 *)(lVar26 + 0x78);
                    lVar39 = *(long *)(lVar26 + 0x88);
                    if ((plVar47[0x15] != 0) && ((char)plVar47[0x16] != '\0')) {
                      (**(code **)(*(long *)plVar47[0x14] + 0x18))();
                      *(undefined1 *)(plVar47 + 0x16) = 0;
                    }
                    plVar47[0x15] = lVar39;
                    plVar47[0x14] = *(long *)(lVar26 + 0x80);
                    *(undefined1 *)(plVar47 + 0x29) = uVar46;
                  }
                }
                uVar29 = (ulong)*(uint *)(lVar33 + 0x150);
                uVar36 = uVar36 + 1;
              } while (uVar36 < uVar29);
              lVar26 = *plVar25;
              uVar32 = *(uint *)(plVar25 + 1);
            }
            lVar53 = lVar53 + 0x30;
            if (lVar53 == lVar26 + (ulong)uVar32 * 0x30) break;
            uVar35 = *(uint *)(lVar49 + 0x188);
            uVar36 = (ulong)uVar35;
          } while( true );
        }
      }
      else {
LAB_0350686c:
        iVar52 = 0;
LAB_03506870:
        if ((int)plVar25[1] != 0) {
          lVar53 = *plVar25;
          do {
            plVar47 = *(long **)(lVar49 + 0x180);
            plVar50 = plVar47 + uVar36 * 0x2b;
            if ((int)uVar36 != 0) {
              lVar26 = uVar36 * 0x158;
              do {
                if ((*plVar47 == **(long **)(lVar53 + 0x18)) && ((int)plVar47[2] == iVar52))
                goto LAB_035068c0;
                plVar47 = plVar47 + 0x2b;
                lVar26 = lVar26 + -0x158;
              } while (lVar26 != 0);
              plVar47 = plVar50;
            }
LAB_035068c0:
            if (plVar50 == plVar47) {
              plVar47 = (long *)FUN_03489c58(lVar49,**(long **)(lVar53 + 0x18),iVar52);
            }
            if (plVar47 != (long *)0x0) {
              *(undefined4 *)((long)plVar47 + 0x14c) = *(undefined4 *)(lVar53 + 8);
              *(undefined1 *)(plVar47 + 0x2a) = 0;
              plVar47[3] = lVar53;
              lVar26 = *(long *)(lVar53 + 0x18);
              memcpy(plVar47 + 5,(void *)(lVar26 + 8),0x50);
              plVar47[0xf] = *(long *)(lVar26 + 0x58);
              *(undefined4 *)(plVar47 + 0x12) = 0;
              uVar32 = *(uint *)(lVar26 + 0x70);
              if (*(uint *)((long)plVar47 + 0x94) < uVar32) {
                uVar35 = *(uint *)((long)plVar47 + 0x94) + uVar32;
                lVar34 = (**(code **)(*(long *)plVar47[0x10] + 0x28))
                                   ((long *)plVar47[0x10],plVar47[0x11],(ulong)uVar35 * 0x18,
                                    "../../../../include\\AK/SoundEngine/Common/IAkPluginMemAlloc.h"
                                    ,0xce);
                if (lVar34 != 0) {
                  plVar47[0x11] = lVar34;
                  *(uint *)((long)plVar47 + 0x94) = uVar35;
                  goto LAB_03506958;
                }
              }
              else {
LAB_03506958:
                *(uint *)(plVar47 + 0x12) = uVar32;
                if (*(int *)(lVar26 + 0x70) != 0) {
                  lVar34 = 0;
                  uVar36 = 0;
                  do {
                    puVar4 = (undefined8 *)(*(long *)(lVar26 + 0x68) + lVar34);
                    uVar30 = puVar4[1];
                    uVar40 = puVar4[2];
                    puVar28 = (undefined8 *)(plVar47[0x11] + lVar34);
                    lVar34 = lVar34 + 0x18;
                    *puVar28 = *puVar4;
                    puVar28[1] = uVar30;
                    puVar28[2] = uVar40;
                    uVar36 = uVar36 + 1;
                  } while (uVar36 < *(uint *)(lVar26 + 0x70));
                }
              }
              *(undefined4 *)(plVar47 + 0x13) = *(undefined4 *)(lVar26 + 0x78);
              lVar34 = *(long *)(lVar26 + 0x88);
              if ((plVar47[0x15] != 0) && ((char)plVar47[0x16] != '\0')) {
                (**(code **)(*(long *)plVar47[0x14] + 0x18))();
                *(undefined1 *)(plVar47 + 0x16) = 0;
              }
              plVar47[0x15] = lVar34;
              plVar47[0x14] = *(long *)(lVar26 + 0x80);
              *(undefined1 *)(plVar47 + 0x29) = 1;
            }
            lVar53 = lVar53 + 0x30;
            if (lVar53 == *plVar25 + (ulong)*(uint *)(plVar25 + 1) * 0x30) break;
            uVar36 = (ulong)*(uint *)(lVar49 + 0x188);
          } while( true );
        }
      }
      uVar32 = *(uint *)(lVar49 + 0x188);
      plVar47 = (long *)PTR_PTR_047e71e0;
      while (uVar32 != 0) {
        lVar26 = *(long *)(lVar49 + 0x180);
        uVar32 = uVar32 - 1;
        uVar36 = (ulong)uVar32;
        lVar53 = lVar26 + uVar36 * 0x158;
        uVar35 = *(uint *)(lVar53 + 0x14c);
        uVar38 = uVar35 >> 8 & 0xf;
        if ((3 < uVar38) || ((uVar35 & 0xff) == 0 && uVar38 != 3)) {
          lVar34 = lVar26 + uVar36 * 0x158;
          if ((*(char *)(lVar34 + 0x150) == '\0') && (*(uint *)(plVar25 + 1) != 0)) {
            puVar2 = (undefined1 *)(lVar34 + 0x150);
            lVar34 = *plVar25;
            lVar39 = (ulong)*(uint *)(plVar25 + 1) * 0x30;
            while (*(long *)(lVar26 + uVar36 * 0x158) != **(long **)(lVar34 + 0x18)) {
              lVar34 = lVar34 + 0x30;
              lVar39 = lVar39 + -0x30;
              if (lVar39 == 0) goto LAB_03506e3c;
            }
            lVar39 = lVar26 + uVar36 * 0x158;
            *(undefined4 *)(lVar53 + 0x14c) = *(undefined4 *)(lVar34 + 8);
            *puVar2 = 0;
            *(long *)(lVar39 + 0x18) = lVar34;
            lVar53 = *(long *)(lVar34 + 0x18);
            memcpy((void *)(lVar39 + 0x28),(void *)(lVar53 + 8),0x50);
            uVar30 = *(undefined8 *)(lVar53 + 0x58);
            *(uint *)(lVar39 + 0x90) = 0;
            *(undefined8 *)(lVar39 + 0x78) = uVar30;
            uVar38 = *(uint *)(lVar53 + 0x70);
            uVar35 = *(uint *)(lVar39 + 0x94);
            if (uVar35 < uVar38) {
              uVar35 = uVar35 + uVar38;
              lVar34 = lVar26 + uVar36 * 0x158;
              plVar50 = (long *)(lVar34 + 0x88);
              plVar47 = *(long **)(lVar34 + 0x80);
              lVar34 = (**(code **)(*plVar47 + 0x28))
                                 (plVar47,*plVar50,(ulong)uVar35 * 0x18,
                                  "../../../../include\\AK/SoundEngine/Common/IAkPluginMemAlloc.h",
                                  0xce);
              if (lVar34 == 0) goto LAB_03506d84;
              *plVar50 = lVar34;
              *(uint *)(lVar39 + 0x94) = uVar35;
            }
            *(uint *)(lVar39 + 0x90) = uVar38;
            if (*(int *)(lVar53 + 0x70) != 0) {
              lVar34 = 0;
              uVar29 = 0;
              do {
                puVar4 = (undefined8 *)(*(long *)(lVar53 + 0x68) + lVar34);
                uVar30 = puVar4[1];
                uVar40 = puVar4[2];
                puVar28 = (undefined8 *)(*(long *)(lVar26 + uVar36 * 0x158 + 0x88) + lVar34);
                lVar34 = lVar34 + 0x18;
                *puVar28 = *puVar4;
                puVar28[1] = uVar30;
                puVar28[2] = uVar40;
                uVar29 = uVar29 + 1;
              } while (uVar29 < *(uint *)(lVar53 + 0x70));
            }
LAB_03506d84:
            lVar34 = lVar26 + uVar36 * 0x158;
            *(undefined4 *)(lVar34 + 0x98) = *(undefined4 *)(lVar53 + 0x78);
            lVar39 = *(long *)(lVar53 + 0x88);
            if ((*(long *)(lVar34 + 0xa8) != 0) &&
               (pcVar51 = (char *)(lVar26 + uVar36 * 0x158 + 0xb0), *pcVar51 != '\0')) {
              (**(code **)(**(long **)(lVar34 + 0xa0) + 0x18))();
              *pcVar51 = '\0';
            }
            *(long *)(lVar34 + 0xa8) = lVar39;
            *(undefined8 *)(lVar34 + 0xa0) = *(undefined8 *)(lVar53 + 0x80);
            *(undefined1 *)(lVar26 + uVar36 * 0x158 + 0x148) = 0;
            *puVar2 = 1;
            plVar47 = (long *)PTR_PTR_047e71e0;
          }
          else {
LAB_03506e3c:
            uVar29 = (ulong)*(uint *)(lVar49 + 0x188);
            if (1 < *(uint *)(lVar49 + 0x188)) {
              FUN_03489adc(lVar26 + uVar36 * 0x158,lVar26 + uVar29 * 0x158 + -0x158);
              uVar29 = (ulong)*(uint *)(lVar49 + 0x188);
              lVar26 = *(long *)(lVar49 + 0x180);
            }
            lVar26 = lVar26 + uVar29 * 0x158;
            if (*(long *)(lVar26 + -0x30) != 0) {
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
            }
            *(long *)(lVar26 + -0x30) = 0;
            *(undefined4 *)(lVar26 + -0x28) = 0;
            *(undefined8 *)(lVar26 + -0x20) = 0;
            *(undefined8 *)(lVar26 + -0x18) = 0;
            if (*(long *)(lVar26 + -0x98) != 0) {
              (**(code **)(*plVar47 + 0x18))(plVar47);
              *(undefined8 *)(lVar26 + -0x98) = 0;
              *(undefined4 *)(lVar26 + -0x90) = 0;
            }
            if (*(long *)(lVar26 + -0x88) != 0) {
              (**(code **)(*plVar47 + 0x18))(plVar47);
              *(undefined8 *)(lVar26 + -0x88) = 0;
              *(undefined4 *)(lVar26 + -0x80) = 0;
            }
            if (*(long *)(lVar26 + -0x78) != 0) {
              (**(code **)(*plVar47 + 0x18))(plVar47);
              *(undefined8 *)(lVar26 + -0x78) = 0;
              *(undefined4 *)(lVar26 + -0x70) = 0;
            }
            if (*(long *)(lVar26 + -0x68) != 0) {
              (**(code **)(*plVar47 + 0x18))(plVar47);
              *(undefined8 *)(lVar26 + -0x68) = 0;
              *(undefined4 *)(lVar26 + -0x60) = 0;
            }
            if (*(long *)(lVar26 + -0xd0) != 0) {
              *(undefined4 *)(lVar26 + -200) = 0;
              (**(code **)(**(long **)(lVar26 + -0xd8) + 0x18))();
              *(undefined8 *)(lVar26 + -0xd0) = 0;
              *(undefined4 *)(lVar26 + -0xc4) = 0;
            }
            if ((*(long *)(lVar26 + -0xb0) != 0) && (*(char *)(lVar26 + -0xa8) != '\0')) {
              (**(code **)(**(long **)(lVar26 + -0xb8) + 0x18))();
              *(undefined1 *)(lVar26 + -0xa8) = 0;
            }
            *(undefined8 *)(lVar26 + -0xb0) = 0;
            *(int *)(lVar49 + 0x188) = *(int *)(lVar49 + 0x188) + -1;
          }
        }
      }
    }
    local_a0 = (long *)((ulong)local_a0 & 0xffffffff00000000);
    pplVar7 = (long **)0x0;
    if ((*(byte *)(param_1 + 0x88) & 2) != 0) {
      pplVar7 = &local_a0;
    }
    FUN_034fec14(0x3f800000,param_1,lVar33,0,pplVar7);
    uVar24 = *(undefined4 *)(param_1 + 0x10);
    if ((*(byte *)(param_1 + 0x50) >> 1 & 1) != 0) {
      uVar24 = *(undefined4 *)(param_1 + 0x84);
    }
    *(undefined4 *)(param_1 + 0x80) = uVar24;
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x10);
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
  }
  if (bVar12) {
    plVar47 = *(long **)(*(long *)(param_1 + 0x178) + 0x60);
    (**(code **)(*plVar47 + 0x60))(plVar47,*plVar25);
  }
  plVar47 = (long *)*plVar25;
  if ((int)plVar25[1] != 0) {
    bVar8 = *(byte *)(param_1 + 0x88);
    bVar9 = *(byte *)(param_1 + 0x89);
    plVar50 = plVar47;
    do {
      *(uint *)(plVar50 + 4) = (byte)(bVar9 | bVar8 >> 2) & 0x1f;
      *(int *)((long)plVar50 + 0x24) = (int)plVar50[1];
      plVar47 = (long *)*plVar25;
      plVar50 = plVar50 + 6;
    } while (plVar50 != plVar47 + (ulong)*(uint *)(plVar25 + 1) * 6);
    if (*(uint *)(plVar25 + 1) != 0) {
      plVar50 = plVar47;
      do {
        fVar90 = *(float *)(param_1 + 0x84);
        bVar8 = *(byte *)(param_1 + 0x88);
        if (*(long *)(param_1 + 0x60) == 0) {
          iVar52 = 0;
        }
        else {
          iVar52 = *(int *)(*(long *)(param_1 + 0x60) + 0x18);
        }
        if (*(long *)(param_1 + 0x70) == 0) {
          uVar30 = 0xffffffffffffffff;
        }
        else {
          uVar30 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x78);
        }
        lVar33 = FUN_03507bc0(plVar50 + 4);
        if (lVar33 != 0) {
          uVar32 = *(uint *)(lVar33 + 0x4c);
          fVar55 = 0.0;
          if (*(short *)((long)plVar50 + 0x12) != 0) {
            fVar55 = *(float *)(plVar50[3] + 0x5c) * fVar90;
          }
          if ((uVar32 & 1) != 0) {
            uVar35 = (uint)*(byte *)(plVar50 + 1);
            if (fVar55 <= 0.0) {
              if (uVar35 != 0) {
                memset(*(void **)(lVar33 + 0x10),0,(ulong)*(byte *)(plVar50 + 1) << 2);
              }
            }
            else {
              uVar36 = 0;
              if (uVar35 < 2) {
                uVar35 = 1;
              }
              do {
                auVar60._8_4_ = 0xcf000000;
                auVar60._0_8_ = 0xcf000000cf000000;
                auVar60._12_4_ = 0xcf000000;
                auVar66._8_4_ = 0x4f000000;
                auVar66._0_8_ = 0x4f0000004f000000;
                auVar66._12_4_ = 0x4f000000;
                pauVar3 = (undefined1 (*) [12])(*plVar50 + uVar36 * *(ushort *)(plVar50 + 2) * 4);
                pauVar37 = pauVar3;
                do {
                  pauVar22 = pauVar37 + 1;
                  uVar24 = (undefined4)((ulong)*(undefined8 *)(*pauVar37 + 8) >> 0x20);
                  auVar142._12_4_ = uVar24;
                  auVar142._0_12_ = *pauVar37;
                  auVar66 = NEON_fmin(auVar66,auVar142,4);
                  auVar131._12_4_ = uVar24;
                  auVar131._0_12_ = *pauVar37;
                  auVar60 = NEON_fmax(auVar60,auVar131,4);
                  pauVar37 = (undefined1 (*) [12])(*pauVar22 + 4);
                } while ((undefined1 (*) [12])(*pauVar22 + 4) <
                         (undefined1 (*) [12])
                         (*pauVar3 + ((ulong)*(ushort *)(plVar50 + 2) & 0xfffc) * 4));
                uVar24 = NEON_fminnm(auVar66._0_4_,auVar66._4_4_);
                uVar24 = NEON_fminnm(uVar24,auVar66._8_4_);
                fVar90 = (float)NEON_fminnm(uVar24,auVar66._12_4_);
                *(float *)(*(long *)(lVar33 + 0x10) + uVar36 * 4) = fVar55 * 1.0009619 * ABS(fVar90)
                ;
                uVar36 = uVar36 + 1;
              } while (uVar36 != uVar35);
            }
          }
          if ((uVar32 >> 2 & 1) != 0) {
            uVar35 = (uint)*(byte *)(plVar50 + 1);
            if (fVar55 <= 0.0) {
              if (uVar35 != 0) {
                memset(*(void **)(lVar33 + 0x18),0,(ulong)*(byte *)(plVar50 + 1) << 2);
              }
            }
            else {
              uVar36 = 0;
              if (uVar35 < 2) {
                uVar35 = 1;
              }
              do {
                uVar10 = *(ushort *)(plVar50 + 2);
                pfVar27 = (float *)(*plVar50 + uVar36 * uVar10 * 4);
                pfVar41 = pfVar27;
                auVar60 = ZEXT816(0);
                do {
                  pfVar42 = pfVar41 + 4;
                  auVar61._0_4_ = auVar60._0_4_ + *pfVar41 * *pfVar41;
                  auVar61._4_4_ = auVar60._4_4_ + pfVar41[1] * pfVar41[1];
                  auVar61._8_4_ = auVar60._8_4_ + pfVar41[2] * pfVar41[2];
                  auVar61._12_4_ = auVar60._12_4_ + pfVar41[3] * pfVar41[3];
                  pfVar41 = pfVar42;
                  auVar60 = auVar61;
                } while (pfVar42 < pfVar27 + (ulong)(uVar10 >> 2) * 4);
                auVar60 = NEON_rev64(auVar61,4);
                *(float *)(*(long *)(lVar33 + 0x18) + uVar36 * 4) =
                     fVar55 * 1.0009619 *
                     SQRT((auVar60._8_4_ + auVar61._8_4_ + auVar60._0_4_ + auVar61._0_4_) /
                          (float)uVar10);
                uVar36 = uVar36 + 1;
              } while (uVar36 != uVar35);
            }
          }
          if ((uVar32 >> 1 & 1) != 0) {
            uVar35 = (uint)*(byte *)(plVar50 + 1);
            if (fVar55 <= 0.0) {
              if (uVar35 != 0) {
                memset(*(void **)(lVar33 + 0x20),0,(ulong)*(byte *)(plVar50 + 1) << 2);
              }
            }
            else {
              uVar36 = 0;
              if (uVar35 < 2) {
                uVar35 = 1;
              }
              do {
                pfVar27 = (float *)(*(long *)(lVar33 + 0x28) + uVar36 * 0x30);
                fVar123 = *pfVar27;
                fVar124 = pfVar27[1];
                fVar128 = pfVar27[2];
                fVar112 = pfVar27[3];
                fVar90 = pfVar27[4];
                fVar139 = pfVar27[5];
                fVar126 = pfVar27[6];
                fVar129 = pfVar27[7];
                puVar4 = (undefined8 *)(*plVar50 + uVar36 * *(ushort *)(plVar50 + 2) * 4);
                fVar54 = (float)_DAT_03cabab0;
                fVar56 = (float)((ulong)_DAT_03cabab0 >> 0x20);
                fVar57 = (float)_UNK_03cabab8;
                fVar58 = (float)((ulong)_UNK_03cabab8 >> 0x20);
                fVar59 = (float)_DAT_03caae00;
                fVar62 = (float)((ulong)_DAT_03caae00 >> 0x20);
                fVar63 = (float)_UNK_03caae08;
                fVar64 = (float)((ulong)_UNK_03caae08 >> 0x20);
                fVar72 = (float)_UNK_03caa6e8;
                fVar73 = (float)((ulong)_UNK_03caa6e8 >> 0x20);
                fVar70 = (float)_DAT_03caa6e0;
                fVar71 = (float)((ulong)_DAT_03caa6e0 >> 0x20);
                fVar65 = (float)_DAT_03cabef0;
                fVar67 = (float)((ulong)_DAT_03cabef0 >> 0x20);
                fVar68 = (float)_UNK_03cabef8;
                fVar69 = (float)((ulong)_UNK_03cabef8 >> 0x20);
                uVar115 = puVar4[1];
                uVar40 = *puVar4;
                fVar127 = *(float *)(puVar4 + 2);
                fVar114 = *(float *)((long)puVar4 + 0x14);
                fVar117 = *(float *)(puVar4 + 3);
                fVar118 = *(float *)((long)puVar4 + 0x1c);
                fVar74 = (float)_DAT_03caac20;
                fVar75 = (float)((ulong)_DAT_03caac20 >> 0x20);
                fVar76 = (float)_UNK_03caac28;
                fVar77 = (float)((ulong)_UNK_03caac28 >> 0x20);
                fVar78 = (float)_DAT_03cab040;
                fVar79 = (float)((ulong)_DAT_03cab040 >> 0x20);
                fVar80 = (float)_UNK_03cab048;
                fVar81 = (float)((ulong)_UNK_03cab048 >> 0x20);
                fVar82 = (float)_DAT_03caac30;
                fVar83 = (float)((ulong)_DAT_03caac30 >> 0x20);
                fVar84 = (float)_UNK_03caac38;
                fVar85 = (float)((ulong)_UNK_03caac38 >> 0x20);
                fVar132 = pfVar27[8];
                fVar135 = pfVar27[9];
                fVar136 = pfVar27[10];
                fVar21 = pfVar27[0xb];
                fVar86 = (float)_DAT_03cab7e0;
                fVar87 = (float)((ulong)_DAT_03cab7e0 >> 0x20);
                fVar88 = (float)_UNK_03cab7e8;
                fVar89 = (float)((ulong)_UNK_03cab7e8 >> 0x20);
                fVar92 = (float)_DAT_03cab6d0;
                fVar93 = (float)((ulong)_DAT_03cab6d0 >> 0x20);
                fVar94 = (float)_UNK_03cab6d8;
                fVar95 = (float)((ulong)_UNK_03cab6d8 >> 0x20);
                auVar141._8_4_ = 0xcf000000;
                auVar141._0_8_ = 0xcf000000cf000000;
                auVar141._12_4_ = 0xcf000000;
                fVar110 = (float)uVar40;
                fVar111 = (float)((ulong)uVar40 >> 0x20);
                fVar113 = (float)uVar115;
                fVar96 = (float)_DAT_03cab580;
                fVar97 = (float)((ulong)_DAT_03cab580 >> 0x20);
                fVar98 = (float)_UNK_03cab588;
                fVar99 = (float)((ulong)_UNK_03cab588 >> 0x20);
                fVar116 = (float)((ulong)uVar115 >> 0x20);
                fVar100 = (float)_DAT_03cab310;
                fVar101 = (float)((ulong)_DAT_03cab310 >> 0x20);
                fVar102 = (float)_UNK_03cab318;
                fVar103 = (float)((ulong)_UNK_03cab318 >> 0x20);
                fVar104 = (float)_DAT_03cabc80;
                fVar105 = (float)((ulong)_DAT_03cabc80 >> 0x20);
                fVar106 = (float)_UNK_03cabc88;
                fVar107 = (float)((ulong)_UNK_03cabc88 >> 0x20);
                auVar137._0_4_ =
                     fVar54 * fVar123 + fVar59 * fVar124 + fVar65 * fVar128 + fVar70 * fVar112 +
                     fVar74 * fVar90 + fVar78 * fVar139 + fVar82 * fVar126 + fVar86 * fVar129 +
                     fVar92 * fVar132 + fVar96 * fVar135 + fVar100 * fVar136 + fVar104 * fVar21;
                auVar137._4_4_ =
                     fVar56 * fVar123 + fVar62 * fVar124 + fVar67 * fVar128 + fVar71 * fVar112 +
                     fVar75 * fVar90 + fVar79 * fVar139 + fVar83 * fVar126 + fVar87 * fVar129 +
                     fVar93 * fVar132 + fVar97 * fVar135 + fVar101 * fVar136 + fVar105 * fVar21;
                auVar137._8_4_ =
                     fVar57 * fVar123 + fVar63 * fVar124 + fVar68 * fVar128 + fVar72 * fVar112 +
                     fVar76 * fVar90 + fVar80 * fVar139 + fVar84 * fVar126 + fVar88 * fVar129 +
                     fVar94 * fVar132 + fVar98 * fVar135 + fVar102 * fVar136 + fVar106 * fVar21;
                auVar137._12_4_ =
                     fVar58 * fVar123 + fVar64 * fVar124 + fVar69 * fVar128 + fVar73 * fVar112 +
                     fVar77 * fVar90 + fVar81 * fVar139 + fVar85 * fVar126 + fVar89 * fVar129 +
                     fVar95 * fVar132 + fVar99 * fVar135 + fVar103 * fVar136 + fVar107 * fVar21;
                auVar133._0_4_ =
                     fVar54 * fVar124 + fVar59 * fVar128 + fVar65 * fVar112 + fVar70 * fVar90 +
                     fVar74 * fVar139 + fVar78 * fVar126 + fVar82 * fVar129 + fVar86 * fVar132 +
                     fVar92 * fVar135 + fVar96 * fVar136 + fVar100 * fVar21 + fVar104 * fVar110;
                auVar133._4_4_ =
                     fVar56 * fVar124 + fVar62 * fVar128 + fVar67 * fVar112 + fVar71 * fVar90 +
                     fVar75 * fVar139 + fVar79 * fVar126 + fVar83 * fVar129 + fVar87 * fVar132 +
                     fVar93 * fVar135 + fVar97 * fVar136 + fVar101 * fVar21 + fVar105 * fVar110;
                auVar133._8_4_ =
                     fVar57 * fVar124 + fVar63 * fVar128 + fVar68 * fVar112 + fVar72 * fVar90 +
                     fVar76 * fVar139 + fVar80 * fVar126 + fVar84 * fVar129 + fVar88 * fVar132 +
                     fVar94 * fVar135 + fVar98 * fVar136 + fVar102 * fVar21 + fVar106 * fVar110;
                auVar133._12_4_ =
                     fVar58 * fVar124 + fVar64 * fVar128 + fVar69 * fVar112 + fVar73 * fVar90 +
                     fVar77 * fVar139 + fVar81 * fVar126 + fVar85 * fVar129 + fVar89 * fVar132 +
                     fVar95 * fVar135 + fVar99 * fVar136 + fVar103 * fVar21 + fVar107 * fVar110;
                auVar91._8_4_ = 0x4f000000;
                auVar91._0_8_ = 0x4f0000004f000000;
                auVar91._12_4_ = 0x4f000000;
                auVar66 = NEON_fmax(auVar137,auVar141,4);
                auVar60 = NEON_fmin(auVar137,auVar91,4);
                auVar66 = NEON_fmax(auVar66,auVar133,4);
                auVar60 = NEON_fmin(auVar60,auVar133,4);
                fVar123 = fVar54 * fVar128 + fVar59 * fVar112 + fVar65 * fVar90 + fVar70 * fVar139 +
                          fVar74 * fVar126 + fVar78 * fVar129 + fVar82 * fVar132 + fVar86 * fVar135
                          + fVar92 * fVar136 + fVar96 * fVar21 + fVar100 * fVar110 +
                          fVar104 * fVar111;
                fVar124 = fVar56 * fVar128 + fVar62 * fVar112 + fVar67 * fVar90 + fVar71 * fVar139 +
                          fVar75 * fVar126 + fVar79 * fVar129 + fVar83 * fVar132 + fVar87 * fVar135
                          + fVar93 * fVar136 + fVar97 * fVar21 + fVar101 * fVar110 +
                          fVar105 * fVar111;
                fVar125 = fVar57 * fVar128 + fVar63 * fVar112 + fVar68 * fVar90 + fVar72 * fVar139 +
                          fVar76 * fVar126 + fVar80 * fVar129 + fVar84 * fVar132 + fVar88 * fVar135
                          + fVar94 * fVar136 + fVar98 * fVar21 + fVar102 * fVar110 +
                          fVar106 * fVar111;
                fVar128 = fVar58 * fVar128 + fVar64 * fVar112 + fVar69 * fVar90 + fVar73 * fVar139 +
                          fVar77 * fVar126 + fVar81 * fVar129 + fVar85 * fVar132 + fVar89 * fVar135
                          + fVar95 * fVar136 + fVar99 * fVar21 + fVar103 * fVar110 +
                          fVar107 * fVar111;
                auVar119._0_4_ =
                     fVar54 * fVar112 + fVar59 * fVar90 + fVar65 * fVar139 + fVar70 * fVar126 +
                     fVar74 * fVar129 + fVar78 * fVar132 + fVar82 * fVar135 + fVar86 * fVar136 +
                     fVar92 * fVar21 + fVar96 * fVar110 + fVar100 * fVar111 + fVar104 * fVar113;
                auVar119._4_4_ =
                     fVar56 * fVar112 + fVar62 * fVar90 + fVar67 * fVar139 + fVar71 * fVar126 +
                     fVar75 * fVar129 + fVar79 * fVar132 + fVar83 * fVar135 + fVar87 * fVar136 +
                     fVar93 * fVar21 + fVar97 * fVar110 + fVar101 * fVar111 + fVar105 * fVar113;
                auVar119._8_4_ =
                     fVar57 * fVar112 + fVar63 * fVar90 + fVar68 * fVar139 + fVar72 * fVar126 +
                     fVar76 * fVar129 + fVar80 * fVar132 + fVar84 * fVar135 + fVar88 * fVar136 +
                     fVar94 * fVar21 + fVar98 * fVar110 + fVar102 * fVar111 + fVar106 * fVar113;
                auVar119._12_4_ =
                     fVar58 * fVar112 + fVar64 * fVar90 + fVar69 * fVar139 + fVar73 * fVar126 +
                     fVar77 * fVar129 + fVar81 * fVar132 + fVar85 * fVar135 + fVar89 * fVar136 +
                     fVar95 * fVar21 + fVar99 * fVar110 + fVar103 * fVar111 + fVar107 * fVar113;
                auVar13._4_4_ = fVar124;
                auVar13._0_4_ = fVar123;
                auVar13._8_4_ = fVar125;
                auVar13._12_4_ = fVar128;
                auVar66 = NEON_fmax(auVar66,auVar13,4);
                auVar14._4_4_ = fVar124;
                auVar14._0_4_ = fVar123;
                auVar14._8_4_ = fVar125;
                auVar14._12_4_ = fVar128;
                auVar142 = NEON_fmin(auVar60,auVar14,4);
                auVar140._0_4_ =
                     fVar54 * fVar90 + fVar59 * fVar139 + fVar65 * fVar126 + fVar70 * fVar129 +
                     fVar74 * fVar132 + fVar78 * fVar135 + fVar82 * fVar136 + fVar86 * fVar21 +
                     fVar92 * fVar110 + fVar96 * fVar111 + fVar100 * fVar113 + fVar104 * fVar116;
                auVar140._4_4_ =
                     fVar56 * fVar90 + fVar62 * fVar139 + fVar67 * fVar126 + fVar71 * fVar129 +
                     fVar75 * fVar132 + fVar79 * fVar135 + fVar83 * fVar136 + fVar87 * fVar21 +
                     fVar93 * fVar110 + fVar97 * fVar111 + fVar101 * fVar113 + fVar105 * fVar116;
                auVar140._8_4_ =
                     fVar57 * fVar90 + fVar63 * fVar139 + fVar68 * fVar126 + fVar72 * fVar129 +
                     fVar76 * fVar132 + fVar80 * fVar135 + fVar84 * fVar136 + fVar88 * fVar21 +
                     fVar94 * fVar110 + fVar98 * fVar111 + fVar102 * fVar113 + fVar106 * fVar116;
                auVar140._12_4_ =
                     fVar58 * fVar90 + fVar64 * fVar139 + fVar69 * fVar126 + fVar73 * fVar129 +
                     fVar77 * fVar132 + fVar81 * fVar135 + fVar85 * fVar136 + fVar89 * fVar21 +
                     fVar95 * fVar110 + fVar99 * fVar111 + fVar103 * fVar113 + fVar107 * fVar116;
                auVar60 = NEON_fmax(auVar66,auVar119,4);
                auVar66 = NEON_fmin(auVar142,auVar119,4);
                auVar66 = NEON_fmin(auVar66,auVar140,4);
                auVar60 = NEON_fmax(auVar60,auVar140,4);
                fVar90 = fVar54 * fVar139 + fVar59 * fVar126 + fVar65 * fVar129 + fVar70 * fVar132 +
                         fVar74 * fVar135 + fVar78 * fVar136 + fVar82 * fVar21 + fVar86 * fVar110 +
                         fVar92 * fVar111 + fVar96 * fVar113 + fVar100 * fVar116 + fVar104 * fVar127
                ;
                fVar123 = fVar56 * fVar139 + fVar62 * fVar126 + fVar67 * fVar129 + fVar71 * fVar132
                          + fVar75 * fVar135 + fVar79 * fVar136 + fVar83 * fVar21 + fVar87 * fVar110
                          + fVar93 * fVar111 + fVar97 * fVar113 + fVar101 * fVar116 +
                          fVar105 * fVar127;
                fVar124 = fVar57 * fVar139 + fVar63 * fVar126 + fVar68 * fVar129 + fVar72 * fVar132
                          + fVar76 * fVar135 + fVar80 * fVar136 + fVar84 * fVar21 + fVar88 * fVar110
                          + fVar94 * fVar111 + fVar98 * fVar113 + fVar102 * fVar116 +
                          fVar106 * fVar127;
                fVar139 = fVar58 * fVar139 + fVar64 * fVar126 + fVar69 * fVar129 + fVar73 * fVar132
                          + fVar77 * fVar135 + fVar81 * fVar136 + fVar85 * fVar21 + fVar89 * fVar110
                          + fVar95 * fVar111 + fVar99 * fVar113 + fVar103 * fVar116 +
                          fVar107 * fVar127;
                auVar19._4_4_ = fVar123;
                auVar19._0_4_ = fVar90;
                auVar19._8_4_ = fVar124;
                auVar19._12_4_ = fVar139;
                auVar66 = NEON_fmin(auVar66,auVar19,4);
                auVar20._4_4_ = fVar123;
                auVar20._0_4_ = fVar90;
                auVar20._8_4_ = fVar124;
                auVar20._12_4_ = fVar139;
                auVar60 = NEON_fmax(auVar60,auVar20,4);
                auVar134._0_4_ =
                     fVar54 * fVar126 + fVar59 * fVar129 + fVar65 * fVar132 + fVar70 * fVar135 +
                     fVar74 * fVar136 + fVar78 * fVar21 + fVar82 * fVar110 + fVar86 * fVar111 +
                     fVar92 * fVar113 + fVar96 * fVar116 + fVar100 * fVar127 + fVar104 * fVar114;
                auVar134._4_4_ =
                     fVar56 * fVar126 + fVar62 * fVar129 + fVar67 * fVar132 + fVar71 * fVar135 +
                     fVar75 * fVar136 + fVar79 * fVar21 + fVar83 * fVar110 + fVar87 * fVar111 +
                     fVar93 * fVar113 + fVar97 * fVar116 + fVar101 * fVar127 + fVar105 * fVar114;
                auVar134._8_4_ =
                     fVar57 * fVar126 + fVar63 * fVar129 + fVar68 * fVar132 + fVar72 * fVar135 +
                     fVar76 * fVar136 + fVar80 * fVar21 + fVar84 * fVar110 + fVar88 * fVar111 +
                     fVar94 * fVar113 + fVar98 * fVar116 + fVar102 * fVar127 + fVar106 * fVar114;
                auVar134._12_4_ =
                     fVar58 * fVar126 + fVar64 * fVar129 + fVar69 * fVar132 + fVar73 * fVar135 +
                     fVar77 * fVar136 + fVar81 * fVar21 + fVar85 * fVar110 + fVar89 * fVar111 +
                     fVar95 * fVar113 + fVar99 * fVar116 + fVar103 * fVar127 + fVar107 * fVar114;
                auVar66 = NEON_fmin(auVar66,auVar134,4);
                auVar60 = NEON_fmax(auVar60,auVar134,4);
                auVar130._0_4_ =
                     fVar54 * fVar129 + fVar59 * fVar132 + fVar65 * fVar135 + fVar70 * fVar136 +
                     fVar74 * fVar21 + fVar78 * fVar110 + fVar82 * fVar111 + fVar86 * fVar113 +
                     fVar92 * fVar116 + fVar96 * fVar127 + fVar100 * fVar114 + fVar104 * fVar117;
                auVar130._4_4_ =
                     fVar56 * fVar129 + fVar62 * fVar132 + fVar67 * fVar135 + fVar71 * fVar136 +
                     fVar75 * fVar21 + fVar79 * fVar110 + fVar83 * fVar111 + fVar87 * fVar113 +
                     fVar93 * fVar116 + fVar97 * fVar127 + fVar101 * fVar114 + fVar105 * fVar117;
                auVar130._8_4_ =
                     fVar57 * fVar129 + fVar63 * fVar132 + fVar68 * fVar135 + fVar72 * fVar136 +
                     fVar76 * fVar21 + fVar80 * fVar110 + fVar84 * fVar111 + fVar88 * fVar113 +
                     fVar94 * fVar116 + fVar98 * fVar127 + fVar102 * fVar114 + fVar106 * fVar117;
                auVar130._12_4_ =
                     fVar58 * fVar129 + fVar64 * fVar132 + fVar69 * fVar135 + fVar73 * fVar136 +
                     fVar77 * fVar21 + fVar81 * fVar110 + fVar85 * fVar111 + fVar89 * fVar113 +
                     fVar95 * fVar116 + fVar99 * fVar127 + fVar103 * fVar114 + fVar107 * fVar117;
                auVar142 = NEON_fmin(auVar66,auVar130,4);
                auVar66 = NEON_fmax(auVar60,auVar130,4);
                fVar90 = fVar54 * fVar132 + fVar59 * fVar135 + fVar65 * fVar136 + fVar70 * fVar21 +
                         fVar74 * fVar110 + fVar78 * fVar111 + fVar82 * fVar113 + fVar86 * fVar116 +
                         fVar92 * fVar127 + fVar96 * fVar114 + fVar100 * fVar117 + fVar104 * fVar118
                ;
                fVar139 = fVar56 * fVar132 + fVar62 * fVar135 + fVar67 * fVar136 + fVar71 * fVar21 +
                          fVar75 * fVar110 + fVar79 * fVar111 + fVar83 * fVar113 + fVar87 * fVar116
                          + fVar93 * fVar127 + fVar97 * fVar114 + fVar101 * fVar117 +
                          fVar105 * fVar118;
                fVar126 = fVar57 * fVar132 + fVar63 * fVar135 + fVar68 * fVar136 + fVar72 * fVar21 +
                          fVar76 * fVar110 + fVar80 * fVar111 + fVar84 * fVar113 + fVar88 * fVar116
                          + fVar94 * fVar127 + fVar98 * fVar114 + fVar102 * fVar117 +
                          fVar106 * fVar118;
                fVar129 = fVar58 * fVar132 + fVar64 * fVar135 + fVar69 * fVar136 + fVar73 * fVar21 +
                          fVar77 * fVar110 + fVar81 * fVar111 + fVar85 * fVar113 + fVar89 * fVar116
                          + fVar95 * fVar127 + fVar99 * fVar114 + fVar103 * fVar117 +
                          fVar107 * fVar118;
                fVar128 = (float)puVar4[5];
                fVar123 = (float)puVar4[4];
                fVar124 = (float)((ulong)puVar4[4] >> 0x20);
                auVar120._0_4_ =
                     fVar54 * fVar135 + fVar59 * fVar136 + fVar65 * fVar21 + fVar70 * fVar110 +
                     fVar74 * fVar111 + fVar78 * fVar113 + fVar82 * fVar116 + fVar86 * fVar127 +
                     fVar92 * fVar114 + fVar96 * fVar117 + fVar100 * fVar118 + fVar104 * fVar123;
                auVar120._4_4_ =
                     fVar56 * fVar135 + fVar62 * fVar136 + fVar67 * fVar21 + fVar71 * fVar110 +
                     fVar75 * fVar111 + fVar79 * fVar113 + fVar83 * fVar116 + fVar87 * fVar127 +
                     fVar93 * fVar114 + fVar97 * fVar117 + fVar101 * fVar118 + fVar105 * fVar123;
                auVar120._8_4_ =
                     fVar57 * fVar135 + fVar63 * fVar136 + fVar68 * fVar21 + fVar72 * fVar110 +
                     fVar76 * fVar111 + fVar80 * fVar113 + fVar84 * fVar116 + fVar88 * fVar127 +
                     fVar94 * fVar114 + fVar98 * fVar117 + fVar102 * fVar118 + fVar106 * fVar123;
                auVar120._12_4_ =
                     fVar58 * fVar135 + fVar64 * fVar136 + fVar69 * fVar21 + fVar73 * fVar110 +
                     fVar77 * fVar111 + fVar81 * fVar113 + fVar85 * fVar116 + fVar89 * fVar127 +
                     fVar95 * fVar114 + fVar99 * fVar117 + fVar103 * fVar118 + fVar107 * fVar123;
                auVar15._4_4_ = fVar139;
                auVar15._0_4_ = fVar90;
                auVar15._8_4_ = fVar126;
                auVar15._12_4_ = fVar129;
                auVar60 = NEON_fmin(auVar142,auVar15,4);
                auVar138._0_4_ =
                     fVar54 * fVar136 + fVar59 * fVar21 + fVar65 * fVar110 + fVar70 * fVar111 +
                     fVar74 * fVar113 + fVar78 * fVar116 + fVar82 * fVar127 + fVar86 * fVar114 +
                     fVar92 * fVar117 + fVar96 * fVar118 + fVar100 * fVar123 + fVar104 * fVar124;
                auVar138._4_4_ =
                     fVar56 * fVar136 + fVar62 * fVar21 + fVar67 * fVar110 + fVar71 * fVar111 +
                     fVar75 * fVar113 + fVar79 * fVar116 + fVar83 * fVar127 + fVar87 * fVar114 +
                     fVar93 * fVar117 + fVar97 * fVar118 + fVar101 * fVar123 + fVar105 * fVar124;
                auVar138._8_4_ =
                     fVar57 * fVar136 + fVar63 * fVar21 + fVar68 * fVar110 + fVar72 * fVar111 +
                     fVar76 * fVar113 + fVar80 * fVar116 + fVar84 * fVar127 + fVar88 * fVar114 +
                     fVar94 * fVar117 + fVar98 * fVar118 + fVar102 * fVar123 + fVar106 * fVar124;
                auVar138._12_4_ =
                     fVar58 * fVar136 + fVar64 * fVar21 + fVar69 * fVar110 + fVar73 * fVar111 +
                     fVar77 * fVar113 + fVar81 * fVar116 + fVar85 * fVar127 + fVar89 * fVar114 +
                     fVar95 * fVar117 + fVar99 * fVar118 + fVar103 * fVar123 + fVar107 * fVar124;
                auVar60 = NEON_fmin(auVar60,auVar120,4);
                auVar108._0_4_ =
                     fVar54 * fVar21 + fVar59 * fVar110 + fVar65 * fVar111 + fVar70 * fVar113 +
                     fVar74 * fVar116 + fVar78 * fVar127 + fVar82 * fVar114 + fVar86 * fVar117 +
                     fVar92 * fVar118 + fVar96 * fVar123 + fVar100 * fVar124 + fVar104 * fVar128;
                auVar108._4_4_ =
                     fVar56 * fVar21 + fVar62 * fVar110 + fVar67 * fVar111 + fVar71 * fVar113 +
                     fVar75 * fVar116 + fVar79 * fVar127 + fVar83 * fVar114 + fVar87 * fVar117 +
                     fVar93 * fVar118 + fVar97 * fVar123 + fVar101 * fVar124 + fVar105 * fVar128;
                auVar108._8_4_ =
                     fVar57 * fVar21 + fVar63 * fVar110 + fVar68 * fVar111 + fVar72 * fVar113 +
                     fVar76 * fVar116 + fVar80 * fVar127 + fVar84 * fVar114 + fVar88 * fVar117 +
                     fVar94 * fVar118 + fVar98 * fVar123 + fVar102 * fVar124 + fVar106 * fVar128;
                auVar108._12_4_ =
                     fVar58 * fVar21 + fVar64 * fVar110 + fVar69 * fVar111 + fVar73 * fVar113 +
                     fVar77 * fVar116 + fVar81 * fVar127 + fVar85 * fVar114 + fVar89 * fVar117 +
                     fVar95 * fVar118 + fVar99 * fVar123 + fVar103 * fVar124 + fVar107 * fVar128;
                auVar60 = NEON_fmin(auVar60,auVar138,4);
                auVar60 = NEON_fmin(auVar60,auVar108,4);
                auVar16._4_4_ = fVar139;
                auVar16._0_4_ = fVar90;
                auVar16._8_4_ = fVar126;
                auVar16._12_4_ = fVar129;
                auVar66 = NEON_fmax(auVar66,auVar16,4);
                puVar28 = (undefined8 *)
                          ((long)puVar4 + ((ulong)*(ushort *)(plVar50 + 2) & 0xfffc) * 4 + -0x30);
                auVar66 = NEON_fmax(auVar66,auVar120,4);
                auVar66 = NEON_fmax(auVar66,auVar138,4);
                auVar66 = NEON_fmax(auVar66,auVar108,4);
                while (puVar4 < puVar28) {
                  fVar123 = (float)uVar40;
                  fVar128 = (float)((ulong)uVar40 >> 0x20);
                  fVar127 = (float)uVar115;
                  fVar117 = (float)((ulong)uVar115 >> 0x20);
                  uVar115 = puVar4[3];
                  uVar40 = puVar4[2];
                  fVar124 = (float)uVar40;
                  fVar90 = *(float *)(puVar4 + 4);
                  fVar139 = *(float *)((long)puVar4 + 0x24);
                  fVar126 = *(float *)(puVar4 + 5);
                  fVar129 = *(float *)((long)puVar4 + 0x2c);
                  auVar142 = *(undefined1 (*) [16])(puVar4 + 6);
                  fVar112 = (float)((ulong)uVar40 >> 0x20);
                  fVar114 = (float)uVar115;
                  fVar118 = (float)((ulong)uVar115 >> 0x20);
                  auVar121._0_4_ =
                       fVar54 * fVar123 + fVar59 * fVar128 + fVar65 * fVar127 + fVar70 * fVar117 +
                       fVar74 * fVar124 + fVar78 * fVar112 + fVar82 * fVar114 + fVar86 * fVar118 +
                       fVar92 * fVar90 + fVar96 * fVar139 + fVar100 * fVar126 + fVar104 * fVar129;
                  auVar121._4_4_ =
                       fVar56 * fVar123 + fVar62 * fVar128 + fVar67 * fVar127 + fVar71 * fVar117 +
                       fVar75 * fVar124 + fVar79 * fVar112 + fVar83 * fVar114 + fVar87 * fVar118 +
                       fVar93 * fVar90 + fVar97 * fVar139 + fVar101 * fVar126 + fVar105 * fVar129;
                  auVar121._8_4_ =
                       fVar57 * fVar123 + fVar63 * fVar128 + fVar68 * fVar127 + fVar72 * fVar117 +
                       fVar76 * fVar124 + fVar80 * fVar112 + fVar84 * fVar114 + fVar88 * fVar118 +
                       fVar94 * fVar90 + fVar98 * fVar139 + fVar102 * fVar126 + fVar106 * fVar129;
                  auVar121._12_4_ =
                       fVar58 * fVar123 + fVar64 * fVar128 + fVar69 * fVar127 + fVar73 * fVar117 +
                       fVar77 * fVar124 + fVar81 * fVar112 + fVar85 * fVar114 + fVar89 * fVar118 +
                       fVar95 * fVar90 + fVar99 * fVar139 + fVar103 * fVar126 + fVar107 * fVar129;
                  fVar132 = auVar142._0_4_;
                  auVar109._0_4_ =
                       fVar54 * fVar128 + fVar59 * fVar127 + fVar65 * fVar117 + fVar70 * fVar124 +
                       fVar74 * fVar112 + fVar78 * fVar114 + fVar82 * fVar118 + fVar86 * fVar90 +
                       fVar92 * fVar139 + fVar96 * fVar126 + fVar100 * fVar129 + fVar104 * fVar132;
                  auVar109._4_4_ =
                       fVar56 * fVar128 + fVar62 * fVar127 + fVar67 * fVar117 + fVar71 * fVar124 +
                       fVar75 * fVar112 + fVar79 * fVar114 + fVar83 * fVar118 + fVar87 * fVar90 +
                       fVar93 * fVar139 + fVar97 * fVar126 + fVar101 * fVar129 + fVar105 * fVar132;
                  auVar109._8_4_ =
                       fVar57 * fVar128 + fVar63 * fVar127 + fVar68 * fVar117 + fVar72 * fVar124 +
                       fVar76 * fVar112 + fVar80 * fVar114 + fVar84 * fVar118 + fVar88 * fVar90 +
                       fVar94 * fVar139 + fVar98 * fVar126 + fVar102 * fVar129 + fVar106 * fVar132;
                  auVar109._12_4_ =
                       fVar58 * fVar128 + fVar64 * fVar127 + fVar69 * fVar117 + fVar73 * fVar124 +
                       fVar77 * fVar112 + fVar81 * fVar114 + fVar85 * fVar118 + fVar89 * fVar90 +
                       fVar95 * fVar139 + fVar99 * fVar126 + fVar103 * fVar129 + fVar107 * fVar132;
                  fVar135 = auVar142._4_4_;
                  auVar122._0_4_ =
                       fVar54 * fVar127 + fVar59 * fVar117 + fVar65 * fVar124 + fVar70 * fVar112 +
                       fVar74 * fVar114 + fVar78 * fVar118 + fVar82 * fVar90 + fVar86 * fVar139 +
                       fVar92 * fVar126 + fVar96 * fVar129 + fVar100 * fVar132 + fVar104 * fVar135;
                  auVar122._4_4_ =
                       fVar56 * fVar127 + fVar62 * fVar117 + fVar67 * fVar124 + fVar71 * fVar112 +
                       fVar75 * fVar114 + fVar79 * fVar118 + fVar83 * fVar90 + fVar87 * fVar139 +
                       fVar93 * fVar126 + fVar97 * fVar129 + fVar101 * fVar132 + fVar105 * fVar135;
                  auVar122._8_4_ =
                       fVar57 * fVar127 + fVar63 * fVar117 + fVar68 * fVar124 + fVar72 * fVar112 +
                       fVar76 * fVar114 + fVar80 * fVar118 + fVar84 * fVar90 + fVar88 * fVar139 +
                       fVar94 * fVar126 + fVar98 * fVar129 + fVar102 * fVar132 + fVar106 * fVar135;
                  auVar122._12_4_ =
                       fVar58 * fVar127 + fVar64 * fVar117 + fVar69 * fVar124 + fVar73 * fVar112 +
                       fVar77 * fVar114 + fVar81 * fVar118 + fVar85 * fVar90 + fVar89 * fVar139 +
                       fVar95 * fVar126 + fVar99 * fVar129 + fVar103 * fVar132 + fVar107 * fVar135;
                  auVar131 = NEON_fmin(auVar60,auVar121,4);
                  fVar136 = auVar142._8_4_;
                  fVar123 = fVar54 * fVar117 + fVar59 * fVar124 + fVar65 * fVar112 +
                            fVar70 * fVar114 + fVar74 * fVar118 + fVar78 * fVar90 + fVar82 * fVar139
                            + fVar86 * fVar126 + fVar92 * fVar129 + fVar96 * fVar132 +
                            fVar100 * fVar135 + fVar104 * fVar136;
                  fVar128 = fVar56 * fVar117 + fVar62 * fVar124 + fVar67 * fVar112 +
                            fVar71 * fVar114 + fVar75 * fVar118 + fVar79 * fVar90 + fVar83 * fVar139
                            + fVar87 * fVar126 + fVar93 * fVar129 + fVar97 * fVar132 +
                            fVar101 * fVar135 + fVar105 * fVar136;
                  fVar127 = fVar57 * fVar117 + fVar63 * fVar124 + fVar68 * fVar112 +
                            fVar72 * fVar114 + fVar76 * fVar118 + fVar80 * fVar90 + fVar84 * fVar139
                            + fVar88 * fVar126 + fVar94 * fVar129 + fVar98 * fVar132 +
                            fVar102 * fVar135 + fVar106 * fVar136;
                  fVar90 = fVar58 * fVar117 + fVar64 * fVar124 + fVar69 * fVar112 + fVar73 * fVar114
                           + fVar77 * fVar118 + fVar81 * fVar90 + fVar85 * fVar139 +
                           fVar89 * fVar126 + fVar95 * fVar129 + fVar99 * fVar132 +
                           fVar103 * fVar135 + fVar107 * fVar136;
                  auVar60 = NEON_fmax(auVar66,auVar121,4);
                  auVar66 = NEON_fmin(auVar131,auVar109,4);
                  auVar60 = NEON_fmax(auVar60,auVar109,4);
                  auVar142 = NEON_fmin(auVar66,auVar122,4);
                  auVar66 = NEON_fmax(auVar60,auVar122,4);
                  auVar17._4_4_ = fVar128;
                  auVar17._0_4_ = fVar123;
                  auVar17._8_4_ = fVar127;
                  auVar17._12_4_ = fVar90;
                  auVar60 = NEON_fmin(auVar142,auVar17,4);
                  auVar18._4_4_ = fVar128;
                  auVar18._0_4_ = fVar123;
                  auVar18._8_4_ = fVar127;
                  auVar18._12_4_ = fVar90;
                  auVar66 = NEON_fmax(auVar66,auVar18,4);
                  puVar4 = puVar4 + 2;
                }
                memcpy(pfVar27,puVar28,0x30);
                uVar24 = NEON_fminnm(auVar60._0_4_,auVar60._4_4_);
                uVar24 = NEON_fminnm(uVar24,auVar60._8_4_);
                fVar90 = auVar66._0_4_;
                if (auVar66._0_4_ <= auVar66._8_4_) {
                  fVar90 = auVar66._8_4_;
                }
                fVar139 = (float)NEON_fminnm(uVar24,auVar60._12_4_);
                if (fVar90 <= auVar66._12_4_) {
                  fVar90 = auVar66._12_4_;
                }
                fVar126 = ABS(fVar139);
                if (ABS(fVar139) <= fVar90) {
                  fVar126 = fVar90;
                }
                *(float *)(*(long *)(lVar33 + 0x20) + uVar36 * 4) = fVar55 * 1.0009619 * fVar126;
                uVar36 = uVar36 + 1;
              } while (uVar36 != uVar35);
            }
          }
          if ((uVar32 >> 4 & 1) != 0) {
            uVar35 = *(uint *)(plVar50 + 1);
            uVar10 = *(ushort *)(plVar50 + 2);
            if ((uVar35 & 0xf00) == 0x200) {
              uVar36 = 1;
LAB_035077fc:
              fVar90 = (float)FUN_035091c0(*(undefined8 *)(lVar33 + 0x38),
                                           *(undefined8 *)(lVar33 + 0x40),*plVar50,uVar10);
              if ((int)uVar36 != 1) {
                lVar26 = uVar36 - 1;
                lVar53 = 0x90;
                lVar49 = 4;
                do {
                  fVar139 = (float)FUN_035091c0(*(long *)(lVar33 + 0x38) + lVar53,
                                                *(long *)(lVar33 + 0x40) + lVar53,
                                                *plVar50 + lVar49 * (ulong)*(ushort *)(plVar50 + 2),
                                                uVar10);
                  fVar90 = fVar139 + fVar90;
                  lVar49 = lVar49 + 4;
                  lVar26 = lVar26 + -1;
                  lVar53 = lVar53 + 0x90;
                } while (lVar26 != 0);
              }
            }
            else if ((uVar35 & 0xf00) == 0x100) {
              fVar90 = 0.0;
              uVar38 = uVar35 >> 0xc & 0xffff7;
              if ((uVar35 >> 0xc & 0xffff7) != 0) {
                uVar35 = uVar38 - (uVar38 >> 1 & 0x55555555);
                uVar35 = (uVar35 & 0x33333333) + (uVar35 >> 2 & 0x33333333);
                fVar90 = 0.0;
                uVar48 = 1;
                do {
                  if ((uVar48 & uVar38) != 0) {
                    uVar5 = uVar48 + 0xfffff & uVar38;
                    uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
                    uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333);
                    uVar6 = ((uVar35 + (uVar35 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 0xff;
                    if (uVar48 != 8) {
                      uVar6 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
                    }
                    uVar36 = (ulong)(uVar6 & 0xff);
                    fVar139 = (float)FUN_035091c0(*(long *)(lVar33 + 0x38) + uVar36 * 0x90,
                                                  *(long *)(lVar33 + 0x40) + uVar36 * 0x90,
                                                  *plVar50 + uVar36 * *(ushort *)(plVar50 + 2) * 4,
                                                  uVar10);
                    if ((uVar48 & 0x600) != 0) {
                      fVar139 = fVar139 * 1.4125375;
                    }
                    fVar90 = fVar139 + fVar90;
                  }
                  uVar48 = uVar48 * 2;
                } while (uVar48 <= uVar38);
              }
            }
            else {
              fVar90 = 0.0;
              uVar36 = (ulong)(uVar35 & 0xff);
              if ((uVar35 & 0xff) != 0) goto LAB_035077fc;
            }
            *(float *)(lVar33 + 0x48) =
                 (fVar55 * 1.0009619 * fVar55 * 1.0009619 * fVar90) / (float)uVar10;
          }
          if (((uVar32 >> 5 & 1) != 0) &&
             (pfVar27 = *(float **)(lVar33 + 0x30), pfVar27 != (float *)0x0)) {
            bVar9 = *(byte *)(plVar50 + 1);
            if (fVar55 <= 0.0) {
              if (bVar9 != 0) {
                memset(pfVar27,0,(ulong)bVar9 << 2);
              }
            }
            else {
              fVar55 = fVar55 * 1.0009619;
              uVar36 = (ulong)*(ushort *)(plVar50 + 2);
              if (uVar36 == 0) {
                uVar36 = 0;
                fVar90 = -2.1474836e+09;
              }
              else {
                uVar29 = uVar36 & 3;
                if (uVar36 - 1 < 3) {
                  fVar139 = -2.1474836e+09;
                  uVar32 = 0;
                  uVar43 = 0;
                  fVar90 = fVar139;
                }
                else {
                  fVar139 = -2.1474836e+09;
                  uVar32 = 0;
                  uVar43 = 0;
                  pfVar41 = (float *)(*plVar50 + 8);
                  fVar90 = fVar139;
                  do {
                    fVar129 = ABS(pfVar41[-2]);
                    fVar126 = pfVar41[-2];
                    if (fVar129 <= fVar139) {
                      fVar126 = fVar90;
                    }
                    fVar90 = ABS(pfVar41[-1]);
                    uVar38 = (uint)uVar43;
                    uVar35 = uVar38;
                    if (fVar129 <= fVar139) {
                      uVar35 = uVar32;
                    }
                    if (fVar129 < fVar90) {
                      uVar35 = uVar38 + 1;
                      fVar126 = pfVar41[-1];
                    }
                    fVar123 = ABS(*pfVar41);
                    fVar129 = *pfVar41;
                    if (fVar123 <= fVar90) {
                      fVar129 = fVar126;
                    }
                    fVar139 = ABS(pfVar41[1]);
                    uVar48 = uVar38 + 2;
                    if (fVar123 <= fVar90) {
                      uVar48 = uVar35;
                    }
                    uVar32 = uVar38 + 3;
                    fVar90 = pfVar41[1];
                    if (fVar139 <= fVar123) {
                      uVar32 = uVar48;
                      fVar90 = fVar129;
                    }
                    uVar43 = uVar43 + 4;
                    pfVar41 = pfVar41 + 4;
                  } while ((uVar36 & 0xfffc) != uVar43);
                }
                uVar35 = uVar32;
                if ((*(ushort *)(plVar50 + 2) & 3) != 0) {
                  do {
                    fVar126 = *(float *)(*plVar50 + uVar43 * 4);
                    fVar129 = ABS(fVar126);
                    uVar32 = (uint)uVar43;
                    if (fVar129 <= fVar139) {
                      uVar32 = uVar35;
                      fVar126 = fVar90;
                    }
                    fVar90 = fVar126;
                    uVar43 = uVar43 + 1;
                    uVar29 = uVar29 - 1;
                    uVar35 = uVar32;
                    fVar139 = fVar129;
                  } while (uVar29 != 0);
                }
                uVar36 = (ulong)uVar32;
              }
              *pfVar27 = fVar90 * fVar55;
              if (1 < bVar9) {
                if (bVar9 == 2) {
                  lVar53 = 1;
                }
                else {
                  lVar49 = 0;
                  lVar53 = 0;
                  do {
                    lVar53 = lVar53 + -2;
                    *(float *)(*(long *)(lVar33 + 0x30) + lVar49 + 4) =
                         *(float *)(*plVar50 + (lVar49 + 4) * (ulong)*(ushort *)(plVar50 + 2) +
                                   uVar36 * 4) * fVar55;
                    lVar26 = *(long *)(lVar33 + 0x30) + lVar49;
                    lVar49 = lVar49 + 8;
                    *(float *)(lVar26 + 8) =
                         *(float *)(*plVar50 + lVar49 * (ulong)*(ushort *)(plVar50 + 2) + uVar36 * 4
                                   ) * fVar55;
                  } while (-lVar53 != ((ulong)bVar9 - 1 & 0xfffffffffffffffe));
                  lVar53 = 1 - lVar53;
                  if (((ulong)bVar9 - 1 & 1) == 0) goto LAB_03507a68;
                }
                *(float *)(*(long *)(lVar33 + 0x30) + lVar53 * 4) =
                     *(float *)(*plVar50 + lVar53 * 4 * (ulong)*(ushort *)(plVar50 + 2) + uVar36 * 4
                               ) * fVar55;
              }
            }
          }
LAB_03507a68:
          if ((bVar8 & 0x7c) != 0) {
            lVar49 = *(long *)PTR_DAT_047e6f40;
            uVar24 = *(undefined4 *)(lVar33 + 8);
            nn::os::LockMutex((MutexType *)(lVar49 + 0x30));
            piVar31 = *(int **)(lVar49 + 0x10);
            uVar32 = *(uint *)(lVar49 + 0x18);
            if ((uVar32 == 0) || (*piVar31 == iVar52)) {
              piVar44 = piVar31;
            }
            else {
              lVar53 = (ulong)uVar32 * 0x20;
              piVar45 = piVar31;
              do {
                lVar53 = lVar53 + -0x20;
                if (lVar53 == 0) goto LAB_03507ae8;
                piVar44 = piVar45 + 8;
                piVar1 = piVar45 + 8;
                piVar45 = piVar44;
              } while (*piVar1 != iVar52);
            }
            if (piVar44 != piVar31 + (ulong)uVar32 * 8) {
              local_a0 = *(long **)(piVar44 + 6);
              local_84 = piVar44[4];
              uStack_98 = uVar30;
              local_90 = lVar33;
              local_88 = uVar24;
              (**(code **)(piVar44 + 2))(&local_a0);
            }
LAB_03507ae8:
            nn::os::UnlockMutex((MutexType *)(lVar49 + 0x30));
          }
        }
        plVar50 = plVar50 + 6;
        plVar47 = (long *)*plVar25;
      } while (plVar50 != plVar47 + (ulong)*(uint *)(plVar25 + 1) * 6);
    }
  }
  if (bVar12) {
    plVar25 = *(long **)(*(long *)(param_1 + 0x178) + 0x60);
    uVar30 = FUN_03507bc0(plVar47 + 4);
                    /* WARNING: Could not recover jumptable at 0x03507b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar25 + 0x68))(plVar25,plVar47,uVar30);
    return;
  }
  return;
}


