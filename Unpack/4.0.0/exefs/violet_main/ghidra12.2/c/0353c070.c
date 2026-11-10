/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353c070; name: FUN_0353c070
 */


void FUN_0353c070(undefined4 param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long local_38;
  
  if ((param_3 == 0) || (*(long *)(param_3 + 0x10) == 0)) {
    uVar4 = param_4 >> 1;
    if (param_4 < 3) {
      uVar4 = 0;
    }
    uVar4 = uVar4 + param_4;
    if (0x1f < uVar4) {
      uVar4 = 0x20;
    }
    plVar6 = (long *)(param_2 + param_4 * 0x328 + 0x1258);
    uVar5 = param_4;
    do {
      plVar1 = (long *)(param_2 + 0xbd8);
      if (uVar5 != 1) {
        plVar1 = plVar6;
      }
      lVar2 = *plVar1;
      if ((lVar2 != 0) && (*plVar1 = lVar2 + -1, plVar1[lVar2] != 0)) {
        return;
      }
      local_38 = 0;
      if (uVar5 == 1) {
        FUN_0353b230(param_1,param_2,&local_38);
      }
      else {
        FUN_0353b230(param_1,param_2,0);
        lVar2 = *plVar6;
        if (lVar2 == 0) {
          local_38 = 0;
        }
        else {
          *plVar6 = lVar2 + -1;
          local_38 = plVar6[lVar2];
        }
      }
      if (local_38 != 0) {
        return;
      }
      if ((uVar5 <= *(uint *)(param_2 + 0x1880)) &&
         (lVar2 = FUN_0353b830(param_1,param_2,uVar5), lVar2 != 0)) {
        return;
      }
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 0x65;
    } while (uVar5 <= uVar4);
    FUN_0353b830(param_1,param_2,param_4);
  }
  else {
    uVar3 = 0;
    if (*(long *)(param_2 + 0xbd8) != 0) {
      lVar2 = *(long *)(param_2 + 0xbd8) + -1;
      *(long *)(param_2 + 0xbd8) = lVar2;
      uVar3 = *(undefined8 *)(param_2 + lVar2 * 8 + 0xbe0);
    }
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  return;
}


