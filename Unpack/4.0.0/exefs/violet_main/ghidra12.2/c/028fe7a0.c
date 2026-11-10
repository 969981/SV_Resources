/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028fe7a0; name: FUN_028fe7a0
 */


void FUN_028fe7a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  plVar1 = param_1 + 3;
  lVar4 = FUN_028fed28(param_1,(param_1[1] - *param_1 >> 6) + 1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar1;
  if (lVar4 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,lVar4 << 6,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))();
    }
  }
  lVar2 = local_68 + (lVar3 - lVar2);
  local_50 = local_68 + lVar4 * 0x40;
  lStack_60 = lVar2;
  FUN_028fe6a0(plVar1,lVar2);
  local_58 = lVar2 + 0x40;
  FUN_028fe534(param_1,&local_68);
  FUN_028fe5dc(&local_68);
  return;
}


