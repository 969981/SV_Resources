/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033ff334; name: FUN_033ff334
 */


undefined8 FUN_033ff334(long *param_1,long *param_2,long param_3,uint param_4)

{
  char cVar1;
  void *__s;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 2);
    if (uVar4 != 0) {
      uVar5 = 0;
      while( true ) {
        if (*(long *)(lVar3 + uVar5 * 8) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
          uVar4 = *(uint *)(param_1 + 2);
        }
        uVar5 = uVar5 + 1;
        if (uVar4 <= uVar5) break;
        lVar3 = *param_1;
      }
      lVar3 = *param_1;
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar3);
  }
  uVar4 = param_4 & 0xff;
  uVar5 = (ulong)uVar4;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 7) = uVar4;
  cVar1 = *(char *)(param_3 + 0x14);
  *(char *)((long)param_1 + 0x44) = cVar1;
  if (((param_4 >> 0xf & 1) != 0) && (cVar1 == '\0')) {
    uVar5 = (ulong)(uVar4 - 1);
    *(uint *)(param_1 + 7) = uVar4 - 1;
  }
  if ((int)uVar5 == 0) {
    return 2;
  }
  fVar6 = *(float *)(param_3 + 0x10);
  uVar4 = *(uint *)((long)param_1 + 0x3c);
  __s = (void *)(**(code **)(*param_2 + 0x10))
                          (param_2,uVar5 << 3,
                           "../../../../../../include\\AK/DSP/AkDelayLineMemory.h",0x47);
  *param_1 = (long)__s;
  if (__s == (void *)0x0) {
    return 0x34;
  }
  memset(__s,0,uVar5 << 3 & 0xfffffff8);
  uVar4 = (int)(fVar6 * (float)uVar4) + 3U & 0xfffffffc;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(int *)(param_1 + 2) = (int)uVar5;
  *(uint *)(param_1 + 1) = uVar4;
  if (uVar4 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x10))
                      (param_2,(ulong)uVar4 << 2,
                       "../../../../../../include\\AK/DSP/AkDelayLineMemory.h",0x5c);
    *(undefined8 *)*param_1 = uVar2;
    if (*(long *)*param_1 == 0) {
      return 0x34;
    }
    uVar5 = 1;
    while (uVar5 < *(uint *)(param_1 + 2)) {
      uVar2 = (**(code **)(*param_2 + 0x10))
                        (param_2,(ulong)*(uint *)(param_1 + 1) << 2,
                         "../../../../../../include\\AK/DSP/AkDelayLineMemory.h",0x5c);
      *(undefined8 *)(*param_1 + uVar5 * 8) = uVar2;
      lVar3 = uVar5 * 8;
      uVar5 = uVar5 + 1;
      if (*(long *)(*param_1 + lVar3) == 0) {
        return 0x34;
      }
    }
  }
  return 1;
}


