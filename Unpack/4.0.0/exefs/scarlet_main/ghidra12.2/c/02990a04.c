/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02990a04; name: FUN_02990a04
 */


void FUN_02990a04(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  plVar4 = *(long **)(param_1 + 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  local_38 = *(undefined8 *)(param_1 + 0x38);
  local_48 = plVar4;
  lVar1 = (**(code **)(*plVar4 + 0x10))(plVar4,0x1f0,8);
  if (lVar1 == 0) {
    local_58 = 0;
    local_50 = 0;
    local_60 = (long *)0x0;
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
    FUN_0136bfa4(lVar1,&local_48);
    local_58 = 0x1f0;
    local_50 = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    local_60 = plVar4;
  }
  local_68 = 0;
  FUN_02991030(param_1 + 0x58,lVar1);
  *(long **)(param_1 + 0x60) = local_60;
  *(undefined8 *)(param_1 + 0x68) = local_58;
  *(undefined8 *)(param_1 + 0x70) = local_50;
  FUN_02991030(&local_68,0);
  FUN_010aef9c(*(undefined8 *)(param_1 + 0x58));
  return;
}


