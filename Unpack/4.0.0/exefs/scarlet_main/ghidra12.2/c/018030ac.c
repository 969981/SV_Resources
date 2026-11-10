/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018030ac; name: FUN_018030ac
 */


void FUN_018030ac(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int local_48;
  int iStack_44;
  
  lVar3 = param_2[0xb];
  for (lVar2 = param_2[10]; lVar2 != lVar3; lVar2 = lVar2 + 0x1d0) {
    iVar4 = *(int *)(lVar2 + 0x150);
    FUN_00c845c0(param_1,0,lVar2,0);
    plVar6 = (long *)*param_2;
    if (plVar6 != (long *)0x0) {
      plVar7 = (long *)*plVar6;
      plVar6 = (long *)plVar6[1];
      iVar5 = *(int *)(lVar2 + 0x150);
      if ((plVar7 != plVar6) && (*plVar7 != *(long *)(lVar2 + 0x130))) {
        plVar8 = plVar7;
        do {
          if (plVar6 + -0x56 == plVar8) goto LAB_01803174;
          plVar7 = plVar8 + 0x56;
          plVar1 = plVar8 + 0x56;
          plVar8 = plVar7;
        } while (*plVar1 != *(long *)(lVar2 + 0x130));
      }
      if ((plVar6 != plVar7) && (plVar7 != (long *)0x0)) {
        if (((char)plVar7[4] == '\0') || ((1 < iVar4 - 1U || (iVar5 != 3)))) {
          if ((iVar4 == 0) && ((iVar5 - 1U < 3 && ((code *)plVar7[0x46] != (code *)0x0)))) {
            iStack_44 = 0;
            local_48 = iVar5;
            (*(code *)plVar7[0x46])(plVar7 + 0x4a,lVar2,param_2 + 0x1a,&iStack_44,&local_48);
          }
        }
        else if ((code *)plVar7[0x26] != (code *)0x0) {
          (*(code *)plVar7[0x26])(plVar7 + 0x2a,lVar2,param_2 + 0x1a);
        }
      }
    }
LAB_01803174:
  }
  lVar2 = param_2[3];
  lVar3 = param_2[4];
  do {
    if (lVar2 == lVar3) {
      return;
    }
    iVar4 = *(int *)(lVar2 + 0x150);
    FUN_00c845c0(param_1,0,lVar2,0);
    plVar6 = (long *)*param_2;
    if (plVar6 != (long *)0x0) {
      plVar7 = (long *)*plVar6;
      plVar6 = (long *)plVar6[1];
      iVar5 = *(int *)(lVar2 + 0x150);
      if ((plVar7 != plVar6) && (*plVar7 != *(long *)(lVar2 + 0x130))) {
        plVar8 = plVar7;
        do {
          if (plVar6 + -0x56 == plVar8) goto LAB_01803224;
          plVar7 = plVar8 + 0x56;
          plVar1 = plVar8 + 0x56;
          plVar8 = plVar7;
        } while (*plVar1 != *(long *)(lVar2 + 0x130));
      }
      if ((plVar6 != plVar7) && (plVar7 != (long *)0x0)) {
        if (((char)plVar7[4] == '\0') || ((iVar4 != 1 || (iVar5 != 3)))) {
          if ((iVar4 == 0) && ((iVar5 - 1U < 3 && ((code *)plVar7[0x46] != (code *)0x0)))) {
            iStack_44 = 0;
            local_48 = iVar5;
            (*(code *)plVar7[0x46])(plVar7 + 0x4a,lVar2,param_2 + 0x1a,&iStack_44,&local_48);
          }
        }
        else if ((code *)plVar7[0x26] != (code *)0x0) {
          (*(code *)plVar7[0x26])(plVar7 + 0x2a,lVar2,param_2 + 0x1a);
        }
      }
    }
LAB_01803224:
    lVar2 = lVar2 + 0x1d0;
  } while( true );
}


