/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b7a84; name: FUN_008b7a84
 */


void FUN_008b7a84(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 local_38;
  float fStack_34;
  float local_30;
  float local_2c;
  undefined8 local_28;
  
  local_2c = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0xdc));
  fVar2 = *(float *)(param_1 + 0x50);
  local_28 = 0;
  local_30 = fVar2 - local_2c;
  uVar1 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0xde));
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x10;
  local_38 = FUN_008a6ea4();
  fStack_34 = fVar2;
  if (*(char *)(param_1 + 0x109) == '\x02') {
    FUN_008b9d04(param_1,param_2,&local_38,*(undefined8 *)(param_1 + 0x110),&local_30,
                 *(undefined1 *)(param_1 + 0x5a));
    return;
  }
  if (*(char *)(param_1 + 0x109) == '\x01') {
    FUN_008b98c4(param_1,param_2,&local_38,*(undefined8 *)(param_1 + 0x110),&local_30,
                 *(undefined1 *)(param_1 + 0x5a));
  }
  return;
}


