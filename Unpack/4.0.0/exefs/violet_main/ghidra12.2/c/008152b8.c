/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008152b8; name: FUN_008152b8
 */


void FUN_008152b8(long param_1,long param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  
  if ((param_2 != 0) && (1 < *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50))) {
    uVar1 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x860) + (ulong)uVar1 * 0xb0 + 8) == param_2) {
        if (*(ushort *)(param_1 + 0x60) == uVar1) {
          return;
        }
        puVar2 = (undefined1 *)(*(long *)(param_1 + 0x860) + (ulong)uVar1 * 0xb0);
        *puVar2 = 0;
        *(undefined8 *)(puVar2 + 8) = 0;
        *(undefined2 *)(puVar2 + 0x10) = 0;
        FUN_0078b160(puVar2 + 0x18);
        FUN_0078b160(puVar2 + 0x38);
        *(undefined4 *)(puVar2 + 0x58) = 0x50004000;
        FUN_00817eec(puVar2 + 0x60,&DAT_03c886bc);
        FUN_00817eec(puVar2 + 0x78,&DAT_03c886bc);
        *(undefined2 *)(puVar2 + 0x90) = 0;
        FUN_007935cc(puVar2 + 0x98);
        FUN_007935cc(puVar2 + 0xa0);
        *(undefined2 *)(puVar2 + 0xa8) = 2;
        return;
      }
      uVar1 = uVar1 + 1;
    } while ((int)(uint)uVar1 < (int)(*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) - 1));
  }
  return;
}


