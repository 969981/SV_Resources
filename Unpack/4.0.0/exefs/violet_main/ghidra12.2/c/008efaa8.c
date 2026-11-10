/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008efaa8; name: FUN_008efaa8
 */


void FUN_008efaa8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  bVar3 = *(byte *)(param_1 + 0x4d);
  if ((ulong)bVar3 != 0) {
    uVar5 = 0;
    param_4 = (ulong)*(uint *)(param_1 + 0x48) + param_4;
    do {
      *(ulong *)(*(long *)(param_1 + 0x28) + uVar5 * 8) = *(long *)(param_1 + 0x20) + uVar5 * 0x48;
      puVar1 = (uint *)(*(long *)(param_1 + 0x30) + uVar5 * 0x10);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar5 * 8);
      FUN_008f07f4(uVar4);
      puVar1[1] = 4;
      FUN_008f0810(uVar4,param_2,puVar1,param_3,param_4,*puVar1);
      FUN_008eff90(uVar4,"g3d_vertex");
      uVar5 = uVar5 + 1;
      uVar2 = 8;
      if (*(ushort *)(param_1 + 0x56) != 0) {
        uVar2 = (uint)*(ushort *)(param_1 + 0x56);
      }
      param_4 = (((ulong)*puVar1 + (ulong)uVar2) - 1 & -(ulong)uVar2) + param_4;
    } while (uVar5 != bVar3);
  }
  return;
}


