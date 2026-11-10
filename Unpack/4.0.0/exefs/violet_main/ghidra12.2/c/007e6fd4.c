/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e6fd4; name: FUN_007e6fd4
 */


void FUN_007e6fd4(undefined8 param_1,long param_2,ushort param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  ulong uVar3;
  undefined2 *puVar4;
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  if (*(long *)(param_2 + 8) == 0) {
    if ((param_3 < 2) || (param_3 == 0xffff)) {
      local_58[0] = 0x10407;
    }
    else {
      uVar1 = FUN_0078a12c();
      uVar3 = (ulong)param_3;
      puVar2 = (undefined2 *)FUN_007bf9f0(uVar3 * 0x5b8,uVar1);
      if (puVar2 != (undefined2 *)0x0) {
        puVar4 = puVar2;
        do {
          *puVar4 = 0;
          *(undefined1 *)(puVar4 + 1) = 0;
          puVar4[2] = 0;
          memset(puVar4 + 3,0,0x5a0);
          *(undefined8 *)(puVar4 + 0x2d4) = 0;
          uVar3 = uVar3 - 1;
          *(undefined8 *)(puVar4 + 0x2d8) = 0;
          puVar4 = puVar4 + 0x2dc;
        } while (uVar3 != 0);
      }
      *(undefined2 **)(param_2 + 8) = puVar2;
      *(ushort *)(param_2 + 0x10) = param_3;
      local_58[0] = 0;
    }
  }
  else {
    local_58[0] = 0x10402;
  }
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_58);
  return;
}


