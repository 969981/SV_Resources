/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278de28; name: FUN_0278de28
 */


ulong FUN_0278de28(long *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  
  puVar3 = (ushort *)(**(code **)(*param_1 + 0x10))();
  if (puVar3 == (ushort *)0x0) {
    iVar2 = FUN_0278d694();
    uVar4 = (ulong)(uint)(iVar2 << 0x10);
  }
  else {
    uVar1 = *puVar3;
    iVar2 = FUN_0278d694(puVar3 + 1);
    uVar4 = (ulong)(uint)(iVar2 << 0x10) | (ulong)uVar1 | (ulong)((byte)puVar3[2] & 1) << 0x20;
  }
  return uVar4;
}


