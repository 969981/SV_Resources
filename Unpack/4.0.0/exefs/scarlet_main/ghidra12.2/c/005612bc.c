/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005612bc; name: thunk_FUN_00540d30
 */


void thunk_FUN_00540d30(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar2 = param_1[1];
  if (param_1[1] == lVar3) {
    lVar2 = lVar3;
  }
  else {
    do {
      pbVar4 = *(byte **)(lVar2 + -0x20);
      if (pbVar4 != (byte *)0x0) {
        if (*(byte **)(lVar2 + -0x18) == pbVar4) {
          pbVar1 = pbVar4;
        }
        else {
          pbVar1 = *(byte **)(lVar2 + -0x18);
          do {
            pbVar6 = pbVar1 + -0x20;
            if ((*pbVar6 & 1) != 0) {
              (**(code **)(**(long **)(pbVar1 + -8) + 0x18))
                        (*(long **)(pbVar1 + -8),*(undefined8 *)(pbVar1 + -0x10),
                         *(ulong *)(pbVar1 + -0x20) & 0xfffffffffffffffe,1);
            }
            pbVar1 = pbVar6;
          } while (pbVar4 != pbVar6);
          pbVar1 = *(byte **)(lVar2 + -0x20);
        }
        *(byte **)(lVar2 + -0x18) = pbVar4;
        (**(code **)(**(long **)(lVar2 + -8) + 0x18))
                  (*(long **)(lVar2 + -8),pbVar1,*(long *)(lVar2 + -0x10) - (long)pbVar1,8);
      }
      lVar5 = lVar2 + -0x48;
      if ((*(byte *)(lVar2 + -0x40) & 1) != 0) {
        (**(code **)(**(long **)(lVar2 + -0x28) + 0x18))
                  (*(long **)(lVar2 + -0x28),*(undefined8 *)(lVar2 + -0x30),
                   *(ulong *)(lVar2 + -0x40) & 0xfffffffffffffffe,1);
      }
      lVar2 = lVar5;
    } while (lVar5 != lVar3);
    lVar2 = *param_1;
  }
  param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00540e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar2,param_1[2] - lVar2,8);
  return;
}


