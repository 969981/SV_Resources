/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018fe9f4; name: FUN_018fe9f4
 */


void FUN_018fe9f4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  uVar2 = FUN_018fe360();
  if ((uVar2 & 1) == 0) {
    local_38[0] = 0x1040c;
  }
  else {
    uVar2 = FUN_00789ec0();
    puVar1 = PTR_DAT_047d0998;
    if ((uVar2 & 1) == 0) {
      local_38[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_047d0998 == 0) {
      uVar3 = FUN_0078a12c();
      puVar4 = (uint *)FUN_007bfa40(0x40,uVar3,8);
      if (puVar4 == (uint *)0x0) {
        local_38[0] = 0x10401;
        *(undefined8 *)PTR_DAT_047d09a0 = 0;
      }
      else {
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *(undefined8 *)((long)puVar4 + 0x19) = 0;
        *(undefined8 *)((long)puVar4 + 0x21) = 0;
        *(undefined8 *)((long)puVar4 + 0x29) = 0;
        *(undefined8 *)((long)puVar4 + 0x31) = 0;
        *(undefined4 *)((long)puVar4 + 0x39) = 0;
        *(undefined2 *)((long)puVar4 + 0x3d) = 0;
        *(undefined1 *)((long)puVar4 + 0x3f) = 0;
        *(uint **)PTR_DAT_047d09a0 = puVar4;
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        *(undefined1 *)(puVar4 + 6) = 1;
        FUN_0078cfe4(puVar4 + 8,0x1c);
        *puVar4 = *puVar4 | 1;
        FUN_00793788(puVar4);
        *(uint **)puVar1 = puVar4;
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


