/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0199ab34; name: FUN_0199ab34
 */


void FUN_0199ab34(long param_1,int param_2,long param_3)

{
  long *plVar1;
  
  if (param_2 == 1) {
    if (*(int *)(*(long *)(param_1 + 0x50) + 0x34) == 2 &&
        *(char *)(*(long *)(param_1 + 0x50) + 0x8d) == '\0') {
      for (plVar1 = *(long **)(param_1 + 0x90); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1[5] == param_3) {
          *(undefined4 *)(plVar1 + 4) = 2;
          return;
        }
      }
    }
    else {
      plVar1 = *(long **)(param_1 + 0x90);
      if (*(long *)(param_1 + 0xf0) == param_3) {
        if (plVar1 != (long *)0x0) {
          while( true ) {
            *(undefined4 *)(plVar1 + 4) = 2;
            if (plVar1[5] == param_3) {
              *(undefined1 *)(plVar1 + 3) = 1;
              *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)((long)plVar1 + 0x1c);
            }
            else {
              *(undefined1 *)(plVar1 + 3) = 0;
            }
            plVar1 = (long *)*plVar1;
            if (plVar1 == (long *)0x0) break;
            param_3 = *(long *)(param_1 + 0xf0);
          }
        }
      }
      else {
        for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
          if (plVar1[5] == param_3) {
            *(undefined4 *)(plVar1 + 4) = 2;
            if ((char)plVar1[3] == '\0') {
              return;
            }
            *(undefined1 *)(plVar1 + 3) = 0;
            plVar1 = *(long **)(param_1 + 0x90);
            while( true ) {
              if (plVar1 == (long *)0x0) {
                return;
              }
              if ((*(int *)(plVar1 + 4) == 1) && (*(int *)((long)plVar1 + 0x1c) != 0xff)) break;
              plVar1 = (long *)*plVar1;
            }
            *(undefined1 *)(plVar1 + 3) = 1;
            *(int *)(param_1 + 0x58) = *(int *)((long)plVar1 + 0x1c);
            return;
          }
        }
      }
    }
  }
  return;
}


