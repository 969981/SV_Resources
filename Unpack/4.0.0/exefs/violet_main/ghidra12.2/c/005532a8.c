/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005532a8; name: FUN_005532a8
 */


void FUN_005532a8(undefined1 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x20) = plVar3;
  if ((param_2[8] & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    uVar4 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    *(undefined8 *)(param_1 + 8) = uVar4;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x10);
    pvVar2 = *(void **)(param_2 + 0x18);
    if (uVar1 < 0x17) {
      puVar6 = param_1 + 9;
      param_1[8] = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      puVar6 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
      *(ulong *)(param_1 + 0x10) = uVar1;
      *(undefined1 **)(param_1 + 0x18) = puVar6;
      *(ulong *)(param_1 + 8) = uVar5 | 1;
    }
    memcpy(puVar6,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x40) = plVar3;
  if ((param_2[0x28] & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    *(undefined8 *)(param_1 + 0x28) = uVar4;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x30);
    pvVar2 = *(void **)(param_2 + 0x38);
    if (uVar1 < 0x17) {
      puVar6 = param_1 + 0x29;
      param_1[0x28] = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 00553490 to 00553497 has its CatchHandler @ 005534e4 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      puVar6 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
      *(ulong *)(param_1 + 0x30) = uVar1;
      *(undefined1 **)(param_1 + 0x38) = puVar6;
      *(ulong *)(param_1 + 0x28) = uVar5 | 1;
    }
    memcpy(puVar6,pvVar2,uVar1 + 1);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x70) = plVar3;
  if ((param_2[0x58] & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x60);
    uVar4 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = uVar7;
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    return;
  }
  uVar1 = *(ulong *)(param_2 + 0x60);
  pvVar2 = *(void **)(param_2 + 0x68);
  if (uVar1 < 0x17) {
    puVar6 = param_1 + 0x59;
    param_1[0x58] = (char)((int)uVar1 << 1);
  }
  else {
    if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 00553498 to 0055349f has its CatchHandler @ 005534a0 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
    puVar6 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
    *(ulong *)(param_1 + 0x58) = uVar5 | 1;
    *(ulong *)(param_1 + 0x60) = uVar1;
    *(undefined1 **)(param_1 + 0x68) = puVar6;
  }
  memcpy(puVar6,pvVar2,uVar1 + 1);
  return;
}


