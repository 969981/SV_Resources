/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0068346c; name: FUN_0068346c
 */


void FUN_0068346c(int *param_1,int *param_2)

{
  ulong uVar1;
  void *__src;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  void *__dest;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (*param_1 == 3) {
    plVar3 = *(long **)(param_1 + 0xc);
    if (plVar3 != (long *)0x0) {
      if (plVar3 == (long *)(param_1 + 4)) {
        pcVar5 = *(code **)(*plVar3 + 0x10);
      }
      else {
        pcVar5 = *(code **)(*plVar3 + 0x18);
      }
      (*pcVar5)();
    }
  }
  else if ((*param_1 == 1) && ((*(byte *)(param_1 + 4) & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 10) + 0x18))
              (*(long **)(param_1 + 10),*(undefined8 *)(param_1 + 8),
               *(ulong *)(param_1 + 4) & 0xfffffffffffffffe,1);
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
                    /* try { // try from 00683504 to 00683507 has its CatchHandler @ 00683664 */
  FUN_01d0e1a8(param_1 + 0x1a,param_2 + 0x1a);
  iVar2 = *param_1;
  if (iVar2 == 3) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    if (param_1 != param_2) {
      plVar3 = *(long **)(param_2 + 0xc);
      if (plVar3 == (long *)0x0) {
        param_1[0xc] = 0;
        param_1[0xd] = 0;
      }
      else if (plVar3 == (long *)(param_2 + 4)) {
        *(int **)(param_1 + 0xc) = param_1 + 4;
        (**(code **)(**(long **)(param_2 + 0xc) + 0x28))();
      }
      else {
        uVar4 = (**(code **)(*plVar3 + 0x38))();
        *(undefined8 *)(param_1 + 0xc) = uVar4;
      }
    }
    uVar7 = *(undefined8 *)(param_2 + 0x12);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x12) = uVar7;
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    return;
  }
  if (iVar2 == 2) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    return;
  }
  if (iVar2 == 1) {
    plVar3 = (long *)FUN_01cf7e20();
    *(long **)(param_1 + 10) = plVar3;
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 6);
      __src = *(void **)(param_2 + 8);
      if (uVar1 < 0x17) {
        __dest = (void *)((long)param_1 + 0x11);
        *(char *)(param_1 + 4) = (char)((int)uVar1 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 0068365c to 00683663 has its CatchHandler @ 00683664 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar6,1);
        *(ulong *)(param_1 + 6) = uVar1;
        *(void **)(param_1 + 8) = __dest;
        *(ulong *)(param_1 + 4) = uVar6 | 1;
      }
      memcpy(__dest,__src,uVar1 + 1);
      return;
    }
    uVar7 = *(undefined8 *)(param_2 + 6);
    uVar4 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 6) = uVar7;
    *(undefined8 *)(param_1 + 4) = uVar4;
  }
  return;
}


