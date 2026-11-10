/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0300e008; name: FUN_0300e008
 */


void FUN_0300e008(long *param_1)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong *puVar10;
  ulong uVar11;
  
  plVar8 = (long *)(*(ulong *)(*param_1 + 0x6c8) & 0xfffffffffffffffc);
  if (plVar8 != (long *)0x0) {
    puVar2 = (ulong *)(*param_1 + 0x6c8);
    puVar10 = puVar2;
    do {
      puVar5 = (ulong *)(plVar8 + 1);
      plVar9 = (long *)(*puVar5 & 0xfffffffffffffffc);
      if ((long *)plVar8[2] == param_1) {
        if ((*(byte *)puVar2 & 3) == 0) {
          *puVar10 = *puVar10 & 3 | (ulong)plVar9;
          (**(code **)(*plVar8 + 8))();
          puVar5 = puVar10;
        }
        else {
          *puVar5 = (ulong)plVar9 | 1;
        }
      }
      plVar8 = plVar9;
      puVar10 = puVar5;
    } while (plVar9 != (long *)0x0);
  }
  lVar7 = param_1[1];
  uVar3 = *(uint *)((long)param_1 + 0x2c);
  if ((int)param_1[5] == 0) {
    return;
  }
  uVar4 = *(uint *)(lVar7 + 8);
  uVar1 = uVar3 + 1;
  if ((~uVar4 & 0xffffff) == 0) {
    uVar11 = 0;
    if (uVar1 < 2) {
      uVar3 = 0;
    }
    do {
      if (uVar3 == uVar11) {
        return;
      }
      uVar11 = uVar11 + 1;
      uVar4 = *(uint *)(lVar7 + (uVar11 & 0xffffffff) * 0x10 + 8);
    } while ((~uVar4 & 0xffffff) == 0);
    if ((int)uVar11 == -1) {
      return;
    }
  }
  else {
    uVar11 = 0;
  }
  do {
    uVar3 = uVar4 & 0xffffff;
    if ((((uVar3 != 0xffffff) && (uVar3 < *(uint *)(param_1 + 2))) &&
        ((~*(uint *)(param_1[1] + (ulong)uVar3 * 0x10 + 8) & 0xffffff) != 0)) &&
       (lVar6 = *(long *)(param_1[1] + (ulong)uVar3 * 0x10), *(uint *)(lVar6 + 0x150) == uVar4)) {
      (**(code **)(*(long *)*param_1 + 0xe0))((long *)*param_1,lVar6 + 0x140,1,0);
    }
    do {
      uVar3 = (int)uVar11 + 1;
      uVar11 = (ulong)uVar3;
      if (uVar1 <= uVar3) {
        return;
      }
      uVar4 = *(uint *)(lVar7 + (ulong)uVar3 * 0x10 + 8);
    } while ((~uVar4 & 0xffffff) == 0);
  } while( true );
}


