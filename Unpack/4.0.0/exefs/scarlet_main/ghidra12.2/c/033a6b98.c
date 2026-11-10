/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033a6b98; name: FUN_033a6b98
 */


undefined8 FUN_033a6b98(long param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  long lVar5;
  void *pvVar6;
  size_t sVar7;
  
  if (*(int *)(param_1 + 200) != 2) goto LAB_033a6c30;
  do {
    if (*(int *)(param_1 + 0xc0) < 1) {
      pvVar6 = (void *)0x0;
      lVar5 = 0;
    }
    else {
      lVar1 = *(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x80);
      lVar5 = lVar1 + (*(int **)(param_1 + 0xb8))[1];
      pvVar6 = (void *)(lVar1 + **(int **)(param_1 + 0xb8));
    }
    sVar7 = lVar5 - (long)pvVar6;
    if (param_2 == (char *)0x0) {
      if (sVar7 == 0) {
        return 0x80040200;
      }
    }
    else {
      sVar4 = strlen(param_2);
      if ((sVar4 == sVar7) && (iVar2 = memcmp(pvVar6,param_2,sVar7), iVar2 == 0)) {
        return 0x80040200;
      }
    }
LAB_033a6c30:
    while( true ) {
      uVar3 = FUN_033b2ad0(param_1);
      if ((uVar3 & 0xfffffffe) == 6) {
        return 0x80040200;
      }
      if (uVar3 == 3) break;
      if (uVar3 == 1) {
        return 0;
      }
      if (uVar3 == 2) {
        if (*(int *)(param_1 + 0xc0) < 1) {
          pvVar6 = (void *)0x0;
          lVar5 = 0;
        }
        else {
          lVar1 = *(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x80);
          lVar5 = lVar1 + (*(int **)(param_1 + 0xb8))[1];
          pvVar6 = (void *)(lVar1 + **(int **)(param_1 + 0xb8));
        }
        sVar7 = lVar5 - (long)pvVar6;
        if (param_2 == (char *)0x0) {
          if (sVar7 == 0) {
            return 0x80040200;
          }
        }
        else {
          sVar4 = strlen(param_2);
          if ((sVar4 == sVar7) && (iVar2 = memcmp(pvVar6,param_2,sVar7), iVar2 == 0)) {
            return 0x80040200;
          }
        }
        return 0;
      }
    }
  } while( true );
}


