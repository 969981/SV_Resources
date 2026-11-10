/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005c21bc; name: FUN_005c21bc
 */


void FUN_005c21bc(long param_1,long param_2)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_027c2388();
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x80) = plVar3;
  if ((*(byte *)(param_2 + 0x68) & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x70);
    uVar6 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = uVar7;
    *(undefined8 *)(param_1 + 0x68) = uVar6;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x70);
    pvVar2 = *(void **)(param_2 + 0x78);
    if (uVar1 < 0x17) {
      pvVar5 = (void *)(param_1 + 0x69);
      *(char *)(param_1 + 0x68) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 005c2304 to 005c230b has its CatchHandler @ 005c2340 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
      *(ulong *)(param_1 + 0x70) = uVar1;
      *(void **)(param_1 + 0x78) = pvVar5;
      *(ulong *)(param_1 + 0x68) = uVar4 | 1;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0xa0) = plVar3;
  if ((*(byte *)(param_2 + 0x88) & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x90);
    uVar6 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = uVar7;
    *(undefined8 *)(param_1 + 0x88) = uVar6;
    return;
  }
  uVar1 = *(ulong *)(param_2 + 0x90);
  pvVar2 = *(void **)(param_2 + 0x98);
  if (uVar1 < 0x17) {
    pvVar5 = (void *)(param_1 + 0x89);
    *(char *)(param_1 + 0x88) = (char)((int)uVar1 << 1);
  }
  else {
    if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 005c230c to 005c2313 has its CatchHandler @ 005c2314 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    uVar4 = uVar1 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
    *(ulong *)(param_1 + 0x88) = uVar4 | 1;
    *(ulong *)(param_1 + 0x90) = uVar1;
    *(void **)(param_1 + 0x98) = pvVar5;
  }
  memcpy(pvVar5,pvVar2,uVar1 + 1);
  return;
}


