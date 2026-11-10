/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029908ec; name: FUN_029908ec
 */


void FUN_029908ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  plVar4 = *(long **)(param_1 + 8);
  uStack_48 = 0;
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  local_58 = 0;
  local_54 = 0;
  local_68 = plVar4;
  local_50 = param_3;
  lVar1 = (**(code **)(*plVar4 + 0x10))(plVar4,0x378,8);
  if (lVar1 == 0) {
    local_78 = 0;
    local_70 = 0;
    local_80 = (long *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_01053840();
    lVar3 = nn::os::GetTlsValue(*puVar2);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_013742d0(lVar1,&local_68);
    local_78 = 0x378;
    local_70 = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    local_80 = plVar4;
  }
  local_88 = 0;
  FUN_02990c54(param_1 + 0x38,lVar1);
  *(long **)(param_1 + 0x40) = local_80;
  *(undefined8 *)(param_1 + 0x48) = local_78;
  *(undefined8 *)(param_1 + 0x50) = local_70;
  FUN_02990c54(&local_88,0);
  FUN_0137d824(*(undefined8 *)(param_1 + 0x38),&local_68);
  FUN_01077c04(*(undefined8 *)(param_1 + 0x38),param_2);
  return;
}


