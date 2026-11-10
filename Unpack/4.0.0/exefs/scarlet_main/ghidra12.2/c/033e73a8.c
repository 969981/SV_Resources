/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033e73a8; name: FUN_033e73a8
 */


undefined8 FUN_033e73a8(float param_1,long *param_2,long *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  *(uint *)(param_2 + 3) = (int)(param_1 * 0.001 * (float)param_5) + 3U & 0xfffffffc;
  *(undefined4 *)(param_2 + 2) = 0;
  uVar6 = (ulong)param_4;
  lVar2 = (**(code **)(*param_3 + 0x10))
                    (param_3,uVar6 << 3,
                     "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/AkDelayPitchShift.cpp"
                     ,0x24);
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*param_3 + 0x10))
                      (param_3,uVar6 * 0x18,
                       "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Common/AkDelayPitchShift.cpp"
                       ,0x28);
    *param_2 = lVar2;
    if (lVar2 != 0) {
      if (param_4 == 0) {
        *(undefined4 *)((long)param_2 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
        while( true ) {
          if (lVar2 != 0) {
            puVar3 = (undefined8 *)(lVar2 + lVar5);
            *(undefined4 *)(puVar3 + 2) = 0;
            *puVar3 = 0;
            puVar3[1] = 0;
          }
          if (uVar6 * 0x18 + -0x18 == lVar5) break;
          lVar2 = *param_2;
          lVar5 = lVar5 + 0x18;
        }
        uVar6 = 0;
        *(uint *)((long)param_2 + 0x14) = param_4;
        do {
          *(undefined4 *)(param_2[1] + uVar6 * 4) = 0;
          lVar2 = param_2[3];
          if ((int)lVar2 != 0) {
            lVar5 = *param_2;
            plVar8 = (long *)(lVar5 + uVar6 * 0x18);
            puVar3 = (undefined8 *)
                     (**(code **)(*param_3 + 0x10))
                               (param_3,8,"../../../../../../include\\AK/DSP/AkDelayLineMemory.h",
                                0x47);
            *plVar8 = (long)puVar3;
            if (puVar3 == (undefined8 *)0x0) {
              return 0x34;
            }
            lVar5 = lVar5 + uVar6 * 0x18;
            uVar1 = (int)lVar2 + 3U & 0xfffffffc;
            *puVar3 = 0;
            *(uint *)(lVar5 + 8) = uVar1;
            *(undefined8 *)(lVar5 + 0xc) = 0x100000000;
            if (uVar1 != 0) {
              uVar4 = (**(code **)(*param_3 + 0x10))
                                (param_3,(ulong)uVar1 << 2,
                                 "../../../../../../include\\AK/DSP/AkDelayLineMemory.h",0x5c);
              *(undefined8 *)*plVar8 = uVar4;
              if (*(long *)*plVar8 == 0) {
                return 0x34;
              }
              uVar7 = 1;
              while (uVar7 < *(uint *)(lVar5 + 0x10)) {
                uVar4 = (**(code **)(*param_3 + 0x10))
                                  (param_3,(ulong)*(uint *)(lVar5 + 8) << 2,
                                   "../../../../../../include\\AK/DSP/AkDelayLineMemory.h",0x5c);
                *(undefined8 *)(*plVar8 + uVar7 * 8) = uVar4;
                lVar2 = uVar7 * 8;
                uVar7 = uVar7 + 1;
                if (*(long *)(*plVar8 + lVar2) == 0) {
                  return 0x34;
                }
              }
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)((long)param_2 + 0x14));
      }
      return 1;
    }
  }
  return 0x34;
}


