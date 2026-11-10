/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005368dc; name: FUN_005368dc
 */


undefined1 * FUN_005368dc(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 8;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3);
      uVar1 = *(uint *)(param_1 + 0x10);
      *param_2 = 8;
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
        uVar4 = (ulong)(long)(int)uVar1 >> 7;
        do {
          puVar2 = param_2;
          uVar3 = uVar4 >> 7;
          puVar2[-1] = (byte)uVar4 | 0x80;
          param_2 = puVar2 + 1;
          uVar5 = uVar4 >> 0xe;
          uVar4 = uVar3;
        } while (uVar5 != 0);
        *puVar2 = (char)uVar3;
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


