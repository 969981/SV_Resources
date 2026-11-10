/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c1290; name: FUN_007c1290
 */


void FUN_007c1290(long *param_1,long param_2)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if ((param_2 != 0) && (uVar2 = (**(code **)(*param_1 + 0x88))(), (uVar2 & 1) != 0)) {
    if ((*(ushort *)(param_1 + 0x1a) >> 1 & 1) == 0) {
      plVar7 = param_1 + 0x12;
      if ((*(ushort *)(param_1 + 0x1a) & 1) == 0) {
        plVar6 = (long *)0x0;
      }
      else {
        FUN_007c9e3c(plVar7);
        plVar6 = plVar7;
      }
      lVar5 = param_2 + -0x20;
      if ((*(ulong *)(param_2 + -8) & 1) != 0) {
        lVar5 = *(ulong *)(param_2 + -8) - 1;
      }
      if (lVar5 == 0) {
        if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
          plVar3 = (long *)0x0;
        }
        else {
          FUN_007c9e3c(plVar7);
          plVar3 = plVar7;
        }
        if ((long *)param_1[0x1f] != param_1 + 0x1e) {
          lVar4 = (long)*(int *)((long)param_1 + 0x104);
          lVar5 = param_1[0x1f] - lVar4;
          do {
            lVar5 = *(long *)(lVar5 + lVar4 + 8) - lVar4;
          } while (lVar5 != (long)(param_1 + 0x1e) - lVar4);
        }
        if (plVar3 != (long *)0x0) {
          FUN_007c9e44();
        }
        if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          FUN_007c9e3c(plVar7);
        }
        if ((long *)param_1[0x1c] != param_1 + 0x1b) {
          lVar4 = (long)*(int *)((long)param_1 + 0xec);
          lVar5 = param_1[0x1c] - lVar4;
          do {
            lVar5 = *(long *)(lVar5 + lVar4 + 8) - lVar4;
          } while (lVar5 != (long)(param_1 + 0x1b) - lVar4);
        }
        if (plVar7 != (long *)0x0) {
          FUN_007c9e44(plVar7);
        }
      }
      else if (*(short *)(lVar5 + 0x10) == *(short *)((long)param_1 + 0xd2)) {
        FUN_007bfd58(*(int *)((long)param_1 + 0x104) + lVar5);
        *(int *)(param_1 + 0x20) = (int)param_1[0x20] + -1;
        uVar1 = *(ushort *)(lVar5 + 0x12);
        *(undefined2 *)(lVar5 + 0x12) = 0;
        *(ulong *)(lVar5 + 0x18) = *(long *)(lVar5 + 0x18) + (ulong)uVar1;
        FUN_007c026c(param_1,lVar5);
      }
      if (plVar6 != (long *)0x0) {
        FUN_007c9e44(plVar6);
        return;
      }
    }
  }
  return;
}


