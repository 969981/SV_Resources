/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0054507c; name: FUN_0054507c
 */


void FUN_0054507c(undefined1 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x20) = plVar3;
  if ((param_2[8] & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    *(undefined8 *)(param_1 + 8) = uVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x10);
    pvVar2 = *(void **)(param_2 + 0x18);
    if (uVar1 < 0x17) {
      puVar5 = param_1 + 9;
      param_1[8] = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      *(ulong *)(param_1 + 0x10) = uVar1;
      *(undefined1 **)(param_1 + 0x18) = puVar5;
      *(ulong *)(param_1 + 8) = uVar4 | 1;
    }
    memcpy(puVar5,pvVar2,uVar1 + 1);
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x48) = plVar3;
  if ((param_2[0x30] & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    *(undefined8 *)(param_1 + 0x30) = uVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x38);
    pvVar2 = *(void **)(param_2 + 0x40);
    if (uVar1 < 0x17) {
      puVar5 = param_1 + 0x31;
      param_1[0x30] = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 005452f4 to 005452fb has its CatchHandler @ 005453a4 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      *(ulong *)(param_1 + 0x38) = uVar1;
      *(undefined1 **)(param_1 + 0x40) = puVar5;
      *(ulong *)(param_1 + 0x30) = uVar4 | 1;
    }
    memcpy(puVar5,pvVar2,uVar1 + 1);
  }
  FUN_01d01ed8(param_1 + 0x50,param_2 + 0x50);
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x70) = plVar3;
  if ((param_2[0x58] & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x60);
    uVar6 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = uVar7;
    *(undefined8 *)(param_1 + 0x58) = uVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x60);
    pvVar2 = *(void **)(param_2 + 0x68);
    if (uVar1 < 0x17) {
      puVar5 = param_1 + 0x59;
      param_1[0x58] = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 005452fc to 00545303 has its CatchHandler @ 00545368 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      *(ulong *)(param_1 + 0x60) = uVar1;
      *(undefined1 **)(param_1 + 0x68) = puVar5;
      *(ulong *)(param_1 + 0x58) = uVar4 | 1;
    }
    memcpy(puVar5,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x90) = plVar3;
  if ((param_2[0x78] & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x80);
    uVar6 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x80) = uVar7;
    *(undefined8 *)(param_1 + 0x78) = uVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x80);
    pvVar2 = *(void **)(param_2 + 0x88);
    if (uVar1 < 0x17) {
      puVar5 = param_1 + 0x79;
      param_1[0x78] = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 00545304 to 0054530b has its CatchHandler @ 0054530c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      *(ulong *)(param_1 + 0x78) = uVar4 | 1;
      *(ulong *)(param_1 + 0x80) = uVar1;
      *(undefined1 **)(param_1 + 0x88) = puVar5;
    }
    memcpy(puVar5,pvVar2,uVar1 + 1);
  }
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  return;
}


