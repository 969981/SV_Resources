/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006de920; name: FUN_006de920
 */


void FUN_006de920(long *param_1,long param_2)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = (long)(PTR_DAT_047cfd80 + 0x10);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  plVar3 = (long *)FUN_01cf7e20();
  param_1[5] = (long)plVar3;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x18);
    lVar6 = *(long *)(param_2 + 0x10);
    param_1[4] = *(long *)(param_2 + 0x20);
    param_1[3] = lVar7;
    param_1[2] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x18);
    pvVar2 = *(void **)(param_2 + 0x20);
    if (uVar1 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 0x11);
      *(char *)(param_1 + 2) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
      param_1[3] = uVar1;
      param_1[4] = (long)pvVar4;
      param_1[2] = uVar5 | 1;
    }
    memcpy(pvVar4,pvVar2,uVar1 + 1);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  plVar3 = (long *)FUN_01cf7e20();
  param_1[10] = (long)plVar3;
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x40);
    lVar6 = *(long *)(param_2 + 0x38);
    param_1[9] = *(long *)(param_2 + 0x48);
    param_1[8] = lVar7;
    param_1[7] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x40);
    pvVar2 = *(void **)(param_2 + 0x48);
    if (uVar1 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 0x39);
      *(char *)(param_1 + 7) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 006deee4 to 006deeeb has its CatchHandler @ 006df14c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
      param_1[8] = uVar1;
      param_1[9] = (long)pvVar4;
      param_1[7] = uVar5 | 1;
    }
    memcpy(pvVar4,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[0xe] = (long)plVar3;
  if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x60);
    lVar6 = *(long *)(param_2 + 0x58);
    param_1[0xd] = *(long *)(param_2 + 0x68);
    param_1[0xc] = lVar7;
    param_1[0xb] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x60);
    pvVar2 = *(void **)(param_2 + 0x68);
    if (uVar1 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 0x59);
      *(char *)(param_1 + 0xb) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 006deeec to 006deef3 has its CatchHandler @ 006df110 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
      param_1[0xc] = uVar1;
      param_1[0xd] = (long)pvVar4;
      param_1[0xb] = uVar5 | 1;
    }
    memcpy(pvVar4,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[0x12] = (long)plVar3;
  if ((*(byte *)(param_2 + 0x78) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x80);
    lVar6 = *(long *)(param_2 + 0x78);
    param_1[0x11] = *(long *)(param_2 + 0x88);
    param_1[0x10] = lVar7;
    param_1[0xf] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x80);
    pvVar2 = *(void **)(param_2 + 0x88);
    if (uVar1 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 0x79);
      *(char *)(param_1 + 0xf) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 006deef4 to 006deeff has its CatchHandler @ 006df0d8 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
      param_1[0x10] = uVar1;
      param_1[0x11] = (long)pvVar4;
      param_1[0xf] = uVar5 | 1;
    }
    memcpy(pvVar4,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[0x16] = (long)plVar3;
  if ((*(byte *)(param_2 + 0x98) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0xa0);
    lVar6 = *(long *)(param_2 + 0x98);
    param_1[0x15] = *(long *)(param_2 + 0xa8);
    param_1[0x14] = lVar7;
    param_1[0x13] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0xa0);
    pvVar2 = *(void **)(param_2 + 0xa8);
    if (uVar1 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 0x99);
      *(char *)(param_1 + 0x13) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 006def00 to 006def0b has its CatchHandler @ 006df0a0 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
      param_1[0x14] = uVar1;
      param_1[0x15] = (long)pvVar4;
      param_1[0x13] = uVar5 | 1;
    }
    memcpy(pvVar4,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[0x1a] = (long)plVar3;
  if ((*(byte *)(param_2 + 0xb8) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0xc0);
    lVar6 = *(long *)(param_2 + 0xb8);
    param_1[0x19] = *(long *)(param_2 + 200);
    param_1[0x18] = lVar7;
    param_1[0x17] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0xc0);
    pvVar2 = *(void **)(param_2 + 200);
    if (uVar1 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 0xb9);
      *(char *)(param_1 + 0x17) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 006def0c to 006def17 has its CatchHandler @ 006df068 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
      param_1[0x18] = uVar1;
      param_1[0x19] = (long)pvVar4;
      param_1[0x17] = uVar5 | 1;
    }
    memcpy(pvVar4,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[0x1e] = (long)plVar3;
  if ((*(byte *)(param_2 + 0xd8) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0xe0);
    lVar6 = *(long *)(param_2 + 0xd8);
    param_1[0x1d] = *(long *)(param_2 + 0xe8);
    param_1[0x1c] = lVar7;
    param_1[0x1b] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0xe0);
    pvVar2 = *(void **)(param_2 + 0xe8);
    if (uVar1 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 0xd9);
      *(char *)(param_1 + 0x1b) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 006def18 to 006def23 has its CatchHandler @ 006df034 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
      param_1[0x1c] = uVar1;
      param_1[0x1d] = (long)pvVar4;
      param_1[0x1b] = uVar5 | 1;
    }
    memcpy(pvVar4,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[0x22] = (long)plVar3;
  if ((*(byte *)(param_2 + 0xf8) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x100);
    lVar6 = *(long *)(param_2 + 0xf8);
    param_1[0x21] = *(long *)(param_2 + 0x108);
    param_1[0x20] = lVar7;
    param_1[0x1f] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x100);
    pvVar2 = *(void **)(param_2 + 0x108);
    if (uVar1 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 0xf9);
      *(char *)(param_1 + 0x1f) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 006def24 to 006def2f has its CatchHandler @ 006df000 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
      param_1[0x20] = uVar1;
      param_1[0x21] = (long)pvVar4;
      param_1[0x1f] = uVar5 | 1;
    }
    memcpy(pvVar4,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[0x26] = (long)plVar3;
  if ((*(byte *)(param_2 + 0x118) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x120);
    lVar6 = *(long *)(param_2 + 0x118);
    param_1[0x25] = *(long *)(param_2 + 0x128);
    param_1[0x24] = lVar7;
    param_1[0x23] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x120);
    pvVar2 = *(void **)(param_2 + 0x128);
    if (uVar1 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 0x119);
      *(char *)(param_1 + 0x23) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 006def30 to 006def37 has its CatchHandler @ 006defcc */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
      param_1[0x24] = uVar1;
      param_1[0x25] = (long)pvVar4;
      param_1[0x23] = uVar5 | 1;
    }
    memcpy(pvVar4,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[0x2a] = (long)plVar3;
  if ((*(byte *)(param_2 + 0x138) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x140);
    lVar6 = *(long *)(param_2 + 0x138);
    param_1[0x29] = *(long *)(param_2 + 0x148);
    param_1[0x28] = lVar7;
    param_1[0x27] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x140);
    pvVar2 = *(void **)(param_2 + 0x148);
    if (uVar1 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 0x139);
      *(char *)(param_1 + 0x27) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 006def38 to 006def43 has its CatchHandler @ 006def44 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
      param_1[0x27] = uVar5 | 1;
      param_1[0x28] = uVar1;
      param_1[0x29] = (long)pvVar4;
    }
    memcpy(pvVar4,pvVar2,uVar1 + 1);
  }
  param_1[0x2b] = (long)(PTR_DAT_047cfd88 + 0x10);
  param_1[0x2c] = *(long *)(param_2 + 0x160);
  return;
}


