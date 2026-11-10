/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012431c0; name: FUN_012431c0
 */


void FUN_012431c0(long param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  
  uVar5 = 0;
  lVar7 = 0x28;
  do {
    piVar1 = (int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x90) + lVar7);
    piVar6 = piVar1 + -8;
    if ((*piVar1 != 0) &&
       (puVar2 = (undefined4 *)FUN_01243354(piVar6), (puVar2[2] & 7) == 4 || (puVar2[2] & 7) == 2))
    {
      uVar3 = FUN_01243584(param_1);
      FUN_02988a5c(uVar3,0,uVar5 & 0xffffffff);
      uVar4 = FUN_02988ab8(piVar6);
      if ((uVar4 & 1) != 0) {
        uVar3 = FUN_01243584(param_1);
        uVar4 = FUN_02988400(uVar3,0,uVar5 & 0xffffffff);
        if ((uVar4 & 1) != 0) {
          uVar3 = FUN_01243584(param_1);
          FUN_02988474(uVar3,0,uVar5 & 0xffffffff);
        }
        uVar3 = FUN_01243584(param_1);
        FUN_0298835c(uVar3,*puVar2,0,uVar5 & 0xffffffff);
      }
    }
    uVar5 = uVar5 + 1;
    lVar7 = lVar7 + 0x28;
  } while (uVar5 != 0x13);
  uVar5 = 0;
  lVar7 = 800;
  do {
    piVar1 = (int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x90) + lVar7);
    piVar6 = piVar1 + -8;
    if ((*piVar1 != 0) &&
       (puVar2 = (undefined4 *)FUN_01243354(piVar6), (puVar2[2] & 7) == 4 || (puVar2[2] & 7) == 2))
    {
      uVar3 = FUN_01243584(param_1);
      FUN_02988a5c(uVar3,1,uVar5 & 0xffffffff);
      uVar4 = FUN_02988ab8(piVar6);
      if ((uVar4 & 1) != 0) {
        uVar3 = FUN_01243584(param_1);
        uVar4 = FUN_02988400(uVar3,1,uVar5 & 0xffffffff);
        if ((uVar4 & 1) != 0) {
          uVar3 = FUN_01243584(param_1);
          FUN_02988474(uVar3,1,uVar5 & 0xffffffff);
        }
        uVar3 = FUN_01243584(param_1);
        FUN_0298835c(uVar3,*puVar2,1,uVar5 & 0xffffffff);
      }
    }
    uVar5 = uVar5 + 1;
    lVar7 = lVar7 + 0x28;
  } while (uVar5 != 0x13);
  return;
}


