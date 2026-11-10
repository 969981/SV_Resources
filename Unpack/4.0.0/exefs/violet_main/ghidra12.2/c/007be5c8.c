/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007be5c8; name: FUN_007be5c8
 */


void FUN_007be5c8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  uVar2 = FUN_007b77e0();
  if ((uVar2 & 1) == 0) {
    local_38[0] = 0x1040c;
  }
  else {
    uVar2 = FUN_007b7890();
    puVar1 = PTR_DAT_047d0f88;
    if ((uVar2 & 1) == 0) {
      local_38[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_047d0f88 == 0) {
      uVar3 = FUN_0078a12c();
      plVar4 = (long *)FUN_007bfa40(0x38,uVar3,8);
      if (plVar4 == (long *)0x0) {
        local_38[0] = 0x10401;
        *(undefined8 *)PTR_DAT_047d0f90 = 0;
      }
      else {
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[6] = 0;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[4] = 0;
        plVar4[5] = 0;
        *(long **)PTR_DAT_047d0f90 = plVar4;
        FUN_007987d8();
        *(undefined2 *)((long)plVar4 + 0x31) = 0;
        *plVar4 = (long)(PTR_DAT_047d0f98 + 0x10);
        *(long **)puVar1 = plVar4;
        local_38[0] = 0;
      }
    }
    else {
      local_38[0] = 0x1040f;
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


