/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a08a0; name: FUN_028a08a0
 */


void FUN_028a08a0(long *param_1,void *param_2,void *param_3)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  void *__dest;
  long lVar7;
  ulong uVar8;
  
  __dest = (void *)*param_1;
  uVar8 = ((long)param_3 - (long)param_2 >> 3) * -0x5555555555555555;
  if ((ulong)((param_1[2] - (long)__dest >> 3) * -0x5555555555555555) < uVar8) {
    FUN_028a0bd8(param_1);
    uVar4 = param_1[4];
    if (0x7ffffffffffffffe < uVar4) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (uVar4 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    if (uVar4 >> 1 <= (ulong)(lVar5 * -0x5555555555555555)) {
      uVar8 = uVar4;
    }
    FUN_00f6f088(param_1,uVar8);
    lVar7 = param_1[1];
    lVar5 = lVar7;
    if (param_2 != param_3) {
      plVar1 = param_1 + 3;
      FUN_00f6ef9c(plVar1,lVar7,param_2);
      lVar5 = lVar7 + 0x18;
      if ((void *)((long)param_2 + 0x18) != param_3) {
        FUN_00f6ef9c(plVar1,lVar5);
        lVar5 = lVar7 + 0x30;
        if ((void *)((long)param_2 + 0x30) != param_3) {
          FUN_00f6ef9c(plVar1,lVar5);
          lVar5 = lVar7 + 0x48;
          if ((void *)((long)param_2 + 0x48) != param_3) {
            FUN_00f6ef9c(plVar1,lVar5);
            lVar5 = lVar7 + 0x60;
            if ((void *)((long)param_2 + 0x60) != param_3) {
              FUN_00f6ef9c(plVar1,lVar5);
              lVar5 = lVar7 + 0x78;
              if ((void *)((long)param_2 + 0x78) != param_3) {
                FUN_00f6ef9c(plVar1,lVar5);
                lVar5 = lVar7 + 0x90;
                if ((void *)((long)param_2 + 0x90) != param_3) {
                  FUN_00f6ef9c(plVar1,lVar5);
                  lVar5 = lVar7 + 0xa8;
                  for (param_2 = (void *)((long)param_2 + 0xa8); param_2 != param_3;
                      param_2 = (void *)((long)param_2 + 0x18)) {
                    FUN_00f6ef9c(plVar1,lVar5,param_2);
                    lVar5 = lVar5 + 0x18;
                  }
                }
              }
            }
          }
        }
      }
    }
    param_1[1] = lVar5;
  }
  else {
    uVar4 = (param_1[1] - (long)__dest >> 3) * -0x5555555555555555;
    pvVar2 = (void *)((long)param_2 + (param_1[1] - (long)__dest));
    pvVar3 = pvVar2;
    if (uVar8 <= uVar4) {
      pvVar3 = param_3;
    }
    __n = (long)pvVar3 - (long)param_2;
    if (__n != 0) {
      memmove(__dest,param_2,__n);
    }
    if (uVar4 < uVar8) {
      lVar5 = param_1[1];
      if (pvVar3 != param_3) {
        plVar1 = param_1 + 3;
        FUN_00f6ef9c(plVar1,lVar5,pvVar2);
        lVar7 = lVar5 + 0x18;
        if ((void *)((long)pvVar2 + 0x18) != param_3) {
          FUN_00f6ef9c(plVar1,lVar5 + 0x18,(void *)((long)pvVar2 + 0x18));
          lVar7 = lVar5 + 0x30;
          if ((void *)((long)pvVar2 + 0x30) != param_3) {
            FUN_00f6ef9c(plVar1,lVar5 + 0x30,(void *)((long)pvVar2 + 0x30));
            lVar7 = lVar5 + 0x48;
            if ((void *)((long)pvVar2 + 0x48) != param_3) {
              FUN_00f6ef9c(plVar1,lVar5 + 0x48,(void *)((long)pvVar2 + 0x48));
              lVar7 = lVar5 + 0x60;
              if ((void *)((long)pvVar2 + 0x60) != param_3) {
                FUN_00f6ef9c(plVar1,lVar5 + 0x60,(void *)((long)pvVar2 + 0x60));
                lVar7 = lVar5 + 0x78;
                if ((void *)((long)pvVar2 + 0x78) != param_3) {
                  FUN_00f6ef9c(plVar1,lVar5 + 0x78,(void *)((long)pvVar2 + 0x78));
                  lVar7 = lVar5 + 0x90;
                  if ((void *)((long)pvVar2 + 0x90) != param_3) {
                    FUN_00f6ef9c(plVar1,lVar5 + 0x90,(void *)((long)pvVar2 + 0x90));
                    lVar7 = lVar5 + 0xa8;
                    for (pvVar2 = (void *)((long)pvVar2 + 0xa8); pvVar2 != param_3;
                        pvVar2 = (void *)((long)pvVar2 + 0x18)) {
                      FUN_00f6ef9c(plVar1,lVar7,pvVar2);
                      lVar7 = lVar7 + 0x18;
                    }
                  }
                }
              }
            }
          }
        }
        lVar5 = lVar7;
      }
      param_1[1] = lVar5;
    }
    else {
      param_1[1] = (long)__dest + __n;
    }
  }
  return;
}


