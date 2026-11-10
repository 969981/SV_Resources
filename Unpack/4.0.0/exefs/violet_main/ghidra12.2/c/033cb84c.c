/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033cb84c; name: FUN_033cb84c
 */


undefined8
FUN_033cb84c(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,byte param_7)

{
  undefined8 *puVar1;
  uint *puVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  *(undefined4 *)((long)param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 6) = param_5;
  *(undefined4 *)(param_1 + 5) = param_3;
  uVar4 = FUN_033cd780(1,param_5);
  lVar5 = (**(code **)(*param_2 + 0x10))
                    (param_2,uVar4,
                     "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/AkPhaseVocoder.cpp"
                     ,0x3a);
  param_1[3] = lVar5;
  if (lVar5 != 0) {
    FUN_033cda00(lVar5,1,(int)param_1[6],param_6);
    lVar5 = (**(code **)(*param_2 + 0x10))
                      (param_2,*(int *)(param_1[3] + 0x2c) << 3,
                       "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/AkPhaseVocoder.cpp"
                       ,0x3f);
    param_1[4] = lVar5;
    if (lVar5 != 0) {
      uVar6 = FUN_033d1854(param_1 + 1,param_2,(int)param_1[6],2,1,0);
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      *(byte *)((long)param_1 + 0x3e) = param_7 & 1;
      if (*(uint *)(param_1 + 5) != 0) {
        lVar5 = (**(code **)(*param_2 + 0x10))
                          (param_2,(ulong)*(uint *)(param_1 + 5) * 0x78,
                           "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/AkPhaseVocoder.cpp"
                           ,0x52);
        *param_1 = lVar5;
        if (lVar5 == 0) {
          return 0x34;
        }
        uVar9 = *(uint *)(param_1 + 5);
        if (uVar9 != 0) {
          lVar7 = 0;
          uVar8 = 1;
          while( true ) {
            if (lVar5 != 0) {
              puVar1 = (undefined8 *)(lVar5 + lVar7);
              *(undefined8 *)((long)puVar1 + 0x3e) = 0;
              puVar1[7] = 0;
              puVar1[9] = 0;
              *(undefined8 *)((long)puVar1 + 0x4e) = 0;
              puVar1[0xb] = 0;
              *(undefined8 *)((long)puVar1 + 0x5e) = 0;
              puVar1[0xd] = 0;
              *(undefined1 *)(puVar1 + 0xe) = 0;
              *(undefined4 *)(puVar1 + 6) = 0;
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
              puVar1[4] = 0;
              puVar1[5] = 0;
              uVar9 = *(uint *)(param_1 + 5);
            }
            if (uVar9 <= uVar8) break;
            lVar5 = *param_1;
            uVar8 = uVar8 + 1;
            lVar7 = lVar7 + 0x78;
          }
          if (uVar9 != 0) {
            uVar8 = 0;
            if ((param_7 & 1) == 0) {
              lVar5 = 0x38;
              while( true ) {
                plVar3 = (long *)(*param_1 + lVar5);
                plVar3[6] = 0;
                *(undefined1 *)(plVar3 + 7) = 0;
                uVar9 = *(uint *)(param_1 + 6);
                *(uint *)(plVar3 + 1) = uVar9;
                lVar7 = (**(code **)(*param_2 + 0x10))
                                  (param_2,(ulong)uVar9 << 3,
                                   "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/FreqWindow.cpp"
                                   ,0x1f);
                *plVar3 = lVar7;
                if (lVar7 == 0) {
                  return 0x34;
                }
                uVar9 = *(uint *)(param_1 + 6);
                *(uint *)(plVar3 + 3) = uVar9;
                lVar7 = (**(code **)(*param_2 + 0x10))
                                  (param_2,(ulong)uVar9 << 3,
                                   "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/FreqWindow.cpp"
                                   ,0x1f);
                plVar3[2] = lVar7;
                if (lVar7 == 0) {
                  return 0x34;
                }
                uVar9 = *(uint *)(param_1 + 6);
                *(uint *)(plVar3 + 5) = uVar9;
                lVar7 = (**(code **)(*param_2 + 0x10))
                                  (param_2,(ulong)uVar9 << 3,
                                   "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/FreqWindow.cpp"
                                   ,0x1f);
                plVar3[4] = lVar7;
                if (lVar7 == 0) {
                  return 0x34;
                }
                lVar7 = (**(code **)(*param_2 + 0x10))
                                  (param_2,((ulong)*(uint *)(param_1 + 6) & 0xfffffffe) * 2 + 4,
                                   "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/AkPhaseVocoder.cpp"
                                   ,0x6c);
                plVar3[6] = lVar7;
                if (lVar7 == 0) break;
                uVar9 = *(uint *)(param_1 + 6);
                *(uint *)(plVar3 + -1) = uVar9;
                *(uint *)(plVar3 + -4) = uVar9;
                *(undefined4 *)((long)plVar3 + -0x14) = 0;
                *(undefined8 *)((long)plVar3 + -0x1c) = 0;
                lVar7 = (**(code **)(*param_2 + 0x10))
                                  (param_2,(ulong)uVar9 << 2,
                                   "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/CircularBuffer.cpp"
                                   ,0x1b);
                plVar3[-2] = lVar7;
                if (lVar7 == 0) {
                  return 0x34;
                }
                uVar8 = uVar8 + 1;
                lVar5 = lVar5 + 0x78;
                if (*(uint *)(param_1 + 5) <= uVar8) {
                  return 1;
                }
              }
              return 0x34;
            }
            uVar10 = 0;
            while( true ) {
              puVar2 = (uint *)(*param_1 + uVar8);
              puVar2[0x1a] = 0;
              puVar2[0x1b] = 0;
              *(undefined1 *)(puVar2 + 0x1c) = 0;
              uVar9 = *(uint *)(param_1 + 6);
              puVar2[0x10] = uVar9;
              lVar5 = (**(code **)(*param_2 + 0x10))
                                (param_2,(ulong)uVar9 << 3,
                                 "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/FreqWindow.cpp"
                                 ,0x1f);
              *(long *)(puVar2 + 0xe) = lVar5;
              if (lVar5 == 0) {
                return 0x34;
              }
              uVar9 = *(uint *)(param_1 + 6);
              puVar2[0x14] = uVar9;
              lVar5 = (**(code **)(*param_2 + 0x10))
                                (param_2,(ulong)uVar9 << 3,
                                 "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/FreqWindow.cpp"
                                 ,0x1f);
              *(long *)(puVar2 + 0x12) = lVar5;
              if (lVar5 == 0) {
                return 0x34;
              }
              uVar9 = *(uint *)(param_1 + 6);
              puVar2[0x18] = uVar9;
              lVar5 = (**(code **)(*param_2 + 0x10))
                                (param_2,(ulong)uVar9 << 3,
                                 "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/FreqWindow.cpp"
                                 ,0x1f);
              *(long *)(puVar2 + 0x16) = lVar5;
              if (lVar5 == 0) {
                return 0x34;
              }
              lVar5 = (**(code **)(*param_2 + 0x10))
                                (param_2,((ulong)*(uint *)(param_1 + 6) & 0xfffffffe) * 2 + 4,
                                 "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/AkPhaseVocoder.cpp"
                                 ,0x6c);
              *(long *)(puVar2 + 0x1a) = lVar5;
              if (lVar5 == 0) break;
              uVar9 = *(uint *)(param_1 + 6);
              puVar2[3] = 0;
              puVar2[1] = 0;
              puVar2[2] = 0;
              uVar9 = uVar9 + (uVar9 >> 2);
              *puVar2 = uVar9;
              lVar5 = (**(code **)(*param_2 + 0x10))
                                (param_2,(ulong)uVar9 << 2,
                                 "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/CircularBuffer.cpp"
                                 ,0x1b);
              *(long *)(puVar2 + 4) = lVar5;
              if (lVar5 == 0) {
                return 0x34;
              }
              uVar9 = *(uint *)(param_1 + 6);
              puVar2[0xc] = uVar9;
              puVar2[6] = uVar9;
              puVar2[9] = 0;
              puVar2[7] = 0;
              puVar2[8] = 0;
              lVar5 = (**(code **)(*param_2 + 0x10))
                                (param_2,(ulong)uVar9 << 2,
                                 "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/CircularBuffer.cpp"
                                 ,0x1b);
              *(long *)(puVar2 + 10) = lVar5;
              if (lVar5 == 0) {
                return 0x34;
              }
              uVar10 = uVar10 + 1;
              uVar8 = uVar8 + 0x78;
              if (*(uint *)(param_1 + 5) <= uVar10) {
                return 1;
              }
            }
            return 0x34;
          }
        }
      }
      return 1;
    }
  }
  return 0x34;
}


