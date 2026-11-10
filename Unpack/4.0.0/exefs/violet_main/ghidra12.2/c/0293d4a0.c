/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293d4a0; name: FUN_0293d4a0
 */


uint FUN_0293d4a0(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x1a) == '\x02') {
    uVar1 = FUN_010803c8(*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_014813ec(*(undefined8 *)(param_1 + 8));
    uVar2 = FUN_0154e790(uVar3,uVar1);
    if ((*(uint *)(param_1 + 0x20) != (uVar2 & 0xff)) && (*(ushort *)(param_1 + 0x1c) < 0x12)) {
      return 0x2000fU >> (ulong)(*(ushort *)(param_1 + 0x1c) & 0x1f) & 1;
    }
  }
  return 0;
}


