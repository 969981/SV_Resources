/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ae43c; name: FUN_028ae43c
 */


void FUN_028ae43c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_2 + 0x40);
  lVar3 = *(long *)(param_2 + 8);
  plVar1 = (long *)(lVar3 + (uVar7 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(param_2 + 0x10) == lVar3) {
    lVar4 = 0;
    lVar6 = 0;
    plVar5 = (long *)(lVar3 + (*(long *)(param_2 + 0x48) + uVar7 >> 6 & 0x3fffffffffffff8));
  }
  else {
    uVar2 = *(long *)(param_2 + 0x48) + uVar7;
    plVar5 = (long *)(lVar3 + (uVar2 >> 6 & 0x3fffffffffffff8));
    lVar4 = *plVar1 + (uVar7 & 0x1ff) * 8;
    lVar6 = *plVar5 + (uVar2 & 0x1ff) * 8;
  }
  FUN_028af6f0(plVar1,lVar4,plVar5,lVar6,*param_1);
  return;
}


