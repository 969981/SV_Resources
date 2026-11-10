/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02752d64; name: FUN_02752d64
 */


void FUN_02752d64(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar6;
  long *plVar5;
  long lVar7;
  long lVar8;
  
  if (*(long **)(param_1 + 8) != param_2) {
    plVar5 = *(long **)(param_1 + 8);
    do {
      plVar6 = plVar5 + -4;
      lVar7 = *plVar6;
      *plVar6 = 0;
      if (lVar7 != 0) {
        lVar8 = plVar5[-1];
        plVar1 = (long *)plVar5[-3];
        lVar2 = plVar5[-2];
        uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
        if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,lVar2,lVar8);
        }
        else {
          FUN_00c48fe8(plVar1,lVar7,lVar2,lVar8);
        }
      }
      plVar5 = plVar6;
    } while (param_2 != plVar6);
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}


