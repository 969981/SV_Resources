/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a0210; name: FUN_034a0210
 */


void FUN_034a0210(char *param_1)

{
  size_t __n;
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (DAT_048afee0 == (char *)0x0 && DAT_048b0148 == 1) {
    if (param_1 == (char *)0x0) {
      DAT_048afee0 = (char *)0x0;
      for (lVar5 = DAT_048b0118; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
      }
    }
    else {
      __n = strlen(param_1);
      if ((__n != 0) &&
         (DAT_048afee0 = (char *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,__n + 2),
         DAT_048afee0 != (char *)0x0)) {
        memcpy(DAT_048afee0,param_1,__n);
        DAT_048afee8 = (uint)__n;
        do {
          DAT_048afee8 = DAT_048afee8 - 1;
          if (DAT_048afee8 == 0) {
            uVar2 = 0;
            goto LAB_034a02e0;
          }
        } while (param_1[DAT_048afee8] != '.');
        uVar2 = (ulong)DAT_048afee8;
LAB_034a02e0:
        memcpy(DAT_048afee0 + uVar2 + 1,param_1 + uVar2,__n - uVar2);
        DAT_048afee0[__n + 1] = '\0';
        DAT_048afee0[DAT_048afee8] = '0';
        for (lVar5 = DAT_048b0118; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
          plVar4 = &DAT_048b0118;
          do {
            lVar3 = *plVar4;
            plVar4 = (long *)(lVar3 + 0x20);
          } while (*(char *)(lVar3 + 0x46d) == '\0');
          if (*(long *)(lVar5 + 0x28) == *(long *)(lVar3 + 0x28)) {
            pcVar1 = param_1;
          }
          else {
            DAT_048afee0[DAT_048afee8] = DAT_048afee0[DAT_048afee8] + '\x01';
            pcVar1 = DAT_048afee0;
          }
          FUN_0349b478(lVar5,pcVar1);
        }
      }
    }
  }
  return;
}


