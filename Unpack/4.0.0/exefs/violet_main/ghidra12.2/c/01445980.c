/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01445980; name: FUN_01445980
 */


void FUN_01445980(long param_1,char *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  iVar1 = strcmp(*(char **)(param_3 + 0x30),PTR_DAT_047e1560);
  if (iVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    plVar4 = (long *)(lVar5 + 0x88);
    plVar3 = *(long **)(lVar5 + 0x90);
    if (plVar4 != plVar3) {
      if (*param_2 == '\0') {
        do {
          if ((char)plVar3[2] == '\0') goto LAB_01445a14;
          plVar3 = (long *)plVar3[1];
        } while (plVar4 != plVar3);
      }
      else {
        do {
          if (((char)plVar3[2] != '\0') && (*(int *)((long)plVar3 + 0x14) == *(int *)(param_2 + 4)))
          {
LAB_01445a14:
            *(long *)(*plVar3 + 8) = plVar3[1];
            *(long *)plVar3[1] = *plVar3;
            *(long *)(lVar5 + 0x98) = *(long *)(lVar5 + 0x98) + -1;
            FUN_01445aac(plVar3 + 2);
            plVar4 = *(long **)(lVar5 + 0xa0);
            uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
            if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01445a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar4 + 0x18))(plVar4,plVar3,0x40,8);
              return;
            }
            FUN_00c48fe8(plVar4,plVar3,0x40,8);
            return;
          }
          plVar3 = (long *)plVar3[1];
        } while (plVar4 != plVar3);
      }
    }
  }
  return;
}


