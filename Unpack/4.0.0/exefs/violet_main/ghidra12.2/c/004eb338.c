/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004eb338; name: FUN_004eb338
 */


undefined1 * FUN_004eb338(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 8;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3);
      uVar3 = *(ulong *)(param_1 + 0x10);
      *param_2 = 8;
    }
    if (uVar3 < 0x80) {
      param_2[1] = (byte)uVar3;
      param_2 = param_2 + 2;
      uVar1 = *(uint *)(param_1 + 0x18);
      goto joined_r0x004eb414;
    }
    param_2[1] = (byte)uVar3 | 0x80;
    if (uVar3 >> 0xe != 0) {
      param_2 = param_2 + 3;
      uVar3 = uVar3 >> 7;
      do {
        puVar2 = param_2;
        uVar4 = uVar3 >> 7;
        puVar2[-1] = (byte)uVar3 | 0x80;
        param_2 = puVar2 + 1;
        uVar5 = uVar3 >> 0xe;
        uVar3 = uVar4;
      } while (uVar5 != 0);
      *puVar2 = (char)uVar4;
      uVar1 = *(uint *)(param_1 + 0x18);
      goto joined_r0x004eb414;
    }
    param_2[2] = (char)(uVar3 >> 7);
    param_2 = param_2 + 3;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
joined_r0x004eb414:
  if (uVar1 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x10;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3);
      uVar1 = *(uint *)(param_1 + 0x18);
      *param_2 = 0x10;
    }
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)((ulong)(long)(int)uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar3 = (ulong)(long)(int)uVar1 >> 7;
        do {
          puVar2 = param_2;
          uVar4 = uVar3 >> 7;
          puVar2[-1] = (byte)uVar3 | 0x80;
          param_2 = puVar2 + 1;
          uVar5 = uVar3 >> 0xe;
          uVar3 = uVar4;
        } while (uVar5 != 0);
        *puVar2 = (char)uVar4;
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar2 = (undefined1 *)
           FUN_005161f8((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar2;
}


