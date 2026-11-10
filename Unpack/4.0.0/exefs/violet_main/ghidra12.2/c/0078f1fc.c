/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078f1fc; name: FUN_0078f1fc
 */


void FUN_0078f1fc(undefined8 param_1,uint param_2,undefined4 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  uVar2 = FUN_018fe360();
  if ((uVar2 & 1) == 0) {
    local_48[0] = 0x1040c;
  }
  else {
    uVar2 = FUN_00789ec0();
    puVar1 = PTR_DAT_047d0900;
    if ((uVar2 & 1) == 0) {
      local_48[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_047d0900 == 0) {
      if (param_2 < 0x20) {
        uVar3 = FUN_0078a12c();
        puVar4 = (undefined8 *)FUN_007bfa40(0x90,uVar3,8);
        if (puVar4 == (undefined8 *)0x0) {
          local_48[0] = 0x10401;
          *(undefined8 *)PTR_DAT_047d0948 = 0;
        }
        else {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          puVar4[8] = 0;
          puVar4[9] = 0;
          puVar4[10] = 0;
          puVar4[0xb] = 0;
          puVar4[0xc] = 0;
          puVar4[0xd] = 0;
          puVar4[0xe] = 0;
          puVar4[0xf] = 0;
          puVar4[0x10] = 0;
          puVar4[0x11] = 0;
          *(undefined8 **)PTR_DAT_047d0948 = puVar4;
          FUN_0078f334(puVar4,param_2,param_3);
          *(undefined8 **)puVar1 = puVar4;
          local_48[0] = 0;
        }
      }
      else {
        local_48[0] = 0x10407;
      }
    }
    else {
      local_48[0] = 0x1040f;
    }
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


