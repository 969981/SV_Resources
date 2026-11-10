/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071e2e8; name: FUN_0071e2e8
 */


void FUN_0071e2e8(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *local_40;
  long lStack_38;
  ulong local_30;
  long *local_28;
  long lStack_20;
  ulong local_18;
  
  lVar3 = param_1[2];
  uVar4 = *(ulong *)(lVar3 + 0x18);
  plVar1 = local_40;
  lVar6 = lStack_38;
  uVar2 = local_30;
  if (uVar4 < *(ulong *)(lVar3 + 8)) {
    do {
      plVar5 = *(long **)(*(long *)(lVar3 + 0x20) + uVar4 * 8);
      if (plVar5 != (long *)0x0) {
        if (plVar5 == *(long **)(*(long *)(lVar3 + 0x20) + (uVar4 ^ 1) * 8)) {
          plVar5 = *(long **)(*plVar5 + 0x20);
        }
        while (local_40 = plVar5, local_30 = uVar4, lStack_38 = lVar3, local_40 != (long *)0x0) {
          FUN_0071e3bc(&local_28,param_1,&local_40);
          lVar3 = lStack_20;
          uVar4 = local_18;
          plVar5 = local_28;
          uVar2 = local_30;
          lVar6 = lStack_38;
          plVar1 = local_40;
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (*(ulong *)(lVar3 + 8) != uVar4);
  }
  local_30 = uVar2;
  lStack_38 = lVar6;
  local_40 = plVar1;
  if ((*param_1 != 0) || (lVar6 = param_1[2], lVar6 == 0)) {
    return;
  }
  if ((*(long *)(lVar6 + 0x20) != 0) && (FUN_0071e800(lVar6), *(long *)(lVar6 + 0x28) == 0)) {
    FUN_0049e700(*(undefined8 *)(lVar6 + 0x20));
  }
  FUN_0049e790(PTR_LAB_047cba48,lVar6);
  return;
}


