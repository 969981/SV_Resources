/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007dfb7c; name: FUN_007dfb7c
 */


void FUN_007dfb7c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  uVar2 = FUN_007e6070();
  if ((uVar2 & 1) == 0) {
    local_38[0] = 0x1040c;
  }
  else {
    uVar2 = FUN_007e6080();
    puVar1 = PTR_DAT_047d11a0;
    if ((uVar2 & 1) == 0) {
      local_38[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_047d11a0 == 0) {
      uVar3 = FUN_0078a12c();
      puVar4 = (undefined8 *)FUN_007bfa40(0x68,uVar3,8);
      if (puVar4 == (undefined8 *)0x0) {
        local_38[0] = 0x10401;
        *(undefined8 *)PTR_DAT_047d1430 = 0;
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
        *(undefined8 **)PTR_DAT_047d1430 = puVar4;
        *(undefined2 *)puVar4 = 0;
        *(undefined4 *)((long)puVar4 + 2) = 0xfdff0000;
        puVar4[5] = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        FUN_00796584();
        puVar4[0xc] = 0;
        *(undefined8 **)puVar1 = puVar4;
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


