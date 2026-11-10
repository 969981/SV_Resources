/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005612d0; name: FUN_005612d0
 */


void FUN_005612d0(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar2) {
    param_1[2] = lVar3 + -0x48;
    pbVar4 = *(byte **)(lVar3 + -0x20);
    if (pbVar4 != (byte *)0x0) {
      if (*(byte **)(lVar3 + -0x18) == pbVar4) {
        pbVar1 = pbVar4;
      }
      else {
        pbVar1 = *(byte **)(lVar3 + -0x18);
        do {
          pbVar5 = pbVar1 + -0x20;
          if ((*pbVar5 & 1) != 0) {
            (**(code **)(**(long **)(pbVar1 + -8) + 0x18))
                      (*(long **)(pbVar1 + -8),*(undefined8 *)(pbVar1 + -0x10),
                       *(ulong *)(pbVar1 + -0x20) & 0xfffffffffffffffe,1);
          }
          pbVar1 = pbVar5;
        } while (pbVar4 != pbVar5);
        pbVar1 = *(byte **)(lVar3 + -0x20);
      }
      *(byte **)(lVar3 + -0x18) = pbVar4;
      (**(code **)(**(long **)(lVar3 + -8) + 0x18))
                (*(long **)(lVar3 + -8),pbVar1,*(long *)(lVar3 + -0x10) - (long)pbVar1,8);
    }
    if ((*(byte *)(lVar3 + -0x40) & 1) != 0) {
      (**(code **)(**(long **)(lVar3 + -0x28) + 0x18))
                (*(long **)(lVar3 + -0x28),*(undefined8 *)(lVar3 + -0x30),
                 *(ulong *)(lVar3 + -0x40) & 0xfffffffffffffffe,1);
    }
    lVar3 = param_1[2];
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005613c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],lVar2,param_1[3] - lVar2,8);
  return;
}


