/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01689a7c; name: FUN_01689a7c
 */


void FUN_01689a7c(long param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined4 local_24;
  
  uVar5 = (ulong)*(byte *)(param_1 + 0x9e);
  if (uVar5 < 0x1e) {
    *(undefined4 *)(param_1 + 8 + uVar5 * 4) = param_2;
    *(undefined1 *)(param_1 + 8 + uVar5 + 0x78) = 0;
    *(char *)(param_1 + 0x9e) = *(char *)(param_1 + 0x9e) + '\x01';
  }
  local_24 = param_2;
  uVar3 = FUN_00f7e27c(*(undefined8 *)(param_1 + 0x358));
  uVar2 = FUN_011e2da8(uVar3,param_2);
  puVar4 = (undefined1 *)FUN_01689bc0(param_1 + 0x2f0,&local_24);
  *puVar4 = 1;
  param_1 = param_1 + (ulong)(uVar2 & 0xff) * 2;
  uVar1 = *(ushort *)(param_1 + 0x2e0);
  if (uVar1 < 100) {
    *(ushort *)(param_1 + 0x2e0) = uVar1 + 1;
  }
  return;
}


