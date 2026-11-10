/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0010ac30; name: FUN_0010ac30
 */


void FUN_0010ac30(uint param_1,long param_2,undefined1 *param_3,undefined1 *param_4,uint param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 uVar7;
  long lVar8;
  
  lVar4 = 0;
  uVar6 = param_5;
  do {
    if ((param_1 & 1) == 0) {
      uVar7 = *param_3;
      param_5 = param_5 - 1;
      param_3 = param_3 + 1;
      puVar5 = param_4;
    }
    else {
      puVar5 = param_4 + 1;
      uVar7 = *param_4;
      uVar6 = uVar6 - 1;
    }
    *(undefined1 *)(param_2 + lVar4) = uVar7;
    lVar4 = lVar4 + 1;
  } while ((param_5 != 0) && (param_1 = param_1 >> 1, param_4 = puVar5, uVar6 != 0));
  if (param_5 == 0) {
    if (uVar6 != 0) {
      lVar8 = 0;
      do {
        puVar1 = puVar5 + lVar8;
        lVar2 = param_2 + lVar8;
        lVar3 = param_2 + lVar4 + lVar8;
        lVar8 = lVar8 + 1;
        *(undefined1 *)(lVar2 + lVar4) = *puVar1;
      } while (lVar3 + 1U < param_2 + (ulong)uVar6 + lVar4);
    }
  }
  else {
    lVar8 = 0;
    do {
      puVar5 = param_3 + lVar8;
      lVar2 = param_2 + lVar8;
      lVar3 = param_2 + lVar4 + lVar8;
      lVar8 = lVar8 + 1;
      *(undefined1 *)(lVar2 + lVar4) = *puVar5;
    } while (lVar3 + 1U < param_2 + (ulong)param_5 + lVar4);
  }
  return;
}


