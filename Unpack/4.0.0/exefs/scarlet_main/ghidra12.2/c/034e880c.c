/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e880c; name: FUN_034e880c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_034e880c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  
  nn::os::LockMutex((MutexType *)&DAT_048b0788);
  puVar2 = PTR_DAT_047e71d0;
  puVar1 = PTR_DAT_047e2fd0;
  plVar4 = DAT_048b0760;
  do {
    DAT_048b0760 = plVar4;
    if (_DAT_048b0784 == 0) {
      nn::os::UnlockMutex((MutexType *)&DAT_048b0788);
      return;
    }
    plVar7 = (long *)plVar4[1];
    if (*(int *)(plVar4 + 2) == 4) {
      if (*(int *)((long)plVar4 + 0x14) == 1) {
        *(uint *)((long)plVar7 + 699) = *(uint *)((long)plVar7 + 699) & 0xfffffeff | 0x800;
        goto LAB_034e88e0;
      }
LAB_034e88ec:
      plVar8 = (long *)plVar4[1];
      plVar7 = (long *)&DAT_048b0740;
      plVar6 = (long *)0x0;
      do {
        plVar5 = plVar6;
        plVar6 = (long *)*plVar7;
        plVar7 = plVar6 + 0x3c;
      } while (plVar6 != (long *)0x0 && plVar8 != plVar6);
      if (plVar6 != (long *)0x0) {
        plVar7 = (long *)&DAT_048b0740;
        if (DAT_048b0740 != plVar6) {
          plVar7 = plVar5 + 0x3c;
        }
        *plVar7 = plVar6[0x3c];
        if (DAT_048b0738 == plVar6) {
          DAT_048b0738 = plVar5;
        }
        DAT_048b0730 = DAT_048b0730 + -1;
        plVar8 = (long *)plVar4[1];
      }
      if (*(long **)puVar2 != (long *)0x0) {
        plVar7 = (long *)0x0;
        plVar4 = *(long **)puVar2;
        do {
          plVar6 = (long *)*plVar4;
          if ((long *)plVar4[1] == plVar8) {
            plVar5 = (long *)puVar2;
            if (*(long **)puVar2 != plVar4) {
              plVar5 = plVar7;
            }
            *plVar5 = (long)plVar6;
            if (*(long **)(puVar2 + 8) == plVar4) {
              *(long **)(puVar2 + 8) = plVar7;
            }
            if ((plVar4 < *(long **)(puVar2 + 0x18)) ||
               (*(long **)(puVar2 + 0x18) + (ulong)*(uint *)(puVar2 + 0x20) * 3 <= plVar4)) {
              (**(code **)(puVar1 + 0x30))(5);
            }
            else {
              *plVar4 = *(long *)(puVar2 + 0x10);
              *(long **)(puVar2 + 0x10) = plVar4;
            }
            *(int *)(puVar2 + 0x24) = *(int *)(puVar2 + 0x24) + -1;
          }
          else {
            plVar7 = plVar4;
          }
          plVar4 = plVar6;
        } while (plVar6 != (long *)0x0);
      }
      (**(code **)(*plVar8 + 0x20))(plVar8,0);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))(plVar8);
        (**(code **)(puVar1 + 0x30))(0,plVar8);
      }
    }
    else if (*(int *)(plVar4 + 2) == 3) {
      uVar9 = *(undefined4 *)(plVar4 + 3);
      *(uint *)((long)plVar7 + 699) = *(uint *)((long)plVar7 + 699) | 0x100;
      (**(code **)(*plVar7 + 0x80))(plVar7);
      (**(code **)(*plVar7 + 0x30))(uVar9,plVar7);
LAB_034e88e0:
      if (*(int *)(plVar4 + 2) == 4) goto LAB_034e88ec;
    }
    plVar4 = DAT_048b0760;
    if (DAT_048b0760 != (long *)0x0) {
      if (DAT_048b0768 == DAT_048b0760) {
        DAT_048b0768 = (long *)0x0;
      }
      if ((DAT_048b0760 < DAT_048b0778) || (DAT_048b0778 + (ulong)DAT_048b0780 * 4 <= DAT_048b0760))
      {
        DAT_048b0760 = (long *)*DAT_048b0760;
        (**(code **)(puVar1 + 0x30))(0,plVar4);
      }
      else {
        lVar3 = *DAT_048b0760;
        *DAT_048b0760 = (long)DAT_048b0770;
        DAT_048b0760 = (long *)lVar3;
        DAT_048b0770 = plVar4;
      }
      _DAT_048b0784 = _DAT_048b0784 + -1;
      plVar4 = DAT_048b0760;
    }
  } while( true );
}


