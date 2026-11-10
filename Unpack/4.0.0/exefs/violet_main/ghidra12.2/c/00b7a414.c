/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b7a414; name: FUN_00b7a414
 */


string * FUN_00b7a414(long param_1,string *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  string *this;
  void *__dest;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  size_t __n;
  
  lVar4 = tpidr_el0;
  plVar5 = *(long **)(lVar4 + 0x30);
  if (plVar5 == (long *)0x0) {
    if ((DAT_04859438 & 1) == 0) goto LAB_00b7a678;
    goto LAB_00b7a5e8;
  }
  while( true ) {
    this = (string *)(**(code **)(*plVar5 + 0x10))(plVar5,0x18,8);
    std::string::string(this,param_2);
    puVar1 = *(undefined8 **)(param_1 + 0x98);
    if (puVar1 != *(undefined8 **)(param_1 + 0xa0)) {
      *puVar1 = this;
      *(undefined8 **)(param_1 + 0x98) = puVar1 + 1;
      return this;
    }
    param_2 = *(string **)(param_1 + 0x90);
    __n = (long)puVar1 - (long)param_2;
    uVar3 = ((long)__n >> 3) + 1;
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = (long)*(undefined8 **)(param_1 + 0xa0) - (long)param_2;
    uVar7 = lVar6 >> 2;
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    if (0xffffffffffffffe < (ulong)(lVar6 >> 3)) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 == 0) break;
    if (uVar3 >> 0x3d == 0) {
      plVar5 = *(long **)(lVar4 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      __dest = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar3 << 3,8);
      goto LAB_00b7a518;
    }
    FUN_01f6e360();
LAB_00b7a678:
    iVar2 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar2 != 0) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_00b7a5e8:
    plVar5 = DAT_04859430;
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  __dest = (void *)0x0;
LAB_00b7a518:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = this;
  if (0 < (long)__n) {
    memcpy(__dest,param_2,__n);
  }
  *(void **)(param_1 + 0x90) = __dest;
  *(undefined8 **)(param_1 + 0x98) = puVar1 + 1;
  *(void **)(param_1 + 0xa0) = (void *)((long)__dest + uVar3 * 8);
  if (param_2 == (string *)0x0) {
    return this;
  }
  plVar5 = *(long **)(lVar4 + 0x30);
  if (plVar5 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar5 = DAT_04859430;
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2,0,8);
    return this;
  }
  FUN_00c48fe8(plVar5,param_2,0,8);
  return this;
}


