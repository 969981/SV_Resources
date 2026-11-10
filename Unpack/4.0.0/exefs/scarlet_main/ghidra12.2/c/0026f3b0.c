/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026f3b0; name: FUN_0026f3b0
 */


void FUN_0026f3b0(long *param_1,long param_2,byte *param_3,undefined8 *param_4)

{
  ulong uVar1;
  void *__src;
  long *plVar2;
  long lVar3;
  void *__dest;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  plVar2 = *(long **)(param_2 + 0x10);
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0x60,8);
  *param_1 = lVar3;
  param_1[1] = (long)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 2) = 0;
  plVar2 = (long *)FUN_01cf7e20();
  *(long **)(lVar3 + 0x38) = plVar2;
  if ((*param_3 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_3 + 8);
    uVar6 = *(undefined8 *)param_3;
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(lVar3 + 0x28) = uVar7;
    *(undefined8 *)(lVar3 + 0x20) = uVar6;
  }
  else {
    uVar1 = *(ulong *)(param_3 + 8);
    __src = *(void **)(param_3 + 0x10);
    if (uVar1 < 0x17) {
      __dest = (void *)(lVar3 + 0x21);
      *(char *)(lVar3 + 0x20) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 0026f4d0 to 0026f4d7 has its CatchHandler @ 0026f4d8 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
      *(ulong *)(lVar3 + 0x28) = uVar1;
      *(void **)(lVar3 + 0x30) = __dest;
      *(ulong *)(lVar3 + 0x20) = uVar5 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  *(undefined8 *)(lVar3 + 0x40) = *param_4;
  uVar6 = param_4[1];
  *(undefined8 *)(lVar3 + 0x50) = param_4[2];
  *(undefined8 *)(lVar3 + 0x48) = uVar6;
  lVar4 = param_4[3];
  plVar2 = (long *)(lVar3 + 0x48);
  *(long *)(lVar3 + 0x58) = lVar4;
  if (lVar4 == 0) {
    *(long **)(lVar3 + 0x40) = plVar2;
  }
  else {
    *(long **)(*plVar2 + 0x10) = plVar2;
    param_4[1] = 0;
    *param_4 = param_4 + 1;
    param_4[3] = 0;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


