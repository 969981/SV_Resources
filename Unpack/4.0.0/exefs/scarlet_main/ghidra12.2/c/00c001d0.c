/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c001d0; name: FUN_00c001d0
 */


void FUN_00c001d0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  void *__dest;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  size_t __n;
  
  puVar7 = (undefined8 *)*param_1;
  if (puVar7 != (undefined8 *)0x0) goto LAB_00c00244;
  puVar7 = (undefined8 *)tpidr_el0;
  plVar4 = (long *)puVar7[6];
  if (plVar4 == (long *)0x0) {
    if ((DAT_04859438 & 1) == 0) goto LAB_00c0047c;
    goto LAB_00c003e8;
  }
  while( true ) {
    puVar7 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x18,8);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *param_1 = puVar7;
LAB_00c00244:
    puVar1 = (undefined4 *)puVar7[1];
    if (puVar1 != (undefined4 *)puVar7[2]) {
      *puVar1 = param_2;
      puVar1[1] = 0;
      *(undefined8 *)(puVar1 + 2) = param_3;
      puVar7[1] = puVar1 + 4;
      return;
    }
    param_1 = (undefined8 *)*puVar7;
    __n = (long)puVar1 - (long)param_1;
    uVar3 = ((long)__n >> 4) + 1;
    if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = (long)puVar7[2] - (long)param_1;
    uVar6 = lVar5 >> 3;
    if (uVar3 <= uVar6) {
      uVar3 = uVar6;
    }
    if (0x7fffffffffffffe < (ulong)(lVar5 >> 4)) {
      uVar3 = 0xfffffffffffffff;
    }
    lVar5 = tpidr_el0;
    if (uVar3 == 0) break;
    if (uVar3 >> 0x3c == 0) {
      plVar4 = *(long **)(lVar5 + 0x30);
      if (plVar4 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar4 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar3 << 4,8);
LAB_00c00304:
      puVar1 = (undefined4 *)((long)__dest + ((long)__n >> 4) * 0x10);
      *(undefined8 *)(puVar1 + 2) = param_3;
      *puVar1 = param_2;
      puVar1[1] = 0;
      if (0 < (long)__n) {
        memcpy(__dest,param_1,__n);
      }
      *puVar7 = __dest;
      puVar7[1] = puVar1 + 4;
      puVar7[2] = (void *)((long)__dest + uVar3 * 0x10);
      if (param_1 == (undefined8 *)0x0) {
        return;
      }
      plVar4 = *(long **)(lVar5 + 0x30);
      if (plVar4 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar4 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00c00398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x18))(plVar4,param_1,0,8);
        return;
      }
      FUN_00c48fe8(plVar4,param_1,0,8);
      return;
    }
    FUN_00c017d0();
LAB_00c0047c:
    iVar2 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar2 != 0) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_00c003e8:
    plVar4 = DAT_04859430;
    puVar7[6] = DAT_04859430;
  }
  __dest = (void *)0x0;
  goto LAB_00c00304;
}


