/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006ce8bc; name: FUN_006ce8bc
 */


void FUN_006ce8bc(long *param_1,long param_2)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  *param_1 = (long)(PTR_DAT_047cfbf8 + 0x10);
  plVar3 = (long *)FUN_01cf7e20();
  param_1[4] = (long)plVar3;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x10);
    lVar6 = *(long *)(param_2 + 8);
    param_1[3] = *(long *)(param_2 + 0x18);
    param_1[2] = lVar7;
    param_1[1] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x10);
    pvVar2 = *(void **)(param_2 + 0x18);
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 9);
      *(char *)(param_1 + 1) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      param_1[2] = uVar1;
      param_1[3] = (long)pvVar5;
      param_1[1] = uVar4 | 1;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[8] = (long)plVar3;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x30);
    lVar6 = *(long *)(param_2 + 0x28);
    param_1[7] = *(long *)(param_2 + 0x38);
    param_1[6] = lVar7;
    param_1[5] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x30);
    pvVar2 = *(void **)(param_2 + 0x38);
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 0x29);
      *(char *)(param_1 + 5) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 006cebd0 to 006cebd7 has its CatchHandler @ 006cecac */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      param_1[6] = uVar1;
      param_1[7] = (long)pvVar5;
      param_1[5] = uVar4 | 1;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  plVar3 = (long *)FUN_01cf7e20();
  param_1[0xd] = (long)plVar3;
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x58);
    lVar6 = *(long *)(param_2 + 0x50);
    param_1[0xc] = *(long *)(param_2 + 0x60);
    param_1[0xb] = lVar7;
    param_1[10] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x58);
    pvVar2 = *(void **)(param_2 + 0x60);
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 0x51);
      *(char *)(param_1 + 10) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 006cebd8 to 006cebdf has its CatchHandler @ 006cec78 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      param_1[0xb] = uVar1;
      param_1[0xc] = (long)pvVar5;
      param_1[10] = uVar4 | 1;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[0x11] = (long)plVar3;
  if ((*(byte *)(param_2 + 0x70) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x78);
    lVar6 = *(long *)(param_2 + 0x70);
    param_1[0x10] = *(long *)(param_2 + 0x80);
    param_1[0xf] = lVar7;
    param_1[0xe] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x78);
    pvVar2 = *(void **)(param_2 + 0x80);
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 0x71);
      *(char *)(param_1 + 0xe) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 006cebe0 to 006cebe7 has its CatchHandler @ 006cec44 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      param_1[0xf] = uVar1;
      param_1[0x10] = (long)pvVar5;
      param_1[0xe] = uVar4 | 1;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  param_1[0x15] = (long)plVar3;
  if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
    lVar7 = *(long *)(param_2 + 0x98);
    lVar6 = *(long *)(param_2 + 0x90);
    param_1[0x14] = *(long *)(param_2 + 0xa0);
    param_1[0x13] = lVar7;
    param_1[0x12] = lVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x98);
    pvVar2 = *(void **)(param_2 + 0xa0);
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 0x91);
      *(char *)(param_1 + 0x12) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 006cebe8 to 006cebef has its CatchHandler @ 006cebf0 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      param_1[0x12] = uVar4 | 1;
      param_1[0x13] = uVar1;
      param_1[0x14] = (long)pvVar5;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  lVar7 = *(long *)(param_2 + 0xb8);
  lVar6 = *(long *)(param_2 + 0xb0);
  lVar8 = *(long *)(param_2 + 0xc0);
  lVar10 = *(long *)(param_2 + 0xd8);
  lVar9 = *(long *)(param_2 + 0xd0);
  param_1[0x19] = *(long *)(param_2 + 200);
  param_1[0x18] = lVar8;
  param_1[0x1b] = lVar10;
  param_1[0x1a] = lVar9;
  param_1[0x17] = lVar7;
  param_1[0x16] = lVar6;
  lVar7 = *(long *)(param_2 + 0xe8);
  lVar6 = *(long *)(param_2 + 0xe0);
  lVar9 = *(long *)(param_2 + 0xf8);
  lVar8 = *(long *)(param_2 + 0xf0);
  lVar11 = *(long *)(param_2 + 0x108);
  lVar10 = *(long *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x110);
  param_1[0x1f] = lVar9;
  param_1[0x1e] = lVar8;
  param_1[0x21] = lVar11;
  param_1[0x20] = lVar10;
  param_1[0x1d] = lVar7;
  param_1[0x1c] = lVar6;
  return;
}


