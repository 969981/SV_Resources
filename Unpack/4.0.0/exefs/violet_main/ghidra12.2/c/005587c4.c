/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005587c4; name: FUN_005587c4
 */


void FUN_005587c4(undefined1 *param_1,undefined1 *param_2)

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
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x40) = plVar3;
  if ((param_2[0x28] & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x30);
    pvVar2 = *(void **)(param_2 + 0x38);
    if (uVar1 < 0x17) {
      puVar5 = param_1 + 0x29;
      param_1[0x28] = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 00558a3c to 00558a43 has its CatchHandler @ 00558ad4 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      *(ulong *)(param_1 + 0x30) = uVar1;
      *(undefined1 **)(param_1 + 0x38) = puVar5;
      *(ulong *)(param_1 + 0x28) = uVar4 | 1;
    }
    memcpy(puVar5,pvVar2,uVar1 + 1);
  }
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_2 + 0x48);
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x68) = plVar3;
  if ((param_2[0x50] & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x58);
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uVar7;
    *(undefined8 *)(param_1 + 0x50) = uVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x58);
    pvVar2 = *(void **)(param_2 + 0x60);
    if (uVar1 < 0x17) {
      puVar5 = param_1 + 0x51;
      param_1[0x50] = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 00558a44 to 00558a4b has its CatchHandler @ 00558aa0 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      *(ulong *)(param_1 + 0x58) = uVar1;
      *(undefined1 **)(param_1 + 0x60) = puVar5;
      *(ulong *)(param_1 + 0x50) = uVar4 | 1;
    }
    memcpy(puVar5,pvVar2,uVar1 + 1);
  }
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x90) = plVar3;
  if ((param_2[0x78] & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x80);
    uVar6 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x80) = uVar7;
    *(undefined8 *)(param_1 + 0x78) = uVar6;
    return;
  }
  uVar1 = *(ulong *)(param_2 + 0x80);
  pvVar2 = *(void **)(param_2 + 0x88);
  if (uVar1 < 0x17) {
    puVar5 = param_1 + 0x79;
    param_1[0x78] = (char)((int)uVar1 << 1);
  }
  else {
    if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 00558a4c to 00558a53 has its CatchHandler @ 00558a54 */
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
  return;
}


