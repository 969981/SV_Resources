/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f7fe24; name: FUN_02f7fe24
 */


void FUN_02f7fe24(undefined8 param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long local_28;
  
  local_28 = (long)(int)(param_2 * 0x150);
  uVar7 = (ulong)param_2;
  lVar3 = (**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
  if (0 < (int)param_2) {
    uVar4 = uVar7 & 3;
    if (uVar7 - 1 < 3) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      plVar6 = (long *)(param_3 + 0x10);
      do {
        lVar1 = lVar3 + 0x2a0;
        lVar2 = lVar3 + 0x3f0;
        uVar5 = uVar5 + 4;
        plVar6[-2] = lVar3;
        plVar6[-1] = lVar3 + 0x150;
        lVar3 = lVar3 + 0x540;
        *plVar6 = lVar1;
        plVar6[1] = lVar2;
        plVar6 = plVar6 + 4;
      } while ((uVar7 & 0xfffffffc) != uVar5);
    }
    if ((param_2 & 3) != 0) {
      plVar6 = (long *)(param_3 + uVar5 * 8);
      do {
        *plVar6 = lVar3;
        lVar3 = lVar3 + 0x150;
        uVar4 = uVar4 - 1;
        plVar6 = plVar6 + 1;
      } while (uVar4 != 0);
    }
  }
  return;
}


