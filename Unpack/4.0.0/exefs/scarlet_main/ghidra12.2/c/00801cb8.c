/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00801cb8; name: FUN_00801cb8
 */


void FUN_00801cb8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  FUN_007935cc();
  FUN_007935cc(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_0078b184(param_1 + 0x28);
  FUN_0078b184(param_1 + 0x48);
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0;
  lVar3 = FUN_007fcb70();
  puVar1 = PTR_DAT_047d0dd8;
  if ((lVar3 == 0) || (iVar2 = *(int *)(lVar3 + 4), iVar2 < 1)) {
    fVar4 = (float)FUN_00807e20(*(undefined8 *)PTR_DAT_047d0dd8,4);
    PTR_DAT_047d0868[0x40f] = (char)(int)fVar4;
    iVar2 = FUN_00807e34(*(undefined8 *)puVar1,4);
  }
  *(float *)(param_1 + 0x70) = (float)iVar2;
  return;
}


