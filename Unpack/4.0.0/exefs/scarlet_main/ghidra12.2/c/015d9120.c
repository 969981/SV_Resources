/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d9120; name: FUN_015d9120
 */


ulong FUN_015d9120(long param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = FUN_00f7e274(*(undefined8 *)(param_1 + 0x208));
  uVar3 = uVar3 & 0xff;
  if ((param_3 & 0xff) < uVar3) {
    uVar1 = param_3 & 0xff;
    uVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x208) + ((ulong)param_3 & 0xff) * 8) +
                        0x208))();
    if (param_2 == (undefined1 *)0x0) {
      uVar7 = (ulong)(uVar4 & 1);
      if (uVar1 + 1 != uVar3) {
        uVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0x208) + (ulong)(uVar1 + 1 & 0xff) * 8)
                            + 0x208))();
        uVar4 = (uVar4 & 1) + (uVar5 & 1);
        uVar7 = (ulong)uVar4;
        if (uVar1 + 2 != uVar3) {
          uVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0x208) +
                                          (ulong)(uVar1 + 2 & 0xff) * 8) + 0x208))();
          uVar4 = uVar4 + (uVar5 & 1);
          uVar7 = (ulong)uVar4;
          if (uVar1 + 3 != uVar3) {
            uVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0x208) +
                                            (ulong)(uVar1 + 3 & 0xff) * 8) + 0x208))();
            uVar4 = uVar4 + (uVar5 & 1);
            for (uVar1 = uVar1 + 4; uVar7 = (ulong)uVar4, uVar1 != uVar3; uVar1 = uVar1 + 1) {
              uVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0x208) +
                                              (ulong)(uVar1 & 0xff) * 8) + 0x208))();
              uVar4 = uVar4 + (uVar5 & 1);
            }
          }
        }
      }
    }
    else {
      bVar2 = (uVar4 & 1) != 0;
      if (bVar2) {
        *param_2 = (char)param_3;
      }
      uVar7 = (ulong)bVar2;
      uVar4 = uVar1 + 1;
      if (uVar4 != uVar3) {
        uVar6 = (**(code **)(**(long **)(*(long *)(param_1 + 0x208) + (ulong)(uVar4 & 0xff) * 8) +
                            0x208))();
        if ((uVar6 & 1) != 0) {
          param_2[uVar7] = (char)uVar4;
          uVar7 = (ulong)(bVar2 + 1);
        }
        uVar4 = uVar1 + 2;
        if (uVar4 != uVar3) {
          uVar6 = (**(code **)(**(long **)(*(long *)(param_1 + 0x208) + (ulong)(uVar4 & 0xff) * 8) +
                              0x208))();
          if ((uVar6 & 1) != 0) {
            param_2[uVar7] = (char)uVar4;
            uVar7 = (ulong)((int)uVar7 + 1);
          }
          uVar4 = uVar1 + 3;
          if (uVar4 != uVar3) {
            uVar6 = (**(code **)(**(long **)(*(long *)(param_1 + 0x208) + (ulong)(uVar4 & 0xff) * 8)
                                + 0x208))();
            if ((uVar6 & 1) != 0) {
              param_2[uVar7] = (char)uVar4;
              uVar7 = (ulong)((int)uVar7 + 1);
            }
            for (uVar1 = uVar1 + 4; uVar1 != uVar3; uVar1 = uVar1 + 1) {
              uVar6 = (**(code **)(**(long **)(*(long *)(param_1 + 0x208) +
                                              (ulong)(uVar1 & 0xff) * 8) + 0x208))();
              if ((uVar6 & 1) != 0) {
                uVar6 = uVar7 & 0xff;
                uVar7 = (ulong)((int)uVar7 + 1);
                param_2[uVar6] = (char)uVar1;
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}


