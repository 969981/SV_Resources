/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033d32ec; name: FUN_033d32ec
 */


undefined8 FUN_033d32ec(long *param_1,long *param_2,float *param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  
  *(uint *)(param_1 + 10) = param_4;
  fVar7 = *param_3;
  puVar3 = (undefined8 *)
           (**(code **)(*param_2 + 0x10))
                     (param_2,8,"../../../../../../include\\AK/DSP/AkDelayLineMemory.h",0x47);
  *param_1 = (long)puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = (int)(fVar7 * (float)param_4) + 3U & 0xfffffffc;
    *puVar3 = 0;
    *(uint *)(param_1 + 1) = uVar2;
    *(undefined8 *)((long)param_1 + 0xc) = 0x100000000;
    if (uVar2 == 0) {
LAB_033d3404:
      fVar7 = param_3[1];
      puVar3 = (undefined8 *)
               (**(code **)(*param_2 + 0x10))
                         (param_2,8,"../../../../../../include\\AK/DSP/AkDelayLineMemory.h",0x47);
      param_1[3] = (long)puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = (int)(fVar7 * (float)param_4) + 3U & 0xfffffffc;
        *puVar3 = 0;
        *(uint *)(param_1 + 4) = uVar2;
        *(undefined8 *)((long)param_1 + 0x24) = 0x100000000;
        if (uVar2 == 0) {
LAB_033d3520:
          uVar4 = 1;
          goto LAB_033d34ec;
        }
        uVar4 = (**(code **)(*param_2 + 0x10))
                          (param_2,(ulong)uVar2 << 2,
                           "../../../../../../include\\AK/DSP/AkDelayLineMemory.h",0x5c);
        *(undefined8 *)param_1[3] = uVar4;
        if (*(long *)param_1[3] != 0) {
          uVar6 = 1;
          uVar4 = 0x34;
          do {
            if (*(uint *)(param_1 + 5) <= uVar6) goto LAB_033d3520;
            uVar5 = (**(code **)(*param_2 + 0x10))
                              (param_2,(ulong)*(uint *)(param_1 + 4) << 2,
                               "../../../../../../include\\AK/DSP/AkDelayLineMemory.h",0x5c);
            *(undefined8 *)(param_1[3] + uVar6 * 8) = uVar5;
            lVar1 = uVar6 * 8;
            uVar6 = uVar6 + 1;
          } while (*(long *)(param_1[3] + lVar1) != 0);
          goto LAB_033d34ec;
        }
      }
    }
    else {
      uVar4 = (**(code **)(*param_2 + 0x10))
                        (param_2,(ulong)uVar2 << 2,
                         "../../../../../../include\\AK/DSP/AkDelayLineMemory.h",0x5c);
      *(undefined8 *)*param_1 = uVar4;
      if (*(long *)*param_1 != 0) {
        uVar6 = 1;
        uVar4 = 0x34;
        do {
          if (*(uint *)(param_1 + 2) <= uVar6) goto LAB_033d3404;
          uVar5 = (**(code **)(*param_2 + 0x10))
                            (param_2,(ulong)*(uint *)(param_1 + 1) << 2,
                             "../../../../../../include\\AK/DSP/AkDelayLineMemory.h",0x5c);
          *(undefined8 *)(*param_1 + uVar6 * 8) = uVar5;
          lVar1 = uVar6 * 8;
          uVar6 = uVar6 + 1;
        } while (*(long *)(*param_1 + lVar1) != 0);
        goto LAB_033d34ec;
      }
    }
  }
  uVar4 = 0x34;
LAB_033d34ec:
  FUN_033d3528(param_1 + 6,param_2,2,0);
  return uVar4;
}


