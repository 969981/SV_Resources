/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03226dd0; name: FUN_03226dd0
 */


int FUN_03226dd0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  FILE *__stream;
  long lVar5;
  
  plVar2 = *(long **)PTR_DAT_047e5f68;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,2,param_1,param_2,param_3,param_4);
  }
  plVar2 = *(long **)PTR_DAT_047e4ed8;
  if (plVar2 == (long *)0x0) {
    printf("%s","ASSERT when the base system is not available:\n");
    __stream = *(FILE **)PTR_stdout_047cb860;
    fflush(__stream);
    printf("%s",param_2);
    fflush(__stream);
    putchar(10);
    fflush(__stream);
    iVar1 = 1;
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,2,param_1,param_2,param_3,param_4);
    if ((iVar1 != 0) && (DAT_04885578 != 0)) {
      plVar2 = (long *)0x0;
      iVar4 = -1;
      do {
        if ((plVar2 == (long *)0x0) || (plVar2 = (long *)plVar2[0xc], plVar2 == (long *)0x0)) {
          iVar4 = iVar4 + 1;
          if (*(int *)(DAT_04885578 + 0x40) <= iVar4) {
            return iVar1;
          }
          plVar2 = (long *)**(undefined8 **)(*(long *)(DAT_04885578 + 0x38) + (long)iVar4 * 8);
        }
        if ((plVar2 != (long *)0x0) && (lVar5 = (long)(int)plVar2[1], (int)plVar2[1] != 0)) {
          lVar3 = lVar5 * 0x10;
          do {
            lVar3 = lVar3 + -0x10;
            lVar5 = lVar5 + -1;
            if (*(long **)(*plVar2 + lVar3) != (long *)0x0) {
              (**(code **)(**(long **)(*plVar2 + lVar3) + 0x28))();
            }
          } while (lVar5 != 0);
        }
      } while( true );
    }
  }
  return iVar1;
}


