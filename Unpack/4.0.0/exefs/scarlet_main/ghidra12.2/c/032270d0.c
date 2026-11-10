/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032270d0; name: FUN_032270d0
 */


void FUN_032270d0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  FILE *__stream;
  long lVar6;
  
  plVar2 = *(long **)PTR_DAT_047e5f68;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,4,param_1,param_4,param_2,param_3);
  }
  plVar2 = *(long **)PTR_DAT_047e4ed8;
  if (plVar2 == (long *)0x0) {
    printf("%s","ASSERT when the base system is not available:\n");
    __stream = *(FILE **)PTR_stdout_047cb860;
    fflush(__stream);
    printf("%s",param_4);
    fflush(__stream);
    putchar(10);
    uVar1 = fflush(__stream);
    uVar3 = (ulong)uVar1;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,4,param_1,param_4,param_2,param_3);
    param_4 = &DAT_04885000;
    if (DAT_04885578 != 0) goto LAB_032271b8;
  }
LAB_032271b4:
  uVar3 = FUN_03227230(uVar3);
LAB_032271b8:
  plVar2 = (long *)0x0;
  iVar5 = -1;
LAB_032271c0:
  if ((plVar2 == (long *)0x0) || (plVar2 = (long *)plVar2[0xc], plVar2 == (long *)0x0)) {
    iVar5 = iVar5 + 1;
    if (*(int *)(param_4[0xaf] + 0x40) <= iVar5) goto LAB_032271b4;
    plVar2 = (long *)**(undefined8 **)(*(long *)(param_4[0xaf] + 0x38) + (long)iVar5 * 8);
  }
  if ((plVar2 != (long *)0x0) && (lVar6 = (long)(int)plVar2[1], (int)plVar2[1] != 0)) {
    lVar4 = lVar6 * 0x10;
    do {
      lVar4 = lVar4 + -0x10;
      lVar6 = lVar6 + -1;
      uVar3 = 0;
      if (*(long **)(*plVar2 + lVar4) != (long *)0x0) {
        uVar3 = (**(code **)(**(long **)(*plVar2 + lVar4) + 0x28))();
      }
    } while (lVar6 != 0);
  }
  goto LAB_032271c0;
}


