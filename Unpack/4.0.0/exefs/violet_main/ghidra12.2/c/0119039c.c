/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0119039c; name: FUN_0119039c
 */


void FUN_0119039c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  uVar2 = param_1[1];
  plVar1 = param_1 + 3;
  if (uVar2 < (ulong)param_1[2]) {
    FUN_011904e4(plVar1,uVar2,param_2);
    param_1[1] = uVar2 + 0x18;
  }
  else {
    uVar6 = param_1[4];
    lVar5 = (long)(uVar2 - *param_1) >> 3;
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar2 = lVar5 * -0x5555555555555555 + 1;
    if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    local_50 = 0;
    uVar4 = lVar3 * 0x5555555555555556;
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    if (uVar6 >> 1 <= (ulong)(lVar3 * -0x5555555555555555)) {
      uVar2 = uVar6;
    }
    plStack_48 = plVar1;
    if (uVar2 == 0) {
      local_68 = 0;
    }
    else {
      local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar2 * 0x18,8);
      if (local_68 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
    }
    lVar5 = local_68 + lVar5 * 8;
    local_50 = local_68 + uVar2 * 0x18;
    lStack_60 = lVar5;
    FUN_011904e4(plVar1,lVar5,param_2);
    local_58 = lVar5 + 0x18;
    FUN_011906cc(param_1,&local_68);
    FUN_01190850(&local_68);
  }
  return;
}


