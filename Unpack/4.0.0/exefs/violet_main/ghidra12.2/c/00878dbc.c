/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00878dbc; name: FUN_00878dbc
 */


undefined8 FUN_00878dbc(int *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  
  uVar1 = param_3[1];
  *(undefined8 *)param_1 = *param_3;
  *(undefined8 *)(param_1 + 2) = uVar1;
  uVar2 = param_3[3];
  uVar1 = param_3[4];
  uVar3 = param_3[5];
  *(undefined8 *)(param_1 + 4) = param_3[2];
  *(undefined8 *)(param_1 + 6) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 10) = uVar3;
  if ((*(char *)((long)param_1 + 9) == '\0') && ((char)param_1[2] == '\0')) {
    return 1;
  }
  if ((*param_1 == -1) || (param_1[1] == 0)) {
    return 0x1f;
  }
  puVar5 = (undefined4 *)
           (**(code **)(*param_2 + 0x10))
                     (param_2,param_1[3] * 0x170,
                      "D:/Jenkins/ws/wwise_v2021.1/Wwise/SDK/source/SoundEngine/Plugins/Effects/MasteringSuite/ChannelContext.cpp"
                      ,0x2d);
  *(undefined4 **)(param_1 + 0x13c) = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    return 2;
  }
  if (param_1[3] != 0) {
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 0x5a) = 0xffffffffffffffff;
    memset(puVar5 + 1,0,0x160);
    if (1 < (uint)param_1[3]) {
      uVar8 = 1;
      lVar10 = 0x170;
      do {
        puVar5 = (undefined4 *)(*(long *)(param_1 + 0x13c) + lVar10);
        *puVar5 = 0;
        *(undefined8 *)(puVar5 + 0x5a) = 0xffffffffffffffff;
        memset(puVar5 + 1,0,0x160);
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x170;
      } while (uVar8 < (uint)param_1[3]);
    }
  }
  if (*(char *)((long)param_1 + 9) != '\0') {
    puVar5 = (undefined4 *)
             (**(code **)(*param_2 + 0x10))
                       (param_2,0x2e0,
                        "D:/Jenkins/ws/wwise_v2021.1/Wwise/SDK/source/SoundEngine/Plugins/Effects/MasteringSuite/ChannelContext.cpp"
                        ,0x3a);
    *(undefined4 **)(param_1 + 0x13e) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      return 2;
    }
    if (*(char *)((long)param_1 + 9) != '\0') {
      *puVar5 = 1;
      *(undefined8 *)(puVar5 + 0x5a) = 0xffffffffffffffff;
      memset(puVar5 + 1,0,0x160);
      if (*(char *)((long)param_1 + 9) != '\0') {
        lVar10 = *(long *)(param_1 + 0x13e);
        *(undefined4 *)(lVar10 + 0x170) = 1;
        *(undefined8 *)(lVar10 + 0x2d8) = 0xffffffffffffffff;
        memset((void *)(lVar10 + 0x174),0,0x160);
      }
    }
  }
  if (((char)param_1[2] != '\0') && (iVar4 = param_1[5], iVar4 != 0)) {
    param_1[0x144] = iVar4;
    puVar5 = (undefined4 *)
             (**(code **)(*param_2 + 0x10))
                       (param_2,iVar4 * 0x178,
                        "D:/Jenkins/ws/wwise_v2021.1/Wwise/SDK/source/SoundEngine/Plugins/Effects/MasteringSuite/ChannelContext.cpp"
                        ,0x4a);
    *(undefined4 **)(param_1 + 0x140) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      return 0x34;
    }
    *(ulong *)(param_1 + 0x142) = (long)puVar5 + (ulong)(uint)(iVar4 * 0x170);
    if (param_1[0x144] != 0) {
      *puVar5 = 2;
      *(undefined8 *)(puVar5 + 0x5a) = 0xffffffffffffffff;
      memset(puVar5 + 1,0,0x160);
      **(undefined8 **)(param_1 + 0x142) = 0xffffffffffffffff;
      if (1 < (uint)param_1[0x144]) {
        uVar8 = 1;
        lVar10 = 0x170;
        do {
          puVar5 = (undefined4 *)(*(long *)(param_1 + 0x140) + lVar10);
          *puVar5 = 2;
          *(undefined8 *)(puVar5 + 0x5a) = 0xffffffffffffffff;
          memset(puVar5 + 1,0,0x160);
          *(undefined8 *)(*(long *)(param_1 + 0x142) + uVar8 * 8) = 0xffffffffffffffff;
          uVar8 = uVar8 + 1;
          lVar10 = lVar10 + 0x170;
        } while (uVar8 < (uint)param_1[0x144]);
      }
    }
  }
  uVar7 = param_1[0x127] | 7;
  param_1[0x127] = uVar7;
  if (*(long *)(param_1 + 0x124) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar7 = param_1[0x127];
    param_1[0x124] = 0;
    param_1[0x125] = 0;
    param_1[0x126] = 0;
  }
  uVar7 = -(uVar7 >> 1 & 1) & 0x60 | (uVar7 & 1) << 7 | (int)(uVar7 << 0x1d) >> 0x1f & 0x14U;
  param_1[0x126] = uVar7;
  pvVar6 = (void *)(**(code **)(*param_2 + 0x20))
                             (param_2,uVar7,0x10,"../../Common/BiquadFilterSimd.h",0x32d);
  *(void **)(param_1 + 0x124) = pvVar6;
  if (pvVar6 != (void *)0x0) {
    memset(pvVar6,0,(ulong)(uint)param_1[0x126]);
    uVar7 = param_1[299] | 7;
    param_1[299] = uVar7;
    if (*(long *)(param_1 + 0x128) != 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
      uVar7 = param_1[299];
      param_1[0x128] = 0;
      param_1[0x129] = 0;
      param_1[0x12a] = 0;
    }
    uVar7 = -(uVar7 >> 1 & 1) & 0x60 | (uVar7 & 1) << 7 | (int)(uVar7 << 0x1d) >> 0x1f & 0x14U;
    param_1[0x12a] = uVar7;
    pvVar6 = (void *)(**(code **)(*param_2 + 0x20))
                               (param_2,uVar7,0x10,"../../Common/BiquadFilterSimd.h",0x32d);
    *(void **)(param_1 + 0x128) = pvVar6;
    if (pvVar6 != (void *)0x0) {
      memset(pvVar6,0,(ulong)(uint)param_1[0x12a]);
      uVar7 = param_1[0x12f] | 7;
      param_1[0x12f] = uVar7;
      if (*(long *)(param_1 + 300) != 0) {
        (**(code **)(*param_2 + 0x18))(param_2);
        uVar7 = param_1[0x12f];
        param_1[300] = 0;
        param_1[0x12d] = 0;
        param_1[0x12e] = 0;
      }
      uVar7 = -(uVar7 >> 1 & 1) & 0x60 | (uVar7 & 1) << 7 | (int)(uVar7 << 0x1d) >> 0x1f & 0x14U;
      param_1[0x12e] = uVar7;
      pvVar6 = (void *)(**(code **)(*param_2 + 0x20))
                                 (param_2,uVar7,0x10,"../../Common/BiquadFilterSimd.h",0x32d);
      *(void **)(param_1 + 300) = pvVar6;
      if (pvVar6 != (void *)0x0) {
        memset(pvVar6,0,(ulong)(uint)param_1[0x12e]);
        uVar7 = param_1[0x133] | 7;
        param_1[0x133] = uVar7;
        if (*(long *)(param_1 + 0x130) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          uVar7 = param_1[0x133];
          param_1[0x130] = 0;
          param_1[0x131] = 0;
          param_1[0x132] = 0;
        }
        uVar7 = -(uVar7 >> 1 & 1) & 0x60 | (uVar7 & 1) << 7 | (int)(uVar7 << 0x1d) >> 0x1f & 0x14U;
        param_1[0x132] = uVar7;
        pvVar6 = (void *)(**(code **)(*param_2 + 0x20))
                                   (param_2,uVar7,0x10,"../../Common/BiquadFilterSimd.h",0x32d);
        *(void **)(param_1 + 0x130) = pvVar6;
        if (pvVar6 != (void *)0x0) {
          memset(pvVar6,0,(ulong)(uint)param_1[0x132]);
          uVar7 = param_1[0x137] | 7;
          param_1[0x137] = uVar7;
          if (*(long *)(param_1 + 0x134) != 0) {
            (**(code **)(*param_2 + 0x18))(param_2);
            uVar7 = param_1[0x137];
            param_1[0x134] = 0;
            param_1[0x135] = 0;
            param_1[0x136] = 0;
          }
          uVar7 = -(uVar7 >> 1 & 1) & 0x60 | (uVar7 & 1) << 7 | (int)(uVar7 << 0x1d) >> 0x1f & 0x14U
          ;
          param_1[0x136] = uVar7;
          pvVar6 = (void *)(**(code **)(*param_2 + 0x20))
                                     (param_2,uVar7,0x10,"../../Common/BiquadFilterSimd.h",0x32d);
          *(void **)(param_1 + 0x134) = pvVar6;
          if (pvVar6 != (void *)0x0) {
            memset(pvVar6,0,(ulong)(uint)param_1[0x136]);
            uVar7 = param_1[0x13b] | 7;
            param_1[0x13b] = uVar7;
            if (*(long *)(param_1 + 0x138) != 0) {
              (**(code **)(*param_2 + 0x18))(param_2);
              uVar7 = param_1[0x13b];
              param_1[0x138] = 0;
              param_1[0x139] = 0;
              param_1[0x13a] = 0;
            }
            uVar7 = -(uVar7 >> 1 & 1) & 0x60 | (uVar7 & 1) << 7 |
                    (int)(uVar7 << 0x1d) >> 0x1f & 0x14U;
            param_1[0x13a] = uVar7;
            pvVar6 = (void *)(**(code **)(*param_2 + 0x20))
                                       (param_2,uVar7,0x10,"../../Common/BiquadFilterSimd.h",0x32d);
            *(void **)(param_1 + 0x138) = pvVar6;
            if (pvVar6 != (void *)0x0) {
              memset(pvVar6,0,(ulong)(uint)param_1[0x13a]);
              puVar9 = (uint *)(param_1 + 0xf3);
              uVar8 = 0xffffffffffffffff;
              while( true ) {
                uVar7 = puVar9[-0xc] | 7;
                puVar9[-0xc] = uVar7;
                if (*(long *)(puVar9 + -0xf) != 0) {
                  (**(code **)(*param_2 + 0x18))(param_2);
                  uVar7 = puVar9[-0xc];
                  puVar9[-0xf] = 0;
                  puVar9[-0xe] = 0;
                  puVar9[-0xd] = 0;
                }
                uVar7 = -(uVar7 >> 1 & 1) & 0x60 | (uVar7 & 1) << 7 |
                        (int)(uVar7 << 0x1d) >> 0x1f & 0x14U;
                puVar9[-0xd] = uVar7;
                pvVar6 = (void *)(**(code **)(*param_2 + 0x20))
                                           (param_2,uVar7,0x10,"../../Common/BiquadFilterSimd.h",
                                            0x32d);
                *(void **)(puVar9 + -0xf) = pvVar6;
                if (pvVar6 == (void *)0x0) {
                  return 0x34;
                }
                memset(pvVar6,0,(ulong)puVar9[-0xd]);
                uVar7 = puVar9[-8] | 7;
                puVar9[-8] = uVar7;
                if (*(long *)(puVar9 + -0xb) != 0) {
                  (**(code **)(*param_2 + 0x18))(param_2);
                  uVar7 = puVar9[-8];
                  puVar9[-0xb] = 0;
                  puVar9[-10] = 0;
                  puVar9[-9] = 0;
                }
                uVar7 = -(uVar7 >> 1 & 1) & 0x60 | (uVar7 & 1) << 7 |
                        (int)(uVar7 << 0x1d) >> 0x1f & 0x14U;
                puVar9[-9] = uVar7;
                pvVar6 = (void *)(**(code **)(*param_2 + 0x20))
                                           (param_2,uVar7,0x10,"../../Common/BiquadFilterSimd.h",
                                            0x32d);
                *(void **)(puVar9 + -0xb) = pvVar6;
                if (pvVar6 == (void *)0x0) {
                  return 0x34;
                }
                memset(pvVar6,0,(ulong)puVar9[-9]);
                uVar7 = puVar9[-4] | 7;
                puVar9[-4] = uVar7;
                if (*(long *)(puVar9 + -7) != 0) {
                  (**(code **)(*param_2 + 0x18))(param_2);
                  uVar7 = puVar9[-4];
                  puVar9[-7] = 0;
                  puVar9[-6] = 0;
                  puVar9[-5] = 0;
                }
                uVar7 = -(uVar7 >> 1 & 1) & 0x60 | (uVar7 & 1) << 7 |
                        (int)(uVar7 << 0x1d) >> 0x1f & 0x14U;
                puVar9[-5] = uVar7;
                pvVar6 = (void *)(**(code **)(*param_2 + 0x20))
                                           (param_2,uVar7,0x10,"../../Common/BiquadFilterSimd.h",
                                            0x32d);
                *(void **)(puVar9 + -7) = pvVar6;
                if (pvVar6 == (void *)0x0) break;
                memset(pvVar6,0,(ulong)puVar9[-5]);
                uVar7 = *puVar9 | 7;
                *puVar9 = uVar7;
                if (*(long *)(puVar9 + -3) != 0) {
                  (**(code **)(*param_2 + 0x18))(param_2);
                  uVar7 = *puVar9;
                  puVar9[-3] = 0;
                  puVar9[-2] = 0;
                  puVar9[-1] = 0;
                }
                uVar7 = -(uVar7 >> 1 & 1) & 0x60 | (uVar7 & 1) << 7 |
                        (int)(uVar7 << 0x1d) >> 0x1f & 0x14U;
                puVar9[-1] = uVar7;
                pvVar6 = (void *)(**(code **)(*param_2 + 0x20))
                                           (param_2,uVar7,0x10,"../../Common/BiquadFilterSimd.h",
                                            0x32d);
                *(void **)(puVar9 + -3) = pvVar6;
                if (pvVar6 == (void *)0x0) {
                  return 0x34;
                }
                memset(pvVar6,0,(ulong)puVar9[-1]);
                uVar8 = uVar8 + 1;
                puVar9 = puVar9 + 0x10;
                if (2 < uVar8) {
                  return 1;
                }
              }
              return 0x34;
            }
          }
        }
      }
    }
  }
  return 0x34;
}


