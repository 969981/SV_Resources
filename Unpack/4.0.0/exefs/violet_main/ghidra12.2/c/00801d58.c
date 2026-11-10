/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00801d58; name: FUN_00801d58
 */


void FUN_00801d58(long *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  FUN_007ec2e0();
  puVar3 = PTR_DAT_047d1680;
  *(undefined1 *)((long)param_1 + 0x5a) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  FUN_0284e338(param_1 + 0xc);
  FUN_0284e338(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x14] = -1;
  param_1[0x16] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_0080467c(param_1 + 0x1c);
  uVar2 = *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) - 1;
  uVar6 = uVar2;
  if (0xe < uVar2) {
    uVar6 = 0xf;
  }
  uVar6 = uVar6 + uVar2;
  uVar4 = FUN_0078a12c();
  lVar5 = FUN_007bf9f0((ulong)uVar6 * 0x80,uVar4);
  if ((lVar5 != 0) && (uVar6 != 0)) {
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(lVar5 + lVar7);
      *(undefined4 *)(puVar1 + 4) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0xffffffffffffffff;
      puVar1[3] = 0;
      FUN_0284e338(puVar1 + 5);
      FUN_0284e338(puVar1 + 9);
      *(undefined2 *)(puVar1 + 0xd) = 0;
      *(undefined1 *)((long)puVar1 + 0x6a) = 0;
      *(undefined4 *)((long)puVar1 + 0x6c) = 0;
      FUN_00801cb8(puVar1);
      lVar7 = lVar7 + 0x80;
    } while ((ulong)uVar6 * 0x80 != lVar7);
  }
  param_1[0x17] = lVar5;
  *(uint *)(param_1 + 0x18) = uVar6;
  FUN_007c70a8(&DAT_047fb4a0);
  return;
}


