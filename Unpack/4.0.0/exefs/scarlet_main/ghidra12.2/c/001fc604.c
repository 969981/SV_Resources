/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001fc604; name: FUN_001fc604
 */


void FUN_001fc604(undefined4 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  void *__src;
  char cVar2;
  long *plVar3;
  void *__dest;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  plVar3 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 8) = plVar3;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar10 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar10;
    *(undefined8 *)(param_1 + 2) = uVar4;
    *(undefined1 *)(param_1 + 10) = 0;
    cVar2 = *(char *)(param_2 + 10);
  }
  else {
    uVar1 = *(ulong *)(param_2 + 4);
    __src = *(void **)(param_2 + 6);
    if (uVar1 < 0x17) {
      __dest = (void *)((long)param_1 + 9);
      *(char *)(param_1 + 2) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar8 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar8,1);
      *(ulong *)(param_1 + 4) = uVar1;
      *(void **)(param_1 + 6) = __dest;
      *(ulong *)(param_1 + 2) = uVar8 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
    *(undefined1 *)(param_1 + 10) = 0;
    cVar2 = *(char *)(param_2 + 10);
  }
  if (cVar2 != '\0') {
    puVar7 = (undefined8 *)(param_1 + 0xc);
    *puVar7 = 0;
    uVar4 = FUN_01cf7e20();
    puVar9 = (undefined8 *)(param_1 + 0xe);
    *puVar9 = 0;
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *puVar7 = puVar9;
    plVar3 = *(long **)(param_2 + 0xc);
    while (plVar3 != (long *)(param_2 + 0xe)) {
                    /* try { // try from 001fc6f8 to 001fc707 has its CatchHandler @ 001fc798 */
      FUN_01d0202c(puVar7,puVar9,plVar3 + 4,plVar3 + 4);
      plVar5 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar5 = plVar3 + 2;
        if (*(long **)*plVar5 == plVar3) {
          plVar3 = (long *)*plVar5;
        }
        else {
          do {
            lVar6 = *plVar5;
            plVar5 = (long *)(lVar6 + 0x10);
            plVar3 = (long *)*plVar5;
          } while (*plVar3 != lVar6);
        }
      }
      else {
        do {
          plVar3 = plVar5;
          plVar5 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
                    /* try { // try from 001fc760 to 001fc763 has its CatchHandler @ 001fc780 */
  FUN_00200584(param_1 + 0x14,param_2 + 0x14);
  return;
}


