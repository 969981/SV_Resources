/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a2bf8; name: FUN_004a2bf8
 */


undefined8 FUN_004a2bf8(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *__src;
  size_t __n;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_48 = param_2 + 1;
  }
  uStack_40 = param_3;
  local_38 = param_4;
  uVar3 = FUN_004c3fa0(param_1 + 0x130,&local_48);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    pbVar1 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      pbVar1 = *(byte **)(param_2 + 0x10);
    }
    plVar2 = *(long **)(param_1 + 0x1b8);
    if (plVar2 < *(long **)(param_1 + 0x1c0)) {
      *plVar2 = (long)pbVar1;
      *(long **)(param_1 + 0x1b8) = plVar2 + 1;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x1b0);
      lVar7 = (long)plVar2 - lVar5 >> 3;
      uVar3 = lVar7 + 1;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar5 = (long)*(long **)(param_1 + 0x1c0) - lVar5;
      uVar6 = lVar5 >> 2;
      if (uVar3 <= uVar6) {
        uVar3 = uVar6;
      }
      if (0xffffffffffffffe < (ulong)(lVar5 >> 3)) {
        uVar3 = 0x1fffffffffffffff;
      }
      if (uVar3 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar3 << 3);
      }
      plVar2 = (long *)(lVar5 + lVar7 * 8);
      *plVar2 = (long)pbVar1;
      __src = *(void **)(param_1 + 0x1b0);
      __n = *(long *)(param_1 + 0x1b8) - (long)__src;
      if (0 < (long)__n) {
        memcpy((void *)((long)plVar2 - __n),__src,__n);
        __src = *(void **)(param_1 + 0x1b0);
      }
      *(void **)(param_1 + 0x1b0) = (void *)((long)plVar2 - __n);
      *(long **)(param_1 + 0x1b8) = plVar2 + 1;
      *(ulong *)(param_1 + 0x1c0) = lVar5 + uVar3 * 8;
      if (__src != (void *)0x0) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


