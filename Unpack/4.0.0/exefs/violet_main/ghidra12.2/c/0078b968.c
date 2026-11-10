/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078b968; name: FUN_0078b968
 */


void FUN_0078b968(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  uVar3 = FUN_018fe360();
  if ((uVar3 & 1) == 0) {
    local_38[0] = 0x1040c;
  }
  else {
    uVar3 = FUN_00789ec0();
    puVar2 = PTR_DAT_047d08c8;
    if ((uVar3 & 1) == 0) {
      local_38[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_047d08c8 == 0) {
      uVar4 = FUN_0078a12c();
      lVar5 = FUN_007bfa40(0x5b8,uVar4,8);
      if (lVar5 == 0) {
        local_38[0] = 0x10401;
        *(undefined8 *)PTR_DAT_047d08d0 = 0;
      }
      else {
        lVar6 = 0;
        do {
          puVar1 = (undefined4 *)(lVar5 + lVar6);
          lVar6 = lVar6 + 6;
          *puVar1 = 0;
          *(undefined2 *)(puVar1 + 1) = 0;
        } while (lVar6 != 0x5b8);
        *(long *)PTR_DAT_047d08d0 = lVar5;
        FUN_0078b7f8(lVar5);
        *(long *)puVar2 = lVar5;
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


