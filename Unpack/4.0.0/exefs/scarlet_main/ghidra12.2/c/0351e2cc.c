/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351e2cc; name: FUN_0351e2cc
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0351e2cc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_047e2fd0;
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 != 0) {
    plVar3 = (long *)lVar5;
    do {
      if ((long *)lVar5 != plVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      lVar6 = *plVar3;
      *(long *)(param_1 + 0x40) = lVar6;
      if (plVar3 == (long *)0x0) {
        lVar5 = lVar6;
      }
      else {
        plVar4 = *(long **)(lVar5 + 8);
        *(undefined8 *)(lVar5 + 8) = 0;
        if (plVar4 != (long *)0x0) {
          iVar1 = (int)plVar4[9] + -1;
          *(int *)(plVar4 + 9) = iVar1;
          if (iVar1 == 0) {
            if (plVar4[2] == 0) {
              FUN_03518540(plVar4);
            }
            else {
              FUN_0351c44c(plVar4[2],plVar4);
              plVar4[2] = 0;
            }
            (**(code **)(*plVar4 + 0x50))(plVar4);
            (**(code **)(puVar2 + 0x30))(0,plVar4);
          }
          plVar4 = *(long **)(lVar5 + 8);
          if (plVar4 != (long *)0x0) {
            iVar1 = (int)plVar4[9] + -1;
            *(int *)(plVar4 + 9) = iVar1;
            if (iVar1 == 0) {
              if (plVar4[2] == 0) {
                FUN_03518540(plVar4);
              }
              else {
                FUN_0351c44c(plVar4[2],plVar4);
                plVar4[2] = 0;
              }
              (**(code **)(*plVar4 + 0x50))(plVar4);
              (**(code **)(puVar2 + 0x30))(0,plVar4);
            }
            *(undefined8 *)(lVar5 + 8) = 0;
          }
        }
        (**(code **)(puVar2 + 0x30))(0,plVar3);
        lVar5 = *(long *)(param_1 + 0x40);
      }
      plVar3 = (long *)lVar6;
    } while (lVar5 != 0);
  }
  return;
}


