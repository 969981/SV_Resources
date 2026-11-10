/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351dc28; name: FUN_0351dc28
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0351dc28(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long local_48;
  
  *param_1 = &PTR_LAB_047c7a08;
  puVar4 = PTR_DAT_047e2fd0;
  lVar12 = param_1[8];
  if (lVar12 != 0) {
    plVar5 = (long *)lVar12;
    do {
      if ((long *)lVar12 != plVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      lVar13 = *plVar5;
      param_1[8] = lVar13;
      if (plVar5 == (long *)0x0) {
        lVar12 = lVar13;
      }
      else {
        plVar11 = *(long **)(lVar12 + 8);
        *(undefined8 *)(lVar12 + 8) = 0;
        if (plVar11 != (long *)0x0) {
          iVar3 = (int)plVar11[9] + -1;
          *(int *)(plVar11 + 9) = iVar3;
          if (iVar3 == 0) {
            if (plVar11[2] == 0) {
              FUN_03518540(plVar11);
            }
            else {
              FUN_0351c44c(plVar11[2],plVar11);
              plVar11[2] = 0;
            }
            (**(code **)(*plVar11 + 0x50))(plVar11);
            (**(code **)(puVar4 + 0x30))(0,plVar11);
          }
          plVar11 = *(long **)(lVar12 + 8);
          if (plVar11 != (long *)0x0) {
            iVar3 = (int)plVar11[9] + -1;
            *(int *)(plVar11 + 9) = iVar3;
            if (iVar3 == 0) {
              if (plVar11[2] == 0) {
                FUN_03518540(plVar11);
              }
              else {
                FUN_0351c44c(plVar11[2],plVar11);
                plVar11[2] = 0;
              }
              (**(code **)(*plVar11 + 0x50))(plVar11);
              (**(code **)(puVar4 + 0x30))(0,plVar11);
            }
            *(undefined8 *)(lVar12 + 8) = 0;
          }
        }
        (**(code **)(puVar4 + 0x30))(0,plVar5);
        lVar12 = param_1[8];
      }
      plVar5 = (long *)lVar13;
    } while (lVar12 != 0);
  }
  lVar12 = *(long *)PTR_DAT_047e7050;
  plVar5 = *(long **)(lVar12 + 0x40);
  if (plVar5 != (long *)0x0) {
    plVar11 = (long *)0x0;
    do {
      plVar2 = (long *)*plVar5;
      if ((undefined8 *)plVar5[1] == param_1) {
        plVar1 = (long *)(lVar12 + 0x40);
        if (*(long **)(lVar12 + 0x40) != plVar5) {
          plVar1 = plVar11;
        }
        *plVar1 = (long)plVar2;
        if (*(long **)(lVar12 + 0x48) == plVar5) {
          *(long **)(lVar12 + 0x48) = plVar11;
        }
        if ((plVar5 < *(long **)(lVar12 + 0x58)) ||
           (*(long **)(lVar12 + 0x58) + (ulong)*(uint *)(lVar12 + 0x60) * 4 <= plVar5)) {
          (**(code **)(puVar4 + 0x30))(0);
        }
        else {
          *plVar5 = *(long *)(lVar12 + 0x50);
          *(long **)(lVar12 + 0x50) = plVar5;
        }
        *(int *)(lVar12 + 100) = *(int *)(lVar12 + 100) + -1;
      }
      else {
        plVar11 = plVar5;
      }
      plVar5 = plVar2;
    } while (plVar2 != (long *)0x0);
  }
  puVar9 = (undefined8 *)param_1[6];
  param_1[8] = 0;
  if (puVar9 == (undefined8 *)0x0) goto LAB_0351de90;
  iVar3 = *(int *)(puVar9 + 0x10);
  uVar6 = iVar3 - 1;
  *(uint *)(puVar9 + 0x10) = uVar6;
  if (iVar3 == 0 || uVar6 == 0) {
    if (uVar6 == 0) {
LAB_0351de24:
      lVar12 = puVar9[5];
      if (lVar12 != 0) {
        uVar6 = ((uint)lVar12 ^ (uint)lVar12 >> 0x10) * -0x7a143595;
        uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
        local_48 = lVar12;
        FUN_034c6294(&DAT_048b02b8,&local_48,uVar6 ^ uVar6 >> 0x10);
        uVar6 = *(uint *)(puVar9 + 0x10);
      }
      goto LAB_0351de68;
    }
  }
  else if (uVar6 < 2) {
    if (*(char *)((long)puVar9 + 0x84) != '\0') goto LAB_0351de24;
LAB_0351de68:
    if (uVar6 == 0) {
      (**(code **)*puVar9)(puVar9);
      (**(code **)(puVar4 + 0x30))(4,puVar9);
    }
  }
  param_1[6] = 0;
LAB_0351de90:
  param_1[0xb] = PTR_DAT_047e7508 + 0x10;
  FUN_0344b12c(param_1 + 0xb);
  piVar8 = (int *)param_1[3];
  if ((piVar8 == (int *)0x0) || (iVar3 = *piVar8, *piVar8 = iVar3 + -1, iVar3 + -1 != 0)) {
    return;
  }
  uVar7 = (ulong)(uint)piVar8[1];
  if (piVar8[1] != 0) {
    uVar10 = 0;
    plVar5 = (long *)(piVar8 + 4);
    do {
      if (*plVar5 != 0) {
        (**(code **)(puVar4 + 0x30))(0);
        uVar7 = (ulong)(uint)piVar8[1];
      }
      uVar10 = uVar10 + 1;
      plVar5 = plVar5 + 4;
    } while (uVar10 < uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x0351df30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar4 + 0x30))(0,piVar8);
  return;
}


