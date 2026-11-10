/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087a9bc; name: FUN_0087a9bc
 */


void FUN_0087a9bc(long param_1,uint *param_2,undefined4 param_3,long param_4,long param_5)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long local_b0 [12];
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar10 = 0;
    do {
      uVar1 = *param_2;
      if (uVar1 != 0) {
        if (uVar1 == 1) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          plVar6 = local_b0 + 1;
          uVar8 = 0x100;
          plVar5 = local_b0 + 5;
          plVar7 = local_b0 + 9;
          puVar2 = param_2;
          do {
            lVar4 = ((ulong)((int)uVar8 - 0x100) & 0xfffffe00) * 4;
            plVar7[-1] = param_4 + lVar4;
            plVar5[-1] = param_5 + lVar4;
            lVar9 = (uVar8 & 0xffffff00) * 4;
            uVar8 = uVar8 + 0x200;
            lVar4 = *(long *)(puVar2 + 2);
            uVar3 = uVar3 + 2;
            *plVar7 = param_4 + lVar9;
            *plVar5 = param_5 + lVar9;
            lVar9 = *(long *)(puVar2 + 4);
            plVar6[-1] = lVar4 + uVar10 * 0x10 + 0x104;
            *plVar6 = lVar9 + uVar10 * 0x10 + 0x104;
            plVar6 = plVar6 + 2;
            plVar5 = plVar5 + 2;
            plVar7 = plVar7 + 2;
            puVar2 = puVar2 + 4;
          } while (((ulong)uVar1 & 0xfffffffe) != uVar3);
        }
        if ((uVar1 & 1) != 0) {
          lVar4 = (ulong)(uint)((int)uVar3 << 8) * 4;
          (local_b0 + 8)[uVar3] = param_4 + lVar4;
          (local_b0 + 4)[uVar3] = param_5 + lVar4;
          local_b0[uVar3] = *(long *)(param_2 + uVar3 * 2 + 2) + uVar10 * 0x10 + 0x104;
        }
      }
      FUN_0087af68(param_1 + uVar10 * 0x10 + 0x490,local_b0 + 8,local_b0 + 4,local_b0,(ulong)uVar1,
                   param_3);
      uVar10 = uVar10 + 1;
      param_4 = param_5;
    } while (uVar10 < *(uint *)(param_1 + 0x34));
  }
  return;
}


