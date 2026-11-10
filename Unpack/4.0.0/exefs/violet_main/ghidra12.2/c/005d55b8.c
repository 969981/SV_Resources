/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005d55b8; name: FUN_005d55b8
 */


void FUN_005d55b8(undefined8 param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_2[0xd];
  if (uVar3 != 0) {
    uVar2 = param_2[0xe];
    if (uVar2 == uVar3) {
      uVar2 = uVar3;
    }
    else {
      do {
        uVar2 = uVar2 - 0x90;
        FUN_005d569c(param_2 + 0x10,uVar2);
      } while (uVar3 != uVar2);
      uVar2 = param_2[0xd];
    }
    param_2[0xe] = uVar3;
    (**(code **)(*(long *)param_2[0x10] + 0x18))((long *)param_2[0x10],uVar2,param_2[0xf] - uVar2,8)
    ;
  }
  if ((param_2[8] & 1) == 0) {
    FUN_01cfa410(param_2 + 4);
    bVar1 = (byte)*param_2;
  }
  else {
    (**(code **)(*(long *)param_2[0xb] + 0x18))
              ((long *)param_2[0xb],param_2[10],param_2[8] & 0xfffffffffffffffe,1);
    FUN_01cfa410(param_2 + 4);
    bVar1 = (byte)*param_2;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005d5698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2[3] + 0x18))
            ((long *)param_2[3],param_2[2],*param_2 & 0xfffffffffffffffe,1);
  return;
}


