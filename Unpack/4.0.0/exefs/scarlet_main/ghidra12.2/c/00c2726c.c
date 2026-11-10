/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c2726c; name: FUN_00c2726c
 */


undefined8 FUN_00c2726c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)*param_1;
  do {
    if (plVar5 == param_1 + 1) {
      return 1;
    }
    if ((*(byte *)(plVar5 + 6) & 0xfe) == 10) {
      if (*(char *)((long)plVar5 + 0x31) == '\0') {
        if ((*(byte *)((long)plVar5 + 0x32) & 1) == 0) {
          if ((*(byte *)((long)plVar5 + 0x32) >> 4 & 1) == 0) {
            pcVar3 = *(code **)(*(long *)plVar5[5] + 0x40);
          }
          else {
            pcVar3 = *(code **)(*(long *)plVar5[5] + 0x48);
          }
          uVar1 = (*pcVar3)();
          if ((uVar1 & 1) == 0) {
            return 0;
          }
        }
      }
      else {
        lVar2 = plVar5[5];
        if (0 < *(int *)(lVar2 + 8)) {
          lVar6 = 0;
          do {
            uVar1 = (**(code **)(**(long **)(*(long *)(lVar2 + 0x10) + lVar6 * 8 + 8) + 0x40))();
            if ((uVar1 & 1) == 0) {
              return 0;
            }
            lVar2 = plVar5[5];
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)(lVar2 + 8));
        }
      }
    }
    plVar4 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar4 = plVar5 + 2;
      if (*(long **)*plVar4 == plVar5) {
        plVar5 = (long *)*plVar4;
      }
      else {
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(lVar2 + 0x10);
          plVar5 = (long *)*plVar4;
        } while (*plVar5 != lVar2);
      }
    }
    else {
      do {
        plVar5 = plVar4;
        plVar4 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  } while( true );
}


