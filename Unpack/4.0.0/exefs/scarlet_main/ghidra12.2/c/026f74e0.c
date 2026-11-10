/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f74e0; name: FUN_026f74e0
 */


long * FUN_026f74e0(long *param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  uVar3 = FUN_026f7650();
  if (uVar3 != 0) {
    do {
      uVar4 = uVar3 >> 1;
      plVar6 = param_1;
      if (uVar4 != 0) {
        plVar7 = param_1;
        uVar5 = uVar4;
        do {
          plVar6 = (long *)plVar7[2];
          if (plVar6 == (long *)0x0) {
            plVar8 = (long *)*plVar7;
            if (plVar7 == (long *)plVar8[2]) {
              plVar6 = (long *)*plVar8;
              bVar2 = plVar8 == (long *)plVar6[2];
              plVar7 = plVar8;
              plVar8 = plVar6;
              if (bVar2) {
                do {
                  plVar7 = plVar6;
                  plVar8 = (long *)*plVar7;
                  plVar6 = plVar8;
                } while (plVar7 == (long *)plVar8[2]);
              }
            }
            plVar6 = plVar7;
            if ((long *)plVar7[2] != plVar8) {
              plVar6 = plVar8;
            }
          }
          else {
            plVar7 = (long *)plVar6[1];
            if (plVar7 != (long *)0x0) {
              plVar6 = plVar7;
              for (plVar7 = (long *)plVar7[1]; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
                plVar6 = plVar7;
              }
            }
          }
          uVar1 = uVar5 - 1;
          bVar2 = 0 < (long)uVar5;
          plVar7 = plVar6;
          uVar5 = uVar1;
        } while (uVar1 != 0 && bVar2);
      }
      if (plVar6[4] + (ulong)*(uint *)(plVar6 + 5) <= *param_3) {
        param_1 = (long *)plVar6[2];
        if (param_1 == (long *)0x0) {
          plVar7 = (long *)*plVar6;
          if (plVar6 == (long *)plVar7[2]) {
            plVar8 = (long *)*plVar7;
            bVar2 = plVar7 == (long *)plVar8[2];
            plVar6 = plVar7;
            plVar7 = plVar8;
            if (bVar2) {
              do {
                plVar6 = plVar8;
                plVar7 = (long *)*plVar6;
                plVar8 = plVar7;
              } while (plVar6 == (long *)plVar7[2]);
            }
          }
          param_1 = plVar6;
          if ((long *)plVar6[2] != plVar7) {
            param_1 = plVar7;
          }
        }
        else {
          plVar6 = (long *)param_1[1];
          if (plVar6 != (long *)0x0) {
            param_1 = plVar6;
            for (plVar6 = (long *)plVar6[1]; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[1]) {
              param_1 = plVar6;
            }
          }
        }
        uVar4 = uVar3 + ~uVar4;
      }
      uVar3 = uVar4;
    } while (uVar3 != 0);
  }
  return param_1;
}


