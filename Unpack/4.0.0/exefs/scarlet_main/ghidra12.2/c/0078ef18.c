/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078ef18; name: FUN_0078ef18
 */


void FUN_0078ef18(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  uVar2 = FUN_018fe360();
  if ((uVar2 & 1) == 0) {
    local_30[0] = 0x1040c;
  }
  else {
    uVar2 = FUN_00789ec0();
    puVar1 = PTR_DAT_047d0928;
    if ((uVar2 & 1) == 0) {
      local_30[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_047d0928 == 0) {
      uVar3 = FUN_0078a12c();
      puVar4 = (undefined8 *)FUN_007bfa40(8,uVar3,8);
      if (puVar4 == (undefined8 *)0x0) {
        local_30[0] = 0x10401;
        *(undefined8 *)PTR_DAT_047d0930 = 0;
      }
      else {
        *(undefined8 **)PTR_DAT_047d0930 = puVar4;
        *puVar4 = 0x5dc;
        *(undefined8 **)puVar1 = puVar4;
        local_30[0] = 0;
      }
    }
    else {
      local_30[0] = 0x1040f;
    }
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


